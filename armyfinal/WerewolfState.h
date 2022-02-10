#pragma once
#include <iostream>
#include "State.h"

class WerewolfState : public State {
protected:
    Unit* ownerunit;
public:
    WerewolfState(Unit* owner);
    ~WerewolfState();
    void attack(Unit* enemy);
    void takeAttack(Unit* enemy);
    void ContAttack(Unit* enemy);

};