/* File: main.cpp
 *
 * Author: Njabulo Sibiya ()
 * Created: 20 June 2023
 * Partner: n/a
 * Course: COS2614 - Programming: Contemporary Concepts
 *
 * File Summary:
 *      This program is for my COS2614 (Programming: Contemporary Concepts) University module,
 *      It serves as a space for me to learn all the concepts introduced during the course.
 *
 */


#include <QApplication>
#include <QGuiApplication>
#include <QMessageBox>
#include <QInputDialog>
#include <QTextStream>


#include "headers/WorkingWIthQString.h"
//#include "headers/WorkingWithStreams.h"
//#include "headers/QtDialogsForUserInputOutput.h"
#include "headers/ClassTest.h"

int main (int argc, char* argv[]) {
    QApplication app(argc, argv);
    QTextStream cout(stdout, QIODevice::WriteOnly);

    QString name = QInputDialog::getText(0, "Name", "Enter your name: ");
    cout << "name: " << name;

    QString response = QString("Your full name is %1").arg(DisplaysName::appendName(name));
    QMessageBox::information(0, "Name", response, QMessageBox::Ok);

    return app.exec();
}
