#include "opencv2/opencv.hpp"
#include <iostream>

int main(void) {
	std::cout << "Hello OpenCV2-1 " << CV_VERSION << std::endl;

	return 0;
}

/*
	OpenCV 프로젝트 새로 생성 시
	[Debug / Release]
	1. [속성] - [C/C++] - [일반] - [추가 포함 디렉터리] - $(OPENCV_DIR)\include 추가
	2. [속성] - [링커] - [일반] - [추가 라이브러리 디렉터리] - $(OPENCV_DIR)\x64\vc15\lib 추가
	3. [속성] - [링커] - [입력] - [추가 종속성] - opencv_world400d.lib [Debug에 추가] / opencv_world400.lib [Releases에 추가]
*/

