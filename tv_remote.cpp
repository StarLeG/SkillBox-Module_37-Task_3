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

void TV_Remote::on_Bnt_0_clicked()
{

}

