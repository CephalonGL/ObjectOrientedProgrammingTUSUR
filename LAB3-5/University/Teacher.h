#pragma once

class Teacher :
    public Person
{
private:
    TeacherPosition _post;

public:
    Teacher(string name,
            string surname,
            string patronymic,
            TeacherPosition post);

    TeacherPosition GetPost();
    void SetTeacherPost(TeacherPosition post);
};

