#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main(void) {
	std::cout << "Hello OpenCV " << CV_VERSION << std::endl;

	Mat img1;
	img1 = imread("lenna.bmp"); // flag : IMREAD_UNCAHGED, IMREAD_GRAYSCALE, IMREAD_COLOR(Default), IMREAD_REDUCED_GRAYSCALE_2, IMREAD_REDUCED_COLOR_2, IMREAD_IGNORE_ORIENTATION

	if (img1.empty()) {
		cerr << "Image load failed!" << endl;
		return -1;
	}
	

	namedWindow("image", WINDOW_NORMAL); // flag : WINDOW_NORMAL, WINDOW_AUTOSIZE, WINDOW_OPENGL
	imshow("image", img1);
	moveWindow("image", 0, 0);
	resizeWindow("image", 300, 300);

	

	waitKey(1000);
	return 0;
}


// 함수 인자 확인하기 : Ctrl + Shift + Space
