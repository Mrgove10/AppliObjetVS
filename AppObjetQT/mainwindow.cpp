#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Etudiant.h"
#include <QLineEdit>
#include <iostream>

using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    Etudiant* EtudiantActuel = new Etudiant(
		ui->NomLineEdit->text().toStdString(), 
		ui->PrenomLineEdit->text().toStdString(),
		ui->TelephoneLineEdit->text().toInt(),
		ui->EmailLineEdit->text().toStdString(),
		ui->dateEdit->text().toStdString(),
		ui->PromoLineEdit->text().toInt(),
		ui->CvLineEdit->text().toStdString(),
		ui->MontantScolariteLineEdit->text().toInt(),
		ui->StageEntrepriseLineEdit->text().toStdString());
}

