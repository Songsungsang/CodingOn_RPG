#pragma once
#include "Character.h"

class Warrior : public Character {
public:
	Warrior(string name, int level, int health, int attackPower);

	void attack(Character& target);
	void specialAttack(Character& target);

	void resetHealth();
};
