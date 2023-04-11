#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

void on_level_change(int pos, void* userdata);

void Trackbar() {
	Mat img = Mat::zeros(400, 400, CV_8UC1);

	namedWindow("image");
	createTrackbar("level", "image", 0, 16, on_level_change, (void*)&img);

	imshow("image", img);
	waitKey();
}

void on_level_change(int pos, void* userdata) {
	Mat img = *(Mat*)userdata;

	img.setTo(pos * 16);
	imshow("image", img);
}