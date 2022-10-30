#include <iostream>
#include "Loans.h"
using namespace std;

int main()
{
    Loans LOANS;
    Books BOOKS;
    Patrons PATRONS;

    int loanID;

    Book tempBook;
    string authorName;
    string title;
    int ISBN;
    int bookID;
    double cost;
    string status;

    Patron tempPatron;
    string patronName;
    int patronID;
    float fineBalance;
    int booksCheckedOut;
    char firstChoice;
    do
    {
        cout << "1. Books\t"
             << "2. Patrons\t"
             << "3. Loans\t"
             << "4. Quit" << endl;

        cout << "Choose an element to edit (1-3): " << endl;
        cin >> firstChoice;

        switch (firstChoice)
        {
        // books
        case '1':
            cout << "A. Add Book" << endl
                 << "B. Edit Book" << endl
                 << "C. Remove Book" << endl
                 << "D. Search Book" << endl
                 << "E. Print All Books" << endl
                 << "F. Print Book" << endl;
            char choice2;
            cout << "Enter an option (A-E):" << endl;
            cin >> choice2;

            switch (choice2)
            {
            case 'A':
                cout << "Enter the following data: " << endl;
                cout << "Author Name: " << endl;
                cin.ignore();
                getline(cin, authorName);
                cout << "Title: " << endl;
                getline(cin, title);
                cout << "ISBN: ";
                cin >> ISBN;
                cin.ignore();
                cout << "ID: ";
                cin >> bookID;
                cin.ignore();
                cout << "Cost: ";
                cin >> cost;
                cin.ignore();
                tempBook.addNewBook(authorName, ISBN, title, bookID, cost);
                BOOKS.AddBook(tempBook);
                break;

            case 'B':
                cout << "Enter Book ID to Edit: ";
                cin >> bookID;
                cout << "New Author Name: ";
                cin.ignore();
                getline(cin, authorName);
                cout << "New Title: ";
                getline(cin, title);
                cout << "ISBN: ";
                cin >> ISBN;
                cout << "Cost: ";
                cin >> cost;
                tempBook.addNewBook(authorName, ISBN, title, bookID, cost);
                BOOKS.EditBook(tempBook);
                break;

            case 'C':
                cout << "Enter ID to Remove: ";
                cin >> bookID;
                BOOKS.RemoveBook(bookID);
                break;

            case 'D':
                BOOKS.PrintBook(BOOKS.SearchBook());
                cout << endl;
                break;

            case 'E':
                BOOKS.PrintAllBooks();
                cout << endl;
                break;

            case 'F':
                BOOKS.PrintBook(BOOKS.SearchBook());
                break;
            }
            break;

        // patrons
        case '2':
            cout << "A. Add Patron" << endl
                 << "B. Edit Patron" << endl
                 << "C. Remove Patron" << endl
                 << "D. Search Patron" << endl
                 << "E. Print All Patrons" << endl
                 << "F. Print Patron" << endl
                 << "G. Pay Patron's Fines" << endl;
            char choice3;
            cout << "Enter an option (A-G):" << endl;
            cin >> choice3;
            cin.ignore();
            switch (choice3)
            {
            case 'A':
                cout << "Enter the following data: " << endl;
                cout << "Patron Name: " << endl;
                getline(cin, patronName);
                cout << "ID: ";
                cin >> patronID;
                cin.ignore();
                tempPatron.addNewPatron(patronName, patronID, 0, 0);
                PATRONS.addPatron(tempPatron);
                break;

            case 'B':
                cout << "Enter Patron ID to Edit: ";
                cin >> patronID;
                cout << "Patron Name: ";
                cin.ignore();
                getline(cin, patronName);
                cout << "Fine Balance: " << endl;
                cin >> fineBalance;
                cin.ignore();
                cout << "Books Checked Out: " << endl;
                cin >> booksCheckedOut;
                cin.ignore();
                tempPatron.addNewPatron(patronName, patronID, fineBalance, booksCheckedOut);
                PATRONS.editPatron(tempPatron);
                break;

            case 'C':
                cout << "Enter Patron ID to remove: ";
                cin >> patronID;
                PATRONS.removePatron(patronID);
                break;

            case 'D':
                PATRONS.printPatron(PATRONS.searchPatron());
                break;

            case 'E':
                PATRONS.printAllPatrons();
                break;

            case 'F':
                PATRONS.printPatron(PATRONS.searchPatron());
                break;

            case 'G':
                cout << "Enter the Patron ID: ";
                cin >> patronID;
                PATRONS.payPatronFines(patronID);
                break;
            }
            break;
        // loans
        case '3':
            cout << "A. Check Out Book" << endl
                 << "B. Return Book" << endl
                 << "C. Print Loans" << endl
                 << "D. Update Loan " << endl
                 << "E. ReCheck Out Book" << endl
                 << "F. Report Lost" << endl;
            char choice4;
            cout << "Enter an option (A-F):" << endl;
            cin >> choice4;
            cin.ignore();
            switch (choice4)
            {
            case 'A':

                int bookIndex;
                int patronIndex;

                cout << "Enter patron name: " << endl;
                getline(cin, patronName);

                cout << "Enter book title: " << endl;
                getline(cin, title);

                LOANS.CheckOutBook(PATRONS.returnPatron(patronName), BOOKS.returnBook(title));

            case 'B':
                cout << "Enter the loan ID: " << endl;
                cin >> loanID;
                LOANS.ReturnBook(loanID);
                break;

            case 'C':
                LOANS.PrintLoans();
                break;

            case 'D':
                break;

            case 'E':
                break;

            case 'F':
                break;
            }
            break;
        }
        cout << endl;
    } while (firstChoice != '4');
}