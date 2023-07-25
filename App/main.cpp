#include "MyLibrary.h"
#include <iostream>


int main() {
  std::cout << "Creating New entity" << std::endl;

  MyLibrary::Entity *myEntity = new MyLibrary::Entity();

  myEntity->Name = "My Name";

  myEntity->PrintName();
  return 0;
}