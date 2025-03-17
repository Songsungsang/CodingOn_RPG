#include "BattleManager.h"

void startBattle(shared_ptr<Character>& player, shared_ptr<Character>& cpu) { // ���� ���� �� ���� ���� ����
	shared_ptr<Character> p1;
	shared_ptr<Character> p2;

	random_device rd; // �ϵ���� ���� ������ (�õ� ����)
	mt19937 gen(rd()); // Mersenne Twister 19937 ����
	uniform_int_distribution<int> dist(1, 100); // 1~100 ������ �յ� ���� ����

	int cointoss = 0;
	bool loopBattle = true;
	string input;
	int attackOrSkillP1 = 0;
	int attackOrSkillP2 = 0;

	cointoss = dist(gen);
	cout << "���� ���ϱ�: " << cointoss << endl;
	if (cointoss > 50) { // ������ ���ϱ�. 50���� ������ �÷��̾ ����
		p1 = player;
		p2 = cpu;
		cout << "�÷��̾� ����" << endl;
	}
	else {
		p1 = cpu;
		p2 = player;
		cout << "CPU ����" << endl;
	}

	while (p1->isAlive() == true && p2->isAlive() == true) { // ���� ���� ����
		cout << "-------------------------" << endl;
		player->showStatus();
		cpu->showStatus();

		try { // ���� ������ ��� �����ڰ� �������� �İ��ڰ� �������� Ȯ�� �ʿ�
			attackOrSkillP1 = dist(gen);
			if (attackOrSkillP1 > 30) { // 70% Ȯ���� �Ϲݰ���
				p1->attack(*p2);
			}
			else { // 30% Ȯ���� Ư������
				p1->specialAttack(*p2);
			}
		}
		catch (const exception& e) {
			cout << e.what() << "\n";
		}

		try { // �׷��Ƿ� try-catch �ΰ���
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