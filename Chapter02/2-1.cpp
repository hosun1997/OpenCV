#include "opencv2/opencv.hpp"
#include <iostream>

int main(void) {
	std::cout << "Hello OpenCV2-1 " << CV_VERSION << std::endl;

	return 0;
}

/*
	OpenCV ������Ʈ ���� ���� ��
	[Debug / Release]
	1. [�Ӽ�] - [C/C++] - [�Ϲ�] - [�߰� ���� ���͸�] - $(OPENCV_DIR)\include �߰�
	2. [�Ӽ�] - [��Ŀ] - [�Ϲ�] - [�߰� ���̺귯�� ���͸�] - $(OPENCV_DIR)\x64\vc15\lib �߰�
	3. [�Ӽ�] - [��Ŀ] - [�Է�] - [�߰� ���Ӽ�] - opencv_world400d.lib [Debug�� �߰�] / opencv_world400.lib [Releases�� �߰�]
*/

