// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std ;
int main() {
    int length1,width1,length2,width2,area1,area2;
    cout << "Calculate the area of rectangle   " << endl;
    cout << "Enter the length of rectangle one : ";
    cin >> length1 ;
    cout << "Enter the width of rectangle one : ";
    cin >> width1 ;
    cout << "Area of rectangle one : ";
    area1 = length1*width1 ;
    cout  << area1 << endl;
    cout << "Enter the length of rectangle two : ";
    cin >> length2 ;
    cout << "Enter the width of rectangle two : ";
    cin >> width2 ;
    cout << "Area of rectangle two : ";
    area2 = length2*width2 ;
    cout  << area1 << endl;
    if(area1>area2){
        cout << "Area of rectangle one is greater than two " ;
    }else if(area2>area1){
        cout << "Area of rectangle two is greater than one " ;
    }else {
        cout << "Area of rectangle one is equal to two " ;
    }
    return 0;
}