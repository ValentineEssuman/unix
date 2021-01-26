#include <iostream>

enum {RED, YELLOW, AMBER=YELLOW, GREEN };

void printDeciVals(){
	int hexval {0xf3f2};
	int num  {0437};
	int a {'a'};

	std::cout << " Decimal value of hexval: " << hexval << std::endl;
	std::cout << " Decimal value of c: " << a << std::endl;
	std::cout << " Decimal value of num: " << num << std::endl;
}

void definitors(){
	int intvar = 5;
	int *intvarptr = &intvar;
	int &intref = intvar;
	std::cin >> invalue;
	
	const int konst = invalue;
	intvarptr ++;
	intref++;

	std::cout << intvar;
}

void lineHyphenRead(){
	char line;
	std::cout << "Enter word: ";
	std::cin >> line;
	std::cout << line;
}

int main(){
	//printDeciVals();
	lineHyphenRead();
	
	return 0;
}
