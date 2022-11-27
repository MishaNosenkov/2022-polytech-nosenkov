#include <iostream>
#include <fstream>
#include <cstring>
#include <unistd.h>
void show_cpuinfo()
{
    char parameter[20];
    int v[10];
    int v1[10];
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
                in >> v[i];
              //  std::cout << v[i] << " ";
            }
           // std::cout << std::endl;
        }    
            
    }
    in.close();
    sleep(1);
    in.open("/proc/stat", std::ios_base::in);
    while(in.good())
    {
        in >> parameter;
        
        if(strstr(parameter, "cpu") != NULL )
        {
          //  std::cout << parameter << " ";
            for(int i = 0; i < 10; i++)
            {
                in >> v1[i];
               // std::cout << v1[i] << " ";
            }
            //std::cout << std::endl;
        }    
            
    }
    in.close();
    int ud = v1[0] - v[0];
    int nd = v1[1] - v[1];
    int sd = v1[2] - v[2];
    int id = v1[3] - v[3];
    int total = ud + nd + sd + id;
    float avg = 100*(ud+nd+sd)/total;
    std::cout << "avg cpu load = " << avg << " %" << std::endl;
}

int main()
{
    while(true)
    {
        show_cpuinfo();
    }

  return 0;
}
