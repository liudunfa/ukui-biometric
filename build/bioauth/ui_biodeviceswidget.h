/********************************************************************************
** Form generated from reading UI file 'biodeviceswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BIODEVICESWIDGET_H
#define UI_BIODEVICESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BioDevicesWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cmbDeviceTypes;
    QListWidget *lwDevices;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnBack;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnOK;

    void setupUi(QWidget *BioDevicesWidget)
    {
        if (BioDevicesWidget->objectName().isEmpty())
            BioDevicesWidget->setObjectName(QString::fromUtf8("BioDevicesWidget"));
        BioDevicesWidget->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(BioDevicesWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(BioDevicesWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        cmbDeviceTypes = new QComboBox(BioDevicesWidget);
        cmbDeviceTypes->setObjectName(QString::fromUtf8("cmbDeviceTypes"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cmbDeviceTypes->sizePolicy().hasHeightForWidth());
        cmbDeviceTypes->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(cmbDeviceTypes);


        verticalLayout->addLayout(horizontalLayout);

        lwDevices = new QListWidget(BioDevicesWidget);
        lwDevices->setObjectName(QString::fromUtf8("lwDevices"));
        lwDevices->setMinimumSize(QSize(0, 70));

        verticalLayout->addWidget(lwDevices);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnBack = new QPushButton(BioDevicesWidget);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setMinimumSize(QSize(50, 0));
        btnBack->setMaximumSize(QSize(50, 16777215));
        btnBack->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(btnBack);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        btnOK = new QPushButton(BioDevicesWidget);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));
        btnOK->setMinimumSize(QSize(50, 0));
        btnOK->setMaximumSize(QSize(50, 16777215));
        btnOK->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(btnOK);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(BioDevicesWidget);

        QMetaObject::connectSlotsByName(BioDevicesWidget);
    } // setupUi

    void retranslateUi(QWidget *BioDevicesWidget)
    {
        BioDevicesWidget->setWindowTitle(QApplication::translate("BioDevicesWidget", "Form", nullptr));
        label->setText(QApplication::translate("BioDevicesWidget", "Device types:", nullptr));
        btnBack->setText(QApplication::translate("BioDevicesWidget", "Back", nullptr));
        btnOK->setText(QApplication::translate("BioDevicesWidget", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BioDevicesWidget: public Ui_BioDevicesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIODEVICESWIDGET_H
