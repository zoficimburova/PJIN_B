#include "export_databaze.h"

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QVariant>
#include <QTextStream>

// toto budeme jeste upravovat (nyni pouze zkopirovano z q_proj)

export_databaze::export_databaze()
{
}


QStringList export_databaze::sqlList() const
{
    return list;
}


QString export_databaze::strn(QSqlQuery& query, int ord)
{
    QVariant var = query.value(ord);
    if (var.isNull()) return "NULL";

    QString  str = var.toString().simplified();
    if (str.isEmpty()) return "NULL";


    return "$SZZ$" + str + "$SZZ$";
}

bool export_databaze::exec()
{
    QSqlDatabase db = QSqlDatabase::database("sqlite_db");
    QSqlQuery    query(
                   "SELECT id_name, id_family, id_proj, id_year, "
                   "author, title_cz, title_en, "
                   "year, month, day, "
                   "department, comment, supervisor, "
                   "opponent, opponent2, opponent3, "
                   "key_words_cz, key_words_en, "
                   "annotation_cz, annotation_en "
                   "FROM   proj_info "
                   "ORDER  BY id_year  DESC, id_proj DESC, "
                   "          id_family ASC, id_name ASC "
                   , db);

    if (query.lastError().isValid())
    {
        QMessageBox::critical(0, "SQL Error", query.lastError().databaseText());
        return false;
    }

    QString insert =
        "INSERT INTO szz.proj_info (id_name, id_family, id_proj, id_year)\n"
        "    SELECT '%1', '%2', '%3', '%4'\n"
        "    WHERE  NOT EXISTS\n"
        "           (\n"
        "               SELECT NULL\n"
        "               FROM   szz.proj_info\n"
        "               WHERE  id_name='%1'\n"
        "               AND    id_family='%2'\n"
        "               AND    id_proj='%3'\n"
        "               AND    id_year='%4'\n"
        "           );\n\n";

    QString update =
        "UPDATE szz.proj_info ,\n"
        "author=coalesce(author,%4),\n"
        "title_cz=coalesce(title_cz,%5), "
        "title_en=coalesce(title_en,%6), "
        "year=coalesce(year,%7), "
        "month=coalesce(month, %8), "
        "day=coalesce(day,%9), "
        "department=coalesce(department,%10), "
        "comment=coalesce(comment,%11), "
        "supervisor=coalesce(supervisor,%12), "
        "opponent=coalesce(opponent,%13), "
        "opponent2=coalesce(opponent2,%14), "
        "opponent3=coalesce(opponent3,%15), "
        "key_words_cz=coalesce(key_words_cz,%16), "
        "key_words_en=coalesce(key_words_en,%17), "
        "annotation_cz=coalesce(annotation_cz,%18), "
        "annotation_en=coalesce(annotation_en,%19)\n"
        "WHERE  id_name='%0'\n"
        "AND    id_family='%1'\n"
        "AND    id_proj='%2'\n"
        "AND    id_year='%3'\n"
        "AND  ( (author        IS NULL  AND   %4 IS NOT NULL) OR "
        "       (title_cz      IS NULL  AND   %5 IS NOT NULL) OR "
        "       (title_en      IS NULL  AND   %6 IS NOT NULL) OR "
        "       (year          IS NULL  AND   %7 IS NOT NULL) OR "
        "       (month         IS NULL  AND   %8 IS NOT NULL) OR "
        "       (day           IS NULL  AND   %9 IS NOT NULL) OR "
        "       (department    IS NULL  AND  %10 IS NOT NULL) OR "
        "       (comment       IS NULL  AND  %11 IS NOT NULL) OR "
        "       (supervisor    IS NULL  AND  %12 IS NOT NULL) OR "
        "       (opponent      IS NULL  AND  %13 IS NOT NULL) OR "
        "       (opponent2     IS NULL  AND  %14 IS NOT NULL) OR "
        "       (opponent3     IS NULL  AND  %15 IS NOT NULL) OR "
        "       (key_words_cz  IS NULL  AND  %16 IS NOT NULL) OR "
        "       (key_words_en  IS NULL  AND  %17 IS NOT NULL) OR "
        "       (annotation_cz IS NULL  AND  %18 IS NOT NULL) OR "
        "       (annotation_en IS NULL  AND  %19 IS NOT NULL) );\n\n";

    while (query.next())
    {
        QVariant author = query.value(4);
        QVariant titlcz = query.value(5);
        if (author.isNull() || author.toString().simplified().isEmpty()) continue;
        if (titlcz.isNull() || titlcz.toString().simplified().isEmpty()) continue;

        // nejprve zajistim, ze v tabulce je ulozen primarni klic
        list << insert
                .arg(query.value(0).toString())   // id_name
                .arg(query.value(1).toString())   // id_family
                .arg(query.value(2).toString())   // id_proj
                .arg(query.value(3).toInt());     // id_year

        // aktualizuji vybrane atributy
        list << update
                .arg(query.value(0).toString())   // id_name
                .arg(query.value(1).toString())   // id_family
                .arg(query.value(2).toString())   // id_proj
                .arg(query.value(3).toInt())      // id_year
                .arg(strn(query,  4))  // author
                .arg(strn(query,  5))  // title_cz
                .arg(strn(query,  6))  // title_en
                .arg(strn(query,  7))  // year
                .arg(strn(query,  8))  // month
                .arg(strn(query,  9))  // day
                .arg(strn(query, 10))  // department
                .arg(strn(query, 11))  // comment
                .arg(strn(query, 12))  // supervisor
                .arg(strn(query, 13))  // opponent
                .arg(strn(query, 14))  // opponent2
                .arg(strn(query, 15))  // opponent3
                .arg(strn(query, 16))  // key_words_cz
                .arg(strn(query, 17))  // key_words_en
                .arg(strn(query, 18))  // annotation_cz
                .arg(strn(query, 19))  // annotation_en
                ;
    }

    return true;
}
