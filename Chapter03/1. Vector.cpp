#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

void VectorOp() {
	Vec3b p1, p2(0, 0, 255); // Vec<uchar, 3> p1, p2(0,0,255);
	p1[0] = 100; // p1.val[0] = 100; []������ ������

	cout << "p1: " << p1 << endl;
	cout << "p2: " << p2 << endl;

}

/*
	���� ��� = �� ���� + �� ����, ���� �ڷ����� ���� ���� �� ���� ������ ������ ����
	<������ ǥ��>
	��� 1. Vec<type, num>
	Vec<uchar, 2> / Vec<uchar, 3> / Vec<uchar, 4>
	Vec<short, 2> / Vec<short, 3> / Vec<short, 4>
	Vec<ushort, 2> / Vec<ushort, 3> / Vec<ushort, 4>
	Vec<int, 2> / Vec<int, 3> / Vec<int, 4> / Vec<int, 6> / Vec<int, 8>
	Vec<float, 2> / Vec<float, 3> / Vec<float, 4> / Vec<float, 6>
	Vec<double, 2> / Vec<double, 3> / Vec<double, 4> / Vec<double, 6>

	��� 2. Vec<num-of-data>{b|s|w|i|f|d} : b(unsigned char), s(short), w(unsigend short), i(int), f(float), d(double)
	Vec2b / Vec3b / Vec4b
	Vec2s / Vec3s / Vec4s
	Vec2w / Vec3w / Vec4w
	Vec2i / Vec3i / Vec4i / Vec6i / Vec8i
	Vec2f / Vec3f / Vec4f / Vec6f
	Vec2d / Vec3d / Vec4d / Vec6d
*/