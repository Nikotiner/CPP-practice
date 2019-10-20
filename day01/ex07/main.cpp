#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    std::ifstream stream;
    std::ofstream file;
    std::string line;
    std::string s;
    std::string s1 (argv[2]);
    std::string s2 (argv[3]);

    if (argc != 4)
    {
        std::cout << "Not 3 arguments" << std::endl;
        return (0);
    }
    stream.open(argv[1]);
    std::cout << argv[1] <<std::endl;
    if (stream.is_open()){
        while ( getline (stream, line) )
            s += line + '\n';
    }
    else
    {
        std::cout << "Can't open file" <<std::endl;
        return (0);
    }
    s.replace(s.find(s1), s1.length(), s2);
    std::cout << s;
    file.open(std::string(argv[1])+".replace");
    file << s;
    file.close();
    stream.close();
    return (0);
}
