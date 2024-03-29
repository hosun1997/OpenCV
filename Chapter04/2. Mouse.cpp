#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

Mat img;
Point pt0ld;
void on_mouse(int event, int x, int y, int flags, void*);

void Mouse() {
	
	img = imread("lenna.bmp");

	if (img.empty()) {
		cerr << "Image load failed!!" << endl;
		return;
	}

	namedWindow("img");
	setMouseCallback("img", on_mouse);

	imshow("img", img);
	waitKey();
}

void on_mouse(int event, int x, int y, int flags, void*) {
	switch (event) {
	case EVENT_LBUTTONDOWN:
		pt0ld = Point(x, y);
		cout << "EVENT_LBUTTONDOWN: " << x << ", " << y << endl;
		break;
	case EVENT_LBUTTONUP:
		cout << "EVENT_LBUTTONDOWN: " << x << ", " << y << endl;
		break;
	case EVENT_MOUSEMOVE:
		if (flags & EVENT_FLAG_LBUTTON) {
			line(img, pt0ld, Point(x, y), Scalar(0, 255, 255), 2);
			imshow("img", img);
			pt0ld = Point(x, y);
		}
		break;
	default:
		break;
	}
}
