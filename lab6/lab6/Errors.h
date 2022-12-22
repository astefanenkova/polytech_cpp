#include <iostream>

class Errors {
public:
    Errors(int id);

    enum errorsCodes {
        OLD,
        NOTBORN,
        NEGATIVE,
        DEFAULT
    };
};

