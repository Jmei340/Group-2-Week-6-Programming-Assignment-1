// Bowling League Average Scores
// Programmers: Fadi Jameel, Joey Mei.
// This program will calculate the average scores from the Bowling League.

#include <iostream>
// Add any other header files here

///////////////////////////////////////
void ReadStoreData(string Storing[50], string Names[10], int Scores[10][4]) {
    // Declaring Variables
    int index;
    
    // Getting File

}

void CalculatingAverage(int Scores[10][4], int AverageScores[10]) {


    }

void OutputResults(string Names[10], int Scores[10][4], int AverageScores[10]) {
    //Outputs
    cout << Names[0] << "." << setw(20) << setfill('.') << Scores[0][0] << setw(7) << setfill('.') << Scores[0][1] << setw(7) << setfill('.') 
         << Scores[0][2] << setw(8) << setfill('.') << Scores[0][3] << setw(5) << setfill('.') << AverageScores[0] << endl;


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
    string Storing[50] = {"0"};
    string Names[10] = {"0"};
    int Scores[10][4] = {{0, 0, 0, 0},
                         {0, 0, 0, 0},
                         {0, 0, 0, 0},
                         {0, 0, 0, 0},
                         {0, 0, 0, 0},
                         {0, 0, 0, 0},
                         {0, 0, 0, 0},
                         {0, 0, 0, 0},
                         {0, 0, 0, 0},
                         {0, 0, 0, 0}};
    int AverageScore[10] = {0};
    


    return 0;
}

// Place any unused code here so that the instructor can follow your problem solving thoughts.