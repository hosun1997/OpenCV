#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

Mat getGrayHistImage(const cv::Mat& hist)
{
    CV_Assert(hist.type() == CV_32FC1);
    CV_Assert(hist.size() == cv::Size(1, 256));

    double histMax;
    cv::minMaxLoc(hist, 0, &histMax);

    cv::Mat imgHist(100, 256, CV_8UC1, cv::Scalar(255));
    for (int i = 0; i < 256; i++) {
        cv::line(imgHist, cv::Point(i, 100), cv::Point(i, 100 - cvRound(hist.at<float>(i, 0) * 100 / histMax)), cv::Scalar(0));
    }

    return imgHist;
}