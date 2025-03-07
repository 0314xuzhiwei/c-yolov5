﻿//#pragma execution_character_set("utf-8")

#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QFileDialog>
#include <QFile>
#include<opencv2/opencv.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/dnn.hpp>
#include <QMainWindow>
#include <QTimer>
#include <QImage>
#include <QPixmap>
#include <QDateTime>
#include <QMutex>
#include <QMutexLocker>
#include <QMimeDatabase>
#include <iostream>
#include <yolov5.h>
#include <chrono>
#include<QDebug>

using namespace cv;
using namespace std;




////openvino环境配置
//#pragma comment(lib,"C:\\Program Files (x86)\\Intel\\openvino_2021\\opencv\\lib\\opencv_core453.lib")
//#pragma comment(lib,"C:\\Program Files (x86)\\Intel\\openvino_2021\\opencv\\lib\\opencv_imgcodecs453.lib")
//#pragma comment(lib,"C:\\Program Files (x86)\\Intel\\openvino_2021\\opencv\\lib\\opencv_imgproc453.lib")
//#pragma comment(lib,"C:\\Program Files (x86)\\Intel\\openvino_2021\\opencv\\lib\\opencv_videoio453.lib")
//#pragma comment(lib,"C:\\Program Files (x86)\\Intel\\openvino_2021\\opencv\\lib\\opencv_objdetect453.lib")
//#pragma comment(lib,"C:\\Program Files (x86)\\Intel\\openvino_2021\\opencv\\lib\\opencv_dnn453.lib")
//#pragma comment(lib,"C:\\Program Files (x86)\\Intel\\openvino_2021\\deployment_tools\\inference_engine\\lib\\intel64\\Release\\inference_engine.lib")
//#pragma comment(lib,"C:\\Program Files (x86)\\Intel\\openvino_2021\\deployment_tools\\inference_engine\\lib\\intel64\\Release\\inference_engine_c_api.lib")
//#pragma comment(lib,"C:\\Program Files (x86)\\Intel\\openvino_2021\\deployment_tools\\inference_engine\\lib\\intel64\\Release\\inference_engine_transformations.lib")


//opencvdnn环境配置
//#ifdef QT_NO_DEBUG
//#pragma comment(lib,"D:/0314/opencv452/newbuild/install/x64/vc15/lib/opencv_core452.lib")
//#pragma comment(lib,"D:/0314/opencv452/newbuild/install/x64/vc15/lib/opencv_imgcodecs452.lib")
//#pragma comment(lib,"D:/0314/opencv452/newbuild/install/x64/vc15/lib/opencv_imgproc452.lib")
//#pragma comment(lib,"D:/0314/opencv452/newbuild/install/x64/vc15/lib/opencv_imgcodecs452.lib")
//#pragma comment(lib,"D:/0314/opencv452/newbuild/install/x64/vc15/lib/opencv_video452.lib")
//#pragma comment(lib,"D:/0314/opencv452/newbuild/install/x64/vc15/lib/opencv_videoio452.lib")
//#pragma comment(lib,"D:/0314/opencv452/newbuild/install/x64/vc15/lib/opencv_objdetect452.lib")
//#pragma comment(lib,"D:/0314/opencv452/newbuild/install/x64/vc15/lib/opencv_shape452.lib")
//#pragma comment(lib,"D:/0314/opencv452/newbuild/install/x64/vc15/lib/opencv_dnn452.lib")
//#pragma comment(lib,"D:/0314/opencv452/newbuild/install/x64/vc15/lib/opencv_dnn_objdetect452.lib")
//#endif



QPixmap Mat2Image(cv::Mat src);

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void Init();
    ~MainWindow();

private slots:
    void readFrame(); //自定义信号处理函数


    void on_openfile_clicked();

    void on_loadfile_clicked();

    void on_startdetect_clicked();

    void on_stopdetect_clicked();

    void on_comboBox_activated(const QString &arg1);

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    cv::VideoCapture *capture;

    YOLOV5 *yolov5;
    NetConfig conf;
    NetConfig *yolo_nets;
    std::vector<cv::Rect> bboxes;
    int IsDetect_ok = 0;
};
#endif // MAINWINDOW_H
