// Chapter 6 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
//this module controls the input
void getRegInfo(string& regionName, int& ACC) {
    cout << "Enter Region name\n";
    getline(cin, regionName);

    do {//loops till nonnegative value is an input

        cout << "Enter the number of accidents reported in " << regionName << endl;
        cin >> ACC;

        if (ACC<0){
            cout << "Error, you can't have negative accidents";



        }


    } while (ACC < 0);

    cin.ignore();
}
//This module compares each accident value
bool isLower(int F1, int F2) {

    return (F1 <= F2);//returns to caller


}
//this module is the output and dispalys the answers
void showLowest(string regionName, int ACC) {

    cout << "The safest region to drive in:\t" << regionName<< endl;
    cout << ACC << " accidents reported\n";


}

//the caller of the other modules
int main()
{
    string LOWREG;
    int LOWACC;//lowest amount of accidents
    int NUM = 5;//there were 5 different regions; north, south, east, west, and central
    bool FIRSTREG = true;

    for (int i = 0; i < NUM; i++) {//loops fora all 5 inputs

        string NOWREG;
        int NOWACC;

        getRegInfo(NOWREG, NOWACC);//calls the input

        if (FIRSTREG) {

            LOWACC = NOWACC;
            LOWREG = NOWREG;
            FIRSTREG = false;




        }
        else if (isLower(NOWACC, LOWACC)) {//calls the comparison module

            LOWACC = NOWACC;
            LOWREG = NOWREG;

        }






    }
    showLowest(LOWREG, LOWACC);//calls the output module

    return 0;


}





