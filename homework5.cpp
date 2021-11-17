/*
Jacob Zabel
Buy any surfboard in any size and in any quanity.
At any time show the total number of surfboards of each size sold.
At any time show the total money made.
*/
#include<iostream>
#include<iomanip>
#include <fstream>
#include <algorithm>


using namespace std;
//define functions
void ShowUsage();
void MakePurchase(int& iTotalXSmall, int& iTotalSmall, int& iTotalMedium, int& iTotalLarge);
void DisplayPurchase(const int iTotalXSmall, const int iTotalSmall, const int iTotalMedium, const int iTotalLarge);
void DisplayTotal(const int iTotalXSmall, const int iTotalSmall, const int iTotalMedium, const int iTotalLarge);

int main()
{
	//variables
	char choice;
	int iTotalXSmall, iTotalSmall, iTotalMedium, iTotalLarge;
	iTotalSmall = iTotalMedium = iTotalLarge = iTotalXSmall= 0;

	// Heading of the program

	cout << "********************************************************" << endl;
	cout << "***** Welcome to my Johnny Utah's PointBreak Surf Shop *****" << endl;
	cout << "********************************************************" << endl << endl;
	cout << endl;
	 
	//menu
	ShowUsage();
	cout << "Please enter selection : ", cin >> choice;
	cout << endl;
	while (tolower(choice) != 'q')
	{
		if (tolower(choice) == 's')
		{
			ShowUsage();
		}
		else if (tolower(choice) == 'p')
		{
			MakePurchase( iTotalXSmall, iTotalSmall, iTotalMedium, iTotalLarge);
		}
		else if (tolower(choice) == 'c')
		{
			if ( iTotalXSmall == 0 && iTotalSmall == 0 && iTotalMedium == 0 && iTotalLarge == 0)
			{
				cout << "No purchase made yet." << endl; // error saying you have not bought anything
			}
			else
			{
				DisplayPurchase( iTotalXSmall, iTotalSmall, iTotalMedium, iTotalLarge);
			}
		}
		else if (tolower(choice) == 't')
		{
			if (iTotalXSmall == 0 && iTotalSmall == 0 && iTotalMedium == 0 && iTotalLarge == 0)
			{
				cout << "No purchase made yet." << endl; // error saying you have not bought anything
			}
			else
			{
				DisplayTotal( iTotalXSmall, iTotalSmall, iTotalMedium, iTotalLarge);
			}

		}
		else
		{
			cout << "Invalid choice!" << endl;
		}

		cout << endl << "Please enter selection: ", cin >> choice;
	}
	cout << "Thank you" << endl;
}

void ShowUsage()//  A function to show the user how to use the program.
{
	
	cout << "To show program usage 'S'" << endl;
	cout << "To purchase a surfborad press 'P'" << endl;
	cout << "To display current purchases price 'C'" << endl;
	cout << "To display total amount do press 'T'" << endl;
	cout << "To quit the program press 'Q'" << endl << endl;
	
}

void MakePurchase(int& iTotalXSmall, int& iTotalSmall, int& iTotalMedium, int& iTotalLarge)
{
	int quantity = 0;
	char size;

	// Asks for purchase
	cout << "Please enter the quanity and type (X=XXX-small, S=small, M=medium, L=large) of surfboard you would like to purchase:", cin >> quantity >> size;

	if (tolower(size) == 's')
	{
		iTotalSmall = iTotalSmall + quantity;
	}
	else if (tolower(size) == 'x')
	{
		iTotalXSmall = iTotalXSmall + quantity;
	}
	else if (tolower(size) == 'm')
	{
		iTotalMedium = iTotalMedium + quantity;
	}
	else if (tolower(size) == 'l')
	{
		iTotalLarge = iTotalLarge + quantity;
	}
}

void DisplayPurchase(const int iTotalXSmall, const int iTotalSmall, const int iTotalMedium, const int iTotalLarge)
{
	if (iTotalXSmall > 0)
	{
		cout << "The total number of XXX-small surfboards is " << iTotalXSmall << endl;
	}	if (iTotalSmall > 0)
	{
		cout << "The total number of small surfboards is " << iTotalSmall << endl;
	}
	if (iTotalMedium > 0)
	{
		cout << "The total number of medium surfboards is " << iTotalMedium << endl;
	}
	if (iTotalLarge > 0)
	{
		cout << "The total number of large surfboards is " << iTotalLarge << endl;
	}
}

void DisplayTotal(const int iTotalXSmall, const int iTotalSmall, const int iTotalMedium, const int iTotalLarge)
{
	//varibles
	const double cost_xsmall = 150.00;
	const double cost_small = 175.00;
	const double cost_medium = 190.00;
	const double cost_large = 200.00;
	double total = 0;
	double total_xs,total_s, total_m, total_l;
	total_xs= total_s = total_m = total_l = 0;
	cout << fixed << setprecision(2);

	if (iTotalXSmall > 0)
	{
		total_xs = iTotalXSmall * cost_xsmall;
		cout << "The total number of XXX-small surfboards is " << iTotalXSmall << " at a total of $" << total_xs << endl;
		total = total + total_xs;
	}
	if (iTotalSmall > 0)
	{
		total_s = iTotalSmall * cost_small;
		cout << "The total number of small surfboards is " << iTotalSmall << " at a total of $" << total_s << endl;
		total = total + total_s;
	}
	if (iTotalMedium > 0)
	{
		total_m = iTotalMedium * cost_medium;
		cout << "The total number of medium surfboards is " << iTotalMedium << " at a total of $" << total_m << endl;
		total = total + total_m;
	}
	if (iTotalLarge > 0)
	{
		total_l = iTotalLarge * cost_large;
		cout << "The total number of large surfboards is " << iTotalLarge << " at a total of $" << total_l << endl;
		total = total + total_l;
	}
	cout << "Amount due: $" << total << endl;
}