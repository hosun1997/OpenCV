#include "opencv2/opencv.hpp"
#include "calcGrayHist.cpp"
#include "getGrayHistImage.cpp"
#include <iostream>


using namespace cv;
using namespace std;


void histogram_stretching() {
	Mat src = imread("hawkes.bmp", IMREAD_GRAYSCALE);

	if (src.empty()) {
		cerr << "Image load failed!!" << endl;
		return;
	}

	double gmin, gmax;
	minMaxLoc(src, &gmin, &gmax);

	Mat dst = (src - gmin) * 255 / (gmax - gmin);
	imshow("src", src);
	imshow("stcHist", getGrayHistImage(calcGrayHist(src)));
	

	imshow("dst", dst);
	imshow("dstHist", getGrayHistImage(calcGrayHist(dst)));

	waitKey();
	destroyAllWindows();
}