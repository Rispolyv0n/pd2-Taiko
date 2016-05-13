#include "dialogaboutris.h"
#include "ui_dialogaboutris.h"

DialogAboutris::DialogAboutris(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAboutris)
{
    ui->setupUi(this);
}

DialogAboutris::~DialogAboutris()
{
    delete ui;
}

void DialogAboutris::on_pushButton_clicked()
{
    close();
}
