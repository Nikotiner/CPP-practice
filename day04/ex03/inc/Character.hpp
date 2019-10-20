#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include "AMateria.hpp"

class Character
{
	private:
		std::string	name;
		AMateria *materia[4];
	public:
		Character();
		Character(std::string name);
		Character(const Character &cp);
		~Character();
		Character &operator=(const Character & ch);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		void cleanMateria();
};

#endif