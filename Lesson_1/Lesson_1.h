#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Lesson_1.h"

class Lesson_1 : public QMainWindow
{
    Q_OBJECT

public:
    Lesson_1(QWidget *parent = Q_NULLPTR);

private:
    Ui::Lesson_1Class ui;

private slots:
    
    void pushRes();

};


