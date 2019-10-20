#include "Squad.hpp"
#include "TacticalMarine.hpp"

Squad::Squad() : size(0), marines(0)
{}
Squad::Squad(const Squad &sq) : size(0)
{
	this->freeMarines();
	this->size = sq.size;
	this->marines = new ISpaceMarine*[sq.size];
	for (int i = 0; i < sq.size; i++)
		this->marines[i] = new TacticalMarine();
}
Squad::~Squad()
{
	this->freeMarines();
}
Squad			&Squad::operator=(const Squad &cp)
{
	this->freeMarines();
	this->size = cp.size;
	this->marines = new ISpaceMarine*[cp.size];
	for (int i = 0; i < cp.size; i++)
		this->marines[i] = new TacticalMarine();
	return (*this);
}
int				Squad::getCount() const{return (this->size);}
ISpaceMarine	*Squad::getUnit(int i) const
{
	if (i >= 0 && i < this->size)
		return (this->marines[i]);
	return (0);
}
void 			Squad::freeMarines()
{
	for (int i = 0; i < this->size; i++)
		delete this->marines[i];
	if (this->size)
		delete this->marines;
	this->size = 0;
	this->marines = 0;
}
int 			Squad::push(ISpaceMarine* marine)
{
	if (!marine)
		return this->size;
	for (int i = 0; i < this->size; i++) {
		if (this->marines[i] == marine)
			return this->size;
	}
	ISpaceMarine 	**tmpMarines = new ISpaceMarine*[this->size + 1];
	for (int i = 0; i < this->size; i++)
		tmpMarines[i] = this->marines[i];
	tmpMarines[this->size] = marine;
	delete this->marines;
	this->marines = tmpMarines;
	return (++this->size);
}