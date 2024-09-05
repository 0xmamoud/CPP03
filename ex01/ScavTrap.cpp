#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): guard(false) {
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->name = "mamoud";
	this->hp = 100;
	this->stamina = 50;
	this->damage = 20;
}

ScavTrap::ScavTrap(std::string _name): guard(false) {
	std::cout << "ScavTrap string constructor called" << std::endl;
	this->name = _name;
	this->hp = 100;
	this->stamina = 50;
	this->damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
		this->name = scavtrap.name;
		this->set_hp(scavtrap.get_hp());
		this->set_stamina(scavtrap.get_stamina());
		this->set_attack_damage(scavtrap.get_attack_damage());
		this->guard = scavtrap.guard;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavtrap) {
	std::cout << "ScavTrap copy assignement operator called" << std::endl;
	if (this != &scavtrap) {
		this->name = scavtrap.name;
		this->set_hp(scavtrap.get_hp());
		this->set_stamina(scavtrap.get_stamina());
		this->set_attack_damage(scavtrap.get_attack_damage());
		this->guard = scavtrap.guard;
	}
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called by " << this->get_name() << std::endl;
}

void ScavTrap::attack(const std::string &target) {
	if (this->get_hp() <= 0) {
		std::cout << "ScavTrap " << this->get_name() << " is already dead, can't attack any more !" << std::endl;
		return ;
	}
	if (this->get_stamina() <= 0) {
		std::cout << "ScavTrap " << this->get_name() << " can't attack, out of stamina !" << std::endl;
		return ;
	}
	this->stamina--;
	std::cout << "ScavTrap " << this->get_name() << " attacked " << target << std::endl;
}

void ScavTrap::guardGate(void) {
	this->guard = true;

	std::cout << this->get_name() << " won the game, he is the new guard !" << std::endl;
}