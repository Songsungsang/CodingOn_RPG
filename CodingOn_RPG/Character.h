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

	void takeDamage(int damage);
	bool isAlive();
	void showStatus();
	void resetHealth();

};