#include "stdafx.h"

void DemoBook()
{
	int booksCount = ReadBooksCount();
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
	book.AuthorsCount = ReadAuthorsCount();
	for (int i = 0; i < book.AuthorsCount; i++)
	{
		book.Authors[0] = Console::ReadString("Enter author: ");
	}
}

void WriteBookToConsole(Book& book)
{
	for (int i = 0; i < book.AuthorsCount; i++)
	{
		cout << book.Authors[i];
		if (i == book.AuthorsCount - 1)
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
		for (int j = 0; j < books[i].AuthorsCount; j++)
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
			Console::WriteLine("Error: release year must be more than 0,"
							   " and less than " + CURRENT_YEAR);
			Console::WriteLine(" Repeat, please.\n");
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
			Console::WriteLine("Error: page count must be more or equal to"
							   " 0, but it is less than 0. Repeat, please.\n");
		}
	}
}

int ReadAuthorsCount()
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
			Console::WriteLine("Error: authors count bust be in range of"
							   " 1 to 10. Repeat, please.\n");
		}
	}
}

int ReadBooksCount()
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
			Console::WriteLine("Error: count of books must be in range of "
							   "1 to 6. Repeat, please.\n");
		}
	}
}
