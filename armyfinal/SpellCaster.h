#pragma once
#include <iostream>
#include "Unit.h"
#include "MageState.h"

class SpellCaster : public Unit {
public:
    SpellCaster();
    virtual ~SpellCaster();
    virtual void Heal(Unit* guy) = 0;

};