/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *openfile;
    QPushButton *loadfile;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *startdetect;
    QPushButton *stopdetect;
    QLabel *label;
    QTextEdit *textEditlog;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(951, 497);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter_2 = new QSplitter(centralwidget);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        openfile = new QPushButton(widget);
        openfile->setObjectName(QString::fromUtf8("openfile"));
        openfile->setMinimumSize(QSize(120, 40));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/open.ico"), QSize(), QIcon::Normal, QIcon::Off);
        openfile->setIcon(icon);
        openfile->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(openfile);

        loadfile = new QPushButton(widget);
        loadfile->setObjectName(QString::fromUtf8("loadfile"));
        loadfile->setMinimumSize(QSize(120, 40));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/flush.ico"), QSize(), QIcon::Normal, QIcon::Off);
        loadfile->setIcon(icon1);
        loadfile->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(loadfile);

        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(60, 38));

        horizontalLayout->addWidget(comboBox);

        horizontalSpacer = new QSpacerItem(38, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        startdetect = new QPushButton(widget);
        startdetect->setObjectName(QString::fromUtf8("startdetect"));
        startdetect->setMinimumSize(QSize(120, 40));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/play.ico"), QSize(), QIcon::Normal, QIcon::Off);
        startdetect->setIcon(icon2);
        startdetect->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(startdetect);

        stopdetect = new QPushButton(widget);
        stopdetect->setObjectName(QString::fromUtf8("stopdetect"));
        stopdetect->setMinimumSize(QSize(120, 40));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/stop.ico"), QSize(), QIcon::Normal, QIcon::Off);
        stopdetect->setIcon(icon3);
        stopdetect->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(stopdetect);

        splitter->addWidget(widget);
        label = new QLabel(splitter);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(500, 300));
        splitter->addWidget(label);
        splitter_2->addWidget(splitter);
        textEditlog = new QTextEdit(splitter_2);
        textEditlog->setObjectName(QString::fromUtf8("textEditlog"));
        textEditlog->setMinimumSize(QSize(30, 350));
        splitter_2->addWidget(textEditlog);

        gridLayout->addWidget(splitter_2, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 951, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        openfile->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
        loadfile->setText(QCoreApplication::translate("MainWindow", "\345\212\240\350\275\275\346\250\241\345\236\213", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "yolov5s", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "yolov5m", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "yolov5l", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "yolov5x", nullptr));

        startdetect->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\346\243\200\346\265\213", nullptr));
        stopdetect->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\346\243\200\346\265\213", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
