//
// Created by xxvms on 05/08/17.
//

#include "Person.h"
Person::Person(): age(0), phone_number(0), first_name(" "), last_name(" ")
        {}

void Person::add(int age_, int phone_number_, std::string first_name_, std::string last_name_)
{
    age = age_;
    phone_number = phone_number_;
    first_name = first_name_;
    last_name = last_name_;
}

int Person::return_age()
{
    return age;
}
void Person::OutputIdentity()
{

}

void Person::OutputAge()
{
    std::cout << "I am " << age << " years old\n";
}
