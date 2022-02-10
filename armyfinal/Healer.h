#pragma once
#include <iostream>
#include <string>
#include "SpellCaster.h"

class Healer : public SpellCaster {
protected:
    int HEALPOWEEEER;
public:
    Healer();
    ~Healer();
    int getHEALPOWEEEER();
    void SetHEALPOWEEEER(int HEALPOWEEEER);
    void Heal(Unit* guy);

};