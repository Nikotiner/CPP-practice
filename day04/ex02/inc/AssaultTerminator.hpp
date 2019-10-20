#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP
# include "ISpaceMarine.hpp"
class AssaultTerminator : public ISpaceMarine
{
public:
	AssaultTerminator();
	AssaultTerminator(const AssaultTerminator &cp);
	~AssaultTerminator();
	AssaultTerminator* clone() const;
	AssaultTerminator &operator=(const AssaultTerminator &sm);
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};
#endif