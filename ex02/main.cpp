#include "./include/ClapTrap.hpp"
#include "./include/ScavTrap.hpp"
#include "./include/FragTrap.hpp"

void test_name() {
    std::cout << "Name test" << std::endl;
    FragTrap frag("fraggy");
    frag.show();
    std::cout << "end name test" << std::endl;
}

void classique_test() {
    std::cout << "Classique test" << std::endl;
    FragTrap frag;
        frag.show();
    frag.attack("target");
    frag.takeDamage(5);
    frag.beRepaired(3);
    frag.show();
    std::cout << "end classique test" << std::endl;
}

void test_copy() {
    std::cout << "Copy test" << std::endl;
    FragTrap frag1("fragvy");
    FragTrap frag2(frag1);
    Frag2.show();
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