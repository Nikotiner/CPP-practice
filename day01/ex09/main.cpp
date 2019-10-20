#include "Logger.hpp"

int main()
{
    Logger logger;

    logger.log("logToConsole", "Some log to Console!");
    logger.log("logToFile", "Some log to File!");
    logger.log("logToConsoleWrong", "Some wrong log!");
    return (0);
}