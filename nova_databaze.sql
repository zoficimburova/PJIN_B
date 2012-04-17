START TRANSACTION;

CREATE TABLE categories (
    "id" INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,
    "name" TEXT NOT NULL
);

CREATE TABLE conditions (
    "id" INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,
    "name" TEXT NOT NULL
);

CREATE TABLE images (
    "id" INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,
    "object_id" INTEGER NOT NULL,
    "text" TEXT
);

CREATE TABLE objects (
    "id" INTEGER NOT NULL,
    "category_id" INTEGER NOT NULL,
    "condition_id" INTEGER NOT NULL,
    "region_id" INTEGER NOT NULL,
    "name" TEXT NOT NULL,
    "reason" TEXT,
    "gpslon" REAL,
    "gpslat" REAL,
    "time_id" INTEGER
);

CREATE TABLE regions (
    "id" INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,
    "name" TEXT NOT NULL
);

CREATE TABLE stories (
    "id" INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,
    "object_id" INTEGER NOT NULL,
    "text" TEXT
);

CREATE TABLE times (
    "id" INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,
    "name" TEXT
);

COMMIT;
