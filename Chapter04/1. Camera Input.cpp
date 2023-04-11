#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

void camera_in() {
	VideoCapture cap;
	cap.open(0);
	// VideoCapture cap(0);					//VideoCapture 객체를 생성하고, 컴퓨터에 연결된 기본 카메라를 사용합니다.

	if (!cap.isOpened()) {
		cerr << "Camera open failed!" << endl;
		return;
	} // 카메라 장치가 정상적으로 열리는 지 확인합니다.

	cout << "Frame width: " << cvRound(cap.get(CAP_PROP_FRAME_WIDTH)) << endl;
	cout << "Frame height: " << cvRound(cap.get(CAP_PROP_FRAME_HEIGHT)) << endl;		// get()를 이용하여 카메라 정보를 받아옵니다.

	Mat frame, inversed;
	while (true) {
		cap >> frame;
		if (frame.empty()) {
			break;
		} // 영상이 비어있으면 종료

		inversed = ~frame;

		imshow("frame", frame);
		imshow("inversed", inversed);

		if (waitKey(10) == 27) { // Esc Key
			break;
		} // Esc 키를 누르면 종료
	}

	destroyAllWindows();

}

// 카메라 입력 처리하기

/*
	1. VideoCaputure 클래스를 사용하여 동영상 파일을 불러오기
	VideoCapture(const String& filename, int apiPreference = CAP_ANY);
	open(const String& filename, int apiPreference = CAP_ANY);

	2. VideoCapture 클래스를 이용하여 컴퓨터에 연결된 카메라 장치 사용하기.
	VideoCaputre(int index, int apiPreference = CAP_ANY);					// index = camera_id + domain_offset_id
	open(const String& filename, int apiPreference = CAP_ANY);
	isOpend()		// 사용 가능 여부 확인
	release()		// 자원 해제
	
	3. 카메라 또는 동영상 파일로부터 한 프레임의 정지 영상을 받아 오는 방법
	VideoCaputure& VideoCapture::operator >> (Mat& image);
	read(OutputArray image);

	4. 현재 열려 있는 카메라 장치 또는 동영상으로부터 여러 가지 정보를 받아 오기
	get(int propId) const;		// CAP_PROP	+ {POS_MSEC, POS_FRAMES}, POS

	5. 설정하기
	set(int propId, double value);
*/

