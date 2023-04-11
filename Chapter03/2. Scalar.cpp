#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

void ScalarOp() {
	Scalar gray = 128;						// 128 ���� �ϳ��� �̿��Ͽ� Scalar Ŭ���� Ÿ���� ���� gray�� �ʱ�ȭ �մϴ�. gray ��ü�� val ��� �������� [128,0,0,0]�� �����.
	cout << "gray: " << gray << endl;

	Scalar yellow(0, 255, 255);				// yellow ��ü���� ������� ǥ���ϴ� [0, 255, 255, 0]�� �����.
	cout << "yellow: " << yellow << endl;

	Mat img1(256, 256, CV_8UC3, yellow);	// yellow ������ Mat Ŭ���� �������� �� ��° ���ڷ� �����Ͽ�, ��������� �ʱ�ȭ�� 256 X 256 ũ���� �÷� ���� img1�� ������.

	for (int i = 0; i < 4; i++) {
		cout << yellow[i] << endl;
	}										// yellow ��ü�� ����� ���� �����ϱ� ���� [] ������ �����Ǹ� ���.

}


/*
	Scalar Ŭ������ 4ä�� ������ ���󿡼� �ȼ� ���� ǥ���ϴ� �뵵�� ���� ����.
	Scalar(���) / Scalar(�Ķ���, ���, ������) / Scalar(�Ķ���, ���, ������, ����)
*/