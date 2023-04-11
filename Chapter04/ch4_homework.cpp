#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

void ch4_homework() {

	VideoCapture cap(0);

	if (!cap.isOpened()) {
		cerr << "Camera open failed!!" << endl;
		return;
	} // ī�޶� �������� Ȯ��

	Mat source;
	cap >> source;
	imwrite("source.bmp", source);	// ī�޶� �̹����� source.bmp ���Ϸ� ����
	cap.release();	// ī�޶� ����

	Mat src = imread("source.bmp", IMREAD_COLOR);	// ī�޶�� ĸó�� ���� src�� �о����
	resize(src, src, Size(512, 512));				// src ������ ũ�� ��ȯ�Ͽ� �����ϱ�
	Mat mask = imread("mask_smile.bmp", IMREAD_GRAYSCALE);
	
	

	if (src.empty() || mask.empty()) {
		cerr << "Image load failed!!" << endl;
		return;
	}

	src.setTo(Scalar(0, 255, 255), mask);

	imshow("src", src);
	imshow("mask", mask);

	waitKey();
	destroyAllWindows();
}