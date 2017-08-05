#include <iostream>
/*
 *
1. Create a Person base class with common attributes for a person (first_name, last_name, age, race, phone, as examples)
2. Make the age variable private
3. Make the phone variable protected
4. In the Person class, create a pure virtual function called OutputIdentity() that accepts no parameters and returns void
5. Also in the Person class, implement a virtual function called OutputAge() that displays "I am X years old", where X is the value of the Person's age attribute
6. Create a Student and a Teacher class that each inherit from the Person base class using public inheritance
7. In your main.cpp file, instantiate an Student object and initialize the member variables with valid data
8. Override the Student's OutputIdentity() pure virtual method to display the text "I am a student" to the console
9. Override the Student's OutputAge() virtual method to display the text "I am a student and" then calls the Person class's OutputAge() method
10. Instantiate a Teacher object in main.cpp and assign valid data to the member variables
11. Override the Teacher's OutputIdentity pure virtual method to display the text "I am a teacher" to the console
12. Override the Teacher's OutputAge() virtual method to display the text "I am a teacher and" then calls the Person class's OutputAge() method
*/
#include "Student.h"
#include "Teacher.h"


int main() {
    Student student1();
    Person person()

    return 0;
}