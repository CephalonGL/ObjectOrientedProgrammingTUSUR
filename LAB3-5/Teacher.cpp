#include "stdafx.h"

Teacher::Teacher(string name,
				 string surname,
				 string patronymic,
				 TeacherPost post)
	: Person(name, surname, patronymic)
{
	SetTeacherPost(post);
}

TeacherPost Teacher::GetPost()
{
	return _post;
}

void Teacher::SetTeacherPost(TeacherPost post)
{
	_post = post;
}
