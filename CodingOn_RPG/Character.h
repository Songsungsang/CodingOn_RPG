#pragma once
#include <string>
#include <iostream>
#include <random>
using namespace std;

class Character {
protected:
	string name;
	int level;
	int health;
	int maxhealth;
	int attackPower;
public:
	Character(string name, int level, int health, int attackPower);

	virtual void attack(Character& target) = 0;
	virtual void specialAttack(Character& target) = 0;

	void takeDamage(int damage);
	bool isAlive();
	void showStatus();
	void resetHealth();

	string getName();

};