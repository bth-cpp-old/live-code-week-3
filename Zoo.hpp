#ifndef ZOO_HPP
#define ZOO_HPP

#include <string>
#include <vector>

#include "Cat.hpp"

class Zoo {
 public:
  Zoo(std::string p_owner);
  void addAnimal(std::string name);

  friend  std::ostream& operator<<(std::ostream& os, const Zoo& zoo);

 private:
  std::string print() const;
  std::string owner;
  std::vector<Cat> animals;
};

#endif  // ZOO_HPP