#include "Warlock.h"


Warlock::Warlock(){
    this->DemIsSum = false;
    this->ID = 9;
    Demon* demon1 = new Demon();
    Demon* demon2 = new Demon();
    Demon* demon3 = new Demon();
    this->name = "Warlock";
    this->maxHp = 700;
    this->hp = this->maxHp;
    this->pAtk = 5;
    this->mAtk = 15;
}

Warlock::~Warlock(){
    delete(demon3);
    delete(demon2);
    delete(demon1);
}
void Warlock::attack(Unit* enemy){
    master_state->attack(enemy);
    if (DemIsSum == true) {
        demon1->attack(enemy);
        demon2->attack(enemy);
        demon3->attack(enemy);
    }
}
void Warlock::takeAttack(Unit* enemy) {
    if (enemy->GetID() == 10 ) {
        iAmTargetOf.push_back(enemy);
    }
    if (DemIsSum == true ){
        int hp1 = demon1->GetHP();
        int hp2 = demon2->GetHP();
        int hp3 = demon3->GetHP();
        //warlock can die only after his demons die.
        if (hp1 > 0 ) {
            demon1->takeAttack(enemy);
        } else if (hp1 == 0 && hp2 > 0 ) {
            demon2->takeAttack(enemy);
        } else if (hp1 == 0 && hp2 == 0 && hp3 > 0) {
            demon3->takeAttack(enemy);
        } else if (hp1 == 0 && hp2 == 0 && hp3 == 0 ) {
            master_state->takeAttack(enemy);
        }
    } else if (DemIsSum == false) {
        master_state->takeAttack(enemy);
    }
}

void Warlock::SummonDemon(){
    if (this->DemIsSum == false) {
        std::cout << this->GetName() << ": Now, I am not alone =)" << std::endl;
        this->DemIsSum = true;
    }
}
void Warlock::Heal(Unit* guy){}
