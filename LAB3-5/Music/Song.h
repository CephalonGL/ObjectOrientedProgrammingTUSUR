#pragma once
#include "../Music/Genre.h"

/// <summary>
/// Musical composition
/// </summary>
class Song
{
private:

	/// <summary>
	/// Name
	/// </summary>
	string _name;

	/// <summary>
	/// Duration in second
	/// </summary>
	int _durationSeconds;

	/// <summary>
	/// Genre
	/// </summary>
	Genre _genre;

public:

	/// <summary>
	/// Creates empty song
	/// </summary>
	Song();

	/// <summary>
	/// Creates song with name, duration in second and genre
	/// </summary>
	/// <param name="name">Name</param>
	/// <param name="durationSeconds">Dureation in seconds</param>
	/// <param name="genre">Genre</param>
	Song(string name,
		 int durationSeconds,
		 Genre genre);

	/// <summary>
	/// Getter function for name
	/// </summary>
	/// <returns>Name</returns>
	string GetName();

	/// <summary>
	/// Setter function for name
	/// </summary>
	/// <param name="name">Name</param>
	void SetName(string name);

	/// <summary>
	/// Getter function for duration in seconds
	/// </summary>
	/// <returns>Duration in seconds</returns>
	int GetDurationSeconds();

	/// <summary>
	/// Setter function for duration in seconds
	/// </summary>
	/// <param name="durationSeconds">Duration in seconds</param>
	void SetDurationSeconds(int durationSeconds);

	/// <summary>
	/// Getter function for genre
	/// </summary>
	/// <returns>Genre</returns>
	Genre GetGenre();

	/// <summary>
	/// Setter function for genre
	/// </summary>
	/// <param name="genre">Genre</param>
	void SetGenre(Genre genre);
};

