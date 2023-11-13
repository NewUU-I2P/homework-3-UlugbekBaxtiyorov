#include <iostream>
#include "problems/problem_1.cpp"
#include "problems/problem_2.cpp"
#include "problems/problem_3.cpp"
#include "problems/problem_4.cpp"
#include "problems/problem_5.cpp"

using namespace std;

int main() {
    cout << "Problem 1\n";
    double x;
    cin>>x;
    cout<<problemSolution1(x)<<endl;
    cin>>x;
    cout<<problemSolution1(x)<<endl;
    cout << "Problem 2\n";
    cin>>x>>y>>z;
    cout<<"The maximum number is "<<problemSolution2(x,y,z)<<endl;
    cin>>x>>y>>z;
    cout<<"The maximum number is "<<problemSolution2(x,y,z)<<endl;
    cout << "Problem 3\n";
    char s;
    cin>>x;
    cin>>s;
    cout<<problemSolution3(1.5,'M')<<endl;
    cin>>x;
    cin>>s;
    cout<<problemSolution3(1.65,'F')<<endl;
    cout << "Problem 4\n";
    string str;
    cin>>str;
    cout<<problemSolution4("FF:FF:FF:FF:FF:FF")<<endl;
    cin>>str;
    cout<<problemSolution4("18:20:3F:20:AB:11")<<endl;
    cout << "Problem 5\n";
    cin>>x>>y>>s;
    cout<<problemSolution5(x,y,s)<<endl;
    cin>>x>>y>>s;
    cout<<problemSolution5(x,y,s)<<endl;
    return 0;
}
