//Caluating Mode of input numbers
#include <iostream>
#include <cstring>

using namespace std;

int main(void){
    char str[100];
    char holder[100];

    cout << "ENter a line: ";
    while(cin.getLIne(str, 100)){
        if(str != nullptr){
            int index = 0;
            for (int i=0; i <100; i++){
                if (str[i] == '\0') break;
                if (str[i] == '-' && i != 0){
                    holder[index] = '\0';
                    cout << "[" << strlen(holder) << "]" << "\t" << holder << endl;
                    index = 0;
                    continue;
                }

                holder[index] = str[i];
                index +=1;          
            }
        }
        cout << "Enter a string: ";
    }
    return 0;
}