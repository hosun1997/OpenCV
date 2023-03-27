#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main(void) {
	Mat img1 = imread("dog.bmp");

	if (img1.empty()) {
		cerr << "파일이 존재하지 않습니다!" << endl;
		return -1;
	}

	Mat img2 = img1;					// 복사 생성자(얕은 복사)
	Mat img3;
	img3 = img1;						// 대입 연산자(얕은 복사)

	Mat img4 = img1.clone();			// 메모리 공간을 새로 할당하여 픽셀 데이터 전체를 복사 (깊은 복사)
	Mat img5;
	img1.copyTo(img5);					// 메모리 공간을 새로 할당하여 픽셀 데이터 전체를 복사 (깊은 복사)

	img1.setTo(Scalar(0, 255, 255));		// Yellow

	imshow("img1", img1);
	imshow("img2", img2);
	imshow("img3", img3);
	imshow("img4", img4);
	imshow("img5", img5);

	waitKey();
	destroyAllWindows();

	return 0;
}