#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include "opencv2/core/core.hpp"
#include <stdio.h>

using namespace cv;
using namespace std;


// resize image

// run: ./resize_image motan.jpg 100 100


int main(int argc, char** argv)
{
char* imageName = argv[1]; //image name
char* x = argv[2]; //width
char* y = argv[3]; //height
int xi=x[0];
int yi=y[0];

Mat image;
image = imread(imageName, 1);

if(argc != 4 || !image.data)
{
cout<<"No image data \n";
return -1;
}

Mat resize_image;
Size size(xi,yi);

resize(image,resize_image,size);//resize image
imwrite("/home/george/Desktop/resize_image/ResizeImage.jpg", resize_image);
namedWindow(imageName, CV_WINDOW_AUTOSIZE);
namedWindow("Resized Image", CV_WINDOW_AUTOSIZE);
imshow(imageName, image); //original image
imshow("Resized Image", resize_image); // resized image

waitKey(0);
return 0;
}

