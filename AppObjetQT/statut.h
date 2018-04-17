#ifndef STATUT_H
#define STATUT_H

#include <QMainWindow>

namespace Ui {
class statut;
}

class statut : public QMainWindow
{
    Q_OBJECT

public:
    explicit statut(QWidget *parent = 0);
    ~statut();

private:
    Ui::statut *ui;
};

#endif // STATUT_H
