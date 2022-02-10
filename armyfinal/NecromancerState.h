#pragma once
#include <iostream>
#include "State.h"
#include "SpellCaster.h"
#include <vector>

// class Unit;

class NecromancerState : public State {
protected:
    Unit* ownerunit;
    std::vector<Unit*> targets;

public:
    NecromancerState(Unit* owner);
    ~NecromancerState();
    void attack(Unit* enemy);
    void takeAttack(Unit* enemy);
    void ContAttack(Unit* enemy);
};