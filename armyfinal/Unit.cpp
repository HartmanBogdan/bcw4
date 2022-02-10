#include "Unit.h"

Unit::Unit() {
    this->inTransform = false;
    this->changeState = false;
    this->mAtk = 0;
    this->hp = 0;
    this->pAtk = 0;
    this->ID = 0;
    this->maxHp = this->hp;
}
Unit::~Unit(){
    delete(this->master_state);
    iAmTargetOf.clear();

}
void Unit::SetHp(int hp) {
    this->hp = hp;
}
void Unit::SetMaxHP(int maxHp) {
    this->maxHp = maxHp;
}
void Unit::SetPAtk(int pAtk) {
    this->pAtk = pAtk;
}
std::string Unit::SetName(std::string newname) {
    this->name = newname;
}
void Unit::SetID(int newID){
    this->ID = newID;
}
void Unit::SetState(State* newstate){
    this->master_state = newstate;
    this->changeState = true;
}
int Unit::GetID(){
    return this->ID;
}
int Unit::GetHP() {
    return this->hp;
}
int Unit::GetMaxHP() {
    return this->maxHp;
}
int Unit::GetPAtk() {
    return this->pAtk;
}
const std::string& Unit::GetName() const {
    return this->name;
}
bool Unit::GetTrans(){
    return this->inTransform;
}

State* Unit::GetState() {
    return this->master_state;
}
void Unit::attack(Unit* enemy) {
    master_state->attack(enemy);
}
void Unit::takeAttack(Unit* enemy) {
    if (enemy->GetID() == 10 ) {
        iAmTargetOf.push_back(enemy);
    }
    master_state->takeAttack(enemy);
}
void Unit::ContAttack(Unit* enemy) {
    master_state->ContAttack(enemy);
}

void Unit::bite(Unit* enemy){
    if(this->ID == 4 && enemy->GetID() != 5 ){
        enemy->SetState(enemy->GetState());
    } else if(this->ID == 5 && enemy->GetID() != 4){
        enemy->SetState(enemy->GetState());
    }
}
int Unit::GetMAtk() {}
void Unit::IncrHp() {}
void Unit::observerble() {
    for(int i = 0; i < this->iAmTargetOf.size(); i++) {
        iAmTargetOf[i]->IncrHp();
    }
}
void Unit::PRINTSTATUS(){
    std::cout<< "_________________________" <<std::endl;
    std::cout<<"Name: "<< this->name << " ID: "<< this->ID <<std::endl;
    std::cout<< "HP: " << this->hp << "/"<< this->maxHp <<std::endl;
    std::cout<<"P Attack: "<< this->pAtk <<std::endl;
    std::cout<<"M Attack: "<< this->mAtk <<std::endl;
    std::cout<<"Transformation?: " << this->inTransform <<std::endl;
    std::cout<<"Change State?: "<< this->changeState <<std::endl;
    std::cout<< "_________________________" <<std::endl;
}