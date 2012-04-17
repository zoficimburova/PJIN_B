#ifndef EXPORT_DATABAZE_H
#define EXPORT_DATABAZE_H

#include <QStringList>
#include <QSqlQuery>


class export_databaze
{

public:
    export_databaze();
    bool exec();
    QStringList sqlList() const;

private:
    QStringList list;
    static QString strn(QSqlQuery& query, int ord);


};

#endif // EXPORT_DATABAZE_H
