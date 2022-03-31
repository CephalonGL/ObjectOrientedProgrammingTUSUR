#pragma once

class Post
{
private:
	string _title;

	string _text;

public:
	void SetTitle(string title);

	void SetText(string text);

	string GetTitle();

	string GetText();

	Post(string title, 
		 string text);
};

