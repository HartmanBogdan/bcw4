#pragma once
#include <iostream>
#include "State.h"
#include "SpellCaster.h"


class MageState : public State {
protected:
    Unit* ownerunit;
public:
    MageState(Unit* owner);
    virtual ~MageState();
    void attack(Unit* enemy);
    void takeAttack(Unit* enemy);
    void ContAttack(Unit* enemy);
};