#include "opencv2/opencv.hpp"
#include <iostream>

int main(void) {
	std::cout << "Hello OpenCV " << CV_VERSION << std::endl;

	cv::Mat img;
	img = cv::imread("lenna.bmp");
	/*img = cv::imread("C:\\Users\\hwang\\OneDrive\\���� ȭ��\\Ȳȣ��\\���б�\\4�г�\\1�б�\\3. ĸ���������1\\test_images\\lenna.bmp");*/
	if (img.empty()) {
		std::cerr << "Image load failed!" << std::endl;
		return -1;
	}

	cv::namedWindow("image");
	cv::imshow("image", img);

	cv::waitKey();
	return 0;
}


// �Լ� ���� Ȯ���ϱ� : Ctrl + Shift + Space
