#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

void brightness1() {
	// �÷� ������ �׷��̽����� �������� �ٲٴ� ���
	//Mat img1 = imread("lenna.bmp", IMREAD_GRAYSCALE);	// imread�� �����ϱ�
	//Mat img2(480, 640, CV_8UC1, Scalar(0));				// �ʱ�ȭ�� �����ϱ�
	//Mat img3 = imread("lenna.bmp", IMREAD_GRAYSCALE);	// cvtColor() �Լ� ����ϱ�
	//Mat img4;
	//cvtColor(img3, img4, COLOR_BGR2GRAY);

	// dst(x,y) = saturate(src(x,y) + n) : src(�Է¿���), dst(��¿���), n(������ ��� ��)
	Mat src = imread("lenna.bmp", IMREAD_GRAYSCALE);

	if (src.empty()) {
		cerr << "Image load failed!!" << endl;
		return;
	}

	Mat dst = src + 100;	// add(src, 100, dst);
	Mat dst2 = src - 100;

	imshow("src", src);
	imshow("dst", dst);
	imshow("dst2", dst2);

	waitKey();
	destroyAllWindows();

}