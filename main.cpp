#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <sLines.h>
using namespace std;

int main(){
    int x = 5;  // for the line text file
    int y = 8;  // Points text file
    int & yy = y;
    int & xx = x;
    Point pointsArray[500];
    Line LinesArray[500];
    Line arr[10];

    char filename[50];

    // to open both text files so data can be read.
    ifstream inPutPointFile("Points.txt");
    ifstream inPutPointFile("Lines.txt");

    // to check if both textfiles are open
    inPutPointFile.open(filename);
    if(!inPutPointFile.is_open()) {
        exit(EXIT_FAILURE);
    }
    readPoints(inPutPointFile, pointsArray, y, yy);
    readLines(inPutPointFile, LinesArray, x, xx);
    printLineByCoords(4, LinesArray, x, pointsArray, x);
    getStabbedLines(4, LinesArray, x, x, pointsArray, y, arr, x, x);
}
