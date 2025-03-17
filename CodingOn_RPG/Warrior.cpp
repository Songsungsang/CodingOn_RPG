#include "Warrior.h"

Warrior::Warrior(string name, int level, int health, int attackPower)
	: Character(name, level, health, attackPower) {
}

void Warrior::attack(Character& target) {
	target.takeDamage(this->attackPower);
}
void Warrior::specialAttack(Character& target) { // 특수공격 powerStrike
	target.takeDamage(this->attackPower * 2); //2배의 공격력을 가하지만, 본인도 5의 체력을 잃음
	this->takeDamage(5);
}

void Warrior::resetHealth() {
	this->health = 100;
}