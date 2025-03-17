#include "Warrior.h"

Warrior::Warrior(string name, int level, int health, int attackPower)
	: Character(name, level, health, attackPower) {
}

void Warrior::attack(Character& target) {
	cout << "전사이(가) " << target.getName() << "을(를) 공격합니다!" << endl;
	target.takeDamage(this->attackPower);
}
void Warrior::specialAttack(Character& target) { // 특수공격 powerStrike
	cout << "전사이(가) 강력한 일격을 가합니다!" << endl;
	target.takeDamage(this->attackPower * 2); //2배의 공격력을 가하지만, 본인도 5의 체력을 잃음
	this->takeDamage(5);
}