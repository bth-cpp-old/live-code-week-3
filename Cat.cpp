#include "Cat.hpp"

Cat::Cat(std::string p_name) : name(p_name) {}
std::string Cat::print() { return HELLO + name; }

const std::string Cat::HELLO = "Mjau, my name is: ";