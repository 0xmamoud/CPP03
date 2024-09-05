#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string name;

	public:
		DiamondTrap();
		DiamondTrap(std::string _name);
		DiamondTrap(const DiamondTrap &diamondTrap);
		DiamondTrap &operator=(const DiamondTrap &diamondTrap);
		~DiamondTrap();

		void attack(const std::string &target);
		void whoAmI(void);
};

#endif