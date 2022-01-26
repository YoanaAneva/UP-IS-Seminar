#include <iostream>
using namespace std;

struct Book
{
    char title[30];
    int year;
    int price;
    char author[30];

    void createBook()
    {
        cout << "Enter title: ";
        cin.getline(title, 64);
        cout << "Enter year: ";
        cin >> year;
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter author: ";
        cin.ignore();
        cin.getline(author, 64);
    }

    int getYear()
    {
        return year;
    }

    int getPrice()
    {
        return price;
    }

    bool isNew()
    {
        if(year > 2010)
            return true;
        
        return false;
    }

    void swapPrices(Book &second)
    {
        int temp = price;
        price = second.price;
        second.price = temp;
    }

    void print()
    {
        cout << "Title: " << title << endl;
        cout << "Year: " << year << endl;
        cout << "Price: " << price << endl;
        cout << "Author: " << author << endl;
    }
};

void sortBooks(Book books[], int number)
{
    int index;
    for(int i = 0; i < number; i++)
    {
        int smallest = books[i].year;
        {
            for(int j = i; j < number; j++)
            {
                if(books[j].year < smallest)
                {
                    smallest = books[j].year;
                    index = j;
                }

                int temp = books[i].year;
                books[i].year = books[index].year;
                books[index].year = temp;
            }
        }
    }
}

int countNewBooks(Book books[], int number)
{
    int count = 0;
    for(int i = 0; i < number; i++)
    {
        if(books[i].year > 2010)
            count++;
    }
    return count;
}

int main()
{
    Book books[4];

    for (int i = 0; i < 4; i++)
    {
        books[i].createBook();
    }

    sortBooks(books, 4);

    for(int i = 0; i < 4; i++)
    {
        books[i].print();
    }

    cout << "Number of new books: " << countNewBooks(books, 4) << endl;

}