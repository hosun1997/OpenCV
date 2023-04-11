#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

void MatOp2() {
	Mat img1 = imread("dog.bmp");

	if (img1.empty()) {
		cerr << "������ �������� �ʽ��ϴ�!" << endl;
		return;
	}

	Mat img2 = img1;					// ���� ������(���� ����)
	Mat img3;
	img3 = img1;						// ���� ������(���� ����)

	Mat img4 = img1.clone();			// �޸� ������ ���� �Ҵ��Ͽ� �ȼ� ������ ��ü�� ���� (���� ����)
	Mat img5;
	img1.copyTo(img5);					// �޸� ������ ���� �Ҵ��Ͽ� �ȼ� ������ ��ü�� ���� (���� ����), img5�� img1 �̹��� ���� ����

	img1.setTo(Scalar(0, 255, 255));		// Yellow

	imshow("img1", img1);
	imshow("img2", img2);
	imshow("img3", img3);
	imshow("img4", img4);
	imshow("img5", img5);

	waitKey();
	destroyAllWindows();
}