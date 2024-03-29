#include <iostream>
#include <cmath>
#include <cstdlib>
#include <fstream>

using namespace std;

int main() {
	cout << "topology: 2 4 1" << endl;

	ofstream myfile;
	myfile.open("sampleTrainingData.txt");
	int size = 2000;

	for (int i = 0; i <= size; i++) {
		int n1 = (int)(2.0 * rand() / RAND_MAX);
		int n2 = (int)(2.0 * rand() / RAND_MAX);
		int t = n1 ^ n2; //should be 0 or 1

		//cout << "in: " << n1 << ".0 " << n2 << ".0 " << endl;
		myfile << "in: " << n1 << ".0 " << n2 << ".0 " << endl;

		//cout << "out: " << t << ".0" << endl;
		myfile << "out: " << t << ".0" << endl;
	}

	myfile.close();
}