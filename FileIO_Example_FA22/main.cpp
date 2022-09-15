#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string inputFileName = "C:/Users/busch/OneDrive - Iowa Central Community College/Documents/Visual Studio 2019/Projects/FileIO_Example_FA22/FileIO_Example_FA22/input.dat";
string outputFileName = "output.dat";

int main()
{
	ifstream infile;
	infile.open(inputFileName);
	
	if (!infile)
		cout << "Can't find file!\n";

	string readIn;

	infile >> readIn;
	cout << readIn;

	ofstream outfile;
	outfile.open(outputFileName);

	outfile << readIn;

	return 0;
}