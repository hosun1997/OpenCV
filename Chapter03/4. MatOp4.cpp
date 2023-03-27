#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;


int main(void) {
	Mat mat1 = Mat::zeros(3, 4, CV_8UC1);	// 0's matrix, unsigned char, 1-channel

	cout << "<mat1> \n" << mat1 << endl;

	for (int j = 0; j < mat1.rows; j++) {
		for (int i = 0; i < mat1.cols; i++) {
			mat1.at<uchar>(j, i)++;
		}
	}

	cout << "Mat::at() <mat1> \n" << mat1 << endl;

	for (int j = 0; j < mat1.rows; j++) {
		uchar* p = mat1.ptr<uchar>(j);
		for (int i = 0; i < mat1.cols; i++) {
			p[i]++;
		}
	}

	cout << "Mat::ptr() <mat1> \n" << mat1 << endl;
	
	for (MatIterator_<uchar>it = mat1.begin<uchar>(); it != mat1.end<uchar>(); ++it) {
		(*it)++;
	}

	cout << "Matlterator_반복자 사용 <mat1> \n" << mat1 << endl;

	return 0;
}