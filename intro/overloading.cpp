#include <iostream>

// Different function overloading implementations for add

int add (int x, int y);
double add (double x, double y);
double add (int x, double y);
double add (double x, int y);

int main(){
  std::cout << add(1, 1) << "\n";
  std::cout << add (2.2, 2.4) << "\n";
  std::cout << add(158, 29.50) << "\n";
  std::cout << add(1892.3, 5) << "\n";
  return 0;
}

int add (int x, int y){
  return x + y;
}

double add (double x, double y){
  return x + y;
}

double add (int x, double y){
  return x + y;
}

double add (double x, int y){
  return x + y;
}
