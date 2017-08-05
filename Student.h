//
// Created by xxvms on 05/08/17.
//

#ifndef LAB3_STUDENT_H
#define LAB3_STUDENT_H


#include "Person.h"
#include <string>

// 6. Create a Student and a Teacher class that each inherit from the Person base class using public inheritance

// 8. Override the Student's OutputIdentity() pure virtual method to display the text "I am a student" to the console

class Student : public Person{

    Student();
    //virtual void add(int phone_number_, std::string first_name_, std::string last_name_);
    virtual void OutputIdentity();

};


#endif //LAB3_STUDENT_H
