#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main(void) {
	Mat img1; // Empty Matrix

	Mat img2(480, 640, CV_8UC1); // 480��-640�� Matrix, unsigned char, 1-channel
	Mat img3(480, 640, CV_8UC3); // 480��-640�� Matrix, unsigned char, 3-channels
	Mat img4(Size(640, 480), CV_8UC3);	// Size(width, height) = ����640, ���� 480, unsigned char, 3-channel, img3 = img4
	Mat img5(480, 640, CV_8UC1, Scalar(128)); // initial values, 128 = �׷��̽����� ����
	Mat img6(480, 640, CV_8UC1, Scalar(0,0,255)); // initial values, (0,0,255) = (B,G,R) �÷� ����



	Mat mat1 = Mat::zeros(3, 3, CV_32SC1); // 0's matrix , int, 1-channel
	Mat mat2 = Mat::ones(3, 3, CV_32FC1); // 1's matrix , float, 1-channel
	Mat mat3 = Mat::eye(3, 3, CV_32FC1); // identity matrix[���� ���], float, 1-channel

	float data[] = { 1,2,3,4,5,6 };
	Mat mat4(2, 3, CV_32FC1, data); /* 2X3��� �� [1 2 3]
												  [4 5 6] */
	Mat mat5 = (Mat_<float>(2, 3) << 1, 2, 3, 4, 5, 6);		// mat4 = mat5, Mat ��ü�� ���
	Mat mat6 = Mat_<float>({ 2,3 }, { 1,2,3,4,5,6 });		// mat4 = mat6, �ʱ�ȭ ����Ʈ ������� ����

	cout << "mat1:\n" << mat1 << endl;
	cout << "mat2:\n" << mat2 << endl;
	cout << "mat3:\n" << mat3 << endl;
	cout << "mat4:\n" << mat4 << endl;
	cout << "mat5:\n" << mat5 << endl;
	cout << "mat6:\n" << mat6 << endl;

	mat4.create(256, 256, CV_8UC3);			// ����ִ� Mat ��ü �Ǵ� �̹� ������ Mat ��ü�� ���ο� ����� �Ҵ�, uncahtr, 3-channels
	mat5.create(4, 4, CV_32FC1);			// float, 1-channel

	/*cout << "mat4:\n" << mat4 << endl;*/
	cout << "mat5:\n" << mat5 << endl;

	mat4 = Scalar(255, 0, 0);	// ������ ��� �ȼ��� �Ķ������� ����
	mat5.setTo(1.f);			// ��� ���� ���� 1.f�� ����

	/*cout << "mat4:\n" << mat4 << endl;*/
	cout << "mat5:\n" << mat5 << endl;

	return 0;
}