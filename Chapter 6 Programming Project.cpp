// Chapter 6 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<iomanip>
using namespace std;



//module for input of judge's score
double getScore() {
    double SCORE;
    do {
        cout << "Enter judge's score (0-10)\n";
        cin >> SCORE;



    } while (SCORE < 0 || SCORE>10);//loops if wrong score is inputted
        return SCORE;


}

//these two modules compare for the lowest or highest score which will be useful later
//returns resualts to caller
bool isLower(double L, double H) {

    return L <= H;


}
bool isHigher(double L, double H) {
    return L >= H;


}


//this module does the claculation of the average
double calcAverage(double TOTAL, double MIN, double MAX) {

    return (TOTAL - MIN - MAX) / 3;//the subtraction is to remove the highest and lowest score



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

    for (int i = 1; i < 5; i++) {//loops till reaches the end
        score = getScore();
        TOTAL += score;
        
        if (isLower(score, MIN)) {//retrieves the lowest score

            MIN = score;

        }
        if (isHigher(score, MAX)) {//retrieves the highest score

            MAX = score;


        }

        










    }




    double AVE = calcAverage(TOTAL, MIN, MAX);//retrieves teh resulats of calulations using the for loop resualts







    cin.ignore();

    cout << "Your final score is...\n";
    cin.get();//makes it so the user needs to press enter to continue for a little flair
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
