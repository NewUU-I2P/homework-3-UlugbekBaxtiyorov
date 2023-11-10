#include <string>
#include <sstream>
#include <cctype>
using namespace std;
string problemSolution4(const string &macAddress) 
{
    string str="";
    int array[6]={10,11,12,13,14,15};
    str+=macAddress[0];
    str+=macAddress[1];
    if(str=="FF")
        return "Broadcast";
    if(isdigit(str[1]))
    {
        int num=str[1]-'0';
        if(num%2==0)
            return "Unicast";
        else
            return "Multicast";
    }
    else
    {
        int num=array[str[1]-'A'];
        if(num%2==0)
            return "Unicast";
        else
            return "Multicast";
    }
    return "Unicast";
}
