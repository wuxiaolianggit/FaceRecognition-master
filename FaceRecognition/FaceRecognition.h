#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_FaceRecognition.h"
#include <QTimer>
#include <fstream>
#include <iostream>
#include <opencv2/core/core.hpp>
#include "FaceRecognitionFun.h"

//#define FACEMATCHING //定义启用人脸匹配
#define THRESHOLD	0.2 //判定阈值
class FaceRecognition : public QMainWindow
{
	Q_OBJECT

public:
	FaceRecognition(QWidget *parent = Q_NULLPTR);
	std::vector<string> path1;
	std::string path2;

private:
	Ui::FaceRecognitionClass ui;
	QTimer videocapTimer;
	cv::Mat videocapImage;
	cv::VideoCapture videoCap;
	FaceRecognitionFun fun;

public slots:
	void UploadClick1();
	void UploadClick2();
	void FaceCompare();
};
