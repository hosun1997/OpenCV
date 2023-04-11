#include "opencv2/opencv.hpp"
#include "calcGrayHist.cpp"
#include "getGrayHistImage.cpp"
#include <iostream>


using namespace cv;
using namespace std;


void example() {
	Mat src = imread("cameraman256.bmp", IMREAD_GRAYSCALE);
	Mat hist = calcGrayHist(src);
	Mat hist_img = getGrayHistImage(hist);

	imshow("src", src);
	imshow("srcHist", hist_img);

	Mat src2 = imread("cameraman256.bmp", IMREAD_GRAYSCALE);
	imshow("src2", src2);
	imshow("srcHist2", getGrayHistImage(calcGrayHist(src2)));



	waitKey();
	destroyAllWindows();
}