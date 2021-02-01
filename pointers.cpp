//Understanding the Pointers
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
    
    string aword;
    cin >> aword;
    getline(cin, aword); //accepting in word

    //Displaying word
    cout << "The initial word is: " << aword << endl;

    //converting the word to a character array
    char *charString = new char [aword.length()+1];
    strcpy(awoord, charString.c);

    
}