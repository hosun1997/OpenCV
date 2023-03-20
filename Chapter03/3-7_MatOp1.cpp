#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main(void) {
	Mat img1; // Empty Matrix

	Mat img2(480, 640, CV_8UC1); // 480행-640열 Matrix, unsigned char, 1-channel
	Mat img3(480, 640, CV_8UC3); // 480행-640열 Matrix, unsigned char, 3-channels
	Mat img4(Size(640, 480), CV_8UC3);	// Size(width, height) = 가로640, 세로 480, unsigned char, 3-channel, img3 = img4
	Mat img5(480, 640, CV_8UC1, Scalar(128)); // initial values, 128 = 그레이스케일 영상
	Mat img6(480, 640, CV_8UC1, Scalar(0,0,255)); // initial values, (0,0,255) = (B,G,R) 컬러 영상



	Mat mat1 = Mat::zeros(3, 3, CV_32SC1); // 0's matrix , int, 1-channel
	Mat mat2 = Mat::ones(3, 3, CV_32FC1); // 1's matrix , float, 1-channel
	Mat mat3 = Mat::eye(3, 3, CV_32FC1); // identity matrix[단위 행렬], float, 1-channel

	float data[] = { 1,2,3,4,5,6 };
	Mat mat4(2, 3, CV_32FC1, data); /* 2X3행렬 값 [1 2 3]
												  [4 5 6] */
	Mat mat5 = (Mat_<float>(2, 3) << 1, 2, 3, 4, 5, 6);		// mat4 = mat5, Mat 객체로 사용
	Mat mat6 = Mat_<float>({ 2,3 }, { 1,2,3,4,5,6 });		// mat4 = mat6, 초기화 리스트 방법으로 생성

	cout << "mat1:\n" << mat1 << endl;
	cout << "mat2:\n" << mat2 << endl;
	cout << "mat3:\n" << mat3 << endl;
	cout << "mat4:\n" << mat4 << endl;
	cout << "mat5:\n" << mat5 << endl;
	cout << "mat6:\n" << mat6 << endl;

	mat4.create(256, 256, CV_8UC3);			// 비어있는 Mat 객체 또는 이미 생성된 Mat 객체에 새로운 행렬을 할당, uncahtr, 3-channels
	mat5.create(4, 4, CV_32FC1);			// float, 1-channel

	/*cout << "mat4:\n" << mat4 << endl;*/
	cout << "mat5:\n" << mat5 << endl;

	mat4 = Scalar(255, 0, 0);	// 영상의 모든 픽셀을 파란색으로 설정
	mat5.setTo(1.f);			// 모든 원소 값을 1.f로 설정

	/*cout << "mat4:\n" << mat4 << endl;*/
	cout << "mat5:\n" << mat5 << endl;

	return 0;
}