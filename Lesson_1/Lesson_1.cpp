#include "Lesson_1.h"

Lesson_1::Lesson_1(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(on_pushButton()));

    //Task 2
    ui.radioButton_2->setChecked(true);
    QObject::connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(on_pushButton_2()));
    
    //Task 3
    QObject::connect(ui.pushButton_3, SIGNAL(clicked()), this, SLOT(on_pushButton_3()));
    QObject::connect(ui.pushButton_4, SIGNAL(clicked()), this, SLOT(on_pushButton_4()));
    QObject::connect(ui.pushButton_5, SIGNAL(clicked()), this, SLOT(on_pushButton_5()));
}

//Task 1
void Lesson_1::on_pushButton()
{
    QString str = ui.lineEdit_1->text();
    double a = str.toDouble();
    str = ui.lineEdit_2->text();
    double b = str.toDouble();
    str = ui.lineEdit_3->text();
    double c = str.toDouble();

    double discr = b * b - 4 * a * c;
    double x1 = 0;
    double x2 = 0;

    if (a == 0)
    {
        x1 = -c / b;
        str = QString::number(x1);
        ui.label_4->setText("X1 = " + str);
        return;
    }

    if (discr == 0)
    {
        x1 = -b / 2 * a;
        str = QString::number(x1);
        ui.label_4->setText("X1 = " + str);
    }
    else if (discr > 0)
    {
        x1 = (-b - qSqrt(discr)) / 2 * a;
        x2 = (-b + qSqrt(discr)) / 2 * a;
        str = QString::number(x1);
        QString tmpStr = QString::number(x2);
        ui.label_4->setText("X1 = " + str + ", X2 = " + tmpStr);
    }
    else
    {
      
        ui.label_4->setText("Нет корней");
    }
}

//Task 2
void Lesson_1::on_pushButton_2()
{
    QString str = ui.lineEdit_4->text();
    double b = str.toDouble();
    str = ui.lineEdit_5->text();
    double c = str.toDouble();
    str = ui.lineEdit_6->text();
    double alpha = str.toDouble();

    if (ui.radioButton->isChecked())
    {
        alpha = qDegreesToRadians(alpha);
    }

    double a = qSqrt(b * b + c * c - 2 * b * c * qCos(alpha));
    str = QString::number(a);
    ui.label_11->setText("Сторона a = " + str);

}

//Task 3
void Lesson_1::on_pushButton_3()
{
    ui.textEdit_2->setPlainText(ui.textEdit_2->toPlainText() + ui.textEdit->toPlainText());
}

void Lesson_1::on_pushButton_4()
{
    ui.textEdit_2->setText(ui.textEdit->toPlainText());
}

void Lesson_1::on_pushButton_5()
{
    QString str = "<font color='red'>Hello HTML</font>";
    ui.textEdit_2->setHtml(str);
}