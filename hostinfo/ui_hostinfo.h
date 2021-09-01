/********************************************************************************
** Form generated from reading UI file 'hostinfo.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOSTINFO_H
#define UI_HOSTINFO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hostinfo
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;

    void setupUi(QWidget *hostinfo)
    {
        if (hostinfo->objectName().isEmpty())
            hostinfo->setObjectName(QString::fromUtf8("hostinfo"));
        hostinfo->resize(800, 600);
        widget = new QWidget(hostinfo);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 20, 260, 227));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setAutoRepeat(true);

        verticalLayout_2->addWidget(pushButton);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(hostinfo);

        QMetaObject::connectSlotsByName(hostinfo);
    } // setupUi

    void retranslateUi(QWidget *hostinfo)
    {
        hostinfo->setWindowTitle(QApplication::translate("hostinfo", "hostinfo", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("hostinfo", "HostInfo", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class hostinfo: public Ui_hostinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOSTINFO_H
