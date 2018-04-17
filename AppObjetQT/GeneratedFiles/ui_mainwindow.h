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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_54;
    QLabel *label_55;
    QLabel *label_56;
    QWidget *tab_6;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLineEdit *adminCongeRestant;
    QLabel *label_35;
    QLineEdit *adminTelMobilePro;
    QLabel *label_24;
    QLabel *label_25;
    QLineEdit *adminNumCompteBancaire;
    QLineEdit *adminEmailPro;
    QLineEdit *adminContrat;
    QLineEdit *adminSalaire;
    QLineEdit *adminHoraires;
    QLabel *label_27;
    QLineEdit *adminTypePoste;
    QLabel *label_31;
    QLabel *label_30;
    QLabel *label_17;
    QLineEdit *adminEmailPerso;
    QLabel *label_29;
    QDateEdit *adminDateVirementSalaire;
    QLabel *label_28;
    QLabel *label_26;
    QLineEdit *adminNom;
    QLineEdit *adminPrenom;
    QLineEdit *adminTelPerso;
    QLabel *label_18;
    QLabel *label_23;
    QLabel *label_20;
    QLabel *label_19;
    QLabel *label_22;
    QDateEdit *adminDateNaissance;
    QLabel *label_21;
    QLineEdit *adminTelFixPro;
    QLabel *label_36;
    QLabel *label_37;
    QLabel *label_38;
    QLabel *label_39;
    QLabel *label_40;
    QComboBox *adminRole;
    QLabel *label_41;
    QLineEdit *adminAdresseRue;
    QLineEdit *adminAdresseVille;
    QLineEdit *adminAdressePays;
    QLineEdit *adminAdresseCodePostal;
    QSpinBox *adminAdresseNum;
    QPushButton *adminAjout;
    QLabel *label_34;
    QTextEdit *textEdit;
    QListWidget *listWidget;
    QWidget *tab_4;
    QPushButton *etudiantAjout;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_46;
    QLabel *label_44;
    QLabel *label_45;
    QLabel *label_43;
    QLineEdit *etudiantPromo;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *etudiantCV;
    QLineEdit *etudiantMontantScolarite;
    QLineEdit *etudiantStageEntreprise;
    QLabel *label_3;
    QDateEdit *etudiantDateNaissance;
    QLabel *label_8;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label;
    QLineEdit *etudiantEmail;
    QLineEdit *etudiantPrenom;
    QLabel *label_2;
    QLabel *label_4;
    QLineEdit *etudiantNom;
    QLineEdit *etudiantTelephone;
    QLabel *label_42;
    QLabel *label_47;
    QLineEdit *etudiantAdresseRue;
    QLineEdit *etudiantAdresseCodePostal;
    QLineEdit *etudiantAdresseVille;
    QLineEdit *etudiantAdressePays;
    QSpinBox *etudiantAdresseNum;
    QLabel *label_32;
    QWidget *tab_5;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_51;
    QLabel *label_48;
    QLineEdit *profNom;
    QLineEdit *profEmail;
    QLineEdit *profTelephone;
    QLabel *label_7;
    QLabel *label_12;
    QLabel *label_15;
    QLabel *label_11;
    QLineEdit *profPrenom;
    QLineEdit *profCasierJudiciaire;
    QLabel *label_14;
    QLabel *label_13;
    QLabel *label_16;
    QDateEdit *profDateNaissance;
    QLineEdit *profNumCompteBancaire;
    QLabel *label_52;
    QLabel *label_49;
    QLabel *label_50;
    QLabel *label_53;
    QSpinBox *profAdresseNum;
    QLineEdit *profAdresseRue;
    QLineEdit *profAdresseCodePostal;
    QLineEdit *profAdresseVille;
    QLineEdit *profAdressePays;
    QPushButton *profAjout;
    QLabel *label_33;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(948, 781);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 911, 691));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label_54 = new QLabel(tab);
        label_54->setObjectName(QStringLiteral("label_54"));
        label_54->setGeometry(QRect(340, 80, 55, 16));
        label_55 = new QLabel(tab);
        label_55->setObjectName(QStringLiteral("label_55"));
        label_55->setGeometry(QRect(100, 20, 701, 271));
        label_55->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Utilisateur/Pictures/ledevdurable-bienvenu-2.jpg")));
        label_56 = new QLabel(tab);
        label_56->setObjectName(QStringLiteral("label_56"));
        label_56->setGeometry(QRect(120, 410, 681, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(true);
        font.setWeight(75);
        label_56->setFont(font);
        tabWidget->addTab(tab, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        gridLayoutWidget_3 = new QWidget(tab_6);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(10, 10, 471, 632));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setSpacing(7);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        adminCongeRestant = new QLineEdit(gridLayoutWidget_3);
        adminCongeRestant->setObjectName(QStringLiteral("adminCongeRestant"));

        gridLayout_3->addWidget(adminCongeRestant, 21, 1, 1, 1);

        label_35 = new QLabel(gridLayoutWidget_3);
        label_35->setObjectName(QStringLiteral("label_35"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setUnderline(true);
        font1.setWeight(75);
        label_35->setFont(font1);

        gridLayout_3->addWidget(label_35, 0, 0, 1, 1);

        adminTelMobilePro = new QLineEdit(gridLayoutWidget_3);
        adminTelMobilePro->setObjectName(QStringLiteral("adminTelMobilePro"));

        gridLayout_3->addWidget(adminTelMobilePro, 15, 1, 1, 1);

        label_24 = new QLabel(gridLayoutWidget_3);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setFont(font1);

        gridLayout_3->addWidget(label_24, 14, 0, 1, 1);

        label_25 = new QLabel(gridLayoutWidget_3);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setFont(font1);

        gridLayout_3->addWidget(label_25, 15, 0, 1, 1);

        adminNumCompteBancaire = new QLineEdit(gridLayoutWidget_3);
        adminNumCompteBancaire->setObjectName(QStringLiteral("adminNumCompteBancaire"));

        gridLayout_3->addWidget(adminNumCompteBancaire, 12, 1, 1, 1);

        adminEmailPro = new QLineEdit(gridLayoutWidget_3);
        adminEmailPro->setObjectName(QStringLiteral("adminEmailPro"));

        gridLayout_3->addWidget(adminEmailPro, 13, 1, 1, 1);

        adminContrat = new QLineEdit(gridLayoutWidget_3);
        adminContrat->setObjectName(QStringLiteral("adminContrat"));

        gridLayout_3->addWidget(adminContrat, 17, 1, 1, 1);

        adminSalaire = new QLineEdit(gridLayoutWidget_3);
        adminSalaire->setObjectName(QStringLiteral("adminSalaire"));

        gridLayout_3->addWidget(adminSalaire, 19, 1, 1, 1);

        adminHoraires = new QLineEdit(gridLayoutWidget_3);
        adminHoraires->setObjectName(QStringLiteral("adminHoraires"));

        gridLayout_3->addWidget(adminHoraires, 16, 1, 1, 1);

        label_27 = new QLabel(gridLayoutWidget_3);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setFont(font1);

        gridLayout_3->addWidget(label_27, 17, 0, 1, 1);

        adminTypePoste = new QLineEdit(gridLayoutWidget_3);
        adminTypePoste->setObjectName(QStringLiteral("adminTypePoste"));

        gridLayout_3->addWidget(adminTypePoste, 18, 1, 1, 1);

        label_31 = new QLabel(gridLayoutWidget_3);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setFont(font1);

        gridLayout_3->addWidget(label_31, 19, 0, 1, 1);

        label_30 = new QLabel(gridLayoutWidget_3);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setFont(font1);

        gridLayout_3->addWidget(label_30, 18, 0, 1, 1);

        label_17 = new QLabel(gridLayoutWidget_3);
        label_17->setObjectName(QStringLiteral("label_17"));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setUnderline(true);
        font2.setWeight(75);
        font2.setStrikeOut(false);
        label_17->setFont(font2);
        label_17->setLineWidth(1);

        gridLayout_3->addWidget(label_17, 1, 0, 1, 1);

        adminEmailPerso = new QLineEdit(gridLayoutWidget_3);
        adminEmailPerso->setObjectName(QStringLiteral("adminEmailPerso"));

        gridLayout_3->addWidget(adminEmailPerso, 10, 1, 1, 1);

        label_29 = new QLabel(gridLayoutWidget_3);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setFont(font1);

        gridLayout_3->addWidget(label_29, 21, 0, 1, 1);

        adminDateVirementSalaire = new QDateEdit(gridLayoutWidget_3);
        adminDateVirementSalaire->setObjectName(QStringLiteral("adminDateVirementSalaire"));

        gridLayout_3->addWidget(adminDateVirementSalaire, 20, 1, 1, 1);

        label_28 = new QLabel(gridLayoutWidget_3);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setFont(font1);

        gridLayout_3->addWidget(label_28, 20, 0, 1, 1);

        label_26 = new QLabel(gridLayoutWidget_3);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setFont(font1);

        gridLayout_3->addWidget(label_26, 16, 0, 1, 1);

        adminNom = new QLineEdit(gridLayoutWidget_3);
        adminNom->setObjectName(QStringLiteral("adminNom"));

        gridLayout_3->addWidget(adminNom, 1, 1, 1, 1);

        adminPrenom = new QLineEdit(gridLayoutWidget_3);
        adminPrenom->setObjectName(QStringLiteral("adminPrenom"));

        gridLayout_3->addWidget(adminPrenom, 2, 1, 1, 1);

        adminTelPerso = new QLineEdit(gridLayoutWidget_3);
        adminTelPerso->setObjectName(QStringLiteral("adminTelPerso"));

        gridLayout_3->addWidget(adminTelPerso, 9, 1, 1, 1);

        label_18 = new QLabel(gridLayoutWidget_3);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setFont(font1);

        gridLayout_3->addWidget(label_18, 2, 0, 1, 1);

        label_23 = new QLabel(gridLayoutWidget_3);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setFont(font1);

        gridLayout_3->addWidget(label_23, 12, 0, 1, 1);

        label_20 = new QLabel(gridLayoutWidget_3);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setFont(font1);

        gridLayout_3->addWidget(label_20, 13, 0, 1, 1);

        label_19 = new QLabel(gridLayoutWidget_3);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setFont(font1);

        gridLayout_3->addWidget(label_19, 9, 0, 1, 1);

        label_22 = new QLabel(gridLayoutWidget_3);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setFont(font1);

        gridLayout_3->addWidget(label_22, 11, 0, 1, 1);

        adminDateNaissance = new QDateEdit(gridLayoutWidget_3);
        adminDateNaissance->setObjectName(QStringLiteral("adminDateNaissance"));

        gridLayout_3->addWidget(adminDateNaissance, 11, 1, 1, 1);

        label_21 = new QLabel(gridLayoutWidget_3);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setFont(font1);

        gridLayout_3->addWidget(label_21, 10, 0, 1, 1);

        adminTelFixPro = new QLineEdit(gridLayoutWidget_3);
        adminTelFixPro->setObjectName(QStringLiteral("adminTelFixPro"));

        gridLayout_3->addWidget(adminTelFixPro, 14, 1, 1, 1);

        label_36 = new QLabel(gridLayoutWidget_3);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setFont(font1);

        gridLayout_3->addWidget(label_36, 3, 0, 1, 1);

        label_37 = new QLabel(gridLayoutWidget_3);
        label_37->setObjectName(QStringLiteral("label_37"));
        QFont font3;
        font3.setBold(true);
        font3.setUnderline(true);
        font3.setWeight(75);
        label_37->setFont(font3);
        label_37->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_37, 4, 0, 1, 1);

        label_38 = new QLabel(gridLayoutWidget_3);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setFont(font3);
        label_38->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_38, 5, 0, 1, 1);

        label_39 = new QLabel(gridLayoutWidget_3);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setFont(font3);
        label_39->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_39, 6, 0, 1, 1);

        label_40 = new QLabel(gridLayoutWidget_3);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setFont(font3);
        label_40->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_40, 7, 0, 1, 1);

        adminRole = new QComboBox(gridLayoutWidget_3);
        adminRole->addItem(QString());
        adminRole->addItem(QString());
        adminRole->addItem(QString());
        adminRole->addItem(QString());
        adminRole->setObjectName(QStringLiteral("adminRole"));

        gridLayout_3->addWidget(adminRole, 0, 1, 1, 1);

        label_41 = new QLabel(gridLayoutWidget_3);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setFont(font3);
        label_41->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_41, 8, 0, 1, 1);

        adminAdresseRue = new QLineEdit(gridLayoutWidget_3);
        adminAdresseRue->setObjectName(QStringLiteral("adminAdresseRue"));

        gridLayout_3->addWidget(adminAdresseRue, 5, 1, 1, 1);

        adminAdresseVille = new QLineEdit(gridLayoutWidget_3);
        adminAdresseVille->setObjectName(QStringLiteral("adminAdresseVille"));

        gridLayout_3->addWidget(adminAdresseVille, 7, 1, 1, 1);

        adminAdressePays = new QLineEdit(gridLayoutWidget_3);
        adminAdressePays->setObjectName(QStringLiteral("adminAdressePays"));

        gridLayout_3->addWidget(adminAdressePays, 8, 1, 1, 1);

        adminAdresseCodePostal = new QLineEdit(gridLayoutWidget_3);
        adminAdresseCodePostal->setObjectName(QStringLiteral("adminAdresseCodePostal"));

        gridLayout_3->addWidget(adminAdresseCodePostal, 6, 1, 1, 1);

        adminAdresseNum = new QSpinBox(gridLayoutWidget_3);
        adminAdresseNum->setObjectName(QStringLiteral("adminAdresseNum"));

        gridLayout_3->addWidget(adminAdresseNum, 4, 1, 1, 1);

        adminAjout = new QPushButton(tab_6);
        adminAjout->setObjectName(QStringLiteral("adminAjout"));
        adminAjout->setGeometry(QRect(540, 590, 191, 28));
        label_34 = new QLabel(tab_6);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(500, 60, 291, 401));
        label_34->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Utilisateur/Pictures/admin_v01D_support.png")));
        textEdit = new QTextEdit(tab_6);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(520, 120, 241, 191));
        listWidget = new QListWidget(tab_6);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(540, 350, 256, 192));
        tabWidget->addTab(tab_6, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        etudiantAjout = new QPushButton(tab_4);
        etudiantAjout->setObjectName(QStringLiteral("etudiantAjout"));
        etudiantAjout->setGeometry(QRect(180, 490, 311, 25));
        gridLayoutWidget = new QWidget(tab_4);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 471, 459));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_46 = new QLabel(gridLayoutWidget);
        label_46->setObjectName(QStringLiteral("label_46"));
        label_46->setFont(font3);
        label_46->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_46, 6, 0, 1, 1);

        label_44 = new QLabel(gridLayoutWidget);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setFont(font3);
        label_44->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_44, 4, 0, 1, 1);

        label_45 = new QLabel(gridLayoutWidget);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setFont(font3);
        label_45->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_45, 5, 0, 1, 1);

        label_43 = new QLabel(gridLayoutWidget);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setFont(font3);
        label_43->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_43, 3, 0, 1, 1);

        etudiantPromo = new QLineEdit(gridLayoutWidget);
        etudiantPromo->setObjectName(QStringLiteral("etudiantPromo"));

        gridLayout->addWidget(etudiantPromo, 11, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font1);

        gridLayout->addWidget(label_9, 13, 0, 1, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font1);

        gridLayout->addWidget(label_10, 14, 0, 1, 1);

        etudiantCV = new QLineEdit(gridLayoutWidget);
        etudiantCV->setObjectName(QStringLiteral("etudiantCV"));

        gridLayout->addWidget(etudiantCV, 12, 1, 1, 1);

        etudiantMontantScolarite = new QLineEdit(gridLayoutWidget);
        etudiantMontantScolarite->setObjectName(QStringLiteral("etudiantMontantScolarite"));

        gridLayout->addWidget(etudiantMontantScolarite, 13, 1, 1, 1);

        etudiantStageEntreprise = new QLineEdit(gridLayoutWidget);
        etudiantStageEntreprise->setObjectName(QStringLiteral("etudiantStageEntreprise"));

        gridLayout->addWidget(etudiantStageEntreprise, 14, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 10, 0, 1, 1);

        etudiantDateNaissance = new QDateEdit(gridLayoutWidget);
        etudiantDateNaissance->setObjectName(QStringLiteral("etudiantDateNaissance"));

        gridLayout->addWidget(etudiantDateNaissance, 10, 1, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);

        gridLayout->addWidget(label_8, 12, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);

        gridLayout->addWidget(label_6, 11, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        gridLayout->addWidget(label_5, 9, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font2);
        label->setLineWidth(1);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        etudiantEmail = new QLineEdit(gridLayoutWidget);
        etudiantEmail->setObjectName(QStringLiteral("etudiantEmail"));

        gridLayout->addWidget(etudiantEmail, 9, 1, 1, 1);

        etudiantPrenom = new QLineEdit(gridLayoutWidget);
        etudiantPrenom->setObjectName(QStringLiteral("etudiantPrenom"));

        gridLayout->addWidget(etudiantPrenom, 1, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 8, 0, 1, 1);

        etudiantNom = new QLineEdit(gridLayoutWidget);
        etudiantNom->setObjectName(QStringLiteral("etudiantNom"));

        gridLayout->addWidget(etudiantNom, 0, 1, 1, 1);

        etudiantTelephone = new QLineEdit(gridLayoutWidget);
        etudiantTelephone->setObjectName(QStringLiteral("etudiantTelephone"));

        gridLayout->addWidget(etudiantTelephone, 8, 1, 1, 1);

        label_42 = new QLabel(gridLayoutWidget);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setFont(font1);

        gridLayout->addWidget(label_42, 2, 0, 1, 1);

        label_47 = new QLabel(gridLayoutWidget);
        label_47->setObjectName(QStringLiteral("label_47"));
        label_47->setFont(font3);
        label_47->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_47, 7, 0, 1, 1);

        etudiantAdresseRue = new QLineEdit(gridLayoutWidget);
        etudiantAdresseRue->setObjectName(QStringLiteral("etudiantAdresseRue"));

        gridLayout->addWidget(etudiantAdresseRue, 4, 1, 1, 1);

        etudiantAdresseCodePostal = new QLineEdit(gridLayoutWidget);
        etudiantAdresseCodePostal->setObjectName(QStringLiteral("etudiantAdresseCodePostal"));

        gridLayout->addWidget(etudiantAdresseCodePostal, 5, 1, 1, 1);

        etudiantAdresseVille = new QLineEdit(gridLayoutWidget);
        etudiantAdresseVille->setObjectName(QStringLiteral("etudiantAdresseVille"));

        gridLayout->addWidget(etudiantAdresseVille, 6, 1, 1, 1);

        etudiantAdressePays = new QLineEdit(gridLayoutWidget);
        etudiantAdressePays->setObjectName(QStringLiteral("etudiantAdressePays"));

        gridLayout->addWidget(etudiantAdressePays, 7, 1, 1, 1);

        etudiantAdresseNum = new QSpinBox(gridLayoutWidget);
        etudiantAdresseNum->setObjectName(QStringLiteral("etudiantAdresseNum"));

        gridLayout->addWidget(etudiantAdresseNum, 3, 1, 1, 1);

        label_32 = new QLabel(tab_4);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(490, 10, 301, 361));
        label_32->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Utilisateur/Pictures/Universit\303\251.jpg")));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        gridLayoutWidget_2 = new QWidget(tab_5);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 10, 471, 371));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_51 = new QLabel(gridLayoutWidget_2);
        label_51->setObjectName(QStringLiteral("label_51"));
        label_51->setFont(font3);
        label_51->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_51, 5, 0, 1, 1);

        label_48 = new QLabel(gridLayoutWidget_2);
        label_48->setObjectName(QStringLiteral("label_48"));
        label_48->setFont(font1);

        gridLayout_2->addWidget(label_48, 2, 0, 1, 1);

        profNom = new QLineEdit(gridLayoutWidget_2);
        profNom->setObjectName(QStringLiteral("profNom"));

        gridLayout_2->addWidget(profNom, 0, 1, 1, 1);

        profEmail = new QLineEdit(gridLayoutWidget_2);
        profEmail->setObjectName(QStringLiteral("profEmail"));

        gridLayout_2->addWidget(profEmail, 9, 1, 1, 1);

        profTelephone = new QLineEdit(gridLayoutWidget_2);
        profTelephone->setObjectName(QStringLiteral("profTelephone"));

        gridLayout_2->addWidget(profTelephone, 8, 1, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font2);
        label_7->setLineWidth(1);

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        label_12 = new QLabel(gridLayoutWidget_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font1);

        gridLayout_2->addWidget(label_12, 8, 0, 1, 1);

        label_15 = new QLabel(gridLayoutWidget_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font1);

        gridLayout_2->addWidget(label_15, 10, 0, 1, 1);

        label_11 = new QLabel(gridLayoutWidget_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font1);

        gridLayout_2->addWidget(label_11, 1, 0, 1, 1);

        profPrenom = new QLineEdit(gridLayoutWidget_2);
        profPrenom->setObjectName(QStringLiteral("profPrenom"));

        gridLayout_2->addWidget(profPrenom, 1, 1, 1, 1);

        profCasierJudiciaire = new QLineEdit(gridLayoutWidget_2);
        profCasierJudiciaire->setObjectName(QStringLiteral("profCasierJudiciaire"));

        gridLayout_2->addWidget(profCasierJudiciaire, 12, 1, 1, 1);

        label_14 = new QLabel(gridLayoutWidget_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font1);

        gridLayout_2->addWidget(label_14, 9, 0, 1, 1);

        label_13 = new QLabel(gridLayoutWidget_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font1);

        gridLayout_2->addWidget(label_13, 12, 0, 1, 1);

        label_16 = new QLabel(gridLayoutWidget_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font1);

        gridLayout_2->addWidget(label_16, 11, 0, 1, 1);

        profDateNaissance = new QDateEdit(gridLayoutWidget_2);
        profDateNaissance->setObjectName(QStringLiteral("profDateNaissance"));

        gridLayout_2->addWidget(profDateNaissance, 10, 1, 1, 1);

        profNumCompteBancaire = new QLineEdit(gridLayoutWidget_2);
        profNumCompteBancaire->setObjectName(QStringLiteral("profNumCompteBancaire"));

        gridLayout_2->addWidget(profNumCompteBancaire, 11, 1, 1, 1);

        label_52 = new QLabel(gridLayoutWidget_2);
        label_52->setObjectName(QStringLiteral("label_52"));
        label_52->setFont(font3);
        label_52->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_52, 6, 0, 1, 1);

        label_49 = new QLabel(gridLayoutWidget_2);
        label_49->setObjectName(QStringLiteral("label_49"));
        label_49->setFont(font3);
        label_49->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_49, 3, 0, 1, 1);

        label_50 = new QLabel(gridLayoutWidget_2);
        label_50->setObjectName(QStringLiteral("label_50"));
        label_50->setFont(font3);
        label_50->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_50, 4, 0, 1, 1);

        label_53 = new QLabel(gridLayoutWidget_2);
        label_53->setObjectName(QStringLiteral("label_53"));
        label_53->setFont(font3);
        label_53->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_53, 7, 0, 1, 1);

        profAdresseNum = new QSpinBox(gridLayoutWidget_2);
        profAdresseNum->setObjectName(QStringLiteral("profAdresseNum"));

        gridLayout_2->addWidget(profAdresseNum, 3, 1, 1, 1);

        profAdresseRue = new QLineEdit(gridLayoutWidget_2);
        profAdresseRue->setObjectName(QStringLiteral("profAdresseRue"));

        gridLayout_2->addWidget(profAdresseRue, 4, 1, 1, 1);

        profAdresseCodePostal = new QLineEdit(gridLayoutWidget_2);
        profAdresseCodePostal->setObjectName(QStringLiteral("profAdresseCodePostal"));

        gridLayout_2->addWidget(profAdresseCodePostal, 5, 1, 1, 1);

        profAdresseVille = new QLineEdit(gridLayoutWidget_2);
        profAdresseVille->setObjectName(QStringLiteral("profAdresseVille"));

        gridLayout_2->addWidget(profAdresseVille, 6, 1, 1, 1);

        profAdressePays = new QLineEdit(gridLayoutWidget_2);
        profAdressePays->setObjectName(QStringLiteral("profAdressePays"));

        gridLayout_2->addWidget(profAdressePays, 7, 1, 1, 1);

        profAjout = new QPushButton(tab_5);
        profAjout->setObjectName(QStringLiteral("profAjout"));
        profAjout->setGeometry(QRect(240, 420, 241, 28));
        label_33 = new QLabel(tab_5);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(490, 10, 351, 281));
        label_33->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Utilisateur/Pictures/Coaching 5.jpg")));
        tabWidget->addTab(tab_5, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 948, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_54->setText(QString());
        label_55->setText(QString());
        label_56->setText(QApplication::translate("MainWindow", "Ici, Vous allez pouvoir ajouter des personnes \303\240 votre \303\251tablissement ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Bienvenue", nullptr));
        label_35->setText(QApplication::translate("MainWindow", "R\303\264le :", nullptr));
        adminTelMobilePro->setText(QString());
        label_24->setText(QApplication::translate("MainWindow", "Telephone Fix Pro :", nullptr));
        label_25->setText(QApplication::translate("MainWindow", "Telephone Mobile Pro :", nullptr));
        adminNumCompteBancaire->setText(QString());
        adminEmailPro->setText(QString());
        label_27->setText(QApplication::translate("MainWindow", "Contrat :", nullptr));
        label_31->setText(QApplication::translate("MainWindow", "Salaire :", nullptr));
        label_30->setText(QApplication::translate("MainWindow", "Type de Poste :", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "Nom :", nullptr));
        label_29->setText(QApplication::translate("MainWindow", "Cong\303\251 Restant :", nullptr));
        label_28->setText(QApplication::translate("MainWindow", "Date de virement de salaire :", nullptr));
        label_26->setText(QApplication::translate("MainWindow", "Horaires :", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "Prenom :", nullptr));
        label_23->setText(QApplication::translate("MainWindow", "Numero Compte Bancaire :", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "E-mail Pro :", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "Telephone Perso :", nullptr));
        label_22->setText(QApplication::translate("MainWindow", "Date de naissance :", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "E-mail Perso :", nullptr));
        adminTelFixPro->setText(QString());
        label_36->setText(QApplication::translate("MainWindow", "Adresse :", nullptr));
        label_37->setText(QApplication::translate("MainWindow", "Num\303\251ro :", nullptr));
        label_38->setText(QApplication::translate("MainWindow", "Rue :", nullptr));
        label_39->setText(QApplication::translate("MainWindow", "Code Postal :", nullptr));
        label_40->setText(QApplication::translate("MainWindow", "Ville :", nullptr));
        adminRole->setItemText(0, QApplication::translate("MainWindow", "Assistant Direction", nullptr));
        adminRole->setItemText(1, QApplication::translate("MainWindow", "Responsable Enseignement", nullptr));
        adminRole->setItemText(2, QApplication::translate("MainWindow", "Responsable Entreprise", nullptr));
        adminRole->setItemText(3, QApplication::translate("MainWindow", "Directeur", nullptr));

        label_41->setText(QApplication::translate("MainWindow", "Pays :", nullptr));
        adminAjout->setText(QApplication::translate("MainWindow", "Ajout Administration", nullptr));
        label_34->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindow", "Admininstration", nullptr));
        etudiantAjout->setText(QApplication::translate("MainWindow", "Ajout Etudiant", nullptr));
        label_46->setText(QApplication::translate("MainWindow", "Ville :", nullptr));
        label_44->setText(QApplication::translate("MainWindow", "Rue :", nullptr));
        label_45->setText(QApplication::translate("MainWindow", "Code Postal :", nullptr));
        label_43->setText(QApplication::translate("MainWindow", "Num\303\251ro :", nullptr));
        etudiantPromo->setText(QString());
        label_9->setText(QApplication::translate("MainWindow", "Montant Scolarit\303\251 :", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Stage Entreprise :", nullptr));
        etudiantCV->setText(QString());
        etudiantMontantScolarite->setText(QString());
        etudiantStageEntreprise->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "Date de naissance :", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "CV :", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Promo :", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "E-mail :", nullptr));
        label->setText(QApplication::translate("MainWindow", "Nom :", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Prenom :", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Telephone :", nullptr));
        label_42->setText(QApplication::translate("MainWindow", "Adresse :", nullptr));
        label_47->setText(QApplication::translate("MainWindow", "Pays :", nullptr));
        label_32->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Etudiant", nullptr));
        label_51->setText(QApplication::translate("MainWindow", "Code Postal :", nullptr));
        label_48->setText(QApplication::translate("MainWindow", "Adresse :", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Nom :", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "Telephone :", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "Date de naissance :", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Prenom :", nullptr));
        profCasierJudiciaire->setText(QString());
        label_14->setText(QApplication::translate("MainWindow", "E-mail :", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Casier Judiciaire :", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "Numero Compte Bancaire :", nullptr));
        profNumCompteBancaire->setText(QString());
        label_52->setText(QApplication::translate("MainWindow", "Ville :", nullptr));
        label_49->setText(QApplication::translate("MainWindow", "Num\303\251ro :", nullptr));
        label_50->setText(QApplication::translate("MainWindow", "Rue :", nullptr));
        label_53->setText(QApplication::translate("MainWindow", "Pays :", nullptr));
        profAjout->setText(QApplication::translate("MainWindow", "Ajout Professeur", nullptr));
        label_33->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "Professeur", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
