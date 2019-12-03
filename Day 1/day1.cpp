// Advent of Code 2019 - Day 1
#include <iostream>
#include <iomanip>
#include <math.h> 
#include <cmath>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main(void) {
	vector<double> mass;
	ifstream inputFile;
	double temp1, sumFuel;
	vector<double>::iterator i;

	sumFuel = 0;

    inputFile.open("module.txt");

	if (inputFile.fail()) {
		cout << "Error opening the File!\n\n";
		return 1;
	}

	while (inputFile >> temp1) {
		mass.push_back(temp1);
	}

	/*Calculate the total mass*/
	for (i = mass.begin(); i != mass.end(); i++) {
		sumFuel += floor(*i / 3) - 2;
	}

	/*Show us the sum*/
	cout << fixed;
	cout << "The sum of all fuel requirement are: " << sumFuel << endl;
}