#pragma once
#include <string>
#include <iostream>
using namespace std;

class Character {
protected:
	string name;
	int level;
	int health;
	int attackPower;
public:
	Character(string name, int level, int health, int attackPower);

	virtual void attack(Character& target);
	virtual void specialAttack(Character& target);

	void takeDamage(int damage);
	bool isAlive();
	void showStatus();
	
	virtual void resetHealth();

};