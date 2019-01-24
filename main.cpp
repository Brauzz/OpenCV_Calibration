#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;
int main(int argc,char** argv)
{
    Mat src;
    src = imread("/home/cz/Pictures/lena.jpg");
    if (src.empty())
    {
        printf("could not load image!");
        return -1;
    }
    namedWindow("src", CV_WINDOW_AUTOSIZE);
    imshow("src", src);

    waitKey(0);
    return 0;
}

