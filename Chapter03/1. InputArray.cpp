#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

void printMat(InputArray _mat) {
	Mat mat = _mat.getMat();
	cout << mat << endl;
}

void InputArrayOp() {
	uchar data1[] = { 1,2,3,4,5,6 };
	Mat mat1(2, 3, CV_8U, data1);
	printMat(mat1);

	vector<float> vec1 = { 1.2f, 3.4f, -2.1f };
	printMat(vec1);
}

/*
	InputArray 클래스는 OpenCV함수의 입력으로 사용될 벡터나 행렬을 인수로 전달할 때 사용됩니다. 
	InputArray 클래스인 인수는 읽기만 가능하며, Mat, Mat_<T> , Matx<T, m, n>, std::vector<T>, std::vector<std::vector<T> >, std::vector<Mat> 또는 행렬 수식을 전달할 수 있습니다.
*/