#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

void changeGrayScale(InputArray _src, OutputArray _dest) {
	Mat src = _src.getMat();
	_dest.create(src.size(), src.type());
	Mat dest = _dest.getMat();

	for (int i = 0; i < src.rows; ++i) {
		for (int j = 0; j < src.cols; ++j) {
			dest.at<Vec3b>(i, j)[0] = src.at<Vec3b>(i, j)[0];
			dest.at<Vec3b>(i, j)[1] = src.at<Vec3b>(i, j)[0];
			dest.at<Vec3b>(i, j)[2] = src.at<Vec3b>(i, j)[0];
		}
	}
}

void InputOutputArrayOp() {

	Mat srcImage = imread("lenna.bmp");
	if (srcImage.empty()) {
		cout << "IMREAD ERROR" << endl;
	}

	Mat grayImage;
	changeGrayScale(srcImage, grayImage);
	imshow("Image", grayImage);
	waitKey(0);

}

/*
	InputOutputArray 클래스는 OutputArray 클래스에서 상속을 받은 클래스로 OpenCV함수의 입출력으로 사용될 벡터나 행렬을 인수로 전달할 때 사용됩니다.

	위의 Mat클래스를 InputArray, OutputArray 를 통해 입출력을 받습니다.
	Mat 클래스 = 연산자를 이용하여 할당하면 얕은 복사가 되어 링크가 형성됩니다.
	OutputArray와 Mat 클래스가 사이에 링크가 형성되면 main 함수에서 Mat gray가 OutputArray _dest 형태로 changeGrayScale로 전달되고 _dest.getMat()를 이용하여 Mat dest로 할당됩니다.
	이 때 Mat dest 가 수정되면 링크가 걸려 있어 원본인 Mat gray가 수정이 되게 됩니다.
*/