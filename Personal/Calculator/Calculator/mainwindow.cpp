#include "mainwindow.h"
#include "ui_mainwindow.h"

static double num_first;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_0, SIGNAL(clicked()), this,SLOT(digits_numbers()));
    connect(ui->pushButton_1, SIGNAL(clicked()), this,SLOT(digits_numbers()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this,SLOT(digits_numbers()));
    connect(ui->pushButton_3, SIGNAL(clicked()), this,SLOT(digits_numbers()));
    connect(ui->pushButton_4, SIGNAL(clicked()), this,SLOT(digits_numbers()));
    connect(ui->pushButton_5, SIGNAL(clicked()), this,SLOT(digits_numbers()));
    connect(ui->pushButton_6, SIGNAL(clicked()), this,SLOT(digits_numbers()));
    connect(ui->pushButton_7, SIGNAL(clicked()), this,SLOT(digits_numbers()));
    connect(ui->pushButton_8, SIGNAL(clicked()), this,SLOT(digits_numbers()));
    connect(ui->pushButton_9, SIGNAL(clicked()), this,SLOT(digits_numbers()));
    connect(ui->pushButton_sign, SIGNAL(clicked()), this,SLOT(operations()));
    connect(ui->pushButton_mod, SIGNAL(clicked()), this,SLOT(operations()));
    connect(ui->pushButton_div, SIGNAL(clicked()), this,SLOT(math_operations()));
    connect(ui->pushButton_plus, SIGNAL(clicked()), this,SLOT(math_operations()));
    connect(ui->pushButton_min, SIGNAL(clicked()), this,SLOT(math_operations()));
    connect(ui->pushButton_mult, SIGNAL(clicked()), this,SLOT(math_operations()));

    ui->pushButton_div->setCheckable(true);
    ui->pushButton_plus->setCheckable(true);
    ui->pushButton_min->setCheckable(true);
    ui->pushButton_mult->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::digits_numbers()
{
    QPushButton *button = static_cast<QPushButton *>(sender());
    double all_numbers;
    QString new_lable;
    if(ui->result_show->text().contains(".") && button->text() == "0")
    {
        new_lable = ui->result_show->text() + button->text();
    }
    else
    {
    all_numbers = (ui->result_show->text() + button->text()).toDouble();
    new_lable = QString::number(all_numbers, 'g', 14);
    }
    ui->result_show->setText(new_lable);
}

void MainWindow::on_pushButton_dot_clicked()
{
    if(!(ui->result_show->text().contains('.')))
        ui->result_show->setText(ui->result_show->text() + ".");
}

void MainWindow::operations()
{
    QPushButton *button = static_cast<QPushButton *>(sender());
    double all_numbers;
    QString new_lable;
    if(button->text() == "+/-")
    {
        all_numbers = (ui->result_show->text()).toDouble();
        all_numbers = all_numbers * -1;
        new_lable = QString::number(all_numbers, 'g', 14);
        ui->result_show->setText(new_lable);
    }

    else if(button->text() == "%")
    {
        all_numbers = (ui->result_show->text()).toDouble();
        all_numbers = all_numbers * 0.01;
        new_lable = QString::number(all_numbers, 'g', 14);
        ui->result_show->setText(new_lable);
    }
}

void MainWindow::math_operations()
{
    QPushButton *button = static_cast<QPushButton *>(sender());
    num_first = ui->result_show->text().toDouble();
    ui->result_show->setText("");
    button->setChecked(true);

}

void MainWindow::on_pushButton_clear_clicked()
{
    ui->pushButton_plus->setChecked(false);
    ui->pushButton_min->setChecked(false);
    ui->pushButton_div->setChecked(false);
    ui->pushButton_mult->setChecked(false);
    ui->result_show->setText("0");
}

void MainWindow::on_pushButton_eq_clicked()
{
    double labelNumber, num_second;
    QString new_lable;
    num_second = ui->result_show->text().toDouble();
    if(ui->pushButton_plus->isChecked())
    {
        labelNumber = num_first + num_second;
        new_lable = QString::number(labelNumber, 'g', 14);
        ui->result_show->setText(new_lable);
        ui->pushButton_plus->setChecked(false);
    }
    else if(ui->pushButton_min->isChecked())
    {
        labelNumber = num_first - num_second;
        new_lable = QString::number(labelNumber, 'g', 14);
        ui->result_show->setText(new_lable);
        ui->pushButton_min->setChecked(false);
    }
    else if(ui->pushButton_div->isChecked())
    {
        if (num_second == 0) ui->result_show->setText("0");
        else
        {
        labelNumber = num_first / num_second;
        new_lable = QString::number(labelNumber, 'g', 14);
        ui->result_show->setText(new_lable);
        }
        ui->pushButton_div->setChecked(false);
    }
    else if(ui->pushButton_mult->isChecked())
    {
        labelNumber = num_first * num_second;
        new_lable = QString::number(labelNumber, 'g', 14);
        ui->result_show->setText(new_lable);
        ui->pushButton_mult->setChecked(false);
    }
}
