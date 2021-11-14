#include <iostream>

#include<iomanip>
#include <string>
#include <fstream>
using namespace std;

int main(int argc, char* argv[])

{
	// The executable name and at least one argument?

	if (argc < 2)

	{
		std::cout << "Error with input agrs.." << std::endl;

		return 1;
	}

	// For debugging purposes only

	for (int i = 0; i < argc; i++)

	{

		std::cout << i << ":" << argv[i] << std::endl;

	}

	ifstream inFile;

	inFile.open(argv[1]);

	if (!inFile)

	{

		std::cout << "Error with file name.." << std::endl;

		return 1;

	}

	cout << "********************************************************" << endl;

	cout << "**********Welcome to my Letter Count Program************" << endl;

	cout << "********************************************************" << endl <<endl;

cout << "Analyzing file '" << argv[1] << "'..." <<endl << endl;

	char ch;
	int m = 0, t = 0, z = 0;

	int v[7] = { 0 };

	while (inFile) {

		inFile.get(ch);

		if (ch == 'A' || ch == 'a')
		{
			v[0]++;
		}
		else if (ch == 'E' || ch == 'e')
		{
			v[1]++;
		}
		else if (ch == 'I' || ch == 'i')
		{
			v[2]++;
		}
		else if (ch == 'O' || ch == 'o')
		{
			v[3]++;
		}
		else if (ch == 'U' || ch == 'u')
		{
			v[4]++;
		}
		else if (ch == 'M' || ch == 'm')
		{
			m++;
		}
		else if (ch == 'T' || ch == 't')
		{
			t++;
		}
		else if (ch == 'Z' || ch == 'z')
		{
			z++;
		}
	}


	int sum = v[0] + v[1] + v[2] + v[3] + v[4];

	cout << "The number of A's: "<< setw(31) << setfill('.') << v[0] << endl;
	cout << "The number of E's: "<< setw(31)<< setfill('.') << v[1] << endl;
	cout << "The number of I's: "<< setw(31)<< setfill('.') << v[2] << endl;
	cout << "The number of O's: " << setw(31) << setfill('.') << v[3] << endl;
	cout << "The number of U's: " << setw(30) << setfill('.') << v[4] << endl;
	cout << "The number of T's: " << setw(31) << setfill('.')<< t << endl;
	cout << "The number of M's: " << setw(30) << setfill('.')<< m << endl;
	cout << "The number of Z's: " << setw(29) << setfill('.')<< z << endl;
	cout << "The vowel count is: " << setw(30) << setfill('.') << sum << endl;
	
	inFile.close();
	return 0;

}