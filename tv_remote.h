#ifndef TV_REMOTE_H
#define TV_REMOTE_H

#include <QMainWindow>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class TV_Remote; }
QT_END_NAMESPACE

class TV_Remote : public QMainWindow
{
    Q_OBJECT

public:
    TV_Remote(QWidget *parent = nullptr);
    ~TV_Remote();

private slots:

    void on_ButtonDigit_clicked();

    void on_Btn_vol_Up_clicked();

    void on_Btn_vol_Down_clicked();

    void on_Btn_ch_Up_clicked();

    void on_Btn_ch_Down_clicked();

private:
    Ui::TV_Remote *ui;
    int volume = 0;
    int channel = 0;
    QString str_volume;
    QString str_channel;
    QString str_buffer;
};
#endif // TV_REMOTE_H
