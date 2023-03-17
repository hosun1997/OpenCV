#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main(void) {
	String str1 = "Hello";
	String str2 = "World";
	String str3 = str1 + " " + str2;

	cout << "str1: " << str1 << endl;
	cout << "str2: " << str2 << endl;
	cout << "str3: " << str3 << endl;

	for (int i = 0; i < 3; i++) {
		String str = format("Hello Test[%d]", i + 1);
		cout << "str: " << str << endl;
	}

	return 0;
}