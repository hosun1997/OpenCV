#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

void mask_copyTo() {
	
	Mat src = imread("airplane.bmp", IMREAD_COLOR);
	Mat mask = imread("mask_plane.bmp", IMREAD_GRAYSCALE);
	Mat dst = imread("field.bmp", IMREAD_COLOR);

	if (src.empty() || mask.empty() || dst.empty()) {
		cerr << "Image load failed!!" << endl;
		return;
	}

	src.copyTo(dst, mask);

	imshow("dst", dst);

	waitKey();
	destroyAllWindows();
}