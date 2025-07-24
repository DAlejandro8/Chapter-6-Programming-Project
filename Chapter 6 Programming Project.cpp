// Chapter 6 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

const int LOWER = 0;
const int UPPER = 20;



double getCelsius(double F) {

    

    return (F-32)*5/9;


}

int main()
{
    cout << "Celsius Temperature Data Table \n\n";
    cout << "___________________\n";
    cout << setw(6)<<"Fahrenheit"<<setw(10)<<"Celsius\n";


    cout << fixed << setprecision(1);


    for (int i = LOWER; i <= UPPER; i++) {

        double C = getCelsius(i);
        cout<<setw(10) << i << setw(10)<<C << endl;

    }

    return 0;
}








