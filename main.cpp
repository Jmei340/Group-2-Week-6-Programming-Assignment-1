// Bowling League Average Scores
// Programmers: Fadi Jameel, Joey Mei.
// This program will calculate the average scores from the Bowling League.

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <cmath>
using namespace std;
// Add any other header files here

///////////////////////////////////////
void ReadStoreData(string Storing[50], string Names[10], int Scores[10][5]) {
    // Declaring Variables
    string element;
    int rows;
    int i = 0;
    int index = 0;
    int index_2 = 0;
    int index_3 = 0;
    int index_4 = 0;
    int j = 0;
    int columns;
    int Skip = 0;

    // Getting File
    fstream infile;
    infile.open("BowlingScores.txt");

    // Storing Values to Seperate Int and Strings
    if (infile.is_open()) {
        for (i = 0; i < 50; i++) {
            infile >> Storing[i];
        }
    }

    // Storing Names
    for (j = 0; j < 10; j++) {
        Names[j] = Storing[index];
        index = index + 5;
    }

    // Storing Scores
    for (index_2 = 0; index_2 < 10; index_2++) {
        for (index_3 = 0; index_3 < 5; index_3++) {

            // Skipping Names
            if (index_4 == 0) {
                Skip++;
                index_4++;
            }
            else if (index_4 == 5) {
                Skip++;
                index_4++;
            }
            else if (index_4 == 10) {
                Skip++;
                index_4++;
            }
            else if (index_4 == 15) {
                Skip++;
                index_4++;
            }
            else if (index_4 == 20) {
                Skip++;
                index_4++;
            }
            else if (index_4 == 25) {
                Skip++;
                index_4++;
            }
            else if (index_4 == 30) {
                Skip++;
                index_4++;
            }
            else if (index_4 == 35) {
                Skip++;
                index_4++;
            }
            else if (index_4 == 40) {
                Skip++;
                index_4++;
            }
            else if (index_4 == 45) {
                Skip++;
                index_4++;
            }

            // Storing Scores
            else {
                Scores[index_2][index_3] = stoi(Storing[index_4]);
                index_4++;

            }
        }
    }
}

void CalculatingAverage(int Scores[10][5], int AverageScores[10]) {
    // Declaring Variables
    int rows;
    int columns;
    const int AverageConversion = 4;




}

void OutputResults(string Names[10], int Scores[10][4], int AverageScores[10]) {
    //Outputs

    // Bowler #1
    cout << Names[0] << "." << setw(18) << setfill('.') << Scores[0][0] << setw(7) << setfill('.') << Scores[0][1] << setw(7) << setfill('.')
        << Scores[0][2] << setw(8) << setfill('.') << Scores[0][3] << setw(5) << setfill('.') << AverageScores[0] << endl;

    //Bowler #2
    cout << Names[1] << "." << setw(17) << setfill('.') << Scores[1][0] << setw(8) << setfill('.') << Scores[1][1] << setw(9) << setfill('.')
        << Scores[1][2] << setw(8) << setfill('.') << Scores[1][3] << setw(6) << setfill('.') << AverageScores[1] << endl;

    //Bowler #3
    cout << Names[2] << "." << setw(20) << setfill('.') << Scores[2][0] << setw(7) << setfill('.') << Scores[2][1] << setw(7) << setfill('.')
        << Scores[2][2] << setw(8) << setfill('.') << Scores[2][3] << setw(5) << setfill('.') << AverageScores[2] << endl;

    //Bowler #4
    cout << Names[3] << "." << setw(20) << setfill('.') << Scores[3][0] << setw(7) << setfill('.') << Scores[3][1] << setw(7) << setfill('.')
        << Scores[3][2] << setw(8) << setfill('.') << Scores[3][3] << setw(5) << setfill('.') << AverageScores[3] << endl;

    //Bowler #5
    cout << Names[4] << "." << setw(20) << setfill('.') << Scores[4][0] << setw(7) << setfill('.') << Scores[4][1] << setw(7) << setfill('.')
        << Scores[4][2] << setw(8) << setfill('.') << Scores[4][3] << setw(5) << setfill('.') << AverageScores[4] << endl;

    //Bowler #6
    cout << Names[5] << "." << setw(20) << setfill('.') << Scores[5][0] << setw(7) << setfill('.') << Scores[5][1] << setw(7) << setfill('.')
        << Scores[5][2] << setw(8) << setfill('.') << Scores[5][3] << setw(5) << setfill('.') << AverageScores[5] << endl;

    //Bowler #7
    cout << Names[6] << "." << setw(20) << setfill('.') << Scores[6][0] << setw(7) << setfill('.') << Scores[6][1] << setw(7) << setfill('.')
        << Scores[6][2] << setw(8) << setfill('.') << Scores[6][3] << setw(5) << setfill('.') << AverageScores[6] << endl;

    //Bowler #8
    cout << Names[7] << "." << setw(20) << setfill('.') << Scores[7][0] << setw(7) << setfill('.') << Scores[7][1] << setw(7) << setfill('.')
        << Scores[7][2] << setw(8) << setfill('.') << Scores[7][3] << setw(5) << setfill('.') << AverageScores[7] << endl;

    //Bowler #9
    cout << Names[8] << "." << setw(20) << setfill('.') << Scores[8][0] << setw(7) << setfill('.') << Scores[8][1] << setw(7) << setfill('.')
        << Scores[8][2] << setw(8) << setfill('.') << Scores[8][3] << setw(5) << setfill('.') << AverageScores[8] << endl;

    //Bowler #10
    cout << Names[9] << "." << setw(20) << setfill('.') << Scores[9][0] << setw(7) << setfill('.') << Scores[9][1] << setw(7) << setfill('.')
        << Scores[9][2] << setw(8) << setfill('.') << Scores[9][3] << setw(5) << setfill('.') << AverageScores[9] << endl;
}

int main()
{
    // Declaring Variables
    string Storing[50] = { "0" };
    string Names[10] = { "a","b","c","d","e","f","g","h","i","j" };
    int Scores[10][5] = { {0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0} };
    int AverageScores[10] = { 0 };

    ReadStoreData(Storing, Names, Scores);         //"In Progress"
    //CalculatingAverage(Scores, AverageScores);   //"In Progress"
    //OutputResults(Names, Scores, AverageScores); //"This Function Works"

    return 0;
}

// Place any unused code here so that the instructor can follow your problem solving thoughts.