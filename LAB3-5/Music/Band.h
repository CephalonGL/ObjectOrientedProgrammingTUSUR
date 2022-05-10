#pragma once

// TODO: вектор хранение и передача по значению или по ссылке? Или по указателю? Во всех методах <???>
// 
// Нужно максимально соблюсти единообразие или допускается использование ссылок и указателей одновременно?

/// <summary>
/// Music band
/// </summary>
class Band
{
private:

	/// <summary>
	/// Name
	/// </summary>
	string _name;

	/// <summary>
	/// Description
	/// </summary>
	string _description;

	/// <summary>
	/// Albums
	/// </summary>
	vector<Album> _albums;

public:

	/// <summary>
	/// Create empty band
	/// </summary>
	Band();

	/// <summary>
	/// Create band with name, description and albums
	/// </summary>
	/// <param name="name">Name</param>
	/// <param name="description">Description</param>
	/// <param name="albums">Albums</param>
	Band(string& name, 
		 string& description,
		 vector<Album>& albums);

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
	/// Getter function for description
	/// </summary>
	/// <returns>Description</returns>
	string GetDescription();

	/// <summary>
	/// Setter function for description
	/// </summary>
	/// <param name="description">Description</param>
	void SetDescription(string& description);

	/// <summary>
	/// Getter function for albums
	/// </summary>
	/// <returns>Albums</returns>
	vector<Album> GetAlbums();

	/// <summary>
	/// Setter function for albums
	/// </summary>
	/// <param name="albums">Albums</param>
	void SetAlbums(vector<Album>& albums);

	/// <summary>
	/// Search for song by name
	/// </summary>
	/// <param name="name">Name to search by</param>
	/// <returns>Founded song</returns>
	Song* FindSong(string& name);

	/// <summary>
	/// Search for album by song
	/// </summary>
	/// <param name="song">Song to search by</param>
	/// <returns>Album</returns>
	Album* FindAlbum(Song* song);

	/// <summary>
	/// Creates array of all songs of band
	/// </summary>
	/// <returns>All songs</returns>
	vector<Song>* GetAllSongs();

	/// <summary>
	/// Search for songs of this group with selected genre
	/// </summary>
	/// <param name="findingGenre">Genre to search by</param>
	/// <returns>Songs with genre</returns>
	vector<Song>* GetAllGenreSongs(Genre findingGenre);
};

