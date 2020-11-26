#pragma once
#include <string>
using namespace std;

public class Printing
{
public:
	string Name;
	int Colstr;

	Printing() {
		Name = "";
		Colstr = 0;
	}

	Printing(string name, int colstr) {
		Name = name;
		Colstr = colstr;
	}
};

public class Journal : public Printing
{
public:
	int Year;

	Journal() {
		Year = 0;
	}

	Journal(int year, string name, int colstr) : Printing(name, colstr) {
		Year = year;
	}	
};

public class Book : public Printing
{
public:
	string Author;

	Book() {
		Author = "";
	}

	Book(string author, string name, int colstr) : Printing(name, colstr) {
		Author = author;
	}
};

public class Textbook : public Book
{
	string Subject;
	
	Textbook() {
		Subject = "";
	}

	Textbook(string subject, string author, string name, int colstr) : Book(author, name, colstr) {
		Subject = subject;
	}
};