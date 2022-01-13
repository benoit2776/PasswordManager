#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_connectButton_clicked();

    void on_menuPageConsultPushButton_clicked();

    void on_menuPageAddPushButton_clicked();

    void on_consultationPageReturnPushButton_clicked();

    void on_additionPageReturnPushButton_clicked();

    void on_menuPageDisconnectPushButton_clicked();

    void on_consultationPageDisconnectPushButton_clicked();

    void on_consultationPageEnableModificationPushButton_clicked();

    void resetConsultationPageListWidget();

    void readOnlyConsultationPageLineEdit(bool is_read_only);

    void resetConsultationPageLineEdit();

    void on_consultationPageConsultPushButton_clicked();

    void on_consultationPageValidateModificationPushButton_clicked();

    void on_additionPageValidatePushButton_clicked();

    void resetAdditionPageLineEdit();

    void on_consultationPageDeletePushButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
