
//Understanding the Static Objects
#include <iostream>

int counter ();

int main() {

    std::cout << "1st call: " << counter() << std::endl;
    std::cout << "2nd call: " << counter() << std::endl;
}

int counter(){
    static int calls {0};
    return ++calls;
}