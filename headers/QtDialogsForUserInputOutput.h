#ifndef QTDIALOGSFORUSERINPUTOUTPUT_H
#define QTDIALOGSFORUSERINPUTOUTPUT_H

#include <QGuiApplication>
#include <QMessageBox>
#include <QInputDialog>
#include <QTextStream>

void firstDialog(int argc, char* argv[]) {

    //COPY THE ENTIRE CODE BELOW AND PASTE IN MAIN
    QApplication app(argc, argv);// The start of every Qt GUI application
    QTextStream cout(stdout, QIODevice::WriteOnly);//create write stream, to write to the console.

    short answer(0);

    do {
        int factArg(0);
        int fact(1);

        factArg = QInputDialog::getInt(0, "Factorial Calculator", "Factor of: ", 1);//Pop up dialog, wait for user to enter an integer, return it
        std::cout << "User enetered: " << factArg << std::endl;// this writes to console, helps when debugging

        int i(2);
        while(i <= factArg) {
            fact *= i;
            ++i;
        }

        //each %n is replaced with an arg() value
        QString response = QString("The factorial of %1 is %2.\n %3").arg(factArg).arg(fact).arg("Do you want to comput another factorial?");
        answer = QMessageBox::question(0, "Play Again?", response, QMessageBox::Yes | QMessageBox::No);//last part is bitwise or of 2 values
    }while(answer == QMessageBox::Yes);//while yes is pressed, redo function

    cout << "Application terminated" << "\n";
    return app.exec();
}



#endif // QTDIALOGSFORUSERINPUTOUTPUT_H
