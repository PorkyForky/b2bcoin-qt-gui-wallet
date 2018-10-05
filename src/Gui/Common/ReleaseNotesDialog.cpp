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

#include <QDateTime>

#include "ReleaseNotesDialog.h"
#include "Settings/Settings.h"

#include "ui_ReleaseNotesDialog.h"

namespace WalletGui {

ReleaseNotesDialog::ReleaseNotesDialog(QWidget* _parent) : QDialog(_parent, static_cast<Qt::WindowFlags>(Qt::WindowCloseButtonHint)), m_ui(new Ui::ReleaseNotesDialog) {
  m_ui->setupUi(this);

  QString releaseNotesText = m_ui->m_releaseNotesLabel->text();
  m_ui->m_releaseNotesLabel->setText(releaseNotesText.arg(Settings::instance().getVersion()).arg(GIT_REVISION).
    arg(QDateTime::currentDateTime().date().year()));
}

ReleaseNotesDialog::~ReleaseNotesDialog() {
}

}