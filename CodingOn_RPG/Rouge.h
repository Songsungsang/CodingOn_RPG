#pragma once
#include "Character.h"

class Rouge : public Character {
public:
	Rouge(string name, int level, int health, int attackPower);

	void attack(Character& target);
	void specialAttack(Character& target);

	void resetHealth();
};