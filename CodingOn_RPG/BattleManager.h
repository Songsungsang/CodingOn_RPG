#pragma once
#include "Character.h"
#include "Warrior.h"
#include "Mage.h"
#include "Rouge.h"
#include <memory>
using namespace std;

void startBattle(shared_ptr<Character>& char1, shared_ptr<Character>& char2);