#ifndef WORKINGWITHQSTRING_H
#define WORKINGWITHQSTRING_H

//main issue is that, when compiled, it does not wait for me to enter string in the terminal.

#include <iostream>
#include <string>

//include when working with QString
#include <QString>
//Include when
#include <QTextStream>

//showcases how normal C++ strings operate
void normalCppString() {
    //initializing strings, munipulating them, them displaying results
    std::string s1("This "), s2("is a "), s3("normal C++ string");
    s1 += s2; //concatenate
    std::string s4 = s1 + s3;
    std::cout << s4 << std::endl;

    //display string length
    std::string s5("The length of that string is: ");
    std::cout << s5 << s4.length() << " charecters." << std::endl;

    //working with user input, prompt, display and display length
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, s2); //inputs entire line
    std::cout << "Your Sentence: " << s2 << std::endl;
    std::cout << "Its length is: " << s2.length() << std::endl;
}

//Showcases how QStrings operate.
void workingWithQString() {
    //creates stream for text
    QTextStream cout(stdout);
    QTextStream cin(stdin);

    //initializing strings, munipulating them, them displaying results
    QString s1("This "), s2("is a "), s3("QString");
    s1 += s2;
    QString s4 = s1 += s3;
    cout << s4;

    //displays string length
    //uses Argument parametrization
    QString s5 = QString("The length of %1 is: %2 charecters.").arg(s4).arg(s4.length());
    cout << s5;

    cout << "Enter text: ";
    s2 = cin.readLine();//inputs/reads entire line
    cout << "Your sentence: " << s2;
    cout << "\nIts length: " << s2.length();
}

#endif // WORKINGWITHQSTRING_H
