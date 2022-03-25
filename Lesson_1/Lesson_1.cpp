#include "Lesson_1.h"

Lesson_1::Lesson_1(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(pushRes()));
}

void Lesson_1::pushRes()
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
