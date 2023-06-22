#ifndef CLASSTEST_H
#define CLASSTEST_H

#include <QString>

class DisplaysName {
public:
    //accessors
    static QString appendName(QString& name) {
        return name += " Sibiya";
    }

    //mutators
    void setName(QString name) {
        m_name = name;
    }

private:
    QString m_name;

};
#endif // CLASSTEST_H
