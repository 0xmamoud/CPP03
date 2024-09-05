#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("mamoud"), hp(10), stamina(10), damage(0) {
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string _name): name(_name), hp(10), stamina(10), damage(0) {
	std::cout << "ClapTrap string constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
 : name(claptrap.name), hp(claptrap.hp), stamina(claptrap.stamina), damage(claptrap.damage) {
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap) {
	std::cout << "ClapTrap copy assignement operator called" << std::endl;
	if (this != &claptrap) {
		this->name = claptrap.name;
		this->set_hp(claptrap.get_hp());
		this->set_stamina(claptrap.get_stamina());
		this->set_attack_damage(claptrap.get_attack_damage());
	}
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "Claptrap destructor called by " << this->get_name() << std::endl;
}

void ClapTrap::attack(const std::string &target) {
	if (this->get_hp() <= 0) {
		std::cout << "ClapTrap " << this->get_name() << " is already dead, can't attack any more !";
		return ;
	}
	if (this->get_stamina() <= 0) {
		std::cout << "ClapTrap " << this->get_name() << " can't attack, out of stamina !" << std::endl;
		return ;
	}
	this->stamina--;
	std::cout << "ClapTrap " << this->get_name() << " attacked " << target << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->get_hp() <= 0) {
		std::cout << "ClapTrap " << this->get_name() << " is already dead, can't take damage !" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->get_name() << " took " << amount << " damage !" << std::endl;
	if (this->get_hp() <= amount) {
		this->set_hp(0);
	}	else {
		this->hp -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->get_hp() <= 0) {
		std::cout << "ClapTrap " << this->get_name() << " is already dead, can't repaire !" << std::endl;
		return ;
	}
	if (this->get_stamina() <= 0) {
		std::cout << "ClapTrap " << this->get_name() << " can't repare, out of  stamina !" << std::endl;
		return ;
	}
	this->stamina--;
	this->hp += amount;
	std::cout << "ClapTrap " << this->get_name() << " gains " <<  amount << " hp, " << "total hp = " << this->hp << std::endl;
}

std::string ClapTrap::get_name(void) const {
	return this->name;
}

int ClapTrap::get_hp(void) const {
	return this->hp;
}

int ClapTrap::get_stamina(void) const {
	return this->stamina;
}

int ClapTrap::get_attack_damage(void) const {
	return this->damage;
}

void ClapTrap::set_hp(unsigned int _amount) {
	this->hp = _amount;
}

void ClapTrap::set_stamina(unsigned int _amount) {
	this->stamina = _amount;
}

void ClapTrap::set_attack_damage(unsigned int _amount) {
	this->damage = _amount;
}
