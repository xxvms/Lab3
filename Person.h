//
// Created by xxvms on 05/08/17.
//

#ifndef LAB3_PERSON_H
#define LAB3_PERSON_H

#include <string>
#include <iostream>


// 1. Create a Person base class with common attributes for a person (first_name, last_name, age, race, phone, as examples)
// 2. Make the age variable private
// 3. Make the phone variable protected
class Person {
private:
    int age;
protected:
    int phone_number;

    std::string first_name;
    std::string last_name;
public:
    Person();
    ~Person();
    int return_age();
    virtual void add(int age_, int phone_number_, std::string first_name_, std::string last_name_);
//4. In the Person class, create a pure virtual function called OutputIdentity() that accepts no parameters and returns void
    virtual void OutputIdentity() = 0; //this is  pure virtual method

// 5. Also in the Person class, implement a virtual function called OutputAge() that displays "I am X years old", where X is the value of the Person's age attribute
    virtual void OutputAge();

    // getters


};


#endif //LAB3_PERSON_H
