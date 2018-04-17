void MainWindow::
void MainWindow ::MainWindow (QWidget*parent) :
    QDialog (parent),
    ui (new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboBox -> additem("AutoEntrepreuneur")
    ui->comboBox -> additem("Employe")




 #include <QApplication>
 #include <QtWidgets>

        int MainWindow(int argc, char *argv[])
        {
            QApplication app(argc, argv);

            QWidget fenetre;
            QGroupBox *groupbox = new QGroupBox("Votre Statut", &fenetre);

            QRadioButton *AutoEntrepreneur = new QRadioButton("Auto Entrepreneur");
            QRadioButton *Employe = new QRadioButton("Employe");

            steacks->setChecked(true);

            QVBoxLayout *vbox = new QVBoxLayout;
            vbox->addWidget(AutoEntrepreneur);
            vbox->addWidget(Employe);

            groupbox->setLayout(vbox);
            groupbox->move(5, 5);

            fenetre.show();

            return app.exec();
        }




