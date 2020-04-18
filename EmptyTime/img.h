#ifndef IMG_H
#define IMG_H

#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/opencv.hpp>
#include<string>

using namespace cv;
using namespace std;

class Img{
public:
    Img();
    Img(std::string filepath);
    Mat getGray();


private:
    Mat image;
    Mat gray_img;
};

#endif // IMG_H
