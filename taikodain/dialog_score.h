#ifndef DIALOG_SCORE_H
#define DIALOG_SCORE_H

#include <QDialog>
#include <playwindow.h>
#include <QMovie>

namespace Ui {
class dialog_score;
}

class dialog_score : public QDialog
{
    Q_OBJECT

public:
    explicit dialog_score(QWidget *parent = 0);
    ~dialog_score();

private slots:
    void on_pushButton_clicked();

private:
    Ui::dialog_score *ui;
};

#endif // DIALOG_SCORE_H
