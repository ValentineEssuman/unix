#include <iostream>

int main(){
	std::cout << "Enetr five numbers:";
	int mean;
	double sum = 0;
	int numbers[5];

	for (int i=0; i<=4; i++){
		cin >> numbers[i];
		sum += numbers[i];
	}

	mean = sum/5;

	std::cout << "The mean is: "<< mean;
	return 0;
}
