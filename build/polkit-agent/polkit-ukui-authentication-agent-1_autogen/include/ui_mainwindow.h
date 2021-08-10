/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *lblHeader;
    QLabel *lblContent;
    QWidget *widgetPasswdAuth;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_2;
    QLineEdit *lePassword;
    QLabel *lblMessage;
    QComboBox *cmbUsers;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *btnBioAuth;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *btnCancel;
    QPushButton *btnAuth;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(420, 284);
        MainWindow->setMinimumSize(QSize(420, 284));
        MainWindow->setMaximumSize(QSize(420, 284));
        verticalLayout_2 = new QVBoxLayout(MainWindow);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_2->setContentsMargins(32, 0, 32, 25);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(0);
        formLayout->setVerticalSpacing(8);
        lblHeader = new QLabel(MainWindow);
        lblHeader->setObjectName(QString::fromUtf8("lblHeader"));
        QFont font;
        font.setFamily(QString::fromUtf8("PingFangSC-Medium,PingFang SC"));
        font.setBold(true);
        font.setWeight(62);
        lblHeader->setFont(font);
        lblHeader->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"font-family: PingFangSC-Medium, PingFang SC;\n"
"font-weight: 500;"));
        lblHeader->setWordWrap(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, lblHeader);

        lblContent = new QLabel(MainWindow);
        lblContent->setObjectName(QString::fromUtf8("lblContent"));
        lblContent->setStyleSheet(QString::fromUtf8("font:  14px \"PingFangSC-Regular, PingFang SC\";"));
        lblContent->setWordWrap(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, lblContent);

        widgetPasswdAuth = new QWidget(MainWindow);
        widgetPasswdAuth->setObjectName(QString::fromUtf8("widgetPasswdAuth"));
        widgetPasswdAuth->setMinimumSize(QSize(0, 120));
        verticalLayout = new QVBoxLayout(widgetPasswdAuth);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, -1);
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setHorizontalSpacing(0);
        formLayout_2->setVerticalSpacing(0);
        lePassword = new QLineEdit(widgetPasswdAuth);
        lePassword->setObjectName(QString::fromUtf8("lePassword"));
        lePassword->setMinimumSize(QSize(0, 36));
        lePassword->setContextMenuPolicy(Qt::NoContextMenu);
        lePassword->setLayoutDirection(Qt::LeftToRight);
        lePassword->setStyleSheet(QString::fromUtf8("font-size: 14px;\n"
"font-family: PingFangSC-Regular, PingFang SC;\n"
"font-weight: 400;"));

        formLayout_2->setWidget(0, QFormLayout::SpanningRole, lePassword);

        lblMessage = new QLabel(widgetPasswdAuth);
        lblMessage->setObjectName(QString::fromUtf8("lblMessage"));
        lblMessage->setMinimumSize(QSize(0, 20));
        lblMessage->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lblMessage->setWordWrap(true);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lblMessage);


        verticalLayout->addLayout(formLayout_2);


        formLayout->setWidget(3, QFormLayout::FieldRole, widgetPasswdAuth);

        cmbUsers = new QComboBox(MainWindow);
        cmbUsers->setObjectName(QString::fromUtf8("cmbUsers"));
        cmbUsers->setMinimumSize(QSize(0, 36));
        cmbUsers->setStyleSheet(QString::fromUtf8("font-size: 14px;\n"
"font-family: PingFangSC-Regular, PingFang SC;\n"
"font-weight: 400;"));

        formLayout->setWidget(2, QFormLayout::FieldRole, cmbUsers);


        verticalLayout_2->addLayout(formLayout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(16);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        btnBioAuth = new QPushButton(MainWindow);
        btnBioAuth->setObjectName(QString::fromUtf8("btnBioAuth"));
        btnBioAuth->setCursor(QCursor(Qt::PointingHandCursor));
        btnBioAuth->setStyleSheet(QString::fromUtf8("font-size: 14px;\n"
"font-family: PingFangSC-Regular, PingFang SC;\n"
"font-weight: 400;"));

        horizontalLayout_7->addWidget(btnBioAuth);

        horizontalSpacer_6 = new QSpacerItem(150, 36, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);

        btnCancel = new QPushButton(MainWindow);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnCancel->sizePolicy().hasHeightForWidth());
        btnCancel->setSizePolicy(sizePolicy);
        btnCancel->setCursor(QCursor(Qt::PointingHandCursor));
        btnCancel->setStyleSheet(QString::fromUtf8("font-size: 14px;\n"
"font-family: PingFangSC-Regular, PingFang SC;\n"
"font-weight: 400;"));

        horizontalLayout_7->addWidget(btnCancel);

        btnAuth = new QPushButton(MainWindow);
        btnAuth->setObjectName(QString::fromUtf8("btnAuth"));
        sizePolicy.setHeightForWidth(btnAuth->sizePolicy().hasHeightForWidth());
        btnAuth->setSizePolicy(sizePolicy);
        btnAuth->setMinimumSize(QSize(96, 36));
        btnAuth->setMaximumSize(QSize(96, 36));
        btnAuth->setCursor(QCursor(Qt::PointingHandCursor));
        btnAuth->setStyleSheet(QString::fromUtf8("font-size: 14px;\n"
"font-family: PingFangSC-Regular, PingFang SC;\n"
"font-weight: 400;"));

        horizontalLayout_7->addWidget(btnAuth);


        verticalLayout_2->addLayout(horizontalLayout_7);


        retranslateUi(MainWindow);

        btnCancel->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Form", nullptr));
        MainWindow->setWindowFilePath(QString());
        lblHeader->setText(QString());
        lblContent->setText(QString());
        lblMessage->setText(QString());
        btnBioAuth->setText(QApplication::translate("MainWindow", "Biometric", nullptr));
        btnCancel->setText(QApplication::translate("MainWindow", "Cancel", nullptr));
        btnAuth->setText(QApplication::translate("MainWindow", "Authenticate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
