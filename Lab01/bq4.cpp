
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>

using namespace std;

int main()
{
    double calburn = 0  ;
    for(int i=5;i<=30;i+=5){
        calburn+=3.6*5;
        cout << "In " << i << " minutes we burn "<< calburn << endl;
    }
    return 0;
}
