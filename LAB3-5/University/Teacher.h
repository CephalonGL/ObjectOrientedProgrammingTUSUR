#pragma once

/// <summary>
/// Teacher of university
/// </summary>
class Teacher :
    public Person
{
private:

    /// <summary>
    /// Position
    /// </summary>
    TeacherPosition _position;

public:

    /// <summary>
    /// Create new teacher and fills all fields
    /// </summary>
    /// <param name="name">Name</param>
    /// <param name="surname">Surname</param>
    /// <param name="patronymic">Patronymic</param>
    /// <param name="position">Position</param>
    Teacher(string name,
            string surname,
            string patronymic,
            TeacherPosition position);

    /// <summary>
    /// Getter function for position
    /// </summary>
    /// <returns>Position</returns>
    TeacherPosition GetPost();

    /// <summary>
    /// Setter function for position
    /// </summary>
    /// <param name="position">Position</param>
    void SetTeacherPost(TeacherPosition position);
};

