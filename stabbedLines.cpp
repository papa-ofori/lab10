#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <fstream>

#define MAXARRAYSIZE 500

using namespace std;

typedef int PointId;

typedef int LineId;

struct Point
{               
    PointId Pid; 
    int x;     
    int y;       
};

struct Line{
    LineId Lid;
    PointId p1;
    PointId p2;
};

void getStabbedLines (const int xcoord, Line linesArray[], const int MaxLnsSize, const int NumLines, Point pointsArray[],
                       const int MaxPtsSize, Line stabbedLines[], const int MaxStbSize, int& NumOfStbLines)
{
    //creating a stabbed line
    struct stabbedLine{
        LineId Lid;
        Point p1;
        Point p2;                          
   }

   // Lines Array
   int counter;
   Line arr[10];
   Line line;
   for (int i = 0; i < 5; ++i)
    {
        int counter = 0;
        line.Lid = counter;

        if (line.Lid == linesArray[i].Lid)
        {
            line.p1.Pid = linesArray[i].p1;
            line.p2.Pid = linesArray[i].p2;
        }

        arr[counter] = line;
        ++counter;
        cout << endl;
    }

    for (int i = 0; i < NumLines; ++i)
    {
        for (int j = 0; j < MaxPtsSize; ++j)
        {
            if (arr[i].p1.Pid == pointsArray[j].Pid)
            {
                arr[i].p1.x = pointsArray[j].x;
                arr[i].p1.y = pointsArray[j].y;
            }
            if (arr[i].p2.Pid == pointsArray[j].Pid)
            {
                arr[i].p2.x = pointsArray[j].x;
                arr[i].p2.y = pointsArray[j].y;
            }
        }
        cout << "LineID" << " " << endl;
        cout << StabbedLines[y].Lid << endl;
        cout << endl;
        cout  << "Point one: "  << endl;
        cout << "(" << arr[i].p1.x << "," << arr[i].p1.y << ")" << endl;
        cout << endl;
        cout << "(Point two: )" << endl;
        cout << "(" << arr[i].p2.x << "," << arr[i].p2.y << ")" << endl;
    }
    
    cout << " The lines stabbed by x are: " << " " << xcoord << endl;

    for (int i = 0; i < NumLines; ++i)
    {
        if (arr[i].p1.x >= xcoord || arr[i].p2.x >= xcoord)
        {
            cout << "Line" << "   " << arr[i].Lid << endl;
        }
    }
};
   

