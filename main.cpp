#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;


int main() {
    
    Instructor instructor("Dr. Lina Khaled", 1001, "Computer Science", 5);

   
    Course course("CS101", "Introduction to Programming", 3, instructor);

    Student student("Omar Nabil", 2202, 2, "Informatics");
    course.addStudent(student);
   
    course.displayCourseInfo();

    return 0;
}

   
    
 
