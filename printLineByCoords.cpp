#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <fstream>

using namespace std;

typedef int PointId;

typedef int LineId;

struct Point
{               
    PointId Pid; 
    int x;     
    int y;       
};

struct Line
{              
    LineId Lid; 
    PointId p1; 
    PointId p2;
};

void printLineByCoords(LineId lid, Line LinesArray[], const int MaxLnsSize, Point pointsArray[], const int MaxPntsSize)
{
    cout << "LineID"
         << " "
         << "FirstPoint"
         << " "
         << "SecondPoint" 
         << endl;
    for (int i = 0; i < MaxLnsSize; ++i)
    {

        cout << LinesArray[i].Lid << " " << LinesArray[i].p1 << " " << LinesArray[i].p2 << endl;
    }
    Line counter;
    Point p1;
    Point p2;
    counter.Lid = lid;
    for (int i = 0; i < 5; ++i)
    {

        if (counter.Lid == LinesArray[i].Lid)
        {
            p1.Pid = LinesArray[i].p1;
        }
        if (counter.Lid == LinesArray[i].Lid)
        {
            p2.Pid = LinesArray[i].p2;
        }
    }
    for (int i = 0; i < 8; ++i)
    {
        if (p1.Pid == pointsArray[i].Pid)
        {
            p1.x = pointsArray[i].x;
            p1.y = pointsArray[i].y;
        }
        if (p2.Pid == pointsArray[i].Pid)
        {
            p2.x = pointsArray[i].x;
            p2.y = pointsArray[i].y;
        }
    }

    cout << "LineID" << " " << endl;
    cout << counter.Lid << endl;
    cout << endl;
    cout << "Point one: " << endl;
    cout << "(" << p1.x << "," << p1.y << ")" << endl; cout << endl;
    cout <<  "Point two: " << endl;
    cout << "(" << p2.x << "," << p2.y << ")" << endl;
}