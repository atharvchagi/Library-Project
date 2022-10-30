#include <iostream>
#include <ctime>
#include "Loan.h"
#include "Books.h"
#include "Patrons.h"
#ifndef LOANS_H
#define LOANS_H
using namespace std;

class Loans
{
public:
    void CheckOutBook(Patron patron, Book book);
    void ReturnBook(int loanID);
    void PrintLoans();
    void loanUpdate();
    void reCheckBook(int loanID);
    void reportLost(int bookID);

private:
    vector<Loan> loans;
};
#endif