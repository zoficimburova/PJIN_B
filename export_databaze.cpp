#include "export_databaze.h"

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QVariant>
#include <QTextStream>
#include <iostream>
#include <QDebug>

using namespace std;

export_databaze::export_databaze(){
}

QString export_databaze::generate_insert(QString table_name,QSqlDatabase db){
    QString output = "";
    QSqlQuery objects("Select * from "+table_name,db);
    while(objects.next()){
        QString insert_row = QString("INSERT INTO %1 VALUES(").arg(table_name);
        for (int i=0;objects.value(i).isValid();i++)
            insert_row += (i==0?"":", ")+QString("'%1'").arg(objects.value(i).toString());
        output+=insert_row+");\n";
    }
    return output;
}

QString export_databaze::exec(){
    QSqlDatabase db = QSqlDatabase::database("sqlite_db");
    QString output = "";

    output += "CREATE TABLE categories ("
                        "id INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,"
                        "name TEXT NOT NULL);\n"
                     "CREATE TABLE conditions ("
                        "id INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,"
                        "name TEXT NOT NULL);\n"
                     "CREATE TABLE images ("
                        "id INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,"
                        "object_id INTEGER NOT NULL,"
                        "text TEXT);\n"
                     "CREATE TABLE objects ("
                        "id INTEGER NOT NULL,"
                        "category_id INTEGER NOT NULL,"
                        "condition_id INTEGER NOT NULL,"
                        "region_id INTEGER NOT NULL,"
                        "name TEXT NOT NULL,"
                        "reason TEXT,"
                        "gpslon REAL,"
                        "gpslat REAL,"
                        "time_id INTEGER);\n"
                     "CREATE TABLE regions ("
                        "id INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,"
                        "name TEXT NOT NULL);\n"
                     "CREATE TABLE stories ("
                        "id INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,"
                        "object_id INTEGER NOT NULL,"
                        "text TEXT);\n"
                     "CREATE TABLE times ("
                        "id INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,"
                        "name TEXT);\n";

    output+= generate_insert("objects",db);
    output+= generate_insert("categories",db);
    output+= generate_insert("conditions",db);
    output+= generate_insert("images",db);
    output+= generate_insert("regions",db);
    output+= generate_insert("stories",db);
    output+= generate_insert("times",db);

    return output;
}
