/*
 * Author: Austin Walters
 * Last Modified: July 28, 2014
 * Project: Selenium Factory
 */

#ifndef TESTGENERATIONFORM_H
#define TESTGENERATIONFORM_H

#include <QMainWindow>
#include <QDir>
#include <QInputDialog>
#include <QProcess>

#include <iostream>
#include <vector>
#include <string.h>
#include <fstream>

#include "parse.h"

namespace Ui {
class testGenerationForm;
}

class testGenerationForm : public QMainWindow
{
    Q_OBJECT

public:

    explicit testGenerationForm(QWidget *parent = 0);
    ~testGenerationForm();

private slots:

    void on_acceptButton_clicked();
    void on_cencelButton_clicked();

    void on_chromeSlider_valueChanged(int value);
    void on_firefoxSlider_valueChanged(int value);

    std::string selectedOptions();

    void on_testNameEdit_returnPressed();

    void on_HTCOneXBox_clicked(bool checked);
    void on_androidEmulatedBox_clicked(bool checked);
    void on_samsungGalaxyNexusBox_clicked(bool checked);
    void on_googleNexus7CBox_clicked(bool checked);
    void on_motorolaDroid4Box_clicked(bool checked);
    void on_iPhoneBox_clicked(bool checked);
    void on_iPadBox_clicked(bool checked);
    void on_androidCheckBox_clicked(bool checked);
    void on_iosCheckBox_clicked(bool checked);
    void on_deviceBox_clicked(bool checked);

    void checkAndroidBoxesClear();
    void checkiOSBoxesClear();
    void checkAllBoxesClear();



private:

    Ui::testGenerationForm *ui;
    std::vector< std::vector<std::string> > opts;

    std::string funcDescription;

    std::string addAndroid(std::string);
    std::string addiOS(std::string);

    std::string addWindows(std::string);
    std::string addMac(std::string);
    std::string addLinux(std::string);

    std::string addOSBrowser(int);
    std::string addMobile(int);
};

#endif // TESTGENERATIONFORM_H