// Chapter 6 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;

//all the global variables needed
const double GALLONRATIO=1.0/110;//gallons per square feet
const double LABORRATIO=8.0/110;//labor per square feet
const double LABORCHARGE=25;//labor per hour cost in dollars

//was causing an issue without, function prototypes
int getRooms();

double getSQFT(int ROOMNUMBER);

double getPricePerGallon(int ROOMNUMBER);
int calculateGallons(double SQFT);
double calculateLaborHours(double SQFT);
void displayEstimate(double paintCharge, int gallonsNeeded, double laborCharge, double laborHours);






int main()
{//initializes variables, making them start at 0
	double paintCharge = 0;
	double laborCharge = 0;
	double laborHours = 0;
	int gallonsNeeded = 0;

	int ROOMNUMBER = getRooms();
	for (int i = 1; i <= ROOMNUMBER; i++) {//looks till i is fasle
		//calls onto different modules
		//both of these should be the input
		double SQFT = getSQFT(i);
		double PPRICE = getPricePerGallon(i);



		int GALS = calculateGallons(SQFT);
		double LABOR = calculateLaborHours(SQFT);

		//accumulation of the value
		gallonsNeeded += GALS;
		paintCharge += GALS * PPRICE;
		laborHours += LABOR;
		laborCharge += LABOR * LABORCHARGE;








	}

	//output module
	displayEstimate(paintCharge, gallonsNeeded, laborCharge, laborHours);

	return 0;



}















//This module will get the number of rooms
//input
int getRooms() {
	int ROOMS;
	do {
		cout << "How many rooms will be painted?\n";
		cin >> ROOMS;
		//can't have a negative amount of rooms
	} while (ROOMS < 1);//will loop until this condition is false

	return ROOMS;//returns to caller


		


}
//this module will get the amount of square feet in a room
double getSQFT(int ROOMNUMBER) {//The user inputs number of rooms, so this module will repeat for each room
	double SQFT;
	do {
		cout << "How many square feet is in room " << ROOMNUMBER << endl;
		cin >> SQFT;



		//You cannot have a negative amount of rooms or squar feet

	} while (SQFT <= 0);//will loop until this condition is false
	return  SQFT;//returns value to caller


}


//This module will be to get the price per gallon
double getPricePerGallon(int ROOMNUMBER) {
	double GALLPRICE;//gallon price

	do {
		cout << "What is price per gallon (Atleast 10) of paint in room " << ROOMNUMBER << endl;
		cin >> GALLPRICE;



		//The condition states price must be atleast 10
	} while (GALLPRICE < 10);//will loop until this condition is false
	return GALLPRICE;//returs value to caller

}

//this module calculates the cost of paint
int calculateGallons(double SQFT) {


	return ceil(SQFT * GALLONRATIO);//rounds up to whole number like in directions



}

//calculates the time for labor
double calculateLaborHours(double SQFT) {

	return SQFT * LABORRATIO;//returns value to caller





}

//this module displays everything, the estimate
void displayEstimate(double paintCharge, int gallonsNeeded, double laborCharge, double laborHours) {//made it the same variables so its more simple to understand how they connect

	cout << fixed << setprecision(2);
	cout << "PAINT JOB ESTIMATE:\n";
	cout << "Gallons of paint required to purchase:\t" << gallonsNeeded << endl;
	cout << "Hours of labor required to paint:\t" << laborHours << endl;
	cout << "Cost of paint:\t$" << paintCharge << endl;
	cout << "Cost of labor:\t$" << laborCharge << endl;
	cout << "Total cost of job:\t$" << (laborCharge+paintCharge) << endl;

}//these are all the outputs




