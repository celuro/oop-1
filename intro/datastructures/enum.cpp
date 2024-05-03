#include <iostream>

enum Genres{Fiction, NonFiction, Mystery, ScienceFiction};

void display(){
    enum Genres genre = Mystery;
    std::cout << "Genre: ";
    switch(genre){
        case Fiction: 
        std::cout << "Fiction";
        break;
        case NonFiction: 
        std::cout << "Non-Fiction";
        break;
        case Mystery:
        std::cout << "Mystery";
        break;
        case ScienceFiction:
        std::cout << "Science-Fiction";
        break;
        default:
        std::cout << "NULL";
        break;
    }
}

int main() {
    display();
    return 0;
}
