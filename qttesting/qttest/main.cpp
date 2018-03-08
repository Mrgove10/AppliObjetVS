#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv)

    MaFenetre fenetre;
    fenetre.show();

    return app.exec();
}
