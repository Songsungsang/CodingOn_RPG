#pragma once
#include "Character.h"

class Mage : public Character {
protected:
	int mana;
public:
	Mage(string name, int level, int health, int attackPower, int mana);

	void attack(Character& target);
	void specialAttack(Character& target);

	void resetHealth();
};