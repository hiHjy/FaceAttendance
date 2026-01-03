#ifndef FACEATTENDENCE_H
#define FACEATTENDENCE_H
#include <QMainWindow>
#include <opencv.hpp>
#include <QThread>
#include <QDebug>
#include "databasemannager.h"
#include <QMessageBox>
#include <QMutex>
#include <atomic>
#include <QQuickWidget>
#include <QNetworkAccessManager>
using namespace cv;
int faceSearch(QString base64Image, QString token);

QT_BEGIN_NAMESPACE
namespace Ui { class FaceAttendence; }
QT_END_NAMESPACE
class Work : public QThread {
    Q_OBJECT

public:

    Work(QWidget *parent = nullptr, cv::Mat *frame = nullptr, cv::CascadeClassifier *cascade = nullptr, QMutex* frameMutex = nullptr);
    ~Work();

    void run() override;
    cv::Mat *frame;
    cv::CascadeClassifier *cascade;
    QMutex  *frameMutex;


signals:
    void sigFaceReady(QString base64, cv::Mat frame);
    void sigFaceTrace(int x, int y, bool status);



};



class FaceAttendence : public QMainWindow
{
    Q_OBJECT

public:
    friend class Work;
    friend int faceSearch(QString base64Image, QString token);
    friend void getAccessToken(std::function<void(QString)> callback);
    FaceAttendence(QWidget *parent = nullptr);
    ~FaceAttendence();
    //定时器事件
    //void timerEvent(QTimerEvent *e);
    void setStatus(bool v);

    void updateFrame();
    static FaceAttendence *getInstance();
    void startCamera();
    void stopCamera();
    void workThreadConnection();
    QMutex frameMutex;
    QMutex frameSuccessMutex;
    VideoCapture cap;
signals:
    void sigFaceVerified(UserInfo user);
    void sigCropReady();
    void sigFaceCrop( QImage img);



private:
    Ui::FaceAttendence *ui;
    QQuickWidget *keyboardWidget;
    QTimer *timer;

    Work *face_dect;
    cv::CascadeClassifier cascade;//一级级联分类器
    cv::Mat frame;
    cv::Mat frame_success;
    std::atomic_bool detectionSuccess{false};
    QNetworkAccessManager* manager;
    static FaceAttendence* self;
    int old_x ;
    int old_y ;


};



#endif // FACEATTENDENCE_H
