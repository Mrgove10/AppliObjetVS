/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_4;
    QPushButton *pushButton_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *EmailLineEdit;
    QLineEdit *NomLineEdit;
    QLabel *label_2;
    QLineEdit *PrenomLineEdit;
    QLabel *label_4;
    QLineEdit *TelephoneLineEdit;
    QLabel *label_8;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_6;
    QDateEdit *dateEdit;
    QLineEdit *CvLineEdit;
    QLineEdit *PromoLineEdit;
    QLabel *label_9;
    QLineEdit *MontantScolariteLineEdit;
    QLabel *label_10;
    QLineEdit *StageEntrepriseLineEdit;
    QWidget *tab_5;
    QWidget *tab_6;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(521, 491);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 501, 431));
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        pushButton_2 = new QPushButton(tab_4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(140, 350, 151, 25));
        gridLayoutWidget = new QWidget(tab_4);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(14, 10, 471, 321));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        font.setStrikeOut(false);
        label->setFont(font);
        label->setLineWidth(1);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        EmailLineEdit = new QLineEdit(gridLayoutWidget);
        EmailLineEdit->setObjectName(QStringLiteral("EmailLineEdit"));

        gridLayout->addWidget(EmailLineEdit, 3, 1, 1, 1);

        NomLineEdit = new QLineEdit(gridLayoutWidget);
        NomLineEdit->setObjectName(QStringLiteral("NomLineEdit"));

        gridLayout->addWidget(NomLineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setUnderline(true);
        font1.setWeight(75);
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        PrenomLineEdit = new QLineEdit(gridLayoutWidget);
        PrenomLineEdit->setObjectName(QStringLiteral("PrenomLineEdit"));

        gridLayout->addWidget(PrenomLineEdit, 1, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        TelephoneLineEdit = new QLineEdit(gridLayoutWidget);
        TelephoneLineEdit->setObjectName(QStringLiteral("TelephoneLineEdit"));

        gridLayout->addWidget(TelephoneLineEdit, 2, 1, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);

        gridLayout->addWidget(label_8, 6, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        dateEdit = new QDateEdit(gridLayoutWidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        gridLayout->addWidget(dateEdit, 4, 1, 1, 1);

        CvLineEdit = new QLineEdit(gridLayoutWidget);
        CvLineEdit->setObjectName(QStringLiteral("CvLineEdit"));

        gridLayout->addWidget(CvLineEdit, 6, 1, 1, 1);

        PromoLineEdit = new QLineEdit(gridLayoutWidget);
        PromoLineEdit->setObjectName(QStringLiteral("PromoLineEdit"));

        gridLayout->addWidget(PromoLineEdit, 5, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font1);

        gridLayout->addWidget(label_9, 7, 0, 1, 1);

        MontantScolariteLineEdit = new QLineEdit(gridLayoutWidget);
        MontantScolariteLineEdit->setObjectName(QStringLiteral("MontantScolariteLineEdit"));

        gridLayout->addWidget(MontantScolariteLineEdit, 7, 1, 1, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font1);

        gridLayout->addWidget(label_10, 8, 0, 1, 1);

        StageEntrepriseLineEdit = new QLineEdit(gridLayoutWidget);
        StageEntrepriseLineEdit->setObjectName(QStringLiteral("StageEntrepriseLineEdit"));

        gridLayout->addWidget(StageEntrepriseLineEdit, 8, 1, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        tabWidget->addTab(tab_6, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 521, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "ajouter un etudiant", nullptr));
        label->setText(QApplication::translate("MainWindow", "Nom :", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Prenom :", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Telephone : ", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "CV :", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "e-mail : ", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Date de naissance :", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Promo :", nullptr));
        CvLineEdit->setText(QString());
        PromoLineEdit->setText(QString());
        label_9->setText(QApplication::translate("MainWindow", "Montant Scolarit\303\251 : ", nullptr));
        MontantScolariteLineEdit->setText(QString());
        label_10->setText(QApplication::translate("MainWindow", "Stage Entreprise : ", nullptr));
        StageEntrepriseLineEdit->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Etudiant", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "Professeur", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindow", "Admininstration", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
