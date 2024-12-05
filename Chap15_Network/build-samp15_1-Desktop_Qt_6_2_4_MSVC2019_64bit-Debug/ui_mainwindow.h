/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QPushButton *btnGetHostInfo;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QPushButton *btnLookup;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btnAllAddress;
    QPushButton *btnAllInterface;
    QCheckBox *chkBox_OnlyIPv4;
    QPlainTextEdit *textEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(490, 339);
        QFont font;
        font.setPointSize(10);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btnGetHostInfo = new QPushButton(groupBox);
        btnGetHostInfo->setObjectName(QString::fromUtf8("btnGetHostInfo"));

        verticalLayout->addWidget(btnGetHostInfo);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(groupBox);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setEditable(true);

        horizontalLayout->addWidget(comboBox);

        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);

        btnLookup = new QPushButton(groupBox);
        btnLookup->setObjectName(QString::fromUtf8("btnLookup"));

        verticalLayout->addWidget(btnLookup);


        horizontalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        btnAllAddress = new QPushButton(groupBox_2);
        btnAllAddress->setObjectName(QString::fromUtf8("btnAllAddress"));

        verticalLayout_2->addWidget(btnAllAddress);

        btnAllInterface = new QPushButton(groupBox_2);
        btnAllInterface->setObjectName(QString::fromUtf8("btnAllInterface"));

        verticalLayout_2->addWidget(btnAllInterface);

        chkBox_OnlyIPv4 = new QCheckBox(groupBox_2);
        chkBox_OnlyIPv4->setObjectName(QString::fromUtf8("chkBox_OnlyIPv4"));
        chkBox_OnlyIPv4->setChecked(true);

        verticalLayout_2->addWidget(chkBox_OnlyIPv4);


        horizontalLayout_3->addWidget(groupBox_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        textEdit = new QPlainTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout_3->addWidget(textEdit);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\347\275\221\347\273\234\344\270\273\346\234\272\344\277\241\346\201\257", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "QHostInfo", nullptr));
        btnGetHostInfo->setText(QCoreApplication::translate("MainWindow", "\350\216\267\345\217\226\346\234\254\346\234\272\344\270\273\346\234\272\345\220\215\345\222\214IP\345\234\260\345\235\200", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\237\237 \345\220\215", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "www.ptpress.com.cn", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "www.epubit.com", nullptr));

        btnLookup->setText(QCoreApplication::translate("MainWindow", "\346\237\245\346\211\276\345\237\237\345\220\215\347\232\204IP\345\234\260\345\235\200", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "QNetworkInterface", nullptr));
        btnAllAddress->setText(QCoreApplication::translate("MainWindow", "allAddresses()", nullptr));
        btnAllInterface->setText(QCoreApplication::translate("MainWindow", "allInterfaces()", nullptr));
        chkBox_OnlyIPv4->setText(QCoreApplication::translate("MainWindow", "\345\217\252\346\230\276\347\244\272IPv4\345\234\260\345\235\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
