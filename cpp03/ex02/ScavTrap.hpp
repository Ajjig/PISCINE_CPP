#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public:
        ScavTrap(string name);
        ScavTrap( void );
        void guardGate( void );
        ~ScavTrap();
};