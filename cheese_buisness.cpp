/* Jacob Zabel
 10/29/2021 Week One Homework Assingment
Prompts the user to enter the total amount of cheese produced each evening.
Outputs the number of containers needed to hold the cheese. (Round your answer to the nearest integer.)
Outputs the cost of producing the cheese.
Outputs the profit for producing cheese.*/


#include<iostream>
#include <iomanip>
#include<string> // so  I can save string as a const

using namespace std;
double contain;
double profit;
double cost;
int cheese;
double contain_amount = 2.76;
const string intro = "Stats of cheese buisness";
const string askcheese = "Please enter the total number of kilograms of cheese produced: ";
const string num_con = "The number of containers to hold the cheese is: "; 
const string cost_string = "The cost of producing " + to_string(contain) + " container(s) of cheese is: $";
const string profit_string = "The profit from producing " + to_string(contain) + " container(s) of chees is: $";
int n = 16;
char c = '*';
int a = 56;
double costc = 4.12;
double profitc = 1.45;
int main()
{
	/*Prints out Welomce to my cheesy program surrounded by astrieks*/
	cout << string(a, c) << endl;
	cout << string(n, c) << intro << string(n, c) << endl;
	cout << string(a, c) << endl << endl;
	
	/* Asks for how much cheese was produced*/
	cout << askcheese;
	cin >> cheese; 
	
	/*Get the Amout of container needed to hold cheese*/
	contain = round(cheese / contain_amount);
	cout << num_con << setw(36)<< right << contain << endl;

	/* Print out the profit and cost of the cheese*/
	cost = costc * contain;
	cout << cost_string << setw(25) << right << setprecision(2) << fixed << cost << endl;
	profit = contain * profitc;
	cout <<  profit_string << setw(22) << right << setprecision(2) << fixed << profit << endl;


}