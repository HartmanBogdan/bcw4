#pragma once
#include <iostream>
#include <string>
#include "SpellCaster.h"
#include "Demon.h"


class Warlock : public SpellCaster {
protected:
    bool DemIsSum;
    Demon* demon1;
    Demon* demon2;
    Demon* demon3;

public:
    Warlock();
    ~Warlock();
    void attack(Unit* enemy);
    void takeAttack(Unit* enemy);
    void SummonDemon();
    void Heal(Unit* guy);

};