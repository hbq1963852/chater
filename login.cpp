#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"
#include "loginfail.h"
#include "myregister.h"

logIn::logIn(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::logIn)
{
    ui->setupUi(this);
}

logIn::~logIn()
{
    delete ui;
}

void logIn::on_closeLogIn_clicked()
{
    close();
}

void logIn::on_logInBtn_clicked()
{
    if(false){
        close();
        MainWindow *MW = new MainWindow();
        MW->show();
    }
    else{
        logInFail *lif = new logInFail();
        lif->setWindowFlags(Qt::FramelessWindowHint);
        lif->setAcceptDrops(true);
        lif->setModal(true);
        lif->show();
    }
}

void logIn::on_registerBtn_clicked()
{
    MyRegister *MR = new MyRegister();
    MR->setWindowModality(Qt::ApplicationModal);
    MR->show();
}
