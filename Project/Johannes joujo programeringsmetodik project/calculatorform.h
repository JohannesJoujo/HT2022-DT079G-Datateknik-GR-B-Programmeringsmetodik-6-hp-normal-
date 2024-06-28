#ifndef CALCULATORFORM_H
#define CALCULATORFORM_H

#include "QtCore/qtmetamacros.h"
#include "ui_calculatorform.h"
#include <QtCore>
#include <QtGui>
#include <iostream>
#include <QMessageBox>
#include <QString>
#include <QFile>
#include <QTextStream>


class CalculatorForm : public QWidget
{
    Q_OBJECT

public:
    explicit CalculatorForm(QWidget *parent = nullptr);

private slots:

    void on_pushButton_clicked();
    void on_stop_clicked();
    void on_Answer_clicked();
    void on_Refresh_clicked();

private:
    Ui::CalculatorForm ui;
};
//! [1]

#endif
