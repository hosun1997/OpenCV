#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;


void MatOp3() {
	Mat img1 = imread("cat.bmp");

	if (img1.empty()) {
		cerr << "파일이 존재하지 않습니다." << endl;
		return;
	}

	Mat img2 = img1(Rect(220, 120, 340, 240));			// 좌표 (220,120), 크기(340 X 240), 얕은 복사
	Mat img3 = img1(Rect(220, 120, 350, 240)).clone(); // 강한복사

	img2 = ~img2;				// img2의 변화로 img1도 그 영향을 받는다.

	imshow("img1", img1);
	imshow("img2", img2);
	imshow("img3", img3);

	waitKey();
	destroyAllWindows();

	// Mat::rowRange(), Mat::colRange(), Mat:::row(), Mat::col() 연습해보기
}

//img1과 img2는 동일한 메모리 공간을 사용하고 있고, img3와는 다른 메모리 공간을 사용하고 있다. 즉, img2의 변화는 img1에 영향을 주는 반면, img3는 영향을 받지 않는다.
