#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<iostream>
using namespace std;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

private slots:
    void on_etudiantAjout_clicked();
    
    void on_profAjout_clicked();

    void on_adminAjout_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
	void AffichageListAdmins();
	void AffichageListEtudiants();
	void AffichageListProfs();
	
	void AffichageTotal();
	//fonction de creation de csv
	#pragma region CSVAdmin
	void updateCSVAdmins(string role,string nom, string prenom,string email,
		int tel,string datenais,int numcombtebanc,
		string emailpro,int telfixpro,int telmobilpor,
		float horaires, string contra, string typedepost,
		float salaire, string datevirementsalaire,
		int congesRestant);
	void createCSVAdmins();
	#pragma endregion 

	#pragma region CSVEtudians
	void updateCSVEtudiants(string nom,string prenom,int telephone, 
		string mail, string datenaissance,string promo,
		string CV, int montantScolariter, string stageEntreprise);
	void createCSVEtudiants();
	#pragma endregion 

	#pragma region CSVProfs
	void updateCSVProfs();
	void createCSVProfs();
	#pragma endregion	

	string readCSV();
};

#endif // MAINWINDOW_H
