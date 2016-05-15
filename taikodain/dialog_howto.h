#ifndef DIALOG_HOWTO_H
#define DIALOG_HOWTO_H

#include <QDialog>
#include <QMovie>
#include <QUrl>


namespace Ui {
class dialog_howto;
}

class dialog_howto : public QDialog
{
    Q_OBJECT

public:
    explicit dialog_howto(QWidget *parent = 0);
    ~dialog_howto();

private slots:
    void on_pushButton_clicked();

private:
    Ui::dialog_howto *ui;
};

#endif // DIALOG_HOWTO_H
