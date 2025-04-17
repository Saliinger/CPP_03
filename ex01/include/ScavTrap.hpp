#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
  public:
	// orthodox cannocal form
    ScavTrap();
    ScavTrap(const ScavTrap &trap);
    ClapTrap &operator=(const ScavTrap &trap);
    ~ScavTrap();

    // other constructor
	ScavTrap(std::string const &name);

    // functions
    void guardGate();
};

#endif
