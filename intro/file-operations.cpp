#ifndef FILE_H
#define FILE_H
#include <fstream>

class File{
int data;
public:
std::ofstream& write (std::ofstream& ofs, const File& f){
ofs << f.data;
return ofs;
}

std::ifstream& read (std::ifstream& ifs, const File& f){
  ifs >> f.data;
  return ifs;
}
};

#endif

int main(){

File f1;
  
std::ofstream outputFile("text.txt");

//write to file
outputFile << f1;
//read file
outputFile >> f1;
f1.close();
}
