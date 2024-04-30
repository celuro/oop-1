//Person.h
#ifndef PERSON_H
#define PERSON_H

#include <cstring>

class Person{
private:
const char* name;
int age;
public:
Person();
// Managing resources
Person(const Person& other);
Person& operator=(const Person& other);
~Person();
//Pre-fix on age
Person& operator++();
//Post-fix on age
Person& operator++(int);
operator int() const;
operator bool() const;
const char* getName();
int getAge();
}

std::ostream& display(std::ostream& os, const Person& p);

#endif

//Person.cpp
Person::Person(){
name = nullptr;
age = 0;
}

Person::Person(const Person& other){
age = other.age;

if(other.name != nullptr){
name = new char[std::strlen(other.name) + 1];
  
if(name != nullptr){
  std::strcpy(name, other.name);
}
else{
  name = nullptr;
}
}
else{
  name = nullptr;
}
}

Person::Person& operator=(const Person& other){
if(this != &other){
//Deallocate memory
  delete [] name;
  name = nullptr;
//Copy 
  name = new char[std::strlen(other.name) + 1];
  if(name != nullptr){
  std::strcpy(name, other.name);
  }
  else{
    name = nullptr;
  }
  return *this;
}
  else{
return *this;
}
}

Person::~Person(){
  if(name != nullptr){
  delete [] name;
  }

//Pre-fix
Person::operator++(){
  age++;
  return *this;
}

//Post-fix
Person::operator++(int){
Person temp(*this);
age ++;
return temp;
}

//Casting
Person::operator double(){
return age;
}

Person::operator bool(){
return age > 18;
}

Person::getAge(){
return age;
}

Person::getName(){
return name;
}

std::ostream& display(std::ostream& os, const Person& p){
os << "Name: " << p.getName() << "\n";
os << "Age: " << p.getAge() << std::endl;
}
