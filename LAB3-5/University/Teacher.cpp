#include "../stdafx.h"

Teacher::Teacher(string name,
				 string surname,
				 string patronymic,
				 TeacherPosition post)
	: Person(name, surname, patronymic)
{
	SetTeacherPost(post);
}

TeacherPosition Teacher::GetPost()
{
	return _position;
}

void Teacher::SetTeacherPost(TeacherPosition post)
{
	_position = post;
}
