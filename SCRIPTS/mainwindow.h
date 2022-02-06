#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QUrl>
#include <QWebFrame>
#include <QWebElement>
#include <QtWebKitWidgets/QWebView>

#include <iostream>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_urlLineEdit_returnPressed();
    void on_toggleButton_released();
    void on_genButton_released();
    void on_webView_selectionChanged();
    void on_backButton_clicked();

private:

    Ui::MainWindow *ui;
    bool collect;
};

#endif // MAINWINDOW_H