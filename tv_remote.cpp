#include "tv_remote.h"
#include "./ui_tv_remote.h"

TV_Remote::TV_Remote(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TV_Remote)
{
    ui->setupUi(this);
}

TV_Remote::~TV_Remote()
{
    delete ui;
}

void TV_Remote::on_ButtonDigit_clicked()
{
    QString str = ((QPushButton*)sender())->text();;
    if (str.contains(QRegExp("[0-9]"))) {
           str_buffer += str;

           if(str_buffer.length() > 3 )
           {
               str_buffer.clear();
           }
       }
   qDebug() << str_buffer.toInt();
   channel = str_buffer.toInt();
   ui->Channel_display->setText(str_buffer);
}


void TV_Remote::on_Btn_vol_Up_clicked()
{
    if(volume < 100)
    {
        volume++;
    }
    else
    {
        volume = 100;

    }

    qDebug()<< "Volume = " << volume;
    str_volume = QString::number(volume);
    ui->Volume_display->setText(str_volume);

}


void TV_Remote::on_Btn_vol_Down_clicked()
{
    if(volume > 0)
    {
        volume--;
    }
    else
    {
        volume = 0;
    }
    qDebug()<< "Volume = " << volume;
    str_volume = QString::number(volume);
    ui->Volume_display->setText(str_volume);
}


void TV_Remote::on_Btn_ch_Up_clicked()
{
    if(channel < 999)
    {
        channel++;
    }
    else
    {
        channel = 0;

    }

    qDebug() << "Channel = " << channel;
    str_channel = QString::number(channel);
    ui->Channel_display->setText(str_channel);
}


void TV_Remote::on_Btn_ch_Down_clicked()
{
    if(channel > 0)
    {
        channel--;
    }
    else
    {
        channel = 999;

    }

    qDebug() << "Channel = " << channel;
    str_channel = QString::number(channel);
    ui->Channel_display->setText(str_channel);


}

