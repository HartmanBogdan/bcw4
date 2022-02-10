#include "Demon.h"

Demon::Demon(){
    this->ID = 1;
    this->maxHp = 700;
    this->hp = this->maxHp;
    this->pAtk = 40;
    this->master_state = new HumanState(this);
    this->name = "Demon";

}
Demon::~Demon(){}