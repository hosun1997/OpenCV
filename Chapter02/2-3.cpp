#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main(void) {
	std::cout << "Hello OpenCV " << CV_VERSION << std::endl;

	Mat img;
	img = imread("C:\\Users\\hwang\\OneDrive\\���� ȭ��\\Ȳȣ��\\���б�\\4�г�\\1�б�\\3. ĸ���������1\\test_images\\lenna.bmp");

	if (img.empty()) {
		cerr << "Image load failed!" << endl;
		return -1;
	}

	namedWindow("image");
	imshow("image", img);

	waitKey();
	return 0;
}


// �Լ� ���� Ȯ���ϱ� : Ctrl + Shift + Space
