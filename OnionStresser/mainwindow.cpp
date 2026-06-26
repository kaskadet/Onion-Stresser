#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QTcpSocket>
#include <windows.h>
#include <QDebug>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);
    ZeroMemory(&pi, sizeof(pi));
    delete ui;
}

void MainWindow::on_przycisk_clicked()
{
    if(bombienie != true){
        bombienie = true;
        ZeroMemory(&si, sizeof(si));
        si.cb = sizeof(si);
        ZeroMemory(&pi, sizeof(pi));

        QString command = "../../../bombiarka/build/Desktop_Qt_6_11_0_MinGW_64_bit-Debug/bomba.exe ";
        command += ui->ip_edit->text();
        command += " ";
        command += ui->port_edit->text();

        QVector<wchar_t> cmdBuffer(command.length() + 1);
        command.toWCharArray(cmdBuffer.data());
        cmdBuffer[command.length()] = 0;

        if(CreateProcessW(NULL, cmdBuffer.data(), NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi)){
            qDebug() << "Rozpoczynam bombienie!";
        } else {
            qDebug() << GetLastError();
        }
    } else{
        bombienie = false;
        TerminateProcess(pi.hProcess, 0);
    }
}

