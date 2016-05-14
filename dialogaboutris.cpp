#include "dialogaboutris.h"
#include "ui_dialogaboutris.h"

DialogAboutris::DialogAboutris(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAboutris)
{
    ui->setupUi(this);

    QMovie *movie;
    movie = new QMovie(":/images/giphy5.gif");
    ui->label_bg->setMovie(movie);
    movie->start();
}

DialogAboutris::~DialogAboutris()
{
    delete ui;
}

void DialogAboutris::on_pushButton_clicked()
{
    close();
}
