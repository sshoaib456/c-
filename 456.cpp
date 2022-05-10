#include <iostream>
using namespace std;

int main() {
    int num=5 , no=2;
    
    if ((num==5) || (no==3))
    {
        cout<<"OK";
    }
    else if (num==10)
    {
        cout<<"Not OK";
    }
    else
    {
        cout<<"Error";
    }
    
    return 0;
}