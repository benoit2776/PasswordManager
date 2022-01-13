#include <iostream>
#include "sqlite/sqlite3.h"
#include "db.h"

int dbConnect()
{
    sqlite3* db;
    int exit = 0;
    exit = sqlite3_open("users.db", &db);

    if (exit) {
        std::cerr << "Error open DB " << sqlite3_errmsg(db) << std::endl;
        return (-1);
    }
    else
        std::cout << "Opened Database Successfully!" << std::endl;
    sqlite3_close(db);
    return (0);
	
	
	
	//sqlite3* db;
	//sqlite3_stmt* stmt;
	//sqlite3_open("users.db", &db);


}