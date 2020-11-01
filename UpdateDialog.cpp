#include "UpdateDialog.h"
#include "ui_UpdateDialog.h"

UpdateDialog::UpdateDialog(QWidget *parent)
	: QWidget(parent)
{
	ui = new Ui::UpdateDialog();
	ui->setupUi(this);
}

UpdateDialog::~UpdateDialog()
{
	delete ui;
}
