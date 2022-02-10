#pragma once
#include <iostream>
#include "Unit.h"

class Unit;

class State {
public:
    virtual void attack(Unit* enemy) = 0;
    virtual void takeAttack(Unit* enemy) = 0;
    virtual void ContAttack(Unit* enemy) = 0;
};