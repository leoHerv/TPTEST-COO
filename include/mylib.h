#pragma once
#include <iostream>

namespace coo
{
    class string
    {
        private:
            char* word;
            size_t size;

            string(char* word, size_t size);

        public:
            string(const char* word = "");
            string(const string& s);
            ~string();

            size_t length() const;

            string& operator=(const string& s);

            string operator+(const string& s) const;
            string& operator+=(const string& s);
            string operator*(size_t mul) const;

            string operator()(size_t start, size_t end) const;

            operator const char*() const;

            bool operator==(const string& s) const;
            bool operator!=(const string& s) const;
            bool operator<(const string& s) const;
            bool operator>(const string& s) const;
            bool operator<=(const string& s) const;
            bool operator>=(const string& s) const;

            const char* data() const;

            const char& operator[](size_t index) const;
            char& operator[](size_t index);

            friend std::ostream& operator<<(std::ostream& os, const coo::string& s);
    };

    string operator*(size_t mul, const string& s);
}
