#pragma once
// Copyright 2018 Roie R. Black

enum argErrors {
    OK,
    NO_FILE,
    BAD_OPT,
};

int argParse(int argc, char *argv[]);
void argError(int code);
void usage(void);
