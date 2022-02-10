#include "SpellCaster.h"

SpellCaster::SpellCaster(){
    this->master_state = new MageState(this);
}
SpellCaster::~SpellCaster(){}