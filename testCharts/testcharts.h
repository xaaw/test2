#ifndef TESTCHARTS_H
#define TESTCHARTS_H

#include <QtGui/QMainWindow>
#include "ui_testcharts.h"

class testCharts : public QMainWindow
{
	Q_OBJECT

public:
	testCharts(QWidget *parent = 0, Qt::WFlags flags = 0);
	~testCharts();

private:
	Ui::testChartsClass ui;
};

#endif // TESTCHARTS_H
