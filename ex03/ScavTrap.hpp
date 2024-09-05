#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	private:
		bool guard;

	public:
		ScavTrap();
		ScavTrap(std::string _name);
		ScavTrap(const ScavTrap &scavtrap);
		ScavTrap &operator=(const ScavTrap &scavtrap);
		~ScavTrap();

		void attack(const std::string &target);
		void guardGate(void);
};

#endif