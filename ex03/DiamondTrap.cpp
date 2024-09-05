#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): name("mamoud") {
	std::cout << "DiamondTrap default constructor called" << std::endl;
	ClapTrap::name = name + "_clap_name";
	this->hp = FragTrap::get_hp();
	this->stamina = ScavTrap::get_stamina();
	this->damage = FragTrap::get_attack_damage();
}

DiamondTrap::DiamondTrap(std::string _name): name(_name) {
	std::cout << "DiamondTrap string constructor called" << std::endl;
	ClapTrap::name = name + "_clap_name";
	this->hp = FragTrap::get_hp();
	this->stamina = ScavTrap::get_stamina();
	this->damage = FragTrap::get_attack_damage();
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondtrap)
 : name(diamondtrap.name) {
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	this->name = diamondtrap.name;
	this->set_hp(diamondtrap.get_hp());
	this->set_stamina(diamondtrap.get_stamina());
	this->set_attack_damage(diamondtrap.get_attack_damage());
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondtrap) {
	std::cout << "DiamondTrap copy assignement operator called" << std::endl;
	if (this != &diamondtrap) {
		this->name = diamondtrap.name;
		this->set_hp(diamondtrap.get_hp());
		this->set_stamina(diamondtrap.get_stamina());
		this->set_attack_damage(diamondtrap.get_attack_damage());
	}
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor called by " << this->name << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void) {
	std::cout << "DiamondTrap name: " << this->name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::name << std::endl;
}
