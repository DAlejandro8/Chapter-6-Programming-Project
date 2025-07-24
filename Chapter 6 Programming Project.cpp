// Chapter 6 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<iomanip>
using namespace std;




double getScore() {
    double SCORE;
    do {
        cout << "Enter judge's score (0-10)\n";
        cin >> SCORE;



    } while (SCORE < 0 || SCORE>10);
        return SCORE;


}


bool isLower(double L, double H) {

    return L <= H;


}
bool isHigher(double L, double H) {
    return L >= H;


}



double calcAverage(double TOTAL, double MIN, double MAX) {

    return (TOTAL - MIN - MAX) / 3;



}


int main()
{
    double score;
    double TOTAL = 0;
    double MIN;
    double MAX;

    score = getScore();
    TOTAL += score;
    MIN = MAX = score;

    for (int i = 1; i < 5; i++) {
        score = getScore();
        TOTAL += score;
        
        if (isLower(score, MIN)) {

            MIN = score;

        }
        if (isHigher(score, MAX)) {

            MAX = score;


        }

        










    }




    double AVE = calcAverage(TOTAL, MIN, MAX);







    cin.ignore();

    cout << "Your final score is...\n";
    cin.get();
    cout << AVE << endl;



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
