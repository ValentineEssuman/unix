#include <iostream>
#include <stdio.h>
#include <cstring>

int max = 0;
char largestStr;
using namespace std;

int main(){
    typedef string strarray[10];

    strarray newArray;

    for (int i =1; i<=2; i++){
         cin >> newArray[i];
     }
    
    for (int i =1; i<=2; i++){
        if (newArray[i].length() >= max){
            largestStr = newArray[i];
            max = newArray[i].length();
        }
         //cout << newArray[i] << endl;
    }
    cout <<"Largest string: " << largestStr << endl;

    
    return 0;
}

