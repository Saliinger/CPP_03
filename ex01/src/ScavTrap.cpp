#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap default constructor" << std::endl;
	_name = "pizza";
	_hit_points = 100;
	_energy = 50;
	_attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &trap) : ClapTrap()  {
  std::cout << "ScavTrap copy constructor" << std::endl;
	_name = trap._name;
	_hit_points = trap._hit_points;
	_energy = trap._energy;
	_attack_damage = trap._attack_damage;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &trap)  {
  std::cout << "ScavTrap copy constructor" << std::endl;
  if (this != &trap) {
  	ClapTrap::operator=(trap);
  }
  return *this;
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap default destructor" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap()  {
	std::cout << "ScavTrap name constructor" << std::endl;
	_name = name;
	_hit_points = 100;
	_energy = 50;
	_attack_damage = 20;
}

void ScavTrap::guardGate() {
  std::cout << _name << ": ScavTrap now in Gate keeper mode." << std::endl;
}

void ScavTrap::show() {
  std::cout << "Name: " << _name << std::endl;
  std::cout << "Hit points: " << _hit_points << std::endl;
  std::cout << "Energy: " << _energy << std::endl;
  std::cout << "Attack damage: " << _attack_damage << std::endl;
}