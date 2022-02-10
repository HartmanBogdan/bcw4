#include "Priest.h"

Priest::Priest(){
    this->ID = 8;
    this->maxHp = 1000;
    this->hp = this->maxHp;
    this->pAtk = 5;
    this->mAtk = 20;
    this->name = "Priest";
    this->HEALPOWEEEER = this->mAtk * 2;

}
Priest::~Priest(){}
int Priest::getHEALPOWEEEER(){
    return this->HEALPOWEEEER;
}
void Priest::SetHEALPOWEEEER(int HEALPWR){
    this->HEALPOWEEEER = HEALPWR;
}
void Priest::Heal(Unit* guy){
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