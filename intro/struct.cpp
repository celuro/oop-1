struct Person{
  const char* name;
  int age;
};

#include <iostream>

int main(){

  Person* p = new Person();
  p->name = "John";
  p->age = 45;

  delete p;
  p = nullptr;

  p = new Person[2];
  for(int i = 0; i < 2; i++){
    std::cout << "Enter name: ";
    std::cin >> p[i].name;
    std::cout << "Enter age: ";
    std::cin >> p[i].age;

    std::cout << "Here is friend #" << i << ".\n";
    std::cout << "Their name is" << p[i].name << ' ';
    std::cout << p[i].name << "is " << p[i].age << " years old.\n";
  }
  
  delete p;
  return 0;
}
