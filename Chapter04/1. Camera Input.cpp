#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

void camera_in() {
	VideoCapture cap;
	cap.open(0);
	// VideoCapture cap(0);					//VideoCapture ��ü�� �����ϰ�, ��ǻ�Ϳ� ����� �⺻ ī�޶� ����մϴ�.

	if (!cap.isOpened()) {
		cerr << "Camera open failed!" << endl;
		return;
	} // ī�޶� ��ġ�� ���������� ������ �� Ȯ���մϴ�.

	cout << "Frame width: " << cvRound(cap.get(CAP_PROP_FRAME_WIDTH)) << endl;
	cout << "Frame height: " << cvRound(cap.get(CAP_PROP_FRAME_HEIGHT)) << endl;		// get()�� �̿��Ͽ� ī�޶� ������ �޾ƿɴϴ�.

	Mat frame, inversed;
	while (true) {
		cap >> frame;
		if (frame.empty()) {
			break;
		} // ������ ��������� ����

		inversed = ~frame;

		imshow("frame", frame);
		imshow("inversed", inversed);

		if (waitKey(10) == 27) { // Esc Key
			break;
		} // Esc Ű�� ������ ����
	}

	destroyAllWindows();

}

// ī�޶� �Է� ó���ϱ�

/*
	1. VideoCaputure Ŭ������ ����Ͽ� ������ ������ �ҷ�����
	VideoCapture(const String& filename, int apiPreference = CAP_ANY);
	open(const String& filename, int apiPreference = CAP_ANY);

	2. VideoCapture Ŭ������ �̿��Ͽ� ��ǻ�Ϳ� ����� ī�޶� ��ġ ����ϱ�.
	VideoCaputre(int index, int apiPreference = CAP_ANY);					// index = camera_id + domain_offset_id
	open(const String& filename, int apiPreference = CAP_ANY);
	isOpend()		// ��� ���� ���� Ȯ��
	release()		// �ڿ� ����
	
	3. ī�޶� �Ǵ� ������ ���Ϸκ��� �� �������� ���� ������ �޾� ���� ���
	VideoCaputure& VideoCapture::operator >> (Mat& image);
	read(OutputArray image);

	4. ���� ���� �ִ� ī�޶� ��ġ �Ǵ� ���������κ��� ���� ���� ������ �޾� ����
	get(int propId) const;		// CAP_PROP	+ {POS_MSEC, POS_FRAMES}, POS

	5. �����ϱ�
	set(int propId, double value);
*/

