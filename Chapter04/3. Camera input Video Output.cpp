#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

void camera_in_video_out() {
	VideoCapture cap(0);

	if (!cap.isOpened()) {
		cerr << "File Open Failed!" << endl;
		return;
	}

	int w = cvRound(cap.get(CAP_PROP_FRAME_WIDTH));
	int h = cvRound(cap.get(CAP_PROP_FRAME_HEIGHT));
	double fps = cap.get(CAP_PROP_FPS);
	int fourcc = VideoWriter::fourcc('D', 'I', 'V', 'X'); // DivX MPEG-4코덱
	int delay = cvRound(1000 / fps);
	
	VideoWriter outputVideo("output.avi", fourcc, fps, Size(w, h));
	if (!outputVideo.isOpened()) {
		cerr << "File open Failed!" << endl;
		return;
	}

	Mat frame, inversed;
	while (true) {
		cap >> frame;
		if (frame.empty()) {
			break;
		}

		inversed = ~frame;
		outputVideo << inversed;

		imshow("frame", frame);
		imshow("inversed", inversed);

		if (waitKey(delay) == 27) {
			break;
		}

	}


	destroyAllWindows();


}

// 카메라로부터 입력 받아서 동영상으로 저장하기