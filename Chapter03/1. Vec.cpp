#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main(void) {
	Vec3b p1, p2(0, 0, 255); // Vec<uchar, 3> p1, p2(0,0,255);
	p1[0] = 100; // p1.val[0] = 100; []������ ������

	cout << "p1: " << p1 << endl;
	cout << "p2: " << p2 << endl;



	return 0;
}

/*
	���� ��� = �� ���� + �� ����, ���� �ڷ����� ���� ���� �� ���� ������ ������ ����
	Vec<num-of-daa>{b|s|w|i|f|d} : b(unsigned char), s(short), w(unsigend short), i(int), f(float), d(double)
*/