#include "Necromancer.h"

Necromancer::Necromancer(){
    this->master_state = new NecromancerState(this);
    this->name = "Necromancer";
    this->maxHp = 1000;
    this->hp = this->maxHp;
    this->pAtk = 5;
    this->mAtk = 30;
    this->ID = 10;

}
Necromancer::~Necromancer(){
    delete(this->master_state);
}
void Necromancer::IncrHp() {
    int DMGtoHP = this->pAtk + this->mAtk;
    DMGtoHP /= 4;
    this->hp += DMGtoHP;
    if (this->hp > this->maxHp){
        this->hp = this->maxHp;
    }
}
void Necromancer::Heal(Unit* guy){}
