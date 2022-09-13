#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string inputFileName = "input.dat";

int main()
{
	ifstream infile;
	infile.open(inputFileName);
	
	string readIn;

	infile >> readIn;

	cout << readIn;

	return 0;
}