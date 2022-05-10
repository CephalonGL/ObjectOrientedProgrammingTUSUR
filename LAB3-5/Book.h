#pragma once

/// <summary>
/// Stores info about book
/// </summary>
struct Book
{
	/// <summary>
	/// Name
	/// </summary>
	string Name;

	/// <summary>
	/// Release year
	/// </summary>
	int ReleaseYear;

	/// <summary>
	/// Page count
	/// </summary>
	int PageCount;

	/// <summary>
	/// Authors
	/// </summary>
	vector<string> Authors;

	/// <summary>
	/// Authors count
	/// </summary>
	int AuthorsCount;
};

/// <summary>
/// Demonstrates work of Book class
/// </summary>
void DemoBook();

/// <summary>
/// Fills fields of book from console
/// </summary>
/// <param name="book">Book to fill fields</param>
void ReadBookFromConsole(Book& book);

/// <summary>
/// Write book info to console
/// </summary>
/// <param name="book">Book to write</param>
void WriteBookToConsole(Book& book);

/// <summary>
/// Search for book by author
/// </summary>
/// <param name="books">Books</param>
/// <param name="booksCount">Books count</param>
/// <param name="author">Author</param>
/// <returns>Index of rearchable book</returns>
int FindBookByAuthor(vector<Book>& books,
					 int booksCount,
					 string& author);

/// <summary>
/// Read release year from console and check it
/// </summary>
/// <returns>Release year</returns>
int ReadReleaseYear();

/// <summary>
/// Read page count from console and check it
/// </summary>
/// <returns>Page count if correct, otherwise throw exception</returns>
int ReadPageCount();

/// <summary>
/// Read authors count from console and check it
/// </summary>
/// <returns>Authors count, otherwise throw exception</returns>
int ReadAuthorsCount();

/// <summary>
/// Read books count from console and check it
/// </summary>
/// <returns>Books count, otherwise throw exception</returns>
int ReadBooksCount();