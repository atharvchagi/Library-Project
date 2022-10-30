#include "Loan.h"

// constructors
Loan::Loan()
{
    loanID = 0;
    bookID = 0;
    patronID = 0;
    dueDate = time(0);
    status = "n/a";
}

Loan::Loan(int loanID, int bookID, int customerID, string status)
{
    this->loanID = loanID;
    this->bookID = bookID;
    this->patronID = patronID;
    time_t thisTime = time(0);
    struct tm *newTime = localtime(&thisTime);
    newTime->tm_mday += 10;
    this->dueDate = mktime(newTime);
    this->status = status;
}

// accessors
int Loan::getLoanID()
{
    return loanID;
}

int Loan::getBookID()
{
    return bookID;
}

int Loan::getPatronID()
{
    return patronID;
}

time_t *Loan::getDueDate()
{
    return &dueDate;
}

string Loan::getStatus()
{
    return status;
}

// mutators
void Loan::setLoanID(int loanID)
{
    this->loanID = loanID;
}

void Loan::setBookID(int bookID)
{
    this->bookID = bookID;
}

void Loan::setPatronID(int patronID)
{
    this->patronID = patronID;
}

void Loan::setDueDate(time_t dueDate)
{
    this->dueDate = dueDate;
}

void Loan::setStatus(string status)
{
    this->status = status;
}

// other methods
void Loan::printLoan()
{
    cout << "Loan ID: " << loanID << endl;
    cout << "Book ID: " << bookID << endl;
    cout << "Customer ID: " << patronID << endl;
    cout << "Due Date: " << ctime(&dueDate);
    cout << "Current Status: " << status << endl;
}
