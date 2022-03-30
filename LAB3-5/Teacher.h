#pragma once

class Teacher :
    public Person
{
private:
    TeacherPost _post;

public:
    Teacher(string name,
            string surname,
            string patronymic,
            TeacherPost post);

    TeacherPost GetPost();
    void SetTeacherPost(TeacherPost post);
};

