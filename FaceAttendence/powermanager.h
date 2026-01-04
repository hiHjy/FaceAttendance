#ifndef POWERMANAGER_H
#define POWERMANAGER_H
#include <QSocketNotifier>
#include <QObject>
#include <unistd.h>
#include <sys/inotify.h>

/*这个类通过读取背光文件去控制消耗极大的摄像头和opencv检测线程的启停，当无人使用时，只有消耗极小的传感器在工作其他的全部暂停，实现电源管理*/

class PowerManager : public QObject
{
    Q_OBJECT
public:
    explicit PowerManager(QObject *parent = nullptr);

signals:
    void powerStatusChange(bool State);
public slots:
    void backlightStatusChanged();
private:
QSocketNotifier *notifier = nullptr;
int inotifyFd = -1; //用于监控背光文件是否被修改，修改了就会触发信号去读背光文件，判断是否亮屏，如果亮屏那么进入低功耗状态，否则就是工作状态
bool lastState = true;

private:
    bool readBrightness(int &val);
};

#endif // POWERMANAGER_H
