#include <opencv2/opencv.hpp>

using namespace cv;

int main(int argc, char *argv[]) {
    Mat image, out;
    
    image = imread(""/home/tm/lena.jpg"", CV_LOAD_IMAGE_GRAYSCALE);
    
    if(!image.data)return -1;
    
    image.covertTo(out, CV_8U)
        
    for (int y = 0; y < out.cols; y++)  for (int x = 0; x < out.rows; x++)  out.at<uchar>(y, x) /= 2;

//    threshold(out, out, 128, 255, THRESH_TRUNC);
    threshold (out,out,64,128,THRESH_BINARY);
//    threshold(out, out, 32, 64, THRESH_TRUNC);
//    threshold(out, out, 16, 255, THRESH_TRUNC);
    
    waitKey(0);
    return 0;
}
