// Bowling League Average Scores
// Programmers: Fadi Jameel (Left Group), Joey Mei.
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
    int i = 0;
    int index = 0;
    int index_2 = 0;
    int index_3 = 0;
    int index_4 = 0;
    int j = 0;
    int Skip = 0;

    // Getting File
    fstream infile;
    infile.open("BowlingScores.txt");

    // Check if file is open
    if (infile.is_open()) {
        for (i = 0; i < 50; i++) {
            infile >> Storing[i];
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

    // If File Failed To Open
    else {
        cout << "File Failed To Open" << endl;
    }
}

void CalculatingAverage(int Scores[10][5], int AverageScores[10]) {
    // Declaring Variables
    int rows;
    int columns;
    const int AverageConversion = 4;
    int index = 0;
    int index0 = 0;
    int index1 = 0;
    int index2 = 0;
    int Average = 0;
    int total = 0;

    // Calculating Average Scores
    for (index0 = 0; index0 < 10; index0++) {
        if (index == 0) {
            for (index1 = 0; index1 < 5; index1++) {
                total = total + Scores[0][index1];
                Average = total / AverageConversion;
            }
            AverageScores[0] = Average;
            index++;
            index1 = 0;
            total = 0;
        }
        else if (index == 1) {
            for (index1 = 0; index1 < 5; index1++) {
                total = total + Scores[1][index1];
                Average = total / AverageConversion;
            }
            AverageScores[1] = Average;
            index++;
            index1 = 0;
            total = 0;
        }
        else if (index == 2) {
            for (index1 = 0; index1 < 5; index1++) {
                total = total + Scores[2][index1];
                Average = total / AverageConversion;
            }
            AverageScores[2] = Average;
            index++;
            index1 = 0;
            total = 0;
        }
        else if (index == 3) {
            for (index1 = 0; index1 < 5; index1++) {
                total = total + Scores[3][index1];
                Average = total / AverageConversion;
            }
            AverageScores[3] = Average;
            index++;
            index1 = 0;
            total = 0;
        }
        else if (index == 4) {
            for (index1 = 0; index1 < 5; index1++) {
                total = total + Scores[4][index1];
                Average = total / AverageConversion;
            }
            AverageScores[4] = Average;
            index++;
            index1 = 0;
            total = 0;
        }
        else if (index == 5) {
            for (index1 = 0; index1 < 5; index1++) {
                total = total + Scores[5][index1];
                Average = total / AverageConversion;
            }
            AverageScores[5] = Average;
            index++;
            index1 = 0;
            total = 0;
        }
        else if (index == 6) {
            for (index1 = 0; index1 < 5; index1++) {
                total = total + Scores[6][index1];
                Average = total / AverageConversion;
            }
            AverageScores[6] = Average;
            index++;
            index1 = 0;
            total = 0;
        }
        else if (index == 7) {
            for (index1 = 0; index1 < 5; index1++) {
                total = total + Scores[7][index1];
                Average = total / AverageConversion;
            }
            AverageScores[7] = Average;
            index++;
            index1 = 0;
            total = 0;
        }
        else if (index == 8) {
            for (index1 = 0; index1 < 5; index1++) {
                total = total + Scores[8][index1];
                Average = total / AverageConversion;
            }
            AverageScores[8] = Average;
            index++;
            index1 = 0;
            total = 0;
        }
        else if (index == 9) {
            for (index1 = 0; index1 < 5; index1++) {
                total = total + Scores[9][index1];
                Average = total / AverageConversion;
            }
            AverageScores[9] = Average;
            index++;
            index1 = 0;
            total = 0;
        }
    }
}

void OutputResults(string Names[10], int Scores[10][5], int AverageScores[10]) {
    //Outputs

    // Bowler #1
    cout << Names[0] << "." << setw(15) << setfill('.') << Scores[0][1] << setw(10) << setfill('.') << Scores[0][2] << setw(10) << setfill('.')
        << Scores[0][3] << setw(11) << setfill('.') << Scores[0][4] << setw(8) << setfill('.') << AverageScores[0] << endl;

    //Bowler #2
    cout << Names[1] << "." << setw(13) << setfill('.') << Scores[1][1] << setw(10) << setfill('.') << Scores[1][2] << setw(10) << setfill('.')
        << Scores[1][3] << setw(11) << setfill('.') << Scores[1][4] << setw(8) << setfill('.') << AverageScores[1] << endl;

    //Bowler #3
    cout << Names[2] << "." << setw(12) << setfill('.') << Scores[2][1] << setw(10) << setfill('.') << Scores[2][2] << setw(10) << setfill('.')
        << Scores[2][3] << setw(11) << setfill('.') << Scores[2][4] << setw(8) << setfill('.') << AverageScores[2] << endl;

    //Bowler #4
    cout << Names[3] << "." << setw(13) << setfill('.') << Scores[3][1] << setw(10) << setfill('.') << Scores[3][2] << setw(10) << setfill('.')
        << Scores[3][3] << setw(11) << setfill('.') << Scores[3][4] << setw(8) << setfill('.') << AverageScores[3] << endl;

    //Bowler #5
    cout << Names[4] << "." << setw(13) << setfill('.') << Scores[4][1] << setw(10) << setfill('.') << Scores[4][2] << setw(10) << setfill('.')
        << Scores[4][3] << setw(11) << setfill('.') << Scores[4][4] << setw(8) << setfill('.') << AverageScores[4] << endl;

    //Bowler #6
    cout << Names[5] << "." << setw(12) << setfill('.') << Scores[5][1] << setw(10) << setfill('.') << Scores[5][2] << setw(10) << setfill('.')
        << Scores[5][3] << setw(11) << setfill('.') << Scores[5][4] << setw(8) << setfill('.') << AverageScores[5] << endl;

    //Bowler #7
    cout << Names[6] << "." << setw(14) << setfill('.') << Scores[6][1] << setw(10) << setfill('.') << Scores[6][2] << setw(10) << setfill('.')
        << Scores[6][3] << setw(11) << setfill('.') << Scores[6][4] << setw(8) << setfill('.') << AverageScores[6] << endl;

    //Bowler #8
    cout << Names[7] << "." << setw(14) << setfill('.') << Scores[7][1] << setw(10) << setfill('.') << Scores[7][2] << setw(10) << setfill('.')
        << Scores[7][3] << setw(11) << setfill('.') << Scores[7][4] << setw(8) << setfill('.') << AverageScores[7] << endl;

    //Bowler #9
    cout << Names[8] << "." << setw(13) << setfill('.') << Scores[8][1] << setw(10) << setfill('.') << Scores[8][2] << setw(10) << setfill('.')
        << Scores[8][3] << setw(11) << setfill('.') << Scores[8][4] << setw(8) << setfill('.') << AverageScores[8] << endl;

    //Bowler #10
    cout << Names[9] << "." << setw(10) << setfill('.') << Scores[9][1] << setw(10) << setfill('.') << Scores[9][2] << setw(10) << setfill('.')
        << Scores[9][3] << setw(11) << setfill('.') << Scores[9][4] << setw(8) << setfill('.') << AverageScores[9] << endl;
}

void WriteToFile(string Names[10], int Scores[10][5], int AverageScores[10]) {
    // Writing To File
    ofstream myfile;
    myfile.open("");

    myfile << Names[0] << "." << setw(15) << setfill('.') << Scores[0][1] << setw(10) << setfill('.') << Scores[0][2] << setw(10) << setfill('.')
        << Scores[0][3] << setw(11) << setfill('.') << Scores[0][4] << setw(8) << setfill('.') << AverageScores[0] << endl;
    myfile << Names[1] << "." << setw(13) << setfill('.') << Scores[1][1] << setw(10) << setfill('.') << Scores[1][2] << setw(10) << setfill('.')
        << Scores[1][3] << setw(11) << setfill('.') << Scores[1][4] << setw(8) << setfill('.') << AverageScores[1] << endl;
    myfile << Names[2] << "." << setw(12) << setfill('.') << Scores[2][1] << setw(10) << setfill('.') << Scores[2][2] << setw(10) << setfill('.')
        << Scores[2][3] << setw(11) << setfill('.') << Scores[2][4] << setw(8) << setfill('.') << AverageScores[2] << endl;
    myfile << Names[3] << "." << setw(13) << setfill('.') << Scores[3][1] << setw(10) << setfill('.') << Scores[3][2] << setw(10) << setfill('.')
        << Scores[3][3] << setw(11) << setfill('.') << Scores[3][4] << setw(8) << setfill('.') << AverageScores[3] << endl;
    myfile << Names[4] << "." << setw(13) << setfill('.') << Scores[4][1] << setw(10) << setfill('.') << Scores[4][2] << setw(10) << setfill('.')
        << Scores[4][3] << setw(11) << setfill('.') << Scores[4][4] << setw(8) << setfill('.') << AverageScores[4] << endl;
    myfile << Names[5] << "." << setw(12) << setfill('.') << Scores[5][1] << setw(10) << setfill('.') << Scores[5][2] << setw(10) << setfill('.')
        << Scores[5][3] << setw(11) << setfill('.') << Scores[5][4] << setw(8) << setfill('.') << AverageScores[5] << endl;
    myfile << Names[6] << "." << setw(14) << setfill('.') << Scores[6][1] << setw(10) << setfill('.') << Scores[6][2] << setw(10) << setfill('.')
        << Scores[6][3] << setw(11) << setfill('.') << Scores[6][4] << setw(8) << setfill('.') << AverageScores[6] << endl;
    myfile << Names[7] << "." << setw(14) << setfill('.') << Scores[7][1] << setw(10) << setfill('.') << Scores[7][2] << setw(10) << setfill('.')
        << Scores[7][3] << setw(11) << setfill('.') << Scores[7][4] << setw(8) << setfill('.') << AverageScores[7] << endl;
    myfile << Names[8] << "." << setw(13) << setfill('.') << Scores[8][1] << setw(10) << setfill('.') << Scores[8][2] << setw(10) << setfill('.')
        << Scores[8][3] << setw(11) << setfill('.') << Scores[8][4] << setw(8) << setfill('.') << AverageScores[8] << endl;
    myfile << Names[9] << "." << setw(10) << setfill('.') << Scores[9][1] << setw(10) << setfill('.') << Scores[9][2] << setw(10) << setfill('.')
        << Scores[9][3] << setw(11) << setfill('.') << Scores[9][4] << setw(8) << setfill('.') << AverageScores[9] << endl;

    myfile.close();

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

    // Calling Functions
    ReadStoreData(Storing, Names, Scores);
    CalculatingAverage(Scores, AverageScores);
    OutputResults(Names, Scores, AverageScores);
    WriteToFile(Names, Scores, AverageScores);

    return 0;
}

// Place any unused code here so that the instructor can follow your problem solving thoughts.