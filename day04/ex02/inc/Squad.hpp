#ifndef SQUAD_HPP
# define SQUAD_HPP
# include "ISquad.hpp"

class Squad : public ISquad
{
private:
	int			size;
	ISpaceMarine **marines;
public:
	Squad();
	Squad(const Squad &sq);
	~Squad();
	Squad &operator=(const Squad &cp);
	int				getCount() const;
	ISpaceMarine	*getUnit(int) const;
	int 			push(ISpaceMarine*);
	void 			freeMarines();
};

#endif
