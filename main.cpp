#include <iostream>

#include "Zoo.hpp"

std::ostream& operator<<(std::ostream& os, const Zoo& zoo) {
  os << zoo.owner + "'s Zoo contains:\n";
  for (Cat animal : zoo.animals) {
    os << '\t' + animal.print() + '\n';
  }
  return os;
}

int main() {
  Zoo myZoo("Mattias");
  myZoo.addAnimal("Trisse");
  myZoo.addAnimal("Nisse");

  Zoo otherZoo("Berit");
  otherZoo.addAnimal("Joel");

  std::cout << "Mitt zoo: " << myZoo << std::endl;
  std::cout << "Berits zoo: " << otherZoo << std::endl;

  Zoo* foo = new Zoo("Göran");
  (*foo).addAnimal("Lisbeth");
  foo->addAnimal("Klas-Anna");
  std::cout << "Mitt zoo: " << *foo << std::endl;
  //delete foo;

  int bar = 3;
  int* baz = &bar;
  int qwe = *baz;
  int& asd = bar;

  std::cout << "bar: " << bar << '\t' << &bar << std::endl;
  std::cout << "baz: " << *baz << '\t' << baz << std::endl;
  std::cout << "qwe: " << qwe << '\t' << &qwe << std::endl;
  std::cout << "asd: " << asd << '\t' << &asd << std::endl;

  bar = 5;

  std::cout << "bar: " << bar << '\t' << &bar << std::endl;
  std::cout << "baz: " << *baz << '\t' << baz << std::endl;
  std::cout << "qwe: " << qwe << '\t' << &qwe << std::endl;
  std::cout << "asd: " << asd << '\t' << &asd << std::endl;
}