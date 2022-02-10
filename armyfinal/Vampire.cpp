#include "Vampire.h"

Vampire::Vampire(){
    this->master_state = new VampireState(this);
    this->ID = 4;
    this->maxHp = 700;
    this->hp = this->maxHp;
    this->pAtk = 30;
    this->name = "Vampire";
}
Vampire::~Vampire(){}

