#include "Book.h"
#include <vector>
#ifndef BOOKS_H
#define BOOKS_H

class Books
{

public:
    void AddBook(Book books);
    void EditBook(Book books);
    void RemoveBook(int ID);
    int SearchBook();
    void PrintAllBooks();
    void PrintBook(int index);
    int getBooksSize();
    Book returnBook(string title);

private:
    vector<Book> books;
};

#endif