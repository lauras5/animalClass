/*
	Salcido, Laura

	September, 10 2020

	CS A250
	A2 - Pokemon Class
*/
#include "Pokemon.h"

void Pokemon::getType1() 
{
    std::cout << type;
}

void Pokemon::getType2() 
{
	std::cout << secondType;
}

bool Pokemon::commonType(const Pokemon obj) const
{
    if (obj.type == type || (obj.secondType != "" && obj.secondType == type) || (secondType != "" && obj.type == secondType) || (obj.secondType != "" && obj.secondType == secondType))
    {
        return 1;
    }
    return 0;
}

void Pokemon::print() const
{
    std::cout << pokemon << ": " << type;
    if (secondType != "")
    {
        std::cout << " " << secondType;
    }
}
