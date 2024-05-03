#include <iostream>

enum Genres{fiction, nonFiction, mystery, scienceFiction};

void display(){
    enum Genres genre = mystery;
    std::cout << "Genre: ";
    switch(genre){
        case 0: 
        std::cout << "Fiction";
        break;
        case 1: 
        std::cout << "Non-Fiction";
        break;
        case 2:
        std::cout << "Mystery";
        break;
        case 3:
        std::cout << "Science-Fiction";
        break;
        default:
        std::cout << "NULL";
    }
}

int main() {
    display();
    return 0;
}
