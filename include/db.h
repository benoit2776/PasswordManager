#include "sqlite/sqlite3.h"

int main()
{
	sqlite3* db;
	sqlite3_stmt* stmt;
	sqlite3_open("My_db.db", &db);

}