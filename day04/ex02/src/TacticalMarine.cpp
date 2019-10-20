#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout<<"Tactical Marine ready for battle"<<std::endl;
}
TacticalMarine::TacticalMarine(const TacticalMarine &cp)
{
	(void)cp;
}
TacticalMarine::~TacticalMarine()
{
	std::cout<<"Aaargh ..."<<std::endl;
}
TacticalMarine &TacticalMarine::operator=(const TacticalMarine &sm)
{
	(void)sm;
	return (*this);
}
TacticalMarine* TacticalMarine::clone() const
{
	return(new TacticalMarine());
}
void TacticalMarine::battleCry() const
{
	std::cout<<"For the holy PLOT !"<<std::endl;
}
void TacticalMarine::rangedAttack() const
{
	std::cout<<"* attacks with bolter *"<<std::endl;
}
void TacticalMarine::meleeAttack() const
{
	std::cout<<"* attacks with chainsword *"<<std::endl;
}