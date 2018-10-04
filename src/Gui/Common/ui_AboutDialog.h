/********************************************************************************
** Form generated from reading UI file 'AboutDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

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

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *m_aboutLabel;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    WalletGui::WalletOkButton *m_okButton;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QStringLiteral("AboutDialog"));
        AboutDialog->resize(600, 390);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AboutDialog->sizePolicy().hasHeightForWidth());
        AboutDialog->setSizePolicy(sizePolicy);
        AboutDialog->setMinimumSize(QSize(600, 390));
        AboutDialog->setMaximumSize(QSize(600, 390));
        verticalLayout = new QVBoxLayout(AboutDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_aboutLabel = new QLabel(AboutDialog);
        m_aboutLabel->setObjectName(QStringLiteral("m_aboutLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_aboutLabel->sizePolicy().hasHeightForWidth());
        m_aboutLabel->setSizePolicy(sizePolicy1);
        m_aboutLabel->setTextFormat(Qt::RichText);
        m_aboutLabel->setWordWrap(true);
        m_aboutLabel->setOpenExternalLinks(true);

        verticalLayout->addWidget(m_aboutLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_okButton = new WalletGui::WalletOkButton(AboutDialog);
        m_okButton->setObjectName(QStringLiteral("m_okButton"));

        horizontalLayout->addWidget(m_okButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AboutDialog);
        QObject::connect(m_okButton, SIGNAL(clicked()), AboutDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "About B2Bcoin", 0));
        m_aboutLabel->setText(QApplication::translate("AboutDialog", "<html><head/><body><p><span style=\" font-family:'Open Sans'; font-size:14px;\">B2Bcoin QT GUI wallet v%1-%2</span></p><p><span style=\" font-family:'Open Sans'; font-size:14px;\">Links:</span><br><a href=\"https://b2bcoin.xyz/\"><span style=\" font-family:'Open Sans'; font-size:14px; text-decoration: underline; color:#086788;\">B2Bcoin Webpage</span></a><br><a href=\"http://pool.b2bcoin.ml\"><span style=\" font-family:'Open Sans'; font-size:14px; text-decoration: underline; color:#086788;\">B2Bcoin Official Mining Pool</span></a><br><a href=\"https://t.me/joinchat/Fxlb2Qw8ivAta7iYgM0Wiw\"><span style=\" font-family:'Open Sans'; font-size:14px; text-decoration: underline; color:#086788;\">B2Bcoin Official Telegram Chat</span></a><br><a href=\"https://discord.gg/QwhhqPY\"><span style=\" font-family:'Open Sans'; font-size:14px; text-decoration: underline; color:#086788;\">B2Bcoin Official Discord</span></a><br><a href=\"https://twitter.com/coinB2B\"><span style=\" font-family:'Open Sans'; font-size:14px; text-decoration: underline; color:#086788;\">B2Bcoin Twitter</span></a><br><a href=\"https://facebook.com/b2beyond/\"><span style=\" font-family:'Open Sans'; font-size:14px; text-decoration: underline; color:#086788;\">B2Bcoin Facebook</span></a><br><a href=\"https://bitcointalk.org/index.php?topic=2098163.0\"><span style=\" font-family:'Open Sans'; font-size:14px; text-decoration: underline; color:#086788;\">B2Bcoin BitcoinTalk Forum</span></a><br><a href=\"https://github.com/oliviersinnaeve/\"><span style=\" font-family:'Open Sans'; font-size:14px; text-decoration: underline; color:#086788;\">B2Bcoin Github</span></a><br><br><span style=\" font-family:'Open Sans'; font-size:14px;\">Exchanges:</span><br><a href=\"https://app.stex.com/en/basic-trade/pair/BTC/B2B/1D?ref=93258019\"><span style=\" font-family:'Open Sans'; font-size:14px; text-decoration: underline; color:#086788;\">STEX</span></a><br><a href=\"https://maplechange.com/markets/b2bbtc?markets=all&column=name&order=asc&unit=volume&pinned=true&ref=1346\"><span style=\" font-family:'Open Sans'; font-size:14px; text-decoration: underline; color:#086788;\">MapleChange</span></a><br><a href=\"https://fcbaccount.com\"><span style=\" font-family:'Open Sans'; font-size:14px; text-decoration: underline; color:#086788;\">FirstCryptoBank</span></a></p></body></html>", 0));
        m_okButton->setText(QApplication::translate("AboutDialog", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
