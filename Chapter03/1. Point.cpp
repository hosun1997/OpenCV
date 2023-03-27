#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main(void)
{
    Point pt1;           // pt1 = [0, 0]
    pt1.x = 5; pt1.y = 10;   // pt1 = [5, 10]
    Point pt2{ 10, 30 }; // pt2 = [10, 30]

    // pt1 = [5, 10], pt2 = [10, 30]
    Point pt3 = pt1 + pt2; // pt3 = [15, 40]
    Point pt4 = pt1 * 2;   // pt4 = [10, 20]
    int d1 = pt1.dot(pt2);     // d1 = 350, 내적
    bool b1 = (pt1 == pt2);    // b1 = false

    cout << "pt1: " << pt1 << endl;
    cout << "pt2: " << pt2 << endl;
    cout << "pt3: " << pt3 << endl;
    cout << "pt4: " << pt4 << endl;
    cout << "d1: " << d1 << endl;
    cout << "b1: " << b1 << endl;

    return 0;
}

/*
    Point_ 클래스
    2차원 평면 위에 있는 점의 좌표를 표현
    멤버 변수 : 2차원 좌표를 표현하는 x,y
*/