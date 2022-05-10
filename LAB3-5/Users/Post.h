#pragma once

/// <summary>
/// Post
/// </summary>
class Post
{
private:

	/// <summary>
	/// Title
	/// </summary>
	string _title;

	/// <summary>
	/// Text
	/// </summary>
	string _text;

public:

	/// <summary>
	/// Setter function for title
	/// </summary>
	/// <param name="title">Title</param>
	void SetTitle(string title);

	/// <summary>
	/// Setter function for text
	/// </summary>
	/// <param name="text">Text</param>
	void SetText(string text);

	/// <summary>
	/// Getter function for title
	/// </summary>
	/// <returns>Title</returns>
	string GetTitle();

	/// <summary>
	/// Getter function for text
	/// </summary>
	/// <returns>Text</returns>
	string GetText();

	/// <summary>
	/// Creates new post and fills fields
	/// </summary>
	/// <param name="title">Title</param>
	/// <param name="text">Text</param>
	Post(string title, 
		 string text);
};

