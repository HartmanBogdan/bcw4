#pragma once
#include <iostream>
#include <string>
#include "SpellCaster.h"
#include "NecromancerState.h"

class Necromancer: public SpellCaster {
public:
    Necromancer();
    ~Necromancer();
    void IncrHp();
    void Heal(Unit* guy);
};