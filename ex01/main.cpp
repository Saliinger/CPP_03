#include "./include/ClapTrap.hpp"
#include "./include/ScavTrap.hpp"

void test_name() {
    std::cout << "Name test" << std::endl;
    ScavTrap scav("Scavvy");
    scav.show();
    std::cout << "end name test" << std::endl;
}

void classique_test() {
    std::cout << "Classique test" << std::endl;
    ScavTrap scav;
    scav.show();
    scav.attack("target");
    scav.takeDamage(5);
    scav.beRepaired(3);
    scav.show();
    std::cout << "end classique test" << std::endl;
}

void test_copy() {
    std::cout << "Copy test" << std::endl;
    ScavTrap scav1("Scavvy");
    ScavTrap scav2(scav1);
    scav2.show();
    std::cout << "end copy test" << std::endl;
}

int main() {
    test_name();
    std::cout << "------------------------" << std::endl << std::endl;
    classique_test();
    std::cout << "------------------------" << std::endl << std::endl;
    test_copy();
    std::cout << "------------------------" << std::endl << std::endl;
    return 0;
}