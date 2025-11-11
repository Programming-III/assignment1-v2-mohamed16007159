#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int id;

public:
    Person();
    Person(string n, int i);
    virtual ~Person();

    void setName(string n);
    void setId(int i);
    string getName() const;
    int getId() const;

    virtual void display() const;
};

#endif
