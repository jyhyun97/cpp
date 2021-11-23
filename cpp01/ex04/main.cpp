#include <iostream>
#include <sstream>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        std::fstream origin_file;
        std::fstream replace_file;
        std::stringstream filename;
        filename << ".replace";

        char    buf[2];

        origin_file.open(argv[1]);
        replace_file.open(argv[1] + filename.str());
        
        while(!origin_file.eof())
        {
            origin_file >> buf;
            std::cout << buf;
            int i = 0;
            while (buf[i] != '\0')
            {
                if (std::strncmp(argv[2], &buf[i], std::strlen(argv[2])) == 0)
                {
                    replace_file << argv[3];
                    i += std::strlen(argv[2]) - 1;
                }
                else
                {
                    replace_file << buf[i];
                }
                i++;
            }
            replace_file << std::endl;
            std::cout << std::endl;
        }
        origin_file.close();
        replace_file.close();
    }
    return (0);
}