#include "FragTrap.hpp"

int main(void)
{
	FragTrap a("player 1");
	FragTrap b("player 2");

	b.set_attack_damage(22);
	while (a.get_hp() > 0 && b.get_hp() > 0)
	{
		a.attack("player 2");
		b.takeDamage(a.get_attack_damage());
		a.highFivesGuys();
		if (a.get_stamina() <= 0 || b.get_stamina() <= 0) break;
		a.beRepaired(12);
		b.beRepaired(10);
		if (a.get_hp() <= 0 || b.get_hp() <= 0) break;
		b.attack("player 1");
		a.takeDamage(b.get_attack_damage());
		b.highFivesGuys();
	}
	return 0;
}
