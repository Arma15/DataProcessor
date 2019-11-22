// DataProcessor.cpp : Program will calculate info in specified text file(s)

#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<iterator>
#include<algorithm>
#include<sstream>
#include<iomanip>
#include<set>
using namespace std;

#include "calculator.h"

// argc = number of arguments passed
// argv = vector of arguments passed to program
int main(int argc, char* argv[])
{
	int selection = argc;
	stringstream ss;
	string input("input.txt"), output("output.txt");
	ifstream in;
	ofstream out;
	cout << "You entered " << argc - 1 << " arguments." << endl;
	if (argc < 2)
	{
		cout << "No input filename entered." << endl;
	}
	else
	{
		input = argv[1];
		in.open(input);
	}

	if (argc < 3)
	{
		cout << "No output filename entered." << endl;
	}
	else
	{
		input = argv[2];
		out.open(output);
	}

	if (in.fail())
	{
		cout << "Filename: " << input << " has failed to open, check location of file." << endl;
	}
	else
	{
		cout << "Filename: " << input << " has opened successfully." <<endl;
	}

	if (out.fail())
	{
		cout << "Filename: " << output << " has failed to open, check location of file." << endl;
	}
	else
	{
		cout << "Filename: " << output << " has opened successfully." << endl;
	}

	cin.get();

	switch (selection)
	{
	case 1:
		// Do designated calculations for case 1
		break;
	case 2:
		// Do designated calculations for case 2
		break;
	case 3:
		// Do designated calculations for case 3
		break;
	case 4:
		// Do designated calculations for case 4
		break;
	default:
		// If none match ..
		break;
	}

	in.close();
	out.close();

	return 0;
}
