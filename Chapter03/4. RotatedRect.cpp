#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main(void) {
	RotatedRect rr1(Point2f(40, 30), Size2f(40, 20), 30.f);	// 중심좌표, 크기, 각도
	Point2f pts[4];
	rr1.points(pts);		// 꼭짓점 4개의 값 배열에 저장
	Rect br = rr1.boundingRect(); //회전된 사격형의 바운딩 박스(회전된 사각형을 감싸는 최소 크기의 사각형 정보)

	cout << "pts[0]: " << pts[0] << endl;
	cout << "pts[1]: " << pts[1] << endl;
	cout << "pts[2]: " << pts[2] << endl;
	cout << "pts[3]: " << pts[3] << endl;
	cout << "br: " << br << endl;

	return 0;
}

/*
	RotatedRect 클래스
	회전된 사각형을 표현하는 클래스
	멤버 변수 : 회전된 사각형의 중심 좌표를 나타내는 center / 사각형의 가로 및 세로 크기를 나타내는 size / 회전 각도 정보를 나타내는 angle
	float 자료형 사용
*/