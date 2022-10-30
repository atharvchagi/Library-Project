#include "Patron.h"

// constructor
Patron::Patron()
{
    patronName = "n/a";
    ID = 0;
    booksCheckedOut = 0;
    fineBalance = 0;
}

Patron::Patron(string name, int id, float fineBalance, int booksCheckedOut)
{
    this->patronName = patronName;
    this->ID = ID;
    this->booksCheckedOut = booksCheckedOut;
    this->fineBalance = fineBalance;
}

// mutators
void Patron::setPatronID(int id)
{
    this->ID = ID;
}

void Patron::setName(string patronName)
{
    this->patronName = patronName;
}

void Patron::setBooksCheckedOut(int booksCheckedOut)
{
    this->booksCheckedOut = booksCheckedOut;
}

void Patron::setFineBalance(float fineBalance)
{
    this->fineBalance = fineBalance;
}

// accessors
int Patron::getPatronID()
{
    return ID;
}

string Patron::getName()
{
    return patronName;
}

int Patron::getBooksCheckedOut()
{
    return booksCheckedOut;
}

float Patron::getFineBalance()
{
    return fineBalance;
}

// other methods
void Patron::addNewPatron(string patronName, int id, float fineBalance, int booksCheckedOut)
{
    this->patronName = patronName;
    this->ID = ID;
    this->booksCheckedOut = booksCheckedOut;
    this->fineBalance = fineBalance;
}

void Patron::printPatron()
{
    cout << "Patron ID: " << ID << endl;
    cout << "Patron Name: " << patronName << endl;
    cout << "Patron Fine Balance: " << fineBalance << endl;
    cout << "Patron # of Books Checked out: " << booksCheckedOut << endl;
}
