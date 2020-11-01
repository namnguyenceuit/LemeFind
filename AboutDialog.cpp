#include "AboutDialog.h"
#include "ui_AboutDialog.h"

AboutDialog::AboutDialog(QWidget *parent)
	: QWidget(parent)
{
	ui = new Ui::AboutDialog();
	ui->setupUi(this);
}

AboutDialog::~AboutDialog()
{
	delete ui;
}
