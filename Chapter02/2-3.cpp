#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main(void) {
	std::cout << "Hello OpenCV " << CV_VERSION << std::endl;

	Mat img;
	img = imread("lenna.bmp");

	if (img.empty()) {
		cerr << "Image load failed!" << endl;
		return -1;
	}

	namedWindow("image");
	imshow("image", img);

	waitKey();
	return 0;
}


// 함수 인자 확인하기 : Ctrl + Shift + Space
