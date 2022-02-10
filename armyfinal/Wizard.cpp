#include "Wizard.h"

Wizard::Wizard() {
    this->ID = 6;
    this->maxHp = 900;
    this->hp = this->maxHp;
    this->pAtk = 5;
    this->mAtk = 40;
    this->name = "Wizard";
    this->HEALPOWEEEER = this->mAtk / 2;

}
Wizard::~Wizard(){}
int Wizard::getHEALPOWEEEER(){
    return this->HEALPOWEEEER;
}
void Wizard::SetHEALPOWEEEER(int HEALPWR){
    this->HEALPOWEEEER = HEALPWR;
}
void Wizard::Heal(Unit* bro){
    int maxHp = bro->GetMaxHP();
    int hp = bro->GetHP();
    int futureHP = hp + this->getHEALPOWEEEER();
    if ( hp > 0 ) {
        if ( futureHP > maxHp ) {
            bro->SetHp(maxHp);
        } else {
            bro->SetHp(futureHP);
        }
    } else if ( hp <= 0 ) {
        std::cout << "U can`t heal dead unit"<< std::endl;
    }
}