#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

void brightness1() {
	// 컬러 영상을 그레이스케일 영상으로 바꾸는 방법
	//Mat img1 = imread("lenna.bmp", IMREAD_GRAYSCALE);	// imread로 설정하기
	//Mat img2(480, 640, CV_8UC1, Scalar(0));				// 초기화로 설정하기
	//Mat img3 = imread("lenna.bmp", IMREAD_GRAYSCALE);	// cvtColor() 함수 사용하기
	//Mat img4;
	//cvtColor(img3, img4, COLOR_BGR2GRAY);

	// dst(x,y) = saturate(src(x,y) + n) : src(입력영상), dst(출력영상), n(조절할 밝기 값)
	Mat src = imread("lenna.bmp", IMREAD_GRAYSCALE);

	if (src.empty()) {
		cerr << "Image load failed!!" << endl;
		return;
	}

	Mat dst = src + 100;	// add(src, 100, dst);
	Mat dst2 = src - 100;

	imshow("src", src);
	imshow("dst", dst);
	imshow("dst2", dst2);

	waitKey();
	destroyAllWindows();

}