#include "Berserker.h"

Berserker::Berserker(){
    this->ID = 3;
    this->master_state = new HumanState(this);
    this->maxHp = 800;
    this->hp = this->maxHp;
    this->pAtk = 30;
    this->name = "Berserker";


}
Berserker::~Berserker(){}