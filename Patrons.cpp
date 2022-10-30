#include "Patrons.h"
using namespace std;

int Patrons::getSize()
{
    return patrons.size();
}

void Patrons::addPatron(Patron patron)
{
    patrons.push_back(patron);
}

void Patrons::editPatron(Patron patron)
{
    bool check = false;
    for (int i = 0; i < patrons.size(); ++i)
    {
        if (patron.getPatronID() == patrons[i].getPatronID())
        {
            patrons[i] = patron;
            check = true;
            cout << "Patron with matching ID has been successfully edited." << endl;
        }
    }
    if (check == false)
    {
        cout << "Match not found." << endl;
    }
}

void Patrons::removePatron(int ID)
{
    bool check = false;
    for (int i = 0; i < patrons.size(); ++i)
    {
        if (ID == patrons[i].getPatronID())
        {
            patrons.erase(patrons.begin() + i);
            check = true;
            cout << "Patron has been removed." << endl;
        }
    }
    if (check == false)
    {
        cout << "Match not found." << endl;
    }
}

int Patrons::searchPatron()
{
    string patronName;
    char choice;
    bool match = false;
    int patronID;
    cout << "Choose an option:" << endl;
    cout << "1. Name" << endl;
    cout << "2. ID Number" << endl;

    cin >> choice;
    switch (choice)
    {
    case '1':
        cout << "Enter Patron name: ";
        cin.ignore();
        getline(cin, patronName);
        match = false;
        for (int i = 0; i < patrons.size(); i++)
        {
            if (patronName == patrons[i].getName())
            {
                match = true;
                return i;
            }
        }
        if (match == false)
        {
            cout << "Match not found." << endl;
        }
        break;

    case '2':
        cout << "Enter Patron ID: ";
        cin >> patronID;
        match = false;
        for (int i = 0; i < patrons.size(); i++)
        {
            if (patronID == patrons[i].getPatronID())
            {
                match = true;
                return i;
            }
        }
        if (match == false)
        {
            cout << "Match not found." << endl;
        }
        break;
    }
    return -1;
}

void Patrons::printPatron(int index)
{
    if (index >= 0)
    {
        cout << "Patron name: " << patrons[index].getName() << endl;
        cout << "Patron ID: " << patrons[index].getPatronID() << endl;
        cout << "Patron fines due: " << patrons[index].getFineBalance() << endl;
        cout << "Patron books checked out: " << patrons[index].getBooksCheckedOut() << endl;
    }
}

void Patrons::printAllPatrons()
{
    if (patrons.size() == 0)
    {
        cout << "No patrons " << endl;
    }
    for (int i = 0; i < patrons.size(); i++)
    {
        cout << "Patron #" << i + 1 << endl;
        cout << "Patron name: " << patrons[i].getName() << endl;
        cout << "Patron ID: " << patrons[i].getPatronID() << endl;
        cout << "Patron fines due: " << patrons[i].getFineBalance() << endl;
        cout << "Patron books checked out: " << patrons[i].getBooksCheckedOut() << endl;
    }
}

void Patrons::payPatronFines(int ID)
{
    for (int i = 0; i < patrons.size(); ++i)
    {
        if (patrons[i].getPatronID() == ID)
        {
            patrons[i].setFineBalance(0);
        }
    }
}

Patron Patrons::returnPatron(string name)
{
    Patron patron;

    for (int i = 0; i < patrons.size(); ++i)
    {
        if (patrons[i].getName() == name)
        {
            patron = patrons[i];
        }
    }
    return patron;
}
