#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap default constructor called" << std::endl;
	this->name = "mamoud";
	this->hp = 100;
	this->stamina = 100;
	this->damage = 20;
}

FragTrap::FragTrap(std::string _name) {
	std::cout << "FragTrap string constructor called" << std::endl;
	this->name = _name;
	this->hp = 100;
	this->stamina = 100;
	this->damage = 30;
}

FragTrap::FragTrap(const FragTrap &fragtrap) {
	std::cout << "FragTrap copy constructor called" << std::endl;
		this->name = fragtrap.name;
		this->set_hp(fragtrap.get_hp());
		this->set_stamina(fragtrap.get_stamina());
		this->set_attack_damage(fragtrap.get_attack_damage());
}

FragTrap &FragTrap::operator=(const FragTrap &fragtrap) {
	std::cout << "FragTrap copy assignement operator called" << std::endl;
	if (this != &fragtrap) {
		this->name = fragtrap.name;
		this->set_hp(fragtrap.get_hp());
		this->set_stamina(fragtrap.get_stamina());
		this->set_attack_damage(fragtrap.get_attack_damage());
	}
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called by " << this->get_name() << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << this->get_name() << " requests a high five! Come on, guys, slap my hand!" << std::endl;
}
