#ifndef PONY_HPP
# define PONY_HPP
# include <iostream>
# include <string>

class Pony
{
private:
    std::string type;
public:
            Pony();
            Pony(std::string type);
            ~Pony();
    void    eating();
};
#endif