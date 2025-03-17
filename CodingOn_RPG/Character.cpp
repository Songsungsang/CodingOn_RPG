#include "Character.h"

Character::Character(string name, int level, int health, int attackPower) {
	this->name = name;
	this->level = level;
	this->health = health;
	this->attackPower = attackPower;
}

void Character::attack(Character& target) {
}
void Character::specialAttack(Character& target){
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
	cout << "캐릭터 정보" << endl;
	cout << "이름: " << name << " | 레벨: " << level << " | 체력: " << health << " | 공격력: " << attackPower << endl;
}

void Character::resetHealth() {
}