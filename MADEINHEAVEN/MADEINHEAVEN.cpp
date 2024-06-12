#include <iostream>
#include <Windows.h>
#include <string.h>
class MyString
{
public:
    MyString()
    {
        size = 80;
        char* word = new char[size];
        count++;
    }
    MyString(int newSize)
    {
        char* word = new char[newSize];
        count++;
    }
    MyString(const char* word)
    {
        size = strlen(word) + 1; // размер
        this->word = new char[size] {0};
        memcpy(this->word, word, size); //копирует ячейки массива
        count++;
    }
    void operator=(const MyString& other)
    {
        this->word = other.word;
    }
    MyString operator+(const MyString& other)
    {
        this->size = size + other.size + 1;
        strcat_s(this->word, size, other.word);
        return word;
    }







    ~MyString()
    {
        delete[] word;
        count--;
    }
private:
    char* word;
    int size;
    static size_t count;

};



int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    MyString one("Hello"), two("World");
    MyString three = one + two;




    return 0;
}

