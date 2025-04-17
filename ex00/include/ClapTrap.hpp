#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	private:
		std::string _name;
		int _hit_points;
		int _energy;
		int _attack_damage;
	public:
		// orthodox cannocal form
		ClapTrap();
		ClapTrap(ClapTrap const &trap);
		~ClapTrap();
		ClapTrap &operator=(ClapTrap const &trap);

        // constructor if name
        ClapTrap(std::string const &name);

    	// functions
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif