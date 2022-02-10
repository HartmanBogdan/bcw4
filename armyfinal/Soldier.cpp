#include "Soldier.h"

Soldier::Soldier(){
    this->master_state = new HumanState(this);
    this->ID = 1;
    this->maxHp = 1200;
    this->hp = this->maxHp;
    this->pAtk = 25;
    this->name = "Soldier";
}
Soldier::~Soldier(){}