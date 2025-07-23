// Chapter 6 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 

void getLength_Width(double &length, double &width) {
    
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





double calcPerimeter(double L,double W) {

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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
