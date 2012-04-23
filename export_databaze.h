#ifndef EXPORT_DATABAZE_H
#define EXPORT_DATABAZE_H

#include <QStringList>
#include <QSqlQuery>


class export_databaze
{

public:
    export_databaze();
    QString exec();

private:
    QString generate_insert(QString table_name,QSqlDatabase db);


};

#endif // EXPORT_DATABAZE_H
