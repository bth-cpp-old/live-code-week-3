#ifndef CAT_HPP
#define CAT_HPP
#endif  // CAT_HPP

#include <string>

class Cat {
 public:
  Cat(std::string p_name);
  std::string print();

 private:
  std::string name;
  static const std::string HELLO;
};