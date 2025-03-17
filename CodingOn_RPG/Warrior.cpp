#include "Warrior.h"

Warrior::Warrior(string name, int level, int health, int attackPower)
	: Character(name, level, health, attackPower) {
}

void Warrior::attack(Character& target) {
	target.takeDamage(this->attackPower);
}
void Warrior::specialAttack(Character& target) { // Ư������ powerStrike
	target.takeDamage(this->attackPower * 2); //2���� ���ݷ��� ��������, ���ε� 5�� ü���� ����
	this->takeDamage(5);
}

void Warrior::resetHealth() {
	this->health = 100;
}