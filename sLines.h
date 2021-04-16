#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <fstream>
#define MAXARRAYSIZE 500

using namespace std;


typedef int PointId;
typedef int LineId;

struct Point{
    int x;
    int y;
};

struct Line{
    LineId Lidl
    PointId int p1;
    PointId int p2;
};


// declaring the prototype functions
void readPoints(ifstream & inPutPointFile, Point pointsArray[], const int MaxPntsSize, int & numPoints);
void readLines(ifstream & inPutPointFile, Line linesArray[], const int MaxLnsSize, int & numLines);
void printLineByCoords(LineId lid, Line linesArray[], const
int MaxLnsSize, Point pointsArray[], const int MaxPntsSize);
void getStabbedLines (const int xcoord, Line linesArray[], const
int MaxLnsSize, const int NumLines, Point pointsArray[],
const int MaxPtsSize, Line stabbedLines[],
const int MaxStbSize, int& NumOfStbLines);
A