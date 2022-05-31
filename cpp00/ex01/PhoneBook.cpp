#include "PhoneBook.hpp"

void PhoneBook::add(Contact contact) {
    if (this -> contactCount == 8) {
        this -> contactCount = 0;
        this -> isFull = true;
    }
    this -> contacts[contactCount] = contact;
    this -> contactCount++;
}

void PhoneBook::search() {
    int limit = (this -> isFull) ? 8 : this -> contactCount;
    int index = 0;
    std::cout << "INDEX" << std::setw(10);
    std::cout << " | ";
    std::cout << "FIRST NAME" << std::setw(10);
    std::cout << " | ";
    std::cout << "LAST NAME" << std::setw(10);
    std::cout << " | ";
    std::cout << "NICKNAME" << std::endl;
    for (int i = 0; i < limit; i++){
        std::cout << i << std::setw(10);
        std::cout << " | " << std::setw(10);
        std::cout << this -> contacts[i].getFirstName() << std::setw(10);
        std::cout << " | " << std::setw(10);
        std::cout << this -> contacts[i].getLastName() << std::setw(10);
        std::cout << " | " << std::setw(10);
        std::cout << this -> contacts[i].getNickName() << std::endl;
    }
    if (this -> contactCount == 0) {
        std::cout << "No such contact" << std::endl;
        return;
    }
    std::cout << "INDEX : ";
    std::cin >> index;
    if (index <= this -> contactCount - 1) {
        std::cout << std::setw(10) << index;
        std::cout << std::setw(10) << "|";
        std::cout << std::setw(10) << this -> contacts[index].getFirstName();
        std::cout << std::setw(10) << "|";
        std::cout << std::setw(10) << this -> contacts[index].getLastName();
        std::cout << std::setw(10) << "|";
        std::cout << std::setw(10) << this -> contacts[index].getNickName() << std::endl;
    }
    else std::cout << "No such contact" << std::endl;
}
void PhoneBook::exit() {
    std::exit(0);
}
PhoneBook::PhoneBook() {
    this -> contactCount = 0;
    this -> isFull = false;
    for (int i = 0; i < 8; i++) {
        this -> contacts[i] = Contact();
    }
}
