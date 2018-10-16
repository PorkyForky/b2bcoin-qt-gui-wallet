/********************************************************************************
** Form generated from reading UI file 'ReleaseNotesDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RELEASENOTESDIALOG_H
#define UI_RELEASENOTESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "Gui/Common/WalletOkButton.h"

QT_BEGIN_NAMESPACE

class Ui_ReleaseNotesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *m_releaseNotesLabel;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    WalletGui::WalletOkButton *m_okButton;

    void setupUi(QDialog *ReleaseNotesDialog)
    {
        if (ReleaseNotesDialog->objectName().isEmpty())
            ReleaseNotesDialog->setObjectName(QStringLiteral("ReleaseNotesDialog"));
        ReleaseNotesDialog->resize(600, 390);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ReleaseNotesDialog->sizePolicy().hasHeightForWidth());
        ReleaseNotesDialog->setSizePolicy(sizePolicy);
        ReleaseNotesDialog->setMinimumSize(QSize(600, 390));
        ReleaseNotesDialog->setMaximumSize(QSize(600, 390));
        verticalLayout = new QVBoxLayout(ReleaseNotesDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_releaseNotesLabel = new QLabel(ReleaseNotesDialog);
        m_releaseNotesLabel->setObjectName(QStringLiteral("m_releaseNotesLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_releaseNotesLabel->sizePolicy().hasHeightForWidth());
        m_releaseNotesLabel->setSizePolicy(sizePolicy1);
        m_releaseNotesLabel->setTextFormat(Qt::RichText);
        m_releaseNotesLabel->setWordWrap(true);
        m_releaseNotesLabel->setOpenExternalLinks(true);

        verticalLayout->addWidget(m_releaseNotesLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_okButton = new WalletGui::WalletOkButton(ReleaseNotesDialog);
        m_okButton->setObjectName(QStringLiteral("m_okButton"));

        horizontalLayout->addWidget(m_okButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ReleaseNotesDialog);
        QObject::connect(m_okButton, SIGNAL(clicked()), ReleaseNotesDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(ReleaseNotesDialog);
    } // setupUi

    void retranslateUi(QDialog *ReleaseNotesDialog)
    {
        ReleaseNotesDialog->setWindowTitle(QApplication::translate("ReleaseNotesDialog", "Release Notes", 0));
        m_releaseNotesLabel->setText(QApplication::translate("ReleaseNotesDialog", "<html><head/><body><p><span style=\" font-family:'Open Sans'; font-size:16px;\">Release Notes</span></p><br><p><span style=\" font-family:'Consolas'; font-size:14px;\">v1.0.3 - (16-Oct-2018)<br>- Fixed 0 balance and 0 transactions after a wallet reset</span></p><p><span style=\" font-family:'Consolas'; font-size:14px;\">v1.0.2 - (09-Oct-2018)<br>- MIXIN is now working to set<br>- Standard TX fee changed from 0.001 to 0.000001 B2B<br>- Max amount to send changed from 5000 to 100000 B2B</span></p><p><span style=\" font-family:'Consolas'; font-size:14px;\">v1.0.1 - (04-Oct-2018)<br>- Added Release Notes in help section of the wallet</span></p><p><span style=\" font-family:'Consolas'; font-size:14px;\">v1.0.0 - (04-Oct-2018)<br>- First release of B2Bcoin QT GUI wallet</span></p></body></html>", 0));
        m_okButton->setText(QApplication::translate("ReleaseNotesDialog", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ReleaseNotesDialog: public Ui_ReleaseNotesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RELEASENOTESDIALOG_H
