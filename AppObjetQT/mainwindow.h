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

    void createCSV(string param,string param2);
	string readCSV();
};

#endif // MAINWINDOW_H
