/********************************************************************************
** Form generated from reading UI file 'AppObjetQT.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPOBJETQT_H
#define UI_APPOBJETQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AppObjetQTClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AppObjetQTClass)
    {
        if (AppObjetQTClass->objectName().isEmpty())
            AppObjetQTClass->setObjectName(QStringLiteral("AppObjetQTClass"));
        AppObjetQTClass->resize(600, 400);
        menuBar = new QMenuBar(AppObjetQTClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        AppObjetQTClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(AppObjetQTClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        AppObjetQTClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(AppObjetQTClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        AppObjetQTClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(AppObjetQTClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        AppObjetQTClass->setStatusBar(statusBar);

        retranslateUi(AppObjetQTClass);

        QMetaObject::connectSlotsByName(AppObjetQTClass);
    } // setupUi

    void retranslateUi(QMainWindow *AppObjetQTClass)
    {
        AppObjetQTClass->setWindowTitle(QApplication::translate("AppObjetQTClass", "AppObjetQT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AppObjetQTClass: public Ui_AppObjetQTClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPOBJETQT_H
