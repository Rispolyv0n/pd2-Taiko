#include "dialog_howto.h"
#include "ui_dialog_howto.h"

dialog_howto::dialog_howto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog_howto)
{
    ui->setupUi(this);

    //set bg
    QMovie *movie;
    movie = new QMovie(":/images/giphy5.gif");
    ui->label_bg->setMovie(movie);
    movie->start();
}

dialog_howto::~dialog_howto(){
    delete ui;
}

void dialog_howto::on_pushButton_clicked(){
    close();
}
