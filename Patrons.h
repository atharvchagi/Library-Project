#include "Patron.h"
#include <vector>
#ifndef PATRONS_H
#define PATRONS_H

using namespace std;

class Patrons
{
public:
    void addPatron(Patron patron);
    void editPatron(Patron patron);
    void removePatron(int slot);
    int searchPatron();
    void printAllPatrons();
    void printPatron(int index);
    void payPatronFines(int ID);
    int getSize();
    Patron returnPatron(string name);

private:
    vector<Patron> patrons;
};
#endif