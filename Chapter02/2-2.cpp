#include "opencv2/opencv.hpp"
#include <iostream>

int main(void) {
	std::cout << "Hello OpenCV " << CV_VERSION << std::endl;

	cv::Mat img;
	img = cv::imread("lenna.bmp");
	/*img = cv::imread("C:\\Users\\hwang\\OneDrive\\바탕 화면\\황호선\\대학교\\4학년\\1학기\\3. 캡스톤디자인1\\test_images\\lenna.bmp");*/
	if (img.empty()) {
		std::cerr << "Image load failed!" << std::endl;
		return -1;
	}

	cv::namedWindow("image");
	cv::imshow("image", img);

	cv::waitKey();
	return 0;
}


// 함수 인자 확인하기 : Ctrl + Shift + Space
