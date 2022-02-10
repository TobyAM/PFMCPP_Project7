#include "AttackItem.h"
#include "Utility.h"

AttackItem::AttackItem() : Item("attack item", 2) { }

void  AttackItem::use( Character* character)
{
    useAttackItem( character, this);   
}
