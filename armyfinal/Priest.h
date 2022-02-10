#pragma once
#include <iostream>
#include <string>
#include "SpellCaster.h"

class Priest : public SpellCaster {
protected:
    int HEALPOWEEEER;
public:
    Priest();
    ~Priest();
    int getHEALPOWEEEER();
    void SetHEALPOWEEEER(int HEALPOWEEEER);
    void Heal(Unit* guy);

};