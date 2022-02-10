#include "Rogue.h"

Rogue::Rogue() {
    this->ID = 2;
    this->master_state = new HumanState(this);
    this->maxHp = 800;
    this->hp = this->maxHp;
    this->pAtk = 30;
    this->name = "Rogue";
}
Rogue::~Rogue(){}
