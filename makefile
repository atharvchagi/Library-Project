library: main.o Book.o Books.o Patron.o Patrons.o Loan.o Loans.o
    g++ main.o Book.o Books.o Patron.o Patrons.o Loan.o Loans.o -o library

main.o: main.cpp
        g++ -c main.cpp

Patron.o: Patron.cpp Patron.h
        g++ -c Patron.cpp

Patrons.o: Patrons.cpp Patrons.h
        g++ -c Patrons.cpp

Book.o: Book.cpp Book.h
        g++ -c Book.cpp

Books.o: Books.cpp Books.h
        g++ -c Books.cpp

Loan.o : Loan.cpp Loan.h
        g++ -c Loan.cpp

Loans.o : Loans.cpp Loans.h
        g++ -c Loans.cpp

clean :
        rm *.o library
~                            