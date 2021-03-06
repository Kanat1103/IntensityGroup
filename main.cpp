#include <opencv2/opencv.hpp>

using namespace cv;

int main(int argc, char *argv[]) {
    Mat image, out;
    image = imread("/home/kb1prb13/LOCAL/IG_1-14/2016-2017/Image/Intensity/lena.png", CV_LOAD_IMAGE_GRAYSCALE);

    for (int y = 0; y < out.cols; y++) {
        for (int x = 0; x < out.rows; x++) {
            out.at<uchar>(y, x) /= 2;
        }
    }

    return 0;
}