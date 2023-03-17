#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main(void) {
	Size size1, size2(10, 20);
	size1.width = 5; size1.height = 10;

	Size size3 = size1 + size2;
	Size size4 = size1 * 2;
	int area1 = size4.area();

	cout << "size1: " << size1 << endl;
	cout << "size2: " << size2 << endl;
	cout << "size3: " << size3 << endl;
	cout << "size4: " << size4 << endl;
	cout << "area1: " << area1 << endl;

	return 0;
}