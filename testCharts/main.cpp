#include <QtGui/QApplication>

#include "CXLineChart.h"

int main(int argc, char *argv[])SD
{
	QApplication a(argc, argv);

	CXLineChart chart;

	
	//New GITDSFSDF

	chart.show();
	chart.setAxisBottom(QList<QString>()<<"sdfsd"<<"sdfsf"<<"sdfsdf"<<"sdfsdf");
	chart.addPolyline(QList<qreal>()<<3<<4<<5<<20,Qt::red,"sdfsdf");
	chart.addPolyline(QList<qreal>()<<5<<8<<9<<320,Qt::green,"dfdfdfdf");
	chart.addPolyline(QList<qreal>()<<9<<12<<15<<2,Qt::yellow,"dfdfgddf");
	/*
	chart.addPolyline(QList<qreal>()<<3<<4<<5<<20,Qt::red,"sdfsdf");
	chart.addPolyline(QList<qreal>()<<5<<8<<9<<32,Qt::green,"dfdfdfdf");
	chart.addPolyline(QList<qreal>()<<9<<12<<15<<2,Qt::yellow,"dfdfgddf");
	chart.addPolyline(QList<qreal>()<<3<<4<<5<<20,Qt::red,"sdfsdf");
	chart.addPolyline(QList<qreal>()<<5<<8<<9<<32,Qt::green,"dfdfdfdf");
	chart.addPolyline(QList<qreal>()<<9<<12<<15<<2,Qt::yellow,"dfdfgddf");
	chart.addPolyline(QList<qreal>()<<3<<4<<5<<20,Qt::red,"sdfsdf");
	chart.addPolyline(QList<qreal>()<<5<<8<<9<<32,Qt::green,"dfdfdfdf");
	chart.addPolyline(QList<qreal>()<<9<<12<<15<<2,Qt::yellow,"dfdfgddf");
	chart.addPolyline(QList<qreal>()<<3<<4<<5<<20,Qt::red,"sdfsdf");
	chart.addPolyline(QList<qreal>()<<5<<8<<9<<32,Qt::green,"dfdfdfdf");
*/



	return a.exec();
}
Master