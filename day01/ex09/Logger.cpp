#include "Logger.hpp"

Logger::Logger()
{
    this->pointer[0] = &Logger::logToConsole;
    this->pointer[1] = &Logger::logToFile;
}

Logger::~Logger()
{
}

void Logger::logToConsole(std::string str)
{
    std::cout << str << std::endl;
}

void Logger::logToFile(std::string str)
{
    std::ofstream file;

    file.open("file.log");
    file << str;
    file.close();
    this->fileName = "file.log";
    std::cout << "Writed to file \"file.log\"" << std::endl;
}

void    Logger::log(std::string const & dest, std::string const & message)
{
    std::string list[2] = {"logToConsole", "logToFile"};
    for (int i = 0; i < 2; i++)
    {
        if (!dest.compare(list[i]))
            (this->*pointer[i])(message);
    }
}

std::string Logger::makeLogEntry(std::string str)
{
    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);
    std::string date;

    if (now->tm_mday < 10)
		date += "0";
    date += std::to_string(now->tm_mday) + "/";
    if (now->tm_mon + 1 < 10)
        date += "0";
    date += std::to_string(now->tm_mon + 1) + "/";
    date += std::to_string(now->tm_year + 1900) + " ";
    if (now->tm_hour < 10)
        date += "0";
    date += std::to_string(now->tm_hour) + ":";
    if (now->tm_min < 10)
        date += "0";
    date += std::to_string(now->tm_min) + ":";
    if (now->tm_sec < 10)
        date += "0";
    date += std::to_string(now->tm_sec);
    return (date + " " + str);
}