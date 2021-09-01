#ifndef HOSTINFO_H
#define HOSTINFO_H

#include <QWidget>
#include <QHostInfo>
QT_BEGIN_NAMESPACE
namespace Ui { class hostinfo; }
QT_END_NAMESPACE

class hostinfo : public QWidget
{
    Q_OBJECT

public:
    hostinfo(QWidget *parent = nullptr);
    ~hostinfo();

private slots:
    void on_pushButton_clicked();

private:
    Ui::hostinfo *ui;
};
#endif // HOSTINFO_H
