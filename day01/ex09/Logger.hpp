#ifndef LOGGER_HPP
# define LOGGER_HPP
# include <iostream>
# include <fstream>
class Logger
{
private:
    std::string fileName;
    void        (Logger::*pointer[2])(std::string str);
    void        logToConsole(std::string str);
    void        logToFile(std::string str);
    std::string makeLogEntry(std::string str);
public:
    Logger();
    ~Logger();
    void    log(std::string const & dest, std::string const & message);
};

#endif