#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

Mat calcGrayHist(const cv::Mat& img)
{
    CV_Assert(img.type() == CV_8UC1); // check grayscale img

    cv::Mat hist;
    int channels[] = { 0 };
    int dims = 1;
    const int histSize[] = { 256 };
    float graylevel[] = { 0, 256 };
    const float* ranges[] = { graylevel };

    cv::calcHist(&img, 1, channels, cv::noArray(), hist, dims, histSize, ranges);

    return hist;
}