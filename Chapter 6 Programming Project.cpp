// Chapter 6 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

void getRegInfo(string& regionName, int& ACC) {
    cout << "Enter Region name";
    getline(cin, regionName);

    do {

        cout << "Enter the number of accidents reported in " << regionName << endl;
        cin >> ACC;

        if (ACC<0){
            cout << "Error, you can't have negative accidents";



        }


    } while (ACC < 0);

    cin.ignore();
}

bool isLower(int F1, int F2) {

    return (F1 <= F2);


}

void showLowest() {



}


int main()
{
    std::cout << "Hello World!\n";
}








void getLength_Width(double& length, double& width) {

    do {
        cout << "What is length and width of  structure? \n";
        cin >> length;
        cin >> width;



        if (length <= 0 || width <= 0) {

            cout << "Error, please input positive value\n";






        }



    }



    while (length <= 0 || width <= 0);



}





double calcPerimeter(double L, double W) {

    return 2 * (L + W);


}

double calcArea(double l, double w) {

    return (l * w);



}

void displayProperties(double PE, double AREA) {

    cout << "Perimeter:\t" << PE << endl;
    cout << "Area:     \t" << AREA << endl;





}





int main()
{
    char choice;

    do {
        double length, width;

        getLength_Width(length, width);

        displayProperties(calcPerimeter(length, width), calcArea(length, width));



        cout << "Process another? (Y/N): \n";
        cin >> choice;


    }


    while (choice == 'Y');


    return 0;


}
