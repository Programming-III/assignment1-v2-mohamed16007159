#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;


class Course {
private:
    string courseCode;
    string courseName;
    int maxStudents;
    Student* students;
    int currentStudents;
    Instructor instructor;

public:
    Course();
     class course (string courseCode , string courseName , int maxStudents, Student* students, int currentStudents )
       string courseCode = courseCode; 
       string courseName = courseName; 
       int maxStudents = maxStudents; 
       student*students = students; 
       int currentstudents = currentStudents;
    ~Course();

    void addStudent(const Student& s);
    void displayCourseInfo() const;
};

#endif















#endif
