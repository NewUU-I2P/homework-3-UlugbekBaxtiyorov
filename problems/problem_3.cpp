#include <string>
using namespace std;
string problemSolution3(float height, char S) {
    if(S=='M')
    {
        if(height<1.7)
            return "Short";
        else if(height>1.85)
            return "Tall";
        else
            return "Normal";
    }
    else
    {
        if(height<1.6)
            return "Short";
        else if(height>1.75)
            return "Tall";
        else
            return "Normal";
    }
    return "Normal";
}
