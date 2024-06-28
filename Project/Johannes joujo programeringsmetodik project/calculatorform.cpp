#include "calculatorform.h"


CalculatorForm::CalculatorForm(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}

/*
 * if Check button is clicked the funktion
 * checks if the application is solved.
 */
void CalculatorForm::on_pushButton_clicked()
{ // initiate int and double values to later compare the result from the boxes.
    int a=0;
    int b=6;

    double c=0;
    double d=9.99;

    double e=0;
    double f=15.99;

    double g=ui.inputSpinBox1->value() + ui.doubleSpinBox1->value();
    double h=ui.doubleSpinBox3->value();

    double i=ui.inputSpinBox2->value() + ui.doubleSpinBox2->value();
    double j= 9.66;
    //adds the rows vaues to a variable.
    a = ui.inputSpinBox2->value() + ui.inputSpinBox1->value();
    c = ui.doubleSpinBox2->value() + ui.doubleSpinBox1->value();
    e = ui.doubleSpinBox3->value() + ui.doubleSpinBox4->value();

    // depending on if the rows qcuals the set values a message will be shown.
    if(a==b && d==c && e==f && g==h && i==j){
        QMessageBox::information(this,"something", "YOU WIN");
    }
    else{
        QMessageBox::information(this,"Something", "YOU NEED TO CHANGE SOMETHING");
    }
}

// when the user clicks Stop the application closes.
void CalculatorForm::on_stop_clicked()
{
    close();
}

/*
 *  when the user clicks the Answer button one way of
 *  solving the application is shown.
 */
void CalculatorForm::on_Answer_clicked()
{
    ui.inputSpinBox1->setValue(3);
    ui.inputSpinBox2->setValue(3);

    ui.doubleSpinBox1->setValue(3.33);
    ui.doubleSpinBox2->setValue(6.66);

    ui.doubleSpinBox3->setValue(6.33);
    ui.doubleSpinBox4->setValue(9.66);

}

/*
* This is for when the Refresh button is pressed
*  every boxs that the user cann change gets a default value 0.
*/
void CalculatorForm::on_Refresh_clicked()
{
    ui.inputSpinBox1->setValue(0);
    ui.inputSpinBox2->setValue(0);

    ui.doubleSpinBox1->setValue(0.00);
    ui.doubleSpinBox2->setValue(0.00);

    ui.doubleSpinBox3->setValue(0.00);
    ui.doubleSpinBox4->setValue(0.00);
}

