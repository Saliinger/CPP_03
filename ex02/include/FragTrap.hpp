#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
  public:
    // orthodox cannocal form
    FragTrap();
    FragTrap(const FragTrap &trap);
    FragTrap &operator=(const FragTrap &trap);
    ~FragTrap();

    // other constructor
    FragTrap(std::string const &name);

    // functions
    void highFivesGuys();

    // debug
    void show();
};

#endif