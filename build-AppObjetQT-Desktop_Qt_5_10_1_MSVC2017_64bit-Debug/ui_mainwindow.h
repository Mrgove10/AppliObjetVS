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
    QPushButton *etudiantAjout;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *etudiantEmail;
    QLineEdit *etudiantNom;
    QLabel *label_2;
    QLineEdit *etudiantPrenom;
    QLabel *label_4;
    QLineEdit *etudiantTelephone;
    QLabel *label_8;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_6;
    QDateEdit *etudiantDateNaissance;
    QLineEdit *etudiantCV;
    QLineEdit *etudiantPromo;
    QLabel *label_9;
    QLineEdit *etudiantMontantScolarite;
    QLabel *label_10;
    QLineEdit *etudiantStageEntreprise;
    QWidget *tab_5;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_7;
    QLineEdit *profEmail;
    QLineEdit *profTelephone;
    QLineEdit *profNom;
    QLabel *label_11;
    QLineEdit *profPrenom;
    QLabel *label_12;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_14;
    QLabel *label_13;
    QDateEdit *profDateNaissance;
    QLineEdit *profCasierJudiciaire;
    QLineEdit *profNumCompteBancaire;
    QPushButton *profAjout;
    QWidget *tab_6;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLineEdit *adminCongeRestant;
    QLabel *label_28;
    QDateEdit *adminDateVirementSalaire;
    QLabel *label_29;
    QLabel *label_26;
    QLabel *label_17;
    QLineEdit *adminEmailPerso;
    QLineEdit *adminNom;
    QLineEdit *adminTelPerso;
    QLineEdit *adminPrenom;
    QLabel *label_19;
    QLabel *label_18;
    QLabel *label_20;
    QLabel *label_23;
    QLabel *label_21;
    QDateEdit *adminDateNaissance;
    QLabel *label_22;
    QLineEdit *adminTelFixPro;
    QLabel *label_24;
    QLabel *label_25;
    QLineEdit *adminEmailPro;
    QLineEdit *adminNumCompteBancaire;
    QLineEdit *adminTelMobilePro;
    QLabel *label_27;
    QLineEdit *adminTypePoste;
    QLineEdit *adminHoraires;
    QLineEdit *adminContrat;
    QLineEdit *adminSalaire;
    QLabel *label_30;
    QLabel *label_31;
    QPushButton *adminAjout;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(671, 658);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 641, 581));
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        etudiantAjout = new QPushButton(tab_4);
        etudiantAjout->setObjectName(QStringLiteral("etudiantAjout"));
        etudiantAjout->setGeometry(QRect(170, 380, 151, 25));
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

        etudiantEmail = new QLineEdit(gridLayoutWidget);
        etudiantEmail->setObjectName(QStringLiteral("etudiantEmail"));

        gridLayout->addWidget(etudiantEmail, 3, 1, 1, 1);

        etudiantNom = new QLineEdit(gridLayoutWidget);
        etudiantNom->setObjectName(QStringLiteral("etudiantNom"));

        gridLayout->addWidget(etudiantNom, 0, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setUnderline(true);
        font1.setWeight(75);
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        etudiantPrenom = new QLineEdit(gridLayoutWidget);
        etudiantPrenom->setObjectName(QStringLiteral("etudiantPrenom"));

        gridLayout->addWidget(etudiantPrenom, 1, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        etudiantTelephone = new QLineEdit(gridLayoutWidget);
        etudiantTelephone->setObjectName(QStringLiteral("etudiantTelephone"));

        gridLayout->addWidget(etudiantTelephone, 2, 1, 1, 1);

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

        etudiantDateNaissance = new QDateEdit(gridLayoutWidget);
        etudiantDateNaissance->setObjectName(QStringLiteral("etudiantDateNaissance"));

        gridLayout->addWidget(etudiantDateNaissance, 4, 1, 1, 1);

        etudiantCV = new QLineEdit(gridLayoutWidget);
        etudiantCV->setObjectName(QStringLiteral("etudiantCV"));

        gridLayout->addWidget(etudiantCV, 6, 1, 1, 1);

        etudiantPromo = new QLineEdit(gridLayoutWidget);
        etudiantPromo->setObjectName(QStringLiteral("etudiantPromo"));

        gridLayout->addWidget(etudiantPromo, 5, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font1);

        gridLayout->addWidget(label_9, 7, 0, 1, 1);

        etudiantMontantScolarite = new QLineEdit(gridLayoutWidget);
        etudiantMontantScolarite->setObjectName(QStringLiteral("etudiantMontantScolarite"));

        gridLayout->addWidget(etudiantMontantScolarite, 7, 1, 1, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font1);

        gridLayout->addWidget(label_10, 8, 0, 1, 1);

        etudiantStageEntreprise = new QLineEdit(gridLayoutWidget);
        etudiantStageEntreprise->setObjectName(QStringLiteral("etudiantStageEntreprise"));

        gridLayout->addWidget(etudiantStageEntreprise, 8, 1, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        gridLayoutWidget_2 = new QWidget(tab_5);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(20, 30, 471, 321));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);
        label_7->setLineWidth(1);

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        profEmail = new QLineEdit(gridLayoutWidget_2);
        profEmail->setObjectName(QStringLiteral("profEmail"));

        gridLayout_2->addWidget(profEmail, 3, 1, 1, 1);

        profTelephone = new QLineEdit(gridLayoutWidget_2);
        profTelephone->setObjectName(QStringLiteral("profTelephone"));

        gridLayout_2->addWidget(profTelephone, 2, 1, 1, 1);

        profNom = new QLineEdit(gridLayoutWidget_2);
        profNom->setObjectName(QStringLiteral("profNom"));

        gridLayout_2->addWidget(profNom, 0, 1, 1, 1);

        label_11 = new QLabel(gridLayoutWidget_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font1);

        gridLayout_2->addWidget(label_11, 1, 0, 1, 1);

        profPrenom = new QLineEdit(gridLayoutWidget_2);
        profPrenom->setObjectName(QStringLiteral("profPrenom"));

        gridLayout_2->addWidget(profPrenom, 1, 1, 1, 1);

        label_12 = new QLabel(gridLayoutWidget_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font1);

        gridLayout_2->addWidget(label_12, 2, 0, 1, 1);

        label_15 = new QLabel(gridLayoutWidget_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font1);

        gridLayout_2->addWidget(label_15, 4, 0, 1, 1);

        label_16 = new QLabel(gridLayoutWidget_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font1);

        gridLayout_2->addWidget(label_16, 5, 0, 1, 1);

        label_14 = new QLabel(gridLayoutWidget_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font1);

        gridLayout_2->addWidget(label_14, 3, 0, 1, 1);

        label_13 = new QLabel(gridLayoutWidget_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font1);

        gridLayout_2->addWidget(label_13, 6, 0, 1, 1);

        profDateNaissance = new QDateEdit(gridLayoutWidget_2);
        profDateNaissance->setObjectName(QStringLiteral("profDateNaissance"));

        gridLayout_2->addWidget(profDateNaissance, 4, 1, 1, 1);

        profCasierJudiciaire = new QLineEdit(gridLayoutWidget_2);
        profCasierJudiciaire->setObjectName(QStringLiteral("profCasierJudiciaire"));

        gridLayout_2->addWidget(profCasierJudiciaire, 6, 1, 1, 1);

        profNumCompteBancaire = new QLineEdit(gridLayoutWidget_2);
        profNumCompteBancaire->setObjectName(QStringLiteral("profNumCompteBancaire"));

        gridLayout_2->addWidget(profNumCompteBancaire, 5, 1, 1, 1);

        profAjout = new QPushButton(tab_5);
        profAjout->setObjectName(QStringLiteral("profAjout"));
        profAjout->setGeometry(QRect(200, 430, 181, 28));
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        gridLayoutWidget_3 = new QWidget(tab_6);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(20, 30, 441, 431));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setSpacing(7);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        adminCongeRestant = new QLineEdit(gridLayoutWidget_3);
        adminCongeRestant->setObjectName(QStringLiteral("adminCongeRestant"));

        gridLayout_3->addWidget(adminCongeRestant, 14, 1, 1, 1);

        label_28 = new QLabel(gridLayoutWidget_3);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setFont(font1);

        gridLayout_3->addWidget(label_28, 13, 0, 1, 1);

        adminDateVirementSalaire = new QDateEdit(gridLayoutWidget_3);
        adminDateVirementSalaire->setObjectName(QStringLiteral("adminDateVirementSalaire"));

        gridLayout_3->addWidget(adminDateVirementSalaire, 13, 1, 1, 1);

        label_29 = new QLabel(gridLayoutWidget_3);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setFont(font1);

        gridLayout_3->addWidget(label_29, 14, 0, 1, 1);

        label_26 = new QLabel(gridLayoutWidget_3);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setFont(font1);

        gridLayout_3->addWidget(label_26, 9, 0, 1, 1);

        label_17 = new QLabel(gridLayoutWidget_3);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFont(font);
        label_17->setLineWidth(1);

        gridLayout_3->addWidget(label_17, 0, 0, 1, 1);

        adminEmailPerso = new QLineEdit(gridLayoutWidget_3);
        adminEmailPerso->setObjectName(QStringLiteral("adminEmailPerso"));

        gridLayout_3->addWidget(adminEmailPerso, 3, 1, 1, 1);

        adminNom = new QLineEdit(gridLayoutWidget_3);
        adminNom->setObjectName(QStringLiteral("adminNom"));

        gridLayout_3->addWidget(adminNom, 0, 1, 1, 1);

        adminTelPerso = new QLineEdit(gridLayoutWidget_3);
        adminTelPerso->setObjectName(QStringLiteral("adminTelPerso"));

        gridLayout_3->addWidget(adminTelPerso, 2, 1, 1, 1);

        adminPrenom = new QLineEdit(gridLayoutWidget_3);
        adminPrenom->setObjectName(QStringLiteral("adminPrenom"));

        gridLayout_3->addWidget(adminPrenom, 1, 1, 1, 1);

        label_19 = new QLabel(gridLayoutWidget_3);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setFont(font1);

        gridLayout_3->addWidget(label_19, 2, 0, 1, 1);

        label_18 = new QLabel(gridLayoutWidget_3);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setFont(font1);

        gridLayout_3->addWidget(label_18, 1, 0, 1, 1);

        label_20 = new QLabel(gridLayoutWidget_3);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setFont(font1);

        gridLayout_3->addWidget(label_20, 6, 0, 1, 1);

        label_23 = new QLabel(gridLayoutWidget_3);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setFont(font1);

        gridLayout_3->addWidget(label_23, 5, 0, 1, 1);

        label_21 = new QLabel(gridLayoutWidget_3);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setFont(font1);

        gridLayout_3->addWidget(label_21, 3, 0, 1, 1);

        adminDateNaissance = new QDateEdit(gridLayoutWidget_3);
        adminDateNaissance->setObjectName(QStringLiteral("adminDateNaissance"));

        gridLayout_3->addWidget(adminDateNaissance, 4, 1, 1, 1);

        label_22 = new QLabel(gridLayoutWidget_3);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setFont(font1);

        gridLayout_3->addWidget(label_22, 4, 0, 1, 1);

        adminTelFixPro = new QLineEdit(gridLayoutWidget_3);
        adminTelFixPro->setObjectName(QStringLiteral("adminTelFixPro"));

        gridLayout_3->addWidget(adminTelFixPro, 7, 1, 1, 1);

        label_24 = new QLabel(gridLayoutWidget_3);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setFont(font1);

        gridLayout_3->addWidget(label_24, 7, 0, 1, 1);

        label_25 = new QLabel(gridLayoutWidget_3);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setFont(font1);

        gridLayout_3->addWidget(label_25, 8, 0, 1, 1);

        adminEmailPro = new QLineEdit(gridLayoutWidget_3);
        adminEmailPro->setObjectName(QStringLiteral("adminEmailPro"));

        gridLayout_3->addWidget(adminEmailPro, 6, 1, 1, 1);

        adminNumCompteBancaire = new QLineEdit(gridLayoutWidget_3);
        adminNumCompteBancaire->setObjectName(QStringLiteral("adminNumCompteBancaire"));

        gridLayout_3->addWidget(adminNumCompteBancaire, 5, 1, 1, 1);

        adminTelMobilePro = new QLineEdit(gridLayoutWidget_3);
        adminTelMobilePro->setObjectName(QStringLiteral("adminTelMobilePro"));

        gridLayout_3->addWidget(adminTelMobilePro, 8, 1, 1, 1);

        label_27 = new QLabel(gridLayoutWidget_3);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setFont(font1);

        gridLayout_3->addWidget(label_27, 10, 0, 1, 1);

        adminTypePoste = new QLineEdit(gridLayoutWidget_3);
        adminTypePoste->setObjectName(QStringLiteral("adminTypePoste"));

        gridLayout_3->addWidget(adminTypePoste, 11, 1, 1, 1);

        adminHoraires = new QLineEdit(gridLayoutWidget_3);
        adminHoraires->setObjectName(QStringLiteral("adminHoraires"));

        gridLayout_3->addWidget(adminHoraires, 9, 1, 1, 1);

        adminContrat = new QLineEdit(gridLayoutWidget_3);
        adminContrat->setObjectName(QStringLiteral("adminContrat"));

        gridLayout_3->addWidget(adminContrat, 10, 1, 1, 1);

        adminSalaire = new QLineEdit(gridLayoutWidget_3);
        adminSalaire->setObjectName(QStringLiteral("adminSalaire"));

        gridLayout_3->addWidget(adminSalaire, 12, 1, 1, 1);

        label_30 = new QLabel(gridLayoutWidget_3);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setFont(font1);

        gridLayout_3->addWidget(label_30, 11, 0, 1, 1);

        label_31 = new QLabel(gridLayoutWidget_3);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setFont(font1);

        gridLayout_3->addWidget(label_31, 12, 0, 1, 1);

        adminAjout = new QPushButton(tab_6);
        adminAjout->setObjectName(QStringLiteral("adminAjout"));
        adminAjout->setGeometry(QRect(200, 500, 191, 28));
        tabWidget->addTab(tab_6, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 671, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        etudiantAjout->setText(QApplication::translate("MainWindow", "Ajout Etudiant", nullptr));
        label->setText(QApplication::translate("MainWindow", "Nom :", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Prenom :", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Telephone : ", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "CV :", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "E-mail : ", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Date de naissance :", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Promo :", nullptr));
        etudiantCV->setText(QString());
        etudiantPromo->setText(QString());
        label_9->setText(QApplication::translate("MainWindow", "Montant Scolarit\303\251 : ", nullptr));
        etudiantMontantScolarite->setText(QString());
        label_10->setText(QApplication::translate("MainWindow", "Stage Entreprise : ", nullptr));
        etudiantStageEntreprise->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Etudiant", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Nom :", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Prenom :", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "Telephone : ", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "Date de naissance :", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "Numero Compte Bancaire :", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "E-mail : ", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Casier Judiciaire :", nullptr));
        profCasierJudiciaire->setText(QString());
        profNumCompteBancaire->setText(QString());
        profAjout->setText(QApplication::translate("MainWindow", "Ajout Professeur", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "Professeur", nullptr));
        label_28->setText(QApplication::translate("MainWindow", "Date de virement de salaire", nullptr));
        label_29->setText(QApplication::translate("MainWindow", "Cong\303\251 Restant", nullptr));
        label_26->setText(QApplication::translate("MainWindow", "Horaires", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "Nom :", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "Telephone Perso : ", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "Prenom :", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "E-mail Pro :", nullptr));
        label_23->setText(QApplication::translate("MainWindow", "Numero Compte Bancaire :", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "E-mail Perso : ", nullptr));
        label_22->setText(QApplication::translate("MainWindow", "Date de naissance :", nullptr));
        adminTelFixPro->setText(QString());
        label_24->setText(QApplication::translate("MainWindow", "Telephone Fix Pro :", nullptr));
        label_25->setText(QApplication::translate("MainWindow", "Telephone Mobile Pro :", nullptr));
        adminEmailPro->setText(QString());
        adminNumCompteBancaire->setText(QString());
        adminTelMobilePro->setText(QString());
        label_27->setText(QApplication::translate("MainWindow", "Contrat", nullptr));
        label_30->setText(QApplication::translate("MainWindow", "Type de Poste :", nullptr));
        label_31->setText(QApplication::translate("MainWindow", "Salaire :", nullptr));
        adminAjout->setText(QApplication::translate("MainWindow", "Ajout Administration", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindow", "Admininstration", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
