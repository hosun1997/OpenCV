// ������ ���� ���¿��� ��ư�� ������ ȭ���� ĸó�ǰ� �� ȭ�鿡 �������� �ٿ��� ����


#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

void ch4_homework2() {

	VideoCapture cap(0);

	if (!cap.isOpened()) {
		cerr << "Camera open failed!!" << endl;
		return;
	} // ī�޶� �������� Ȯ��

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
			imwrite("source.bmp", source);	// ī�޶� �̹����� source.bmp ���Ϸ� ����
			src = imread("source.bmp", IMREAD_COLOR);	// ī�޶�� ĸó�� ���� src�� �о����
			resize(src, src, Size(512, 512));				// src ������ ũ�� ��ȯ�Ͽ� �����ϱ�
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