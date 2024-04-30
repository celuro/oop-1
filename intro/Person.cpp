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
}

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
}
