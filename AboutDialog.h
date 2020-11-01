#pragma once

#include <QWidget>
namespace Ui { class AboutDialog; };

class AboutDialog : public QWidget
{
	Q_OBJECT

public:
	AboutDialog(QWidget *parent = Q_NULLPTR);
	~AboutDialog();

private:
	Ui::AboutDialog *ui;
};
