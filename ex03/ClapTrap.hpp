#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap {
	protected:
		std::string name;
		int hp;
		int stamina;
		int damage;

	public:
		ClapTrap();
		ClapTrap(std::string _name);
		ClapTrap(const ClapTrap &claptrap);
		ClapTrap &operator=(const ClapTrap &claptrap);
		~ClapTrap();

		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string get_name(void) const;
		int get_hp(void) const;
		int get_stamina(void) const; 
		int get_attack_damage(void) const;

		void set_hp(unsigned int _amount);
		void set_stamina(unsigned int _amount);
		void set_attack_damage(unsigned int _amout);
};

#endif
