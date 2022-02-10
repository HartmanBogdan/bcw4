#pragma once
#include <iostream>
#include "State.h"

class HumanState : public State {
protected:
    Unit* ownerunit;
public:
    HumanState(Unit* owner);
    ~HumanState();
    void attack(Unit* enemy);
    void takeAttack(Unit* enemy);
    void ContAttack(Unit* enemy);

};