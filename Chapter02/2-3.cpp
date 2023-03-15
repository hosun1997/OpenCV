#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main(void) {
	std::cout << "Hello OpenCV " << CV_VERSION << std::endl;

	Mat img;
	img = imread("C:\\Users\\hwang\\OneDrive\\바탕 화면\\황호선\\대학교\\4학년\\1학기\\3. 캡스톤디자인1\\test_images\\lenna.bmp");

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
