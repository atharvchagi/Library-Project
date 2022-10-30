/*
Name: Atharv Chagi
Course: CSCE 1040
Assignment: Homework 3

File Description: This is the cpp file for COLLECTION ENTITY LOANS, from the header file LOANS.H detailing the methods
*/
#include "Loans.h"

static int count = 0;

// from the arguments, creates a loan connected to the arugments
void Loans::CheckOutBook(Patron patron, Book book)
{
    Loan loan;

    loan.setLoanID(count);
    loan.setBookID(count);
    loan.setPatronID(count);
    loan.setStatus("checked out");
    loans.push_back(loan);
    patron.setBooksCheckedOut(patron.getBooksCheckedOut() + 1);
    ++count;
    book.setStatus("out");
    cout << "Book has successfully been checked out." << endl;
}

// Once a match is found, erase the index from the vector
void Loans::ReturnBook(int loanID)
{

    for (int i = 0; i < loans.size(); ++i)
    {
        if (loans[i].getLoanID() == loanID)
        {
            loans.erase(loans.begin() + i);

            cout << "Book has been returned." << endl;
        }
    }
}

// index through the vector and goes through the loans; prints out each index
void Loans::PrintLoans()
{
    for (int i = 0; i < loans.size(); ++i)
    {
        cout << "Loan #" << i + 1 << endl;
        cout << "Loan ID: " << loans[i].getLoanID() << endl;
        cout << "Book ID: " << loans[i].getBookID() << endl;
        cout << "Patron ID: " << loans[i].getPatronID() << endl;
        cout << "Due Date:" << loans[i].getDueDate() << endl;
        cout << "Status: " << loans[i].getStatus() << endl;
    }
}

// based on the time, updates the loan status to overdue
void Loans::loanUpdate()
{
    for (int i = 0; i < loans.size(); ++i)
    {
        if (difftime(*loans.at(i).getDueDate(), time(0)) < 0)
        {
            loans.at(i).setStatus("OVERDUE");
        }
    }
}

void Loans::reCheckBook(int loanID)
{
    for (int i = 0; i < loans.size(); ++i)
    {
        if (loans[i].getLoanID() == loanID)
        {
            time_t thisTime = time(0);
            struct tm *newTime = localtime(&thisTime);
            newTime->tm_mday += 10;
            loans.at(i).setDueDate(mktime(newTime));
        }
    }
}

void Loans::reportLost(int bookID)
{
    for (int i = 0; i < loans.size(); ++i)
    {
        if (loans[i].getBookID() == bookID)
        {
            loans[i].setStatus("LOST");
        }
    }
}