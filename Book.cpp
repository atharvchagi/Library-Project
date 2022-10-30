#include "Book.h"

// constructors
Book::Book()
{
    authorName = "n/a";
    title = "n/a";
    ISBN = 0;
    ID = 0;
    cost = 0;
    status = "n/a";
}

Book::Book(string authorName, int ISBN, string title, int ID, double cost, string status)
{
    this->authorName = authorName;
    this->ISBN = ISBN;
    this->title = title;
    this->ID = ID;
    this->cost = cost;
    this->status = status;
}

// mutators
void Book::setTitle(string title)
{
    this->title = title;
}

void Book::setAuthor(string authorName)
{
    this->authorName = authorName;
}

void Book::setISBN(int ISBN)
{
    this->ISBN = ISBN;
}

void Book::setStatus(string status)
{
    this->status = status;
}

void Book::setBookID(int id)
{
    this->ID = id;
}

void Book::setCost(double cost)
{
    this->cost = cost;
}

// accessors
string Book::getTitle()
{
    return title;
}

string Book::getAuthor()
{
    return authorName;
}

double Book::getCost()
{
    return cost;
}

int Book::getISBN()
{
    return ISBN;
}

int Book::getBookID()
{
    return ID;
}

string Book::getBookStatus()
{
    return status;
}

// other methods
void Book::printInfo()
{
    cout << "Book Title: " << title << endl;
    cout << "Book Author: " << authorName << endl;
    cout << "Book ID Number: " << ID << endl;
    cout << "Book ISBN Number: " << ISBN << endl;
    cout << "Cost: " << cost << endl;
    cout << "Current Status: " << status << endl;
}
void Book::addNewBook(string authorName, int ISBN, string title, int ID, double cost)
{
    this->authorName = authorName;
    this->ISBN = ISBN;
    this->title = title;
    this->ID = ID;
    this->cost = cost;
    status = "in";
}
