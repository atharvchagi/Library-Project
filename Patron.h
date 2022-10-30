
#include <string>
#include <iostream>
#ifndef PATRON_H
#define PATRON_H
using namespace std;

class Patron
{
public:
    // constructor
    Patron();
    Patron(string name, int id, float fineBalance, int booksCheckedOut);
    // mutators
    void setName(string patronName);
    void setPatronID(int ID);
    void setFineBalance(float fineBalance);
    void setBooksCheckedOut(int booksCheckedOut);

    // accessors
    string getName();
    int getPatronID();
    float getFineBalance();
    int getBooksCheckedOut();

    void addNewPatron(string name, int id, float fineBalance, int booksCheckedOut);
    void printPatron();

private:
    string patronName;
    int ID;
    float fineBalance;
    int booksCheckedOut;
};

#endif