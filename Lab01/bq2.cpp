
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>

using namespace std;

int main()
{
    int count = 0 ;
    for(int i =0 ; i<127;i++){
        cout << char(i) ;
        count ++ ;
        if(count%16==0){
            cout << endl;
        }
    }
    return 0;
}
