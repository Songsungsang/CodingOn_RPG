#include "Character.h"

Character::Character(string name, int level, int health, int attackPower) {
	this->name = name;
	this->level = level;
	this->health = health;
	this->attackPower = attackPower;
}

void Character::takeDamage(int damage) {
	this->health -= damage;
}

bool Character::isAlive() {
	if (this->health > 0) {
		return true;
	}
	return false;
}

void Character::showStatus() {
	cout << "ĳ���� ����" << endl;
	cout << "�̸�: " << name << " | ����: " << level << " | ü��: " << health << " | ���ݷ�: " << attackPower << endl;
}

void Character::resetHealth() {
	if (this->name == "����") this->health = 100;
	if (this->name == "������") this->health = 80;
	if (this->name == "����") this->health = 90;
}