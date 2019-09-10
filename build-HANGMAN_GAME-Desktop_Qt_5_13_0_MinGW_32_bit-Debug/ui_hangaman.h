/********************************************************************************
** Form generated from reading UI file 'hangaman.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HANGAMAN_H
#define UI_HANGAMAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HANGAMAN
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QGroupBox *groupBox_2;
    QTextBrowser *textBrowser;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *HANGAMAN)
    {
        if (HANGAMAN->objectName().isEmpty())
            HANGAMAN->setObjectName(QString::fromUtf8("HANGAMAN"));
        HANGAMAN->resize(822, 610);
        centralWidget = new QWidget(HANGAMAN);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 40, 80, 61));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 124, 80, 71));

        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 2, 1);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        textBrowser = new QTextBrowser(groupBox_2);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(70, 40, 256, 192));

        gridLayout->addWidget(groupBox_2, 1, 0, 1, 1);

        HANGAMAN->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(HANGAMAN);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 822, 25));
        HANGAMAN->setMenuBar(menuBar);
        mainToolBar = new QToolBar(HANGAMAN);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        HANGAMAN->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(HANGAMAN);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        HANGAMAN->setStatusBar(statusBar);

        retranslateUi(HANGAMAN);

        QMetaObject::connectSlotsByName(HANGAMAN);
    } // setupUi

    void retranslateUi(QMainWindow *HANGAMAN)
    {
        HANGAMAN->setWindowTitle(QCoreApplication::translate("HANGAMAN", "HANGAMAN", nullptr));
        groupBox->setTitle(QCoreApplication::translate("HANGAMAN", "MENU", nullptr));
        pushButton->setText(QCoreApplication::translate("HANGAMAN", "PLAY", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HANGAMAN", "QUIT", nullptr));
        label->setText(QCoreApplication::translate("HANGAMAN", "TextLabel", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("HANGAMAN", "About", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("HANGAMAN", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">HANGMAN GAME </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">GITHUB : Github.com/NasarTarique</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HANGAMAN: public Ui_HANGAMAN {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HANGAMAN_H
