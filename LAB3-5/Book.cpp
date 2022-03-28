#include "stdafx.h"

void DemoBook()
{
	int booksCount = ReadBookCount();
	vector<Book> books;
	for (int i = 0; i < booksCount; i++)
	{
		ReadBookFromConsole(books[i]);
	}
	for (int i = 0; i < booksCount; i++)
	{
		WriteBookToConsole(books[i]);
	}
	FindBookByAuthor(books, booksCount,
					 Console::ReadString("Enter author to find: "));       
}

void ReadBookFromConsole(Book& book)
{
	Console::WriteLine("Enter book info:\n");
	book.Name = Console::ReadString("Enter name: ");
	book.ReleaseYear = ReadReleaseYear();
	book.PageCount = ReadPageCount();
	book.AuthorCount = ReadAuthorCount();
	for (int i = 0; i < book.AuthorCount; i++)
	{
		book.Authors[0] = Console::ReadString("Enter author: ");
	}
}

void WriteBookToConsole(Book& book)
{
	for (int i = 0; i < book.AuthorCount; i++)
	{
		cout << book.Authors[i];
		if (i == book.AuthorCount - 1)
		{
			cout << ". ";
		}
		else
		{
			cout << ", ";
		}
		if (i == 5)
		{
			cout << endl;
		}
	}
	cout << book.Name << ". ";
	cout << book.ReleaseYear << ". ";
	cout << "- " << book.PageCount << "c.";
	cout << endl;
}

int FindBookByAuthor(vector<Book>& books, int booksCount, string author)
{
	for (int i = 0; i < booksCount; i++)
	{
		for (int j = 0; j < books[i].AuthorCount; j++)
		{
			if (author == books[i].Authors[j])
			{
				return i;
			}
		}
	}
	return -1;
}

int ReadReleaseYear()
{
	while (true)
	{
		const int CURRENT_YEAR = 2022;
		int releaseYear = Console::ReadInt("Enter release year: ");
		if (releaseYear > 0
			&& releaseYear < CURRENT_YEAR)
		{
			return releaseYear;
		}
		else
		{
			Console::WriteLine("Incorrect release year."
							   " Repeat, please.\n");
		}
	}
}

int ReadPageCount()
{
	while (true)
	{
		int pageCount = Console::ReadInt("Enter page count: ");
		if (pageCount > 0)
		{
			return pageCount;
		}
		else
		{
			Console::WriteLine("Incorrect page count. Repeat, please.\n");
		}
	}
}

int ReadAuthorCount()
{
	while (true)
	{
		int authorCount = Console::ReadInt("Enter authors count: ");
		if (authorCount <= 10
			&& authorCount >= 1)
		{
			return authorCount;
		}
		else
		{
			Console::WriteLine("Incorrect authors count."
							   " Repeat, please.\n");
		}
	}
}

int ReadBookCount()
{
	while (true)
	{
		int bookCount = Console::ReadInt("Enter count of books: ");
		if (bookCount >= 1
			&& bookCount <= 6)
		{
			return bookCount;
		}
		else
		{
			Console::WriteLine("Incorrect count of books."
							   " Repeat, please.\n");
		}
	}
}
