#pragma once
#include <iostream>
#include "State.h"
#include <vector>
class State;


class Unit {
protected:
    int maxHp;
    int hp;
    int pAtk;
    int ID;
    bool inTransform;
    int mAtk;
    bool changeState;

    std::string name;
    State* master_state;
    std::vector<Unit*> iAmTargetOf;

public:
    Unit();
    virtual ~Unit();
    void SetHp(int hp);
    void SetMaxHP(int maxHp);
    void SetPAtk(int pAtk);
    std::string SetName(std::string name);
    void SetID(int ID);
    void SetState(State* newstate);
    int GetID();
    int GetHP();
    int GetMaxHP();
    int GetPAtk();
    int GetMAtk();
    bool GetTrans();
    State* GetState();
    const std::string& GetName() const;
    void bite(Unit* enemy);
    void attack(Unit* enemy);
    void takeAttack(Unit* enemy);
    void ContAttack(Unit* enemy);
    void observerble();
    void IncrHp();
    void PRINTSTATUS();
};