#include <string>
using namespace std;
string problemSolution3(float height, char S) {
    if(S=='M')
    {
        if(height<170.0)
            return "Short";
        else if(height>185.0)
            return "Tall";
        else
            return "Normal";
    }
    else
    {
        if(height<160.0)
            return "Short";
        else if(height>175.0)
            return "Tall";
        else
            return "Normal";
    }
    return "Normal";
}
