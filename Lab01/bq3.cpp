
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>

using namespace std;

int main()
{
    double rainfall=0 ;
    for(int i = 1; i<=25;i++){
        rainfall += 1.5 ;
        
        cout << "No of milimiters risen : " << rainfall << " in year " << i << endl;
    }
    return 0;
}
