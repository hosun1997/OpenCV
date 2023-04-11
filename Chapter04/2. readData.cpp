#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;


void readData() {
	String name;
	int age;
	Point pt1;
	vector<int> scores;
	Mat mat1;

	FileStorage fs(filename, FileStorage::READ);		//mydata.json
	if (!fs.isOpened()) {
		cerr << "File Open failed!!" << endl;
		return;
	}

	fs["name"] >> name;
	fs["age"] >> age;
	fs["point"] >> pt1;
	fs["scores"] >> scores;
	fs["data"] >> mat1;

	fs.release();

	cout << "name: " << name << endl;
	cout << "age: " << age << endl;
	cout << "point: " << pt1 << endl;
	cout << "scores: " << Mat(scores).t() << endl;
	cout << "data: " << mat1 << endl;

	

	
}