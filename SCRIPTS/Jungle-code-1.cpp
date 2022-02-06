#include <QUrl>
#include <QtWebKitWidgets/QWebView>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){

    ui->setupUi(this);
    ui->webView->load(QUrl("http://www.google.com"));
    ui->webView->show();
}