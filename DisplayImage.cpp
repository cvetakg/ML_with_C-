#include <stdio.h>
#include <opencv2/opencv.hpp>
using namespace cv;
int main(int argc, char** argv )
{
    if ( argc != 2 )
    {
        printf("usage: DisplayImage.out <Image_Path>\n");
        return -1;
    }
    Mat image;
    image = imread( argv[1], 1 );
    if ( !image.data )
    {
        printf("No image data \n");
        return -1;
    }
    
    // Create a new matrix to hold the gray image
    Mat gray;
 
    // convert RGB image to gray
    cvtColor(image, gray, COLOR_BGR2GRAY);
    
    namedWindow("Display Image", WINDOW_AUTOSIZE );
    imshow("Display Image", image);
    
    namedWindow( "Gray Image", WINDOW_AUTOSIZE );   
    imshow( "Gray Image", gray );
    
    waitKey(0);
    return 0;
}