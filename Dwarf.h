#pragma once
#include "Character.h"

struct Dwarf : Character
{
    Dwarf( std::string name_, int hitPoints, int armor);
    std::string getStats() override;
    const std::string& getName() override;
private:
    const std::string name;
};
