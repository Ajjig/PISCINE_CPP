#pragma once
#include <iostream>
#include <string>
#define string std::string

class ClapTrap {
    public:
        ClapTrap(string name);
        void attack(const string & target);
        void takeDamage(unsigned int damageAmount);
        void beRepaired(unsigned int repairAmount);
        void setName();
        string getName(string name);
        ~ClapTrap();
    private:
        string name;
        unsigned int hitPoints;
        unsigned int energyPoints;

};