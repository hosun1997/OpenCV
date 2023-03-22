#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main(void) {
	Range r1(0, 10);

	cout << "r1: " << r1 << endl;

	return 0;
}

/*
	Range 클래스
	범위 또는 구간을 표현하는 클래스
	멤버변수 : start, end (이상, 미만]
*/