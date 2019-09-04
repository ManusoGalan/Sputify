/********************************************************************************
** Form generated from reading UI file 'Sputify.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPUTIFY_H
#define UI_SPUTIFY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QColumnView>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SputifyClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *playlistName;
    QColumnView *songList;
    QFrame *gridFrame;
    QGridLayout *gridLayout_2;
    QHBoxLayout *buttonsLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *shuffleBtn;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *prevBtn;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *playBtn;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *nextBtn;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *repeatBtn;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *timeLayout;
    QLabel *remainingTime;
    QSlider *timeSlider;
    QLabel *totalTime;
    QHBoxLayout *songLayout;
    QGraphicsView *coverArt;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QLabel *songName;
    QLabel *artistName;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QMainWindow *SputifyClass)
    {
        if (SputifyClass->objectName().isEmpty())
            SputifyClass->setObjectName(QString::fromUtf8("SputifyClass"));
        SputifyClass->setWindowModality(Qt::NonModal);
        SputifyClass->resize(979, 561);
        SputifyClass->setStyleSheet(QString::fromUtf8("QSlider#songList::groove:horizontal {\n"
"    border: 1px solid #999999;\n"
"    height: 8px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"    margin: 2px 0;\n"
"}\n"
"\n"
"QSlider#songList::handle:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"    border: 1px solid #5c5c5c;\n"
"    width: 18px;\n"
"    margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"    border-radius: 3px;\n"
"}\n"
"\n"
"QSlider#songList::add-page:vertical {\n"
"    background: white;\n"
"}\n"
"\n"
"QSlider#songList::sub-page:vertical {\n"
"    background: pink;\n"
"}"));
        SputifyClass->setTabShape(QTabWidget::Rounded);
        SputifyClass->setUnifiedTitleAndToolBarOnMac(false);
        centralWidget = new QWidget(SputifyClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #4D4D4D, stop:  0.2 #333333, stop: 1 #1A1A1A);"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        playlistName = new QLabel(centralWidget);
        playlistName->setObjectName(QString::fromUtf8("playlistName"));
        playlistName->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,0,0);\n"
"color: rgb(255, 255, 255);\n"
"font: 87 36pt \"Segoe UI Black\";"));
        playlistName->setMargin(8);

        verticalLayout->addWidget(playlistName);

        songList = new QColumnView(centralWidget);
        songList->setObjectName(QString::fromUtf8("songList"));
        songList->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,0,0);"));
        songList->setFrameShape(QFrame::NoFrame);
        songList->setFrameShadow(QFrame::Plain);

        verticalLayout->addWidget(songList);

        gridFrame = new QFrame(centralWidget);
        gridFrame->setObjectName(QString::fromUtf8("gridFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(100);
        sizePolicy1.setHeightForWidth(gridFrame->sizePolicy().hasHeightForWidth());
        gridFrame->setSizePolicy(sizePolicy1);
        gridFrame->setStyleSheet(QString::fromUtf8("background-color: #3b3b3b"));
        gridLayout_2 = new QGridLayout(gridFrame);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        buttonsLayout = new QHBoxLayout();
        buttonsLayout->setSpacing(0);
        buttonsLayout->setObjectName(QString::fromUtf8("buttonsLayout"));
        buttonsLayout->setContentsMargins(-1, 8, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonsLayout->addItem(horizontalSpacer);

        shuffleBtn = new QPushButton(gridFrame);
        shuffleBtn->setObjectName(QString::fromUtf8("shuffleBtn"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Sputify/shuffle.png"), QSize(), QIcon::Normal, QIcon::Off);
        shuffleBtn->setIcon(icon);
        shuffleBtn->setIconSize(QSize(20, 20));
        shuffleBtn->setFlat(true);

        buttonsLayout->addWidget(shuffleBtn);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        buttonsLayout->addItem(horizontalSpacer_4);

        prevBtn = new QPushButton(gridFrame);
        prevBtn->setObjectName(QString::fromUtf8("prevBtn"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Sputify/skip_previous.png"), QSize(), QIcon::Normal, QIcon::Off);
        prevBtn->setIcon(icon1);
        prevBtn->setIconSize(QSize(24, 24));
        prevBtn->setFlat(true);

        buttonsLayout->addWidget(prevBtn);

        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        buttonsLayout->addItem(horizontalSpacer_5);

        playBtn = new QPushButton(gridFrame);
        playBtn->setObjectName(QString::fromUtf8("playBtn"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Sputify/play_circle.png"), QSize(), QIcon::Normal, QIcon::Off);
        playBtn->setIcon(icon2);
        playBtn->setIconSize(QSize(36, 36));
        playBtn->setFlat(true);

        buttonsLayout->addWidget(playBtn);

        horizontalSpacer_6 = new QSpacerItem(10, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        buttonsLayout->addItem(horizontalSpacer_6);

        nextBtn = new QPushButton(gridFrame);
        nextBtn->setObjectName(QString::fromUtf8("nextBtn"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Sputify/skip_next.png"), QSize(), QIcon::Normal, QIcon::Off);
        nextBtn->setIcon(icon3);
        nextBtn->setIconSize(QSize(24, 24));
        nextBtn->setFlat(true);

        buttonsLayout->addWidget(nextBtn);

        horizontalSpacer_7 = new QSpacerItem(10, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        buttonsLayout->addItem(horizontalSpacer_7);

        repeatBtn = new QPushButton(gridFrame);
        repeatBtn->setObjectName(QString::fromUtf8("repeatBtn"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Sputify/repeat.png"), QSize(), QIcon::Normal, QIcon::Off);
        repeatBtn->setIcon(icon4);
        repeatBtn->setIconSize(QSize(20, 20));
        repeatBtn->setFlat(true);

        buttonsLayout->addWidget(repeatBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonsLayout->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(buttonsLayout, 0, 2, 1, 10);

        timeLayout = new QHBoxLayout();
        timeLayout->setSpacing(16);
        timeLayout->setObjectName(QString::fromUtf8("timeLayout"));
        timeLayout->setContentsMargins(16, -1, 16, -1);
        remainingTime = new QLabel(gridFrame);
        remainingTime->setObjectName(QString::fromUtf8("remainingTime"));
        remainingTime->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,0,0);\n"
"color: white;"));

        timeLayout->addWidget(remainingTime);

        timeSlider = new QSlider(gridFrame);
        timeSlider->setObjectName(QString::fromUtf8("timeSlider"));
        timeSlider->setAutoFillBackground(false);
        timeSlider->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,0,0);"));
        timeSlider->setValue(23);
        timeSlider->setOrientation(Qt::Horizontal);

        timeLayout->addWidget(timeSlider);

        totalTime = new QLabel(gridFrame);
        totalTime->setObjectName(QString::fromUtf8("totalTime"));
        totalTime->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,0,0);\n"
"color: white;"));

        timeLayout->addWidget(totalTime);


        gridLayout_2->addLayout(timeLayout, 1, 2, 2, 10);

        songLayout = new QHBoxLayout();
        songLayout->setSpacing(6);
        songLayout->setObjectName(QString::fromUtf8("songLayout"));
        coverArt = new QGraphicsView(gridFrame);
        coverArt->setObjectName(QString::fromUtf8("coverArt"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(100);
        sizePolicy2.setVerticalStretch(100);
        sizePolicy2.setHeightForWidth(coverArt->sizePolicy().hasHeightForWidth());
        coverArt->setSizePolicy(sizePolicy2);
        coverArt->setMaximumSize(QSize(100, 100));
        coverArt->setFrameShape(QFrame::NoFrame);
        coverArt->setFrameShadow(QFrame::Plain);
        coverArt->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        coverArt->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        songLayout->addWidget(coverArt);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        songName = new QLabel(gridFrame);
        songName->setObjectName(QString::fromUtf8("songName"));
        songName->setMinimumSize(QSize(125, 0));
        songName->setMaximumSize(QSize(250, 16777215));
        songName->setStyleSheet(QString::fromUtf8("color: white;"));

        verticalLayout_2->addWidget(songName);

        artistName = new QLabel(gridFrame);
        artistName->setObjectName(QString::fromUtf8("artistName"));
        artistName->setMinimumSize(QSize(125, 0));
        artistName->setMaximumSize(QSize(250, 16777215));
        artistName->setStyleSheet(QString::fromUtf8("color: white;"));

        verticalLayout_2->addWidget(artistName);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        songLayout->addLayout(verticalLayout_2);


        gridLayout_2->addLayout(songLayout, 0, 0, 3, 1);


        verticalLayout->addWidget(gridFrame);

        SputifyClass->setCentralWidget(centralWidget);

        retranslateUi(SputifyClass);

        QMetaObject::connectSlotsByName(SputifyClass);
    } // setupUi

    void retranslateUi(QMainWindow *SputifyClass)
    {
        SputifyClass->setWindowTitle(QCoreApplication::translate("SputifyClass", "Sputify", nullptr));
        playlistName->setText(QCoreApplication::translate("SputifyClass", "Mi M\303\272sica", nullptr));
        shuffleBtn->setText(QString());
        prevBtn->setText(QString());
        playBtn->setText(QString());
        nextBtn->setText(QString());
        repeatBtn->setText(QString());
        remainingTime->setText(QCoreApplication::translate("SputifyClass", "0:00", nullptr));
        totalTime->setText(QCoreApplication::translate("SputifyClass", "0:00", nullptr));
        songName->setText(QString());
        artistName->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SputifyClass: public Ui_SputifyClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPUTIFY_H
