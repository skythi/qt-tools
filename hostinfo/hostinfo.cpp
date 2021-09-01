#include "hostinfo.h"
#include "ui_hostinfo.h"

hostinfo::hostinfo(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::hostinfo)
{
    ui->setupUi(this);
}

hostinfo::~hostinfo()
{
    delete ui;
}


void hostinfo::on_pushButton_clicked()
{
    QString hostName = QHostInfo::localHostName();
    ui->textEdit->append(hostName);
}
