#ifndef DIALOGABOUTRIS_H
#define DIALOGABOUTRIS_H

#include <QDialog>

namespace Ui {
class DialogAboutris;
}

class DialogAboutris : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAboutris(QWidget *parent = 0);
    ~DialogAboutris();

private slots:
    void on_pushButton_clicked();

private:
    Ui::DialogAboutris *ui;
};

#endif // DIALOGABOUTRIS_H
