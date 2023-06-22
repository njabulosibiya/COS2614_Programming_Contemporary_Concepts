## Project file

## ALWAYS INCLUDE
##  This tells Qt which modules you'll be using/ ehich to include
QT += core gui widgets

#
TARGET = Myapp

##why add this?
#
TEMPLATE = app

#
greaterThan(QT_MAJOR_VERSION, 4): widgets

# If you'll be having .cpp files, include
SOURCES += \
    sources/main.cpp

# If you'll be having .hpp files, include
HEADERS += \
    headers/ClassTest.h \
    headers/QtDialogsForUserInputOutput.h \
    headers/WorkingWIthQString.h \
    headers/WorkingWithStreams.h

CONFIG += console
