#ifndef TV_REMOTE_H
#define TV_REMOTE_H

#include <QMainWindow>

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

    void on_Bnt_0_clicked();

private:
    Ui::TV_Remote *ui;
};
#endif // TV_REMOTE_H
