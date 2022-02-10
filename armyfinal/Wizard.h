#pragma once
#include <iostream>
#include <string>
#include "SpellCaster.h"

class Wizard : public SpellCaster {
protected:
    int HEALPOWEEEER;
public:
    Wizard();
    ~Wizard();
    int getHEALPOWEEEER();
    void SetHEALPOWEEEER(int HEALPOWEEEER);
    void Heal(Unit* guy);

};