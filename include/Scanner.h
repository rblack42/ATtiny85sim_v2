#pragma once
// Copyright 2018 Roie R. Black

#include <string>

class Scanner {
    public:
        Scanner( std::string const &, bool );
        ~Scanner();
        char getc( void );

    private:
        bool debug;
        int cc;
        char ch;
        int line;
        std::string source;
        int size;
};

