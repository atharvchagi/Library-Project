#include <iostream>
#include <string>
#ifndef BOOK_H
#define BOOK_H
using namespace std;
class Book
{
public:
    // constructors
    Book();
    Book(string authorName, int ISBN, string title, int ID, double cost, string status);
    // mutators
    void setTitle(string title);
    void setAuthor(string authorName);
    void setISBN(int ISBN);
    void setBookID(int ID);
    void setCost(double cost);
    void setStatus(string status);

    // accessors
    string getTitle();
    string getAuthor();
    int getBookID();
    int getISBN();
    string getBookStatus();
    double getCost();

    // other methods
    void printInfo();
    void addNewBook(string authorName, int ISBN, string title, int ID, double cost);

private:
    string authorName;
    string title;
    int ISBN;
    int ID;
    double cost;
    string status;
};

#endif