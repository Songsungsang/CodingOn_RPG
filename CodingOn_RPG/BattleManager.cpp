#include "BattleManager.h"

void startBattle(shared_ptr<Character>& player, shared_ptr<Character>& cpu) { // 전투 시작 및 전투 진행 루프
	shared_ptr<Character> p1;
	shared_ptr<Character> p2;

	random_device rd; // 하드웨어 난수 생성기 (시드 제공)
	mt19937 gen(rd()); // Mersenne Twister 19937 엔진
	uniform_int_distribution<int> dist(1, 100); // 1~100 사이의 균등 분포 난수

	int cointoss = 0;
	bool loopBattle = true;
	string input;
	int attackOrSkillP1 = 0;
	int attackOrSkillP2 = 0;

	cointoss = dist(gen);
	cout << "선공 정하기: " << cointoss << endl;
	if (cointoss > 50) { // 선공자 정하기. 50보다 높으면 플레이어가 먼저
		p1 = player;
		p2 = cpu;
		cout << "플레이어 선공" << endl;
	}
	else {
		p1 = cpu;
		p2 = player;
		cout << "CPU 선공" << endl;
	}

	while (p1->isAlive() == true && p2->isAlive() == true) { // 전투 진행 루프
		cout << "-------------------------" << endl;
		player->showStatus();
		cpu->showStatus();

		try { // 마나 부족의 경우 선공자가 부족한지 후공자가 부족한지 확인 필요
			attackOrSkillP1 = dist(gen);
			if (attackOrSkillP1 > 30) { // 70% 확률로 일반공격
				p1->attack(*p2);
			}
			else { // 30% 확률로 특수공격
				p1->specialAttack(*p2);
			}
		}
		catch (const exception& e) {
			cout << e.what() << "\n";
		}

		try { // 그러므로 try-catch 두개로
			if (p2->isAlive() == true) {
				attackOrSkillP2 = dist(gen);
				if (attackOrSkillP2 > 30) {
					p2->attack(*p1);
				}
				else {
					p2->specialAttack(*p1);
				}
			}
		}
		catch (const exception& e) {
			cout << e.what() << "\n";
		}
	}

}