#include "Healer.h"

Healer::Healer(){
    this->ID = 7;
    this->maxHp = 800;
    this->hp = this->maxHp;
    this->pAtk = 5;
    this->mAtk = 25;
    this->name = "Healer";
    this->HEALPOWEEEER = this->mAtk * 2;
}
Healer::~Healer(){}
int Healer::getHEALPOWEEEER(){
    return this->HEALPOWEEEER;
}
void Healer::SetHEALPOWEEEER(int HEALPWR){
    this->HEALPOWEEEER = HEALPWR;
}
void Healer::Heal(Unit* guy){
    int maxHp = guy->GetMaxHP();
    int hp = guy->GetHP();
    int futureHP = hp + this->getHEALPOWEEEER();
    if ( hp > 0 ) {
        if ( futureHP > maxHp ) {
            guy->SetHp(maxHp);
        } else {
            guy->SetHp(futureHP);
        }
    } else if ( hp <= 0 ) {
        std::cout << "U can`t heal dead unit"<< std::endl;
    }
}