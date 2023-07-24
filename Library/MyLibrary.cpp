#include "MyLibrary.h"
#include <iostream>

void MyLibrary::Entity::PrintName() {
    std::cout << "My Name is: " << this->Name << std::endl;
}