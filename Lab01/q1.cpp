// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std ;
int main() {
    int num1 , num2 ;
    cout << "ENTER TWO NUMBERS : " << endl;
    cout << "ENTER NO 1 : ";
    cin  >> num1;
    cout << "ENTER NO 2 : ";
    cin  >> num2;
    if(num1>num2){
        cout << "NUMBER " << num1 <<" is greater than " << num2 ;
    }else if(num1==num2){
        cout << "NUMBER " << num1 <<" is equal to " << num2 ;
    }else {
     cout << "NUMBER " << num1 <<" is equal to " << num2 ;

    }

    return 0;
}