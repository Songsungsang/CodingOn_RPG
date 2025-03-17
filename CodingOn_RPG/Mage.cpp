#include "Mage.h"

Mage::Mage(string name, int level, int health, int attackPower, int mana)
	: Character(name, level, health, attackPower), mana(mana) {
}

void Mage::attack(Character& target) {
	target.takeDamage(this->attackPower);
}
void Mage::specialAttack(Character& target) { // 특수공격 firball
	if (this->mana < 20) throw runtime_error("마나가 부족합니다!");
	this->mana -= 20;
	target.takeDamage(this->attackPower * 1.5); //마나 20을 소모하여 1.5배의 공격력으로 공격
}//마나 부족 시 예외 발생(예외 처리 필요)

void Mage::resetHealth() {
	this->health = 80;
}