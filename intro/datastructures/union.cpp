#include <iostream>
#include <fstream>
#include <string>

union Message{
    // Text messages are stored as a string
    std::string* text;
    // Multimedia messages are stored as a file path
    std::string* filename;
};

int main() {
    // text is the current attribute
    Message m1;
    m1.text = new std::string("Hey, good morning John. I sent you an email regarding our last meeting three hours ago. Please respond when you get the time, thank you.\n");
    std::cout << *m1.text;
    m1.filename = new std::string("C:/Users/admin/Downloads/img.png");
    std::cout << *m1.filename;
    
    // Deallocating memory
    delete [] m1.text;
    delete [] m1.filename;
    
    return 0;
}
