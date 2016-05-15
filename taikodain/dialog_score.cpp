#include "dialog_score.h"
#include "ui_dialog_score.h"


dialog_score::dialog_score(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog_score)
{
    ui->setupUi(this);

    //set bg
    QMovie *movie;
    movie = new QMovie(":/images/giphy5.gif");
    ui->label_bg->setMovie(movie);
    movie->start();

    //set score
    extern PlayWindow *m;
    QString scoretext;
    scoretext.setNum(m->displayscore);
    ui->label_showscore->setText(scoretext);
}

dialog_score::~dialog_score(){
    delete ui;
}

void dialog_score::on_pushButton_clicked(){
    close();
}
