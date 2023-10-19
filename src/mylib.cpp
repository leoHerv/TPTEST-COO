#include "mylib.h"

#include <string.h>

namespace coo
{
    // PRIVATE

    string::string(char* word, size_t size) : word(word), size(size)
    {
       // Private constructor that initialized the string.
    }

    // PUBLIC

    coo::string::string(const char* word) : word(nullptr), size(0)
    {
        /* OLD
        unsigned int i = 0;
        char letter = word[i];
        // On regarde le nombre de char dans word.
        while (letter != '\0')
        {
            letter = word[i];
            i++;
        }

        char* newWord = new char[i + 1];

        // On met les lettres de word dans newWord.
        for (unsigned int j = 0; j < i + 1; j++)
        {
            newWord[j] = word[j];
        }

        this->word = newWord;
        this->size = i;
         */

        size = strlen(word);
        this->word = new char[this->size + 1];
        strcpy(this->word, word);
        this->word[this->size] = '\0';
    }

    string::string(const string& s) : word(nullptr), size(s.size)
    {
        /* OLD
        char* newWord = new char[s.size];

        for (unsigned int j = 0; j < s.size; j++)
        {
            newWord[j] = s.word[j];
        }

        this->word = newWord;
        this->size = s.size;
         */

        this->word = new char[this->size + 1];
        strcpy(this->word, s.word);
        this->word[this->size] = '\0';
    }

    coo::string::~string()
    {
        delete[] this->word;
    }

    size_t string::length() const
    {
        return this->size;
    }

    string& string::operator=(const string& s)
    {
        /* OLD
        if(this == &s)
        {
            return *this;
        }
        delete[] this->word;

        char* newWord = new char[s.size];

        for (unsigned int i = 0; i < s.size; i++)
        {
            newWord[i] = s.word[i];
        }

        this->word = newWord;
        this->size = s.size;

        return *this;
         */

        if(this != &s)
        {
            delete[] this->word;
            this->size = s.size;
            this->word = new char[s.size + 1];
            strcpy(this->word, s.word);
            this->word[this->size] = '\0';
        }
        return *this;
    }

    string string::operator+(const string& s) const
    {
        /* OLD
        unsigned int newSize = this->size + s.size - 1;

        char* newWord = new char[newSize];

        // On met le word de this dans newWord.
        for(unsigned int i = 0; i < this->size - 1; i++)
        {
            newWord[i] = this->word[i];
        }

        // On met le word de s dans newWord.
        for(unsigned int i = 0; i < s.size; i++)
        {
            newWord[this->size - 1 + i] = s.word[i];
        }

        string newS(newWord, newSize);
        return newS;
         */
        char* newWord = new char[this->size + s.size + 1];
        size_t newSize = this->size + s.size;
        strcpy(newWord, this->word);
        strcat(newWord, s.word);

        return string(newWord, newSize);
    }


    string& string::operator+=(const string& s)
    {
        /* OLD
        unsigned int newSize = this->size + s.size - 1;

        char* newWord = new char[newSize];

        // On met le word de this dans newWord.
        for(unsigned int i = 0; i < this->size - 1; i++)
        {
            newWord[i] = this->word[i];
        }

        // On met le word de s dans newWord.
        for(unsigned int i = 0; i < s.size; i++)
        {
            newWord[this->size - 1 + i] = s.word[i];
        }

        delete[] this->word;

        this->word = newWord;
        this->size = newSize;

        return *this;
        */
        char* newWord = new char[this->size + s.size + 1];
        size_t newSize = this->size + s.size;
        strcpy(newWord, this->word);
        strcat(newWord, s.word);

        delete[] this->word;

        this->word = newWord;
        this->size = newSize;

        return *this;
    }

    string string::operator*(size_t mul) const
    {
        string newString;
        for(size_t i = 0; i < mul; i++)
        {
            newString += *this;
        }
        return newString;
    }

    string string::operator()(size_t start, size_t end) const
    {
        size_t newSize = end - start;
        char* newWord = new char[newSize + 1];
        strncpy(newWord, this->word + start, newSize);

        return string(newWord, newSize);
    }

    const char &string::operator[](size_t index) const
    {
        return this->word[index];
    }

    char &string::operator[](size_t index)
    {
        return this->word[index];
    }


    std::ostream& operator<<(std::ostream& os, const coo::string& s)
    {
        return os << s.word;
    }

    bool string::operator==(const string &s) const
    {
        return strcmp(this->word, s.word) == 0;
    }

    bool string::operator!=(const string &s) const
    {
        return !(*this == s);
    }

    bool string::operator<(const string &s) const
    {
        return strcmp(this->word, s.word) < 0;
    }

    bool string::operator>(const string &s) const
    {
        return s < *this;
    }

    bool string::operator<=(const string &s) const
    {
        return !(*this > s);
    }

    bool string::operator>=(const string &s) const
    {
        return !(*this < s);
    }

    string::operator const char*() const
    {
        return this->word;
    }

    const char* string::data() const {
        return this->word;
    }

    string operator*(size_t mul, const string& s)
    {
        string newString;
        for(size_t i = 0; i < mul; i++)
        {
            newString += s;
        }
        return newString;
    }
}
