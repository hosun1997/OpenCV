#include "opencv2/opencv.hpp"
#include <iostream>

int main(void) {
	std::cout << "Hello OpenCV " << CV_VERSION << std::endl;

	cv::Mat img;
	img = cv::imread("lenna.bmp");
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
// 프로젝트 폴더 안에 해당 파일이 있어야 사진이 출력됨