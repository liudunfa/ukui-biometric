/********************************************************************************
** Form generated from reading UI file 'bioauthwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BIOAUTHWIDGET_H
#define UI_BIOAUTHWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BioAuthWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QLabel *lblBioImage;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QLabel *lblBioDevice;
    QLabel *lblBioNotify;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout;
    QPushButton *btnMore;
    QPushButton *btnRetry;
    QPushButton *btnPasswdAuth;

    void setupUi(QWidget *BioAuthWidget)
    {
        if (BioAuthWidget->objectName().isEmpty())
            BioAuthWidget->setObjectName(QString::fromUtf8("BioAuthWidget"));
        BioAuthWidget->resize(404, 376);
        verticalLayout_3 = new QVBoxLayout(BioAuthWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        lblBioImage = new QLabel(BioAuthWidget);
        lblBioImage->setObjectName(QString::fromUtf8("lblBioImage"));
        lblBioImage->setMinimumSize(QSize(130, 130));
        lblBioImage->setMaximumSize(QSize(130, 130));
        lblBioImage->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lblBioImage);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_2->addItem(verticalSpacer);

        lblBioDevice = new QLabel(BioAuthWidget);
        lblBioDevice->setObjectName(QString::fromUtf8("lblBioDevice"));
        lblBioDevice->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lblBioDevice);

        lblBioNotify = new QLabel(BioAuthWidget);
        lblBioNotify->setObjectName(QString::fromUtf8("lblBioNotify"));
        lblBioNotify->setAlignment(Qt::AlignCenter);
        lblBioNotify->setWordWrap(true);

        verticalLayout_2->addWidget(lblBioNotify);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btnMore = new QPushButton(BioAuthWidget);
        btnMore->setObjectName(QString::fromUtf8("btnMore"));
        btnMore->setMaximumSize(QSize(50, 16777215));
        btnMore->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(btnMore, 0, 1, 1, 1);

        btnRetry = new QPushButton(BioAuthWidget);
        btnRetry->setObjectName(QString::fromUtf8("btnRetry"));
        btnRetry->setMaximumSize(QSize(50, 16777215));
        btnRetry->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(btnRetry, 0, 2, 1, 1);

        btnPasswdAuth = new QPushButton(BioAuthWidget);
        btnPasswdAuth->setObjectName(QString::fromUtf8("btnPasswdAuth"));
        btnPasswdAuth->setMaximumSize(QSize(80, 16777215));
        btnPasswdAuth->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(btnPasswdAuth, 0, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(BioAuthWidget);

        QMetaObject::connectSlotsByName(BioAuthWidget);
    } // setupUi

    void retranslateUi(QWidget *BioAuthWidget)
    {
        BioAuthWidget->setWindowTitle(QApplication::translate("BioAuthWidget", "Form", nullptr));
        lblBioImage->setText(QString());
        lblBioDevice->setText(QString());
        lblBioNotify->setText(QString());
        btnMore->setText(QApplication::translate("BioAuthWidget", "More", nullptr));
        btnRetry->setText(QApplication::translate("BioAuthWidget", "Retry", nullptr));
        btnPasswdAuth->setText(QApplication::translate("BioAuthWidget", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BioAuthWidget: public Ui_BioAuthWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIOAUTHWIDGET_H
