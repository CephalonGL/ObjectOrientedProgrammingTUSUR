#pragma once
#include "Includes.h"
//BUG: ����������� ������� �������� ������� �� Includes.h,
//������ ��� ����� ���������� �� �� �����. 
#include "..\Console\Console.h"
#include "..\Console\Console.cpp"

using namespace Console;

struct Book
{
	string Name;
	int ReleaseYear;
	int PageCount;
	vector<string> Authors;
	int AuthorCount;
};

void DemoBook();

void ReadBookFromConsole(Book& book);

void WriteBookToConsole(Book& book);

int FindBookByAuthor(vector<Book>& books,
					 int booksCount,
					 string author);



int ReadReleaseYear();

int ReadPageCount();

int ReadAuthorCount();

int ReadBookCount();