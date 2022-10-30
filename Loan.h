
#include <iostream>
#include <string>
#include <ctime>
#ifndef LOAN_H
#define LOAN_H
using namespace std;

class Loan
{
public:
    // constructors
    Loan();
    Loan(int loanID, int bookID, int customerID, string status);

    // accessors
    int getLoanID();
    int getBookID();
    int getPatronID();
    time_t *getDueDate();
    string getStatus();
    int getNumRechecks();

    // mutators
    void setLoanID(int loanID);
    void setBookID(int bookID);
    void setPatronID(int customerID);
    void setDueDate(time_t dueDate);
    void setStatus(string status);

    // other methods
    void printLoan();

private:
    int loanID;
    int bookID;
    int patronID;
    time_t dueDate;
    string status;
};
#endif