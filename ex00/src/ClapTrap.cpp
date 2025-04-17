#include "../include/ClapTrap.hpp"

// orthodox form
ClapTrap::ClapTrap() {
	std::cout << "ClapTrap default constructor" << std::endl;
	_name = "pizza";
	_hit_points = 10;
	_energy = 10;
	_attack_damage = 0;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap default destructor" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &trap) {
	std::cout << "ClapTrap copy constructor" << std::endl;
	_hit_points = trap._hit_points;
	_energy = trap._energy;
	_attack_damage = trap._attack_damage;
	_name = trap._name;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &trap) {
	std::cout << "ClapTrap copy assignment" << std::endl;
	if (this != &trap) {
		_hit_points = trap._hit_points;
		_energy = trap._energy;
		_attack_damage = trap._attack_damage;
		_name = trap._name;
	}
	return *this;
}

ClapTrap::ClapTrap(std::string const &name) {
	std::cout << "ClapTrap constructor with name" << std::endl;
	_name = name;
	_hit_points = 10;
	_energy = 10;
	_attack_damage = 0;
}


// functions
void ClapTrap::attack(const std::string& target) {
	if (_energy > 0) {
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
		_energy--;
	}
}
void ClapTrap::takeDamage(unsigned int amount) {
	_hit_points -= amount;
	std::cout << "ClapTrap " << _name << " takes " << amount << " damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_energy > 0) {
		_hit_points += amount;
		_energy--;
		std::cout << "ClapTrap " << _name << " restored " << amount << " hit points" << std::endl;
	}
}