#include <opencv2/aruco.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/core.hpp>
#include <opencv2/objdetect.hpp>

using namespace cv;

int main()
{
    Mat markerImage;
    aruco::Dictionary dictionary = cv::aruco::getPredefinedDictionary(cv::aruco::DICT_6X6_250);
    aruco::generateImageMarker(dictionary, 23, 200, markerImage, 1);
    imwrite("marker23.png", markerImage);
    
    
}