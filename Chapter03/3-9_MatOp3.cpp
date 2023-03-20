#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;


int main(void) {
	Mat img1 = imread("cat.bmp");

	if (img1.empty()) {
		cerr << "������ �������� �ʽ��ϴ�." << endl;
		return -1;
	}

	Mat img2 = img1(Rect(220, 120, 340, 240));			// ��ǥ (220,120), ũ��(340 X 240), ���� ����
	Mat img3 = img1(Rect(220, 120, 350, 240)).clone(); // ���Ѻ���

	img2 = ~img2;				// img2�� ��ȭ�� img1�� �� ������ �޴´�.

	imshow("img1", img1);
	imshow("img2", img2);
	imshow("img3", img3);

	waitKey();
	destroyAllWindows();

	// Mat::rowRange(), Mat::colRange(), Mat:::row(), Mat::col() �����غ���

	return 0;
}