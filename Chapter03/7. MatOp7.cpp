#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;


void MatOp7() {
	Mat img1 = imread("lenna.bmp", IMREAD_GRAYSCALE);

	Mat img1f;
	img1.convertTo(img1f, CV_32FC1);

	uchar data1[] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	Mat mat1(3, 4, CV_8UC1, data1);
	Mat mat2 = mat1.reshape(0, 1);

	cout << "mat1:\n" << mat1 << endl;
	cout << "mat2:\n" << mat2 << endl;

	mat1.resize(5, 100);
	cout << "mat1 resize:\n" << mat1 << endl;

	Mat mat3 = Mat::ones(1, 4, CV_8UC1) * 255;
	mat1.push_back(mat3);
	cout << "mat1 push_back:\n" << mat1 << endl;

	mat1.pop_back(2);
	cout << "mat1 pop_back(2):\n" << mat1 << endl;
}

// 크기 및 타입 변환 함수