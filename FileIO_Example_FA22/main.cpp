#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string inputFileName = "input.dat";
string outputFileName = "output.dat";

int main()
{
	ifstream infile;
	infile.open(inputFileName);
	
	string readIn;

	infile >> readIn;

	ofstream outfile;
	outfile.open(outputFileName);

	outfile << readIn;

	return 0;
}