#include <iostream>
#include <string>
#include "Unit.h"
#include "Berserker.h"
#include "Demon.h"
#include "Healer.h"
#include "HumanState.h"
#include "MageState.h"
#include "Necromancer.h"
#include "NecromancerState.h"
#include "Priest.h"
#include "Rogue.h"
#include "Soldier.h"
#include "SpellCaster.h"
// #include "State.h"
#include "Vampire.h"
#include "VampireState.h"
#include "Warlock.h"
#include "Werewolf.h"
#include "WerewolfState.h"
#include "Wizard.h"

int main()
{
    // Unit::
    // void SetHp(int hp);
    // void SetMaxHP(int maxHp);
    // void SetPAtk(int pAtk);
    // std::string SetName(std::string name);
    // void SetID(int ID);
    // void SetState(State* newstate);
    // int GetID();
    // int GetHP();
    // int GetMaxHP();
    // int GetPAtk();
    // int GetMAtk();
    // bool GetTrans();
    // State* GetState();
    // const std::string& GetName() const;
    // void bite(Unit* enemy, State* newstate); --- превращение юнита в вампира
    // void attack(Unit* enemy);
    // void takeAttack(Unit* enemy);
    // void ContAttack(Unit* enemy);
    // void observerble();
    // // void IncrHp();
    // + SPELLCASTER::
    // int getHEALPOWEEEER();
    // void SetHEALPOWEEEER(int HEALPOWEEEER);
    // void Heal(Unit* guy)
    // Werewolf::
    // transform()
    //PRINTSTATUS() -
    // Вампир превращает в вампира другого юнита принудительно если
    Soldier* soldier = new Soldier();
    Healer* healer = new Healer();
    Vampire* vampire = new Vampire();
    vampire->attack(soldier);
    soldier->PRINTSTATUS();
    vampire->attack(soldier);
    vampire->attack(soldier);
    vampire->attack(soldier);
    vampire->attack(soldier);

    soldier->PRINTSTATUS();
    healer->Heal(soldier);
    soldier->PRINTSTATUS();

    delete vampire;
    delete soldier;

}