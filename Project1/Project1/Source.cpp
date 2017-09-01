#define _ITERATOR_DEBUG_LEVEL 0
#include "opencv2/opencv.hpp"
using namespace cv;
using namespace std;
int main(int, char**)
{
	VideoCapture cap("VfE_html5.mp4");
	if (!cap.isOpened())  
		return -1;
	namedWindow("video", CV_WINDOW_NORMAL);
	Mat frame;
	while(1)
	{
		cap >> frame; 
		if (frame.empty()) return 0;
		imshow("video", frame);
		if (waitKey(30) >= 0) return 0;
	}
	return 0;
}