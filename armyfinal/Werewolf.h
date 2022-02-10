#pragma once
#include <iostream>
#include <string>
#include "Unit.h"
#include "WerewolfState.h"

class Werewolf : public Unit {
public:
    Werewolf();
    ~Werewolf();
    void transform();
};