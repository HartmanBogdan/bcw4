#include "Werewolf.h"

Werewolf::Werewolf(){
    this->master_state = new WerewolfState(this);
    this->ID = 5;
    this->maxHp = 1000;
    this->hp = this->maxHp;
    this->pAtk = 30;
    this->name = "Werewolf";
}
Werewolf::~Werewolf(){}
void Werewolf::transform(){
    this->inTransform = true;
    this->maxHp *= 2;
    this->hp *= 2;
    this->pAtk *=2;
}



