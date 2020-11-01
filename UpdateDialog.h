#pragma once

#include <QWidget>
namespace Ui { class UpdateDialog; };

class UpdateDialog : public QWidget
{
	Q_OBJECT

public:
	UpdateDialog(QWidget *parent = Q_NULLPTR);
	~UpdateDialog();

private:
	Ui::UpdateDialog *ui;
};
