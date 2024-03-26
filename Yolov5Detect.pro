QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
CONFIG += exception
#CONFIG += console
# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    yolov5.cpp

HEADERS += \
    mainwindow.h \
    yolov5.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc

RC_ICONS = eye.ico
win32
{
#    message('运行win32版本')
#    INCLUDEPATH += E:\opencv452_Qt\install\include\
#                   E:\opencv452_Qt\install\include\opencv2
#    LIBS += -L E:\opencv452_Qt\install\x64\mingw\lib\libopencv_*.a

# #========================== opencv ==========================
#    INCLUDEPATH += D:\opencv_build\install\include\
#                   D:\opencv_build\install\include\opencv2

 #========================== opencv_gpu ==========================

#INCLUDEPATH += D:/0314/opencv453/opencv-build/install/include
#INCLUDEPATH += D:/0314/opencv453/opencv-build/install/include/opencv2

#LIBS += -LD:/0314/opencv411/opencv411/build/x64/vc15/lib/ -lopencv_world411d

OPENCV = D:/0314/opencv453/opencv-build/install

LIBS += -LD:/0314/opencv453/opencv-build/install/x64/vc15/lib/ -lopencv_world453d
LIBS += -LC:/Windows/SysWOW64/ -lgdi32

INCLUDEPATH += $$OPENCV/include
DEPENDPATH += $$OPENCV/x64/vc15/bin

 #========================== openvino ==========================
#    INCLUDEPATH += "C:\Program Files (x86)\Intel\openvino_2021\opencv\include"
#    INCLUDEPATH += "C:\Program Files (x86)\Intel\openvino_2021\opencv\include\opencv2"
#    INCLUDEPATH += "C:\Program Files (x86)\Intel\openvino_2021\deployment_tools\inference_engine\include"

}

#DISTFILES += \
#    opencv.pri


