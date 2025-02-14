
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>

using namespace std;

int main()
{
    int sum = 0 ;
    int num ; 
    do{
        cout << "Enter any positive number : " ;
        cin >> num ;
    }while(num<=0);
    for(int i=1 ; i<num;i++){
      sum += i;
    }
    cout << "Sum : " << sum << endl;
    return 0;
}
