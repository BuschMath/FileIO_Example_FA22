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
	
	if (!infile)
		cout << "Can't find file!\n";

	string readIn;
	int readIn2;

	infile >> readIn;
	infile >> readIn2;
	cout << readIn << " " << readIn2 << endl;
	cout << stoi(readIn) + readIn2;

	ofstream outfile;
	outfile.open(outputFileName);

	outfile << readIn;

	return 0;
}