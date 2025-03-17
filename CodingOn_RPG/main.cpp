#include "BattleManager.h"

unique_ptr<Character> chooseCharacter(const string& prompt) { // 캐릭터 선택 옵션
	cout << prompt << " 캐릭터를 선택해주세요" << endl;
	cout << "----------------" << endl;
	cout << "1. 전사" << endl
		<< "2. 마법사" << endl
		<< "3. 도적" << endl;
	
	int option;
	cin >> option;
	if(option == 1) return make_unique<Warrior>("전사", 1, 100, 15);
	if(option == 2) return make_unique<Mage>("마법사", 1, 80, 18, 100);
	if(option == 3) return make_unique<Rouge>("도적", 1, 90, 12);
}

int main()
{
	shared_ptr<Character> playerChar;
	shared_ptr<Character> cpuChar;
	string input;
	bool loopBattle = true;

	cout << "RPG 전투 시스템" << endl;
	playerChar = chooseCharacter("나의");
	playerChar->showStatus();
	cpuChar = chooseCharacter("상대");
	cpuChar->showStatus();

	while (loopBattle == true) { // 플레이어가 죽거나 전투 멈추지 않는 이상 무한루프
		startBattle(playerChar, cpuChar);

		if (playerChar->isAlive() == true) { // 플레이어가 승리하면
			cout << playerChar->getName() << "(이)가 승리했습니다!" << endl;
			cout << "승리하였습니다! 계속 전투를 진행하시겠습니까? (y/n): ";
			cin >> input;

			if (input == "y") { // 전투 멈추는가
				playerChar->resetHealth(); 
				cpuChar = chooseCharacter("상대");
				cpuChar->showStatus();
			}
			else if (input == "n") loopBattle = false;
			else cout << endl << "다시 입력해 주세요!" << endl;
		}
		else { // cpu 승리
			cout << cpuChar->getName() << "(이)가 승리했습니다!" << endl;
			loopBattle = false;
		}
	}

	return 0;
}