/* Jacob Zabel
 11/6/2021 Week three Homework Assingment
rompt and retrieve the following input from the user (through the console):
Item name
Is the item fragile (add in $2.00 if the item is fragile)
The order total (without shipping)
The destination to which the item will be shipped (USA, Canada, Australia)  
*/


#include<iostream>
#include<iomanip>
#include<string> 
#include <fstream>
#include <algorithm> // so  I can save string as a const
 
using namespace std;

float total_cost;
float shipping_cost;
const int a = 49;
string item;
char fragile;
float order_total;
const char n = '.';
string des;
const string invaild = " Invaild entry, exiting";
const string ask_fragile = "Is the item fragile? (y=yes/n=no)";
const string intro = "ITCS 2530 = Programming Assignment for week #3";
const string ask_item = "Please enter the item name (no spaces)";
const string ask_total = "Please enter your order total";
const string ask_des = "Please enter destination. (usa/can/aus/mars)";
const string print_item = "Your item is";
const string print_ship = "Your shipping cost is";
const string print_des = "You are shipping to";
const string print_total = "Your Total shipping cost are";
const string thankyou = "Thank You!";
const float cost_fragile = 2;
const float order_range_a = 50.00;
const float order_range_b = 100.00;
const float order_range_c = 150.00;
const float usa1 = 6.00;
const float usa2 = 9.00;
const float usa3 = 12.00; //also used for can second shipping value 
const float can1 = 8.00;
const float can3 = 15.00;
const float aus1 = 10.00;
const float aus2 = 14.00;
const float aus3 = 17.00;

int main(){
	/*Prints out the program title*/
	cout << string(a, n) << endl;
	cout << intro << endl; 
	cout << string(a, n) << endl << endl;

	/*Gets the all of the inputs*/
	cout << ask_item << setw(12) << setfill('.') << ":"; cin >> item;
	//fragile-------------------------------
	cout << ask_fragile << setw(17) << setfill('.') << ":"; cin >> fragile; //Asks if it is fragile
	if (fragile == 'y' || fragile == 'Y') {

		total_cost += cost_fragile;
	}
	else if (fragile != 'n' && fragile != 'N') { //else show error

		cout << invaild << endl;

		return 0;

	}
	//Asks for total
	cout << ask_total << setw(21) << setfill('.') << ":"; cin >> order_total;
	total_cost= cost_fragile + order_total;
	//Asks for destination
	cout << ask_des << setw(11) << setfill('.') << ":"; cin >> des;

	if (des == "can" || des == "usa" || des == "aus"|| des== "mars") {
		cout << endl << endl;
	}	
	else if (des != "can" || des != "usa" || des != "aus"|| des != "mars") {
		cout << invaild << endl;

		return 0;
	}
	//-----------------prints item---------------
	transform(item.begin(), item.end(), item.begin(), std::toupper);
	cout << print_item << setw(31) << setfill('.') << right <<item << endl;





	/*------------------------Figures out USA shipping-------------*/
	if (des == "usa") {
		if (order_total < order_range_a) {
			shipping_cost = usa1;
			total_cost = total_cost + shipping_cost;
			cout << print_ship << setw(19) << setfill('.') << "$" << fixed << setprecision(2) << shipping_cost << endl;

		}
		else if (order_range_a < order_total && order_total < order_range_b) {
			shipping_cost = usa2;
			total_cost = total_cost + shipping_cost;
			cout << print_ship << setw(19) << setfill('.') << "$" << fixed << setprecision(2) << shipping_cost << endl;
		}
		else if (order_range_b < order_total && order_total <= order_range_c) {
			shipping_cost = usa3;
			total_cost = total_cost + shipping_cost;
			cout << print_ship << setw(19) << setfill('.') << "$" << fixed << setprecision(2) << shipping_cost << endl;
		}
		else if(order_range_c < order_total ) {
			shipping_cost = 0.00;
			cout << print_ship << setw(19) << setfill('.') << "$" << fixed << setprecision(2) << shipping_cost << endl;
		}

	}
	/*------------------------Figures out CAN shipping-------------*/
	else if (des == "can") {
		if (order_total < order_range_a) {
			shipping_cost = can1;
			total_cost  = total_cost + shipping_cost;
			cout << print_ship << setw(19) << setfill('.') << "$" << fixed << setprecision(2) << shipping_cost << endl;

		}
		else if (order_range_a < order_total && order_total < order_range_b) {
			shipping_cost = usa3;
			total_cost  = total_cost + shipping_cost;
			cout << print_ship << setw(19) << setfill('.') << "$" << fixed << setprecision(2) << shipping_cost << endl;
		}
		else if (order_range_b < order_total && order_total < order_range_c) {
			shipping_cost = can3;
			total_cost = total_cost + shipping_cost;
			cout << print_ship << setw(19) << setfill('.') << "$" << fixed << setprecision(2) << shipping_cost << endl;
		}
		else if (order_range_c < order_total) {
			shipping_cost = 0.00;
			cout << print_ship << setw(19) << setfill('.') << "$" << fixed << setprecision(2) << shipping_cost << endl;
		}
	}
	/*------------------------Figures out AUS shipping-------------*/
	else if (des == "aus") {
		if (order_total < order_range_a) {
			shipping_cost = can1;
			total_cost  = total_cost + shipping_cost;
			cout << print_ship << setw(19) << setfill('.') << "$" << fixed << setprecision(2) << shipping_cost << endl;

		}
		else if (order_range_a < order_total && order_total < order_range_b) {
			shipping_cost = usa3;
			total_cost  = total_cost + shipping_cost;
			cout << print_ship << setw(19) << setfill('.') << "$" << fixed << setprecision(2) << shipping_cost << endl;
		}
		else if (order_range_b < order_total && order_total < order_range_c) {
			shipping_cost = can3;
			total_cost  = total_cost + shipping_cost;
			cout << print_ship << setw(19) << setfill('.') << "$" << fixed << setprecision(2) << shipping_cost << endl;
		}
		else if (order_range_c < order_total) {
			shipping_cost = 0.00;
			cout << print_ship << setw(19) << setfill('.') <<"$" << fixed << setprecision(2) << shipping_cost << endl;
		}
	
	}
	else if (des == "mars") {
		if (order_total < order_range_a) {
			shipping_cost = 25;
			total_cost = total_cost + shipping_cost;
			cout << print_ship << setw(19) << setfill('.') << "$" << fixed << setprecision(2) << shipping_cost << endl;

		}
		else if (order_range_a < order_total && order_total < order_range_b) {
			shipping_cost = 35;
			total_cost = total_cost + shipping_cost;
			cout << print_ship << setw(19) << setfill('.') << "$" << fixed << setprecision(2) << shipping_cost << endl;
		}
		else if (order_range_b < order_total && order_total < order_range_c) {
			shipping_cost = 50;
			total_cost = total_cost + shipping_cost;
			cout << print_ship << setw(19) << setfill('.') << "$" << fixed << setprecision(2) << shipping_cost << endl;
		}
		else if (order_range_c < order_total) {
			shipping_cost = 0.00;
			cout << print_ship << setw(19) << setfill('.') << "$" << fixed << setprecision(2) << shipping_cost << endl;
		}


	}
/*Prints destination*/
	
	transform(des.begin(), des.end(), des.begin(), std::toupper);
	cout << print_des << setw(23) << setfill('.') << (des) << endl;
//total

	cout << print_total << setw(12) << setfill('.') << "$" << fixed << setprecision(2) << total_cost << endl << endl;
	cout << setw(49) << setfill('-') <<  thankyou << endl;
//--------------outputs to txt file-------------------
	ofstream myfile;
	myfile.open("Order.txt");
	myfile << string(a, n) << endl;
	myfile << intro << endl;
	myfile << string(a, n) << endl << endl;
	myfile << ask_item << setw(12) << setfill('.') << ":" <<  item << endl;
	myfile << ask_fragile << setw(17) << setfill('.') << ":"<< fragile << endl;
	myfile << ask_total << setw(21) << setfill('.') << ":"<< order_total << endl;
	myfile << ask_des << setw(11) << setfill('.') << ":" << des << endl << endl;
	myfile << print_item << setw(31) << setfill('.') << right << item << endl;
	myfile << print_ship << setw(19) << setfill('.') << "$" << fixed << setprecision(2) << shipping_cost << endl;
	myfile << print_des << setw(23) << setfill('.') << (des) << endl;
	myfile << print_total << setw(12) << setfill('.') << "$" << fixed << setprecision(2) << total_cost << endl << endl;
	myfile << setw(49) << setfill('-') << thankyou << endl;
	myfile.close();
	return 0;

}
