#pragma once
#include <iostream>
#include "State.h"


class VampireState : public State {
protected:
    Unit* ownerunit;
public:
    VampireState(Unit* owner);
    ~VampireState();
    void attack(Unit* enemy);
    void takeAttack(Unit* enemy);
    void ContAttack(Unit* enemy);

};