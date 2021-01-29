#include<iostream>

/* int f()
{
   std::cout << "f called ";
   return 1;
}

int g()
{
   std::cout << "g called ";
   return 0;
}

int count() {
    static int c;

    return c;
}
 */

int i = 3;
const int &ip = i;
int a;
int __a;
bool true;
double Double;
int main()
{
        std::cout << &ip;
   return 0;
}