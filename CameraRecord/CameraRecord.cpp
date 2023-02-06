
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
using namespace cv;
int main()
{
 VideoCapture capture(0);
 VideoWriter writer("VideoTest.avi", CV_FOURCC('M', 'J', 'P', 'G'), 25.0, Size(640, 480));
 Mat frame;
  
 while (capture.isOpened())
  {
  capture >> frame;
  writer << frame;
  imshow("video", frame);
  if (cvWaitKey(20) == 27){
   break;
  }
  }

}