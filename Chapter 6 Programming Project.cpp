// Chapter 6 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

void getRegInfo(string& regionName, int& ACC) {
    cout << "Enter Region name\n";
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

void showLowest(string regionName, int ACC) {

    cout << "The safest region to drive in:\t" << regionName<< endl;
    cout << ACC << " accidents reported\n";


}


int main()
{
    string LOWREG;
    int LOWACC;//lowest amount of accidents
    int NUM = 5;//there were 5 different regions; north, south, east, west, and central
    bool FIRSTREG = true;

    for (int i = 0; i < NUM; i++) {

        string NOWREG;
        int NOWACC;

        getRegInfo(NOWREG, NOWACC);

        if (FIRSTREG) {

            LOWACC = NOWACC;
            LOWREG = NOWREG;
            FIRSTREG = false;




        }
        else if (isLower(NOWACC, LOWACC)) {

            LOWACC = NOWACC;
            LOWREG = NOWREG;

        }






    }
    showLowest(LOWREG, LOWACC);

    return 0;


}





