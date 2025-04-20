#include "../include/FragTrap.hpp"

// default constructor
FragTrap::FragTrap() : ClapTrap() {
    std::cout << "FragTrap default constructor called" << std::endl;
    _hit_points = 100;
    _energy = 100;
    _attack_damage = 30;
}

// operator= overload
FragTrap &FragTrap::operator=(const FragTrap &trap) {
    std::cout << "FragTrap assignment operator called" << std::endl;
    if (this != &trap) {
        ClapTrap::operator=(trap);
    }
    return *this;
}

// copy constructor
FragTrap::FragTrap(const FragTrap &trap) : ClapTrap(trap) {
    std::cout << "FragTrap copy constructor called" << std::endl;
    _name = trap._name;
    _hit_points = trap._hit_points;
    _energy = trap._energy;
    _attack_damage = trap._attack_damage;
}

// default destructor
FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called" << std::endl;
}


// named constructor
FragTrap::FragTrap(std::string const &name) : ClapTrap(name) {
    std::cout << "FragTrap name constructor called" << std::endl;
    _hit_points = 100;
    _energy = 100;
    _attack_damage = 30;
}

// member function
void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << _name << " is requesting a high five!" << std::endl;
}

void FragTrap::show()   {
    std::cout << "FragTrap name: " << _name << std::endl;
    std::cout << "FragTrap hit points: " << _hit_points << std::endl;
    std::cout << "FragTrap energy: " << _energy << std::endl;
    std::cout << "FragTrap attack damage: " << _attack_damage << std::endl;
}
