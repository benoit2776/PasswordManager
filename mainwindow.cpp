#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    readOnlyConsultationPageLineEdit(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::resetConsultationPageListWidget()
{
    ui -> consultationPageListWidget -> clear();
}

void MainWindow::readOnlyConsultationPageLineEdit(bool is_read_only)
{
    ui -> consultationPageAccountLineEdit -> setReadOnly(is_read_only);
    ui -> consultationPageMailLineEdit -> setReadOnly(is_read_only);
    ui -> consultationPageIdLineEdit -> setReadOnly(is_read_only);
    ui -> consultationPagePasswordLineEdit -> setReadOnly(is_read_only);
}

void MainWindow::resetConsultationPageLineEdit()
{
    ui -> consultationPageAccountLineEdit -> clear();
    ui -> consultationPageMailLineEdit -> clear();
    ui -> consultationPageIdLineEdit -> clear();
    ui -> consultationPagePasswordLineEdit -> clear();
}

void MainWindow::resetAdditionPageLineEdit()
{
    ui -> additionPageAccountNameTextEdit -> clear();
    ui -> additionPageMailTextEdit -> clear();
    ui -> additionPageIdTextEdit -> clear();
    ui -> additionPagePasswordTextEdit -> clear();
}

void MainWindow::on_connectButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1); // go to menu page
    ui -> idTextEdit -> clear();
    ui -> passwordTextEdit -> clear();
}

void MainWindow::on_menuPageConsultPushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2); // go to consultation page
}

void MainWindow::on_menuPageAddPushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3); // go to addition Page
}

void MainWindow::on_consultationPageReturnPushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1); // go to menu Page
    readOnlyConsultationPageLineEdit(true);
    resetConsultationPageListWidget();
    resetConsultationPageLineEdit();
}


void MainWindow::on_additionPageReturnPushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1); // go to menu Page
    resetAdditionPageLineEdit();
}


void MainWindow::on_menuPageDisconnectPushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0); // go to connection Page
}


void MainWindow::on_consultationPageDisconnectPushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0); // go to connection Page
    readOnlyConsultationPageLineEdit(true);
    resetConsultationPageListWidget();
    resetConsultationPageLineEdit();
}


void MainWindow::on_consultationPageEnableModificationPushButton_clicked()
{
    readOnlyConsultationPageLineEdit(false);
}


void MainWindow::on_consultationPageConsultPushButton_clicked()
{
    readOnlyConsultationPageLineEdit(true);
    resetConsultationPageLineEdit();
}


void MainWindow::on_consultationPageValidateModificationPushButton_clicked()
{
    readOnlyConsultationPageLineEdit(true);
}


void MainWindow::on_additionPageValidatePushButton_clicked()
{
    resetAdditionPageLineEdit();
}


void MainWindow::on_consultationPageDeletePushButton_clicked()
{
    //
}

