
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>

using namespace std;

int main()
{
    int month,day,year;
    cout << "Enter a month : " ;
    cin >> month ; 
    cout << "Enter a day : " ;
    cin >> day ; 
    cout << "Enter a year : " ;
    cin >> year ; 
    if(month*day == year ){
    cout << " The date is magical ";
    }else{
        cout << "The date is not magical ";
    }
    
    return 0;
}
