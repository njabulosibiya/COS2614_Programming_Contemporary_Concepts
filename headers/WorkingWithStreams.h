#ifndef WORKINGWITHSTREAMS_H
#define WORKINGWITHSTREAMS_H

//Streams are objects used for reading and writing. The Standard Library defines <iostream>, while Qt defines <QTextStream> for the equivalent functionality.
//REVISIT THIS SECTION

#include <iostream>
#include <QTextStream>
#include <QDebug>

void streamsInCpp () {
    short num1(1234), num2(2345);

    std::cout << num2 << '\t' << num2 << '\t' << std::endl;
    std::cout << (num1 < num2) << std::endl;

    double dub(1357);
    std::cout << dub << '\t' << showpos << dub << '\t' << std::endl;
}

void streamsInQt() {
    QTextStream cin(stdin, QIODevice::ReadOnly);
    QTextStream cout(stdout, QIODevice::WriteOnly);
    QTextStream cerr(stderr, QIODevice::WriteOnly);

    short num1(1234), num2(2345);


}


#endif // WORKINGWITHSTREAMS_H
