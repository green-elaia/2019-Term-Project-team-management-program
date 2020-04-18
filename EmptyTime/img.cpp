#include"img.h"


// constructor
Img::Img(){}
Img::Img(std::string filepath){
    // read an image
    this->image = imread(filepath, 1);

    // convert to grayscale
    Mat img_gray_3channel, img_gray_1channel;
//    img_gray_3channel.create(image.rows, image.cols, CV_8UC3); //3채널로 생성
    img_gray_1channel.create(image.rows, image.cols, CV_8UC1); //1채널로 생성

    for (int y = 0; y < image.rows; y++)
        for (int x = 0; x < image.cols; x++)
        {
            uchar b = image.at<Vec3b>(y, x)[0];
            uchar g = image.at<Vec3b>(y, x)[1];
            uchar r = image.at<Vec3b>(y, x)[2];

            uchar gray = (b + g + r) / 3.0;

            img_gray_1channel.at<uchar>(y, x) = gray;

//            img_gray_3channel.at<Vec3b>(y, x)[0] = gray;
//            img_gray_3channel.at<Vec3b>(y, x)[1] = gray;
//            img_gray_3channel.at<Vec3b>(y, x)[2] = gray;
        }
    this->gray_img = img_gray_1channel;
//    imshow(filepath, this->gray_img);
//        imshow("Grayscale 3 channel", img_gray_3channel);
//        imshow("Grayscale 3 channel", img_gray_1channel);
}


Mat Img::getGray(){
    return this->gray_img;
}


