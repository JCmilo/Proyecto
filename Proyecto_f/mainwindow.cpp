#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Button_clicked()
{
    string n_c, d_vel, d_fre, d_tem, d_vol;


    n_c=ui->N_carnet->text().toStdString();

    ofstream outfile ("Direcciones.txt");

    outfile << n_c;

    ifstream infile ("./Datos.txt");

    infile>> d_vel >> d_fre >> d_tem >> d_vol ;
    
    ui->f_dato->setText(QString::fromStdString(d_fre));
    ui->v_dato->setText(QString::fromStdString(d_vel));
    ui->t_dato->setText(QString::fromStdString(d_tem));
    ui->volt_dato->setText(QString::fromStdString(d_vol));

}


