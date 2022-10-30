#include "Books.h"
using namespace std;

int Books::getBooksSize()
{
    return books.size();
}

void Books::AddBook(Book book)
{
    string author;
    string title;
    int ISBN;
    int ID;
    string status;
    books.push_back(book);
}

void Books::EditBook(Book book)
{
    bool le = false;

    for (int i = 0; i < books.size(); ++i)
    {
        if (book.getBookID() == books[i].getBookID())
        {
            books[i] = book;
            le = true;
            cout << "Book with matching ID has been successfully edited.";
        }
    }
    if (le == false)
    {
        cout << "No match found." << endl;
    }
}

void Books::RemoveBook(int ID)
{
    bool match = false;
    for (int i = 0; i < books.size(); ++i)
    {
        if (ID == books[i].getBookID())
        {
            books.erase(books.begin() + i);
            match = true;
            cout << "Book has been removed.";
        }
    }
    if (match == false)
    {
        cout << "No match found." << endl;
    }
}

int Books::SearchBook()
{
    string author;
    string title;
    int ISBN;
    int ID;
    bool match = false;
    char choice;

    cout << "1-Author" << endl;
    cout << "2-Title" << endl;
    cout << "3-ISBN" << endl;
    cout << "4-ID" << endl;
    cout << "Choose an index option:" << endl;
    cin >> choice;
    cin.ignore();

    switch (choice)
    {
    case '1':
        cout << "Enter author name: " << endl;
        getline(cin, author);
        match = false;
        for (int i = 0; i < books.size(); ++i)
        {
            if (author == books[i].getAuthor())
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
        cout << "Enter book title: " << endl;
        getline(cin, title);
        match = false;

        for (int i = 0; i < books.size(); ++i)
        {
            if (title == books[i].getTitle())
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

    case '3':
        cout << "Enter ISBN number: " << endl;
        cin >> ISBN;
        cin.ignore();
        match = false;

        for (int i = 0; i < books.size(); i++)
        {
            if (ISBN == books[i].getISBN())
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

    case '4':
        cout << "Enter book ID: " << endl;
        cin >> ID;
        cin.ignore();
        match = false;

        for (int i = 0; i < books.size(); i++)
        {
            if (ID == books[i].getBookID())
            {
                match = true;
                return i;
            }
        }
        if (match == false)
        {
            cout << "There is no match." << endl;
        }
        break;
    }
    return -1;
}

void Books::PrintAllBooks()
{
    for (int i = 0; i < books.size(); ++i)
    {
        cout << "Book " << i + 1 << " information : " << endl;
        cout << "Author: " << books[i].getAuthor() << endl;
        cout << "Title: " << books[i].getTitle() << endl;
        cout << "ISBN number: " << books[i].getISBN() << endl;
        cout << "ID Number: " << books[i].getBookID() << endl;
        cout << "Cost: " << books[i].getCost() << endl;
        cout << "Status: " << books[i].getBookStatus() << endl;
    }
}

void Books::PrintBook(int index)
{
    if (index >= 0)
    {
        cout << "Book Title: " << books[index].getTitle() << endl;
        cout << "Book Author: " << books[index].getAuthor() << endl;
        cout << "Book ISBN number: " << books[index].getISBN() << endl;
        cout << "Book ID Number: " << books[index].getBookID() << endl;
        cout << "Book Cost: " << books[index].getCost() << endl;
        cout << "Book Status: " << books[index].getBookStatus() << endl;
    }
}
Book Books::returnBook(string title)
{
    Book book;

    for (int i = 0; i < books.size(); ++i)
    {
        if (books[i].getTitle() == title)
        {
            book = books[i];
        }
    }
    return book;
}
