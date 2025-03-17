#include "Rouge.h"

Rouge::Rouge(string name, int level, int health, int attackPower)
	: Character(name, level, health, attackPower) {
}

void Rouge::attack(Character& target) {
	cout << "도적이(가) 빠르게 " << target.getName() << "을(를) 공격합니다!" << endl;
	target.takeDamage(this->attackPower);
}
void Rouge::specialAttack(Character& target) { // 특수공격 ambush
	random_device rd; // 하드웨어 난수 생성기 (시드 제공)
	mt19937 gen(rd()); // Mersenne Twister 19937 엔진
	uniform_int_distribution<int> dist(1, 100); // 1~100 사이의 균등 분포 난수
	
	int random_number = dist(gen);
	if (random_number > 30) {
		target.takeDamage(this->attackPower * 3);
	}
	else { 
		cout << "도적 특수 공격 실패!" << endl; 
	}
	//난수 생성을 통해 70% 확률로 3배 데미지를 입힘 (랜덤 확률 시스템 활용). 31~100 = 명중
	//실패 시 공격하지 않음
}