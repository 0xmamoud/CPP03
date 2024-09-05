#include "ClapTrap.hpp"


int main(void)
{
	ClapTrap a("player 1");
	ClapTrap b("player 2");

	a.set_attack_damage(3);
	b.set_attack_damage(2);
	while (a.get_hp() > 0 && b.get_hp() > 0)
	{
		a.attack("player 2");
		b.takeDamage(a.get_attack_damage());
		if (a.get_stamina() <= 0 || b.get_stamina() <= 0) break;
		a.beRepaired(1);
		b.beRepaired(2);
		b.attack("player 1");
		a.takeDamage(b.get_attack_damage());
	}
	return 0;
}
