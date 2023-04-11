#include <opencv2/opencv.hpp>

cv::Mat createImg() {
    const int rows = 400;
    const int cols = 600;
    cv::Mat img(rows, cols, CV_8UC3, cv::Scalar(0, 255, 0));
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if ((i / 50 + j / 50) % 2 == 0) {
                img.data[(i * cols + j) * 3] = 0;
                img.data[(i * cols + j) * 3 + 1] = 0;
                img.data[(i * cols + j) * 3 + 2] = 0;
            }
        }
    }
    return img;
}

int main() {
//    cv::Mat img = cv::imread(R"(D:\Projects\image_processing\images\LenaRGB.bmp)", cv::IMREAD_COLOR);
//    cv::imshow("Lena RGB", img);
    cv::imshow("Demo", createImg());
    cv::waitKey(0);
    return 0;
}
