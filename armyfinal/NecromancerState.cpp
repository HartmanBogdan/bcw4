#include "NecromancerState.h"

NecromancerState::NecromancerState(Unit* owner) {
     this->ownerunit = owner;
     std::vector<Unit*> targets;
}
NecromancerState::~NecromancerState(){
     targets.clear();
}

void NecromancerState::attack(Unit* enemy) {
     if ( enemy->GetHP() > 0 ) {
          targets.push_back(enemy);
          enemy->takeAttack(ownerunit);
          enemy->ContAttack(ownerunit);
     } else {
          for (int i = 0; i < targets.size(); i++ ) {
               if (targets[i] == enemy) {
                    targets.erase(targets.begin()+i);
               }
          }
          std::cout <<  "Can not attack unit, cos it is dead." << std::endl;
     }
}
void NecromancerState::takeAttack(Unit* enemy) {
     int myHP = ownerunit->GetHP();
     if ( myHP > 0 ) {
          int DMG = enemy->GetPAtk();
          if (enemy->GetID() == 6 || enemy->GetID() == 7 || enemy->GetID() == 8 || enemy->GetID() == 9 || enemy->GetID() == 10 ) {
               DMG += enemy->GetMAtk();
               if (enemy->GetID() == 8){
                    DMG = DMG*2;
               }
          }
          myHP -= DMG;
          if (myHP > 0) {
               ownerunit->SetHp(myHP);
          } else if ( myHP < 0 ) {
               ownerunit->SetHp(0);
               ownerunit->observerble();
               std::cout << enemy->GetName() << " kill " << ownerunit->GetName()<< std::endl;

          }
     } else if ( myHP <= 0 ) {
          std::cout << ownerunit->GetName() << " Is dead."<< std::endl;
     }

}
void NecromancerState::ContAttack(Unit* enemy) {
     if (enemy->GetID() != 2 ) {
          int enemyHP = enemy->GetHP();
          if ( enemyHP > 0 ) {
               int DMG = ownerunit->GetPAtk();
               if (ownerunit->GetID() == 6 || ownerunit->GetID() == 7 || ownerunit->GetID() == 8 || ownerunit->GetID() == 9 || ownerunit->GetID() == 10 ) {
                    if ( enemy->GetID() != 3) {
                         DMG += ownerunit->GetMAtk();
                    } else if (enemy->GetID() == 8){
                         DMG = DMG*2;
                    }
               }
               DMG = DMG / 3;
               enemyHP -= DMG;
               if (enemyHP > 0) {
                    enemy->SetHp(enemyHP);
               } else if ( enemyHP < 0 ) {
                    enemy->SetHp(0);
                    enemy->observerble();
                    std::cout << ownerunit->GetName() << " kill " << enemy->GetName() << " by conter attack" << std::endl;
               } else if ( enemyHP <= 0 ) {
                    std::cout << enemy->GetName() << " Is dead."<< std::endl;
               }
          } else if (enemy->GetID() == 2 ) {
               std::cout << ownerunit->GetName() << " can not conter attack Rogue."<< std::endl;
          }
     }
}

