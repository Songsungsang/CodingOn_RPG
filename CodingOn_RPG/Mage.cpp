#include "Mage.h"

Mage::Mage(string name, int level, int health, int attackPower, int mana)
	: Character(name, level, health, attackPower), mana(mana) { // 마법사는 마나를 가짐
}

void Mage::attack(Character& target) {
	cout << "마법사이(가) 마법으로 " << target.getName() << "을(를) 공격합니다!" << endl;
	target.takeDamage(this->attackPower);
}
void Mage::specialAttack(Character& target) { // 특수공격 firball
	if (this->mana < 20) throw runtime_error("마나가 부족합니다!");
	cout << "마법사이(가) 화염구를 던졌습니다!" << endl;
	this->mana -= 20;
	target.takeDamage(this->attackPower * 1.5); //마나 20을 소모하여 1.5배의 공격력으로 공격
}//마나 부족 시 예외 발생(예외 처리 필요)