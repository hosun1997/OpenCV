#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main(void) {
	RotatedRect rr1(Point2f(40, 30), Size2f(40, 20), 30.f);	// 중심좌표, 크기, 각도
	Point2f pts[4];
	rr1.points(pts);		// 꼭짓점 4개의 값 배열에 저장
	Rect br = rr1.boundingRect(); //회전된 사격형의 바운딩 박스

	cout << "pts[0]: " << pts[0] << endl;
	cout << "pts[1]: " << pts[1] << endl;
	cout << "pts[2]: " << pts[2] << endl;
	cout << "pts[3]: " << pts[3] << endl;
	cout << "br: " << br << endl;

	return 0;
}