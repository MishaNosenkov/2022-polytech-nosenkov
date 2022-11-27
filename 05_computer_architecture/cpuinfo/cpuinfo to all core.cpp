#include <iostream>
#include <fstream>
#include <cstring>
#include <unistd.h>
void show_cpuinfo()
{
    char parameter[20];
    int v[10][12];
    int v1[10][12];
    int core = 0;
  // std::ifstream in("/proc/stat", std::ios_base::in);
    std::ifstream in;
    in.open("/proc/stat", std::ios_base::in);
    while(in.good())
    {
        in >> parameter;
        
        if(strstr(parameter, "cpu") != NULL )
        {
           // std::cout << parameter << " ";
            for(int i = 0; i < 10; i++)
            {
                in >> v[i][core];
              //  std::cout << v[i] << " ";
            }
            core++;
           // std::cout << std::endl;
        }    
            
    }
    in.close();
    sleep(1);
    core = 0;
    in.open("/proc/stat", std::ios_base::in);
    while(in.good())
    {
        in >> parameter;
        
        if(strstr(parameter, "cpu") != NULL )
        {
          //  std::cout << parameter << " ";
            for(int i = 0; i < 10; i++)
            {
                in >> v1[i][core];
               // std::cout << v1[i] << " ";
            }
            core++;
            //std::cout << std::endl;
        }    
            
    }
    in.close();
    std::cout << "avg cpu load : ";
    for (int j = 0; j < core; j++)
    {
        int ud = v1[0][j] - v[0][j];
        int nd = v1[1][j] - v[1][j];
        int sd = v1[2][j] - v[2][j];
        int id = v1[3][j] - v[3][j];
        int total = ud + nd + sd + id;
        float avg = 100*(ud+nd+sd)/total;
        std::cout << "core " << j << " "  << avg << "% ";
    }
    std::cout << std::endl;
        
    }

int main()
{
    while(true)
    {
        show_cpuinfo();
    }

  return 0;
}
