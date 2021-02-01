
//Understanding the Static Objects
#include <iostream>

int counter ();
const std::string& getMonth (int mon);
void foo(int i);

int main() {

    std::cout << "1st call: " << counter() << std::endl;
    std::cout << "2nd call: " << counter() << std::endl;
    std::cout << "Get Month: " << getMonth(2) << std::endl;
    std::cout << "Get Month: " << foo(1) << std::endl;

}

int counter(){
    static int calls {0};
    return ++calls;
}

// afunction to convert from month number to one
const std::string& getMonth (int mon){
    
    static std::string name[] {
        "curious month", "Jan", "feb", "mar", "apr", "may", "jun",
        "jul", "aug", "sep", "oct","nov", "dec"
    };

    return (mon < 1 || mon > 12) ? name[0] : name[mon];
}

// A function to dispatch a function from a static table
void  zero (){ std::cout << "zero" << "std::endl"; }
void  one (){ std::cout << "one" << "std::endl"; }
void  two (){ std::cout << "two" << "std::endl"; }
void  three (){ std::cout << "three" << "std::endl"; }
void  four (){ std::cout << "four" << "std::endl"; }

void foo(int i){

    static void (*lookup[])() {zero, one, two, three, four};
    lookup[i]();

}

int dynamicMain(){
    int *pointer (new int);
    *pointer = 3;
    delete pointer;
}


