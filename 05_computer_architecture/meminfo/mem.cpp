#include <iostream>
#include <fstream>
#include <cstring>
void show_meminfo()
{
    char parameter[20];
    int value;
    char unit[3];
    
    int memTotal = -1;
    int memFree = -1;
    
    std::ifstream in("/proc/meminfo", std::ios_base::in);
    while(in.good())
    {

        if(strcmp(parameter, "MemTotal:") == 0)
        {
            memTotal = value; 
        }
        if(strcmp(parameter, "MemFree:") == 0)
        {
            memFree = value; 
        }
        in >> parameter >> value >> unit;
        std::cout << parameter << " " << value << unit << std::endl;
    }
    if(memTotal > 0 && memFree > 0)
    {
        int tenProcent = ((memTotal - memFree) * 10 / memTotal);
        for (int i = 0; i < 10; i++)
        {
            if(i < tenProcent) std::cout << "|";
            else std::cout << ".";
        }
        std::cout << " " << tenProcent * 10 << "%" << std::endl;
    }
    else
    {
        std::cout << "error!" << std::endl;
    }
}

int main()
{
  show_meminfo();
  return 0;
}