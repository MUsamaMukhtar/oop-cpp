
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>

using namespace std;

int main()
{
    int num ; 
  
    do{
          cout << "Enter any number between 1 - 10 : " << endl;
          cin >> num ;
          if(num <= 0 ){
              cout << "You entered invalid number " << endl;
          }
    }while(num<1 || num>10);
    switch (num){
        case 1 :
        cout << num << " : i" <<endl;
        break;
        case 2 :
        cout << num << " : ii" <<endl;
        break;
        case 3 :
        cout << num << " : ii" <<endl;
        break;
        case 4 :
        cout << num << " : iv" <<endl;
        break;
        case 5 :
        cout << num << " : v" <<endl;
        break;
        case 6 :
        cout << num << " : vi" <<endl;
        break;
        case 7 :
        cout << num << " : vii" <<endl;
        break;
        case 8 :
        cout << num << " : viii" <<endl;
        break;
        case 9 :
        cout << num << " : ix" <<endl;
        break;
        case 10 :
        cout << num << " : x" <<endl;
        break;
    }
    
    return 0;
}
