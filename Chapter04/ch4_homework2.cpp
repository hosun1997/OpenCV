// 영상이 켜진 상태에서 버튼을 누르면 화면이 캡처되고 그 화면에 스마일을 붙여서 저장


#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

void ch4_homework2() {

	VideoCapture cap(0);

	if (!cap.isOpened()) {
		cerr << "Camera open failed!!" << endl;
		return;
	} // 카메라 켜졌는지 확인

	Mat source;
	Mat src;
	Mat mask = imread("mask_smile.bmp", IMREAD_GRAYSCALE);
	while (true) {
		cap >> source;
		if (source.empty()) {
			cerr << "File open failed!!" << endl;
			return;
		}

		imshow("sourcee", source);

		if (waitKey(10) == 27) {
			imwrite("source.bmp", source);	// 카메라 이미지를 source.bmp 파일로 저장
			src = imread("source.bmp", IMREAD_COLOR);	// 카메라로 캡처한 파일 src로 읽어오기
			resize(src, src, Size(512, 512));				// src 파일을 크기 변환하여 저장하기
			destroyAllWindows();
			break;
		}
	}

	if (src.empty() || mask.empty()) {
		cerr << "Image load failed!!" << endl;
		return;
	}

	src.setTo(Scalar(0, 255, 255), mask);

	imshow("src", src);
	imshow("mask", mask);

	imwrite("result.bmp", src);

	waitKey();
	destroyAllWindows();
}