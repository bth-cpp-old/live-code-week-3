#include "Zoo.hpp"

Zoo::Zoo(std::string p_owner) { owner = p_owner; }
std::string Zoo::print() const {
  std::string result = owner + "'s Zoo contains:\n";
  for (Cat animal : animals) {
    result += '\t' + animal.print() + '\n';
  }
  return result;
}
void Zoo::addAnimal(std::string name) { animals.push_back(Cat(name)); }