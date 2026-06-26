#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <windows.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow() override;
private slots:
    void on_przycisk_clicked();

private:
    bool bombienie = false;
    STARTUPINFO si;
    PROCESS_INFORMATION pi;

    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
