// Copyright (c) 2015-2017, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#include "B2BStyle.h"

namespace WalletGui {

B2BStyle::B2BStyle() : Style("b2b", "B2B") {

}

QString B2BStyle::statusBarBackgroundColor() const {
  return "#086788";
}

QString B2BStyle::statusBarFontColor() const {
  return "#ffffff";
}

QString B2BStyle::headerBackgroundColor() const {
  return "#086788";
}

QString B2BStyle::headerBorderColor() const {
  return "#086788";
}

QString B2BStyle::addressFontColor() const {
  return "#ffffff";
}

QString B2BStyle::balanceFontColor() const {
  return "#ffffff";
}

QString B2BStyle::toolButtonBackgroundColorNormal() const {
  return "#38aecc";
}

QString B2BStyle::toolButtonBackgroundColorHover() const {
  return "#9dd9d2";
}

QString B2BStyle::toolButtonBackgroundColorPressed() const {
  return "#086788";
}

QString B2BStyle::toolButtonFontColorNormal() const {
  return "#086788";
}

QString B2BStyle::toolButtonFontColorHover() const {
  return "#086788";
}

QString B2BStyle::toolButtonFontColorDisabled() const {
  return "#ffffff";
}

QString B2BStyle::toolBarBorderColor() const {
  return "#086788";
}

QString B2BStyle::getWalletSyncGifFile() const {
  return QString(":icons/b2b/wallet-sync");
}

QPixmap B2BStyle::getLogoPixmap() const {
  return QPixmap(QString(":icons/b2b/logo"));
}

QPixmap B2BStyle::getBalanceIcon() const {
  return QPixmap(QString(":icons/b2b/balance"));
}

QPixmap B2BStyle::getConnectedIcon() const {
  return QPixmap(QString(":icons/b2b/connected"));
}

QPixmap B2BStyle::getDisconnectedIcon() const {
  return QPixmap(QString(":icons/b2b/disconnected"));
}

QPixmap B2BStyle::getEncryptedIcon() const {
  return QPixmap(QString(":icons/b2b/encrypted"));
}

QPixmap B2BStyle::getNotEncryptedIcon() const {
  return QPixmap(QString(":icons/b2b/decrypted"));
}

QPixmap B2BStyle::getSyncedIcon() const {
  return QPixmap(QString(":icons/b2b/synced"));
}

}
