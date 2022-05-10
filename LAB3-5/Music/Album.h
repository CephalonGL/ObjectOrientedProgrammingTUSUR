#pragma once

/// <summary>
/// Album of songs
/// </summary>
class Album
{
private:

	/// <summary>
	/// Name
	/// </summary>
	string _name;

	/// <summary>
	/// Release year
	/// </summary>
	int _releaseYear;

	/// <summary>
	/// Songs in album
	/// </summary>
	vector<Song> _songs;

public:

	/// <summary>
	/// Creates empty album
	/// </summary>
	Album();

	// TODO: при передаче вектора по значению будет создаваться его локальная копия? +
	// Да, будет. 

	// Передачу string не везде могу заменить на ссылку, т.к.
	// иначе методы будут требовать левостороннее значение в качестве
	// аргумента(придётся объявлять переменную под входноый аргумент в
	// клиентском коде).

	/// <summary>
	/// Creates album with name, release year and songs
	/// </summary>
	/// <param name="name">Name</param>
	/// <param name="releaseYear">Release year</param>
	/// <param name="songs">Songs</param>
	Album(string name,
		  int releaseYear,
		  vector<Song>& songs);

	/// <summary>
	/// Getter function for name
	/// </summary>
	/// <returns>Name</returns>
	string GetName();

	/// <summary>
	/// Setter function for name
	/// </summary>
	/// <param name="name">Name</param>
	void SetName(string& name);

	/// <summary>
	/// Getter function for release year
	/// </summary>
	/// <returns>Relese year</returns>
	int GetReleaseYear();

	/// <summary>
	/// Setter function for release year
	/// </summary>
	/// <param name="releaseYear">Release year</param>
	void SetReleaseYear(int releaseYear);

	// TODO: по значению? +
	/// <summary>
	/// Getter function for songs
	/// </summary>
	/// <returns>Songs</returns>
	vector<Song>& GetSongs();

	// TODO: по значению? Как это отработает? - Создаст копию vector<Song>. +
	/// <summary>
	/// Setter function for songs
	/// </summary>
	/// <param name="songs">Songs</param>
	void SetSongs(vector<Song>& songs);

};

