#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   /* MainWindow w;
    w.show();*/

    QWidget fenetre;
    fenetre.setFixedSize(300, 150);

    QPushButton bouton("Salut les Zéros, la forme ?", &fenetre);
    bouton.show();
    bouton.setCursor(Qt::PointingHandCursor);
    bouton.move(60, 50);

    return a.exec();
}
