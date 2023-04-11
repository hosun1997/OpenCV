#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

void ScalarOp() {
	Scalar gray = 128;						// 128 정수 하나를 이용하여 Scalar 클래스 타입의 변수 gray를 초기화 합니다. gray 객체의 val 멤버 변수에는 [128,0,0,0]이 저장됨.
	cout << "gray: " << gray << endl;

	Scalar yellow(0, 255, 255);				// yellow 객체에는 노란색을 표현하는 [0, 255, 255, 0]이 저장됨.
	cout << "yellow: " << yellow << endl;

	Mat img1(256, 256, CV_8UC3, yellow);	// yellow 변수를 Mat 클래스 생성자의 네 번째 인자로 전달하여, 노란색으로 초기화된 256 X 256 크기의 컬러 영상 img1을 생성함.

	for (int i = 0; i < 4; i++) {
		cout << yellow[i] << endl;
	}										// yellow 객체에 저장된 값을 참조하기 위해 [] 연산자 재정의를 사용.

}


/*
	Scalar 클래스는 4채널 이하의 영상에서 픽셀 값을 표현하는 용도로 자주 사용됨.
	Scalar(밝기) / Scalar(파란색, 녹색, 빨간색) / Scalar(파란색, 녹색, 빨간색, 투명도)
*/