#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

void changeGrayScale(InputArray _src, OutputArray _dest) {
	Mat src = _src.getMat();
	_dest.create(src.size(), src.type());
	Mat dest = _dest.getMat();

	for (int i = 0; i < src.rows; ++i) {
		for (int j = 0; j < src.cols; ++j) {
			dest.at<Vec3b>(i, j)[0] = src.at<Vec3b>(i, j)[0];
			dest.at<Vec3b>(i, j)[1] = src.at<Vec3b>(i, j)[0];
			dest.at<Vec3b>(i, j)[2] = src.at<Vec3b>(i, j)[0];
		}
	}
}

void InputOutputArrayOp() {

	Mat srcImage = imread("lenna.bmp");
	if (srcImage.empty()) {
		cout << "IMREAD ERROR" << endl;
	}

	Mat grayImage;
	changeGrayScale(srcImage, grayImage);
	imshow("Image", grayImage);
	waitKey(0);

}

/*
	InputOutputArray Ŭ������ OutputArray Ŭ�������� ����� ���� Ŭ������ OpenCV�Լ��� ��������� ���� ���ͳ� ����� �μ��� ������ �� ���˴ϴ�.

	���� MatŬ������ InputArray, OutputArray �� ���� ������� �޽��ϴ�.
	Mat Ŭ���� = �����ڸ� �̿��Ͽ� �Ҵ��ϸ� ���� ���簡 �Ǿ� ��ũ�� �����˴ϴ�.
	OutputArray�� Mat Ŭ������ ���̿� ��ũ�� �����Ǹ� main �Լ����� Mat gray�� OutputArray _dest ���·� changeGrayScale�� ���޵ǰ� _dest.getMat()�� �̿��Ͽ� Mat dest�� �Ҵ�˴ϴ�.
	�� �� Mat dest �� �����Ǹ� ��ũ�� �ɷ� �־� ������ Mat gray�� ������ �ǰ� �˴ϴ�.
*/