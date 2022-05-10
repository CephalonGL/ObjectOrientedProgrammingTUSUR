#pragma once

/// <summary>
/// Song
/// </summary>
class Song
{
private:

	/// <summary>
	/// 
	/// </summary>
	string _name;

	/// <summary>
	/// 
	/// </summary>
	int _durationSeconds;

	/// <summary>
	/// 
	/// </summary>
	Genre _genre;

public:

	/// <summary>
	/// 
	/// </summary>
	Song();

	/// <summary>
	/// 
	/// </summary>
	/// <param name="name"></param>
	/// <param name="durationSeconds"></param>
	/// <param name="genre"></param>
	Song(string name,
		 int durationSeconds,
		 Genre genre);

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	string GetName();

	/// <summary>
	/// 
	/// </summary>
	/// <param name="name"></param>
	void SetName(string name);

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	int GetDurationSeconds();

	/// <summary>
	/// 
	/// </summary>
	/// <param name="durationSeconds"></param>
	void SetDurationSeconds(int durationSeconds);

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	Genre GetGenre();

	/// <summary>
	/// 
	/// </summary>
	/// <param name="genre"></param>
	void SetGenre(Genre genre);
};

