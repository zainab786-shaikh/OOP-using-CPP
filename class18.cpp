#include<iostream>
#include<string.h>
using namespace std;

class Op {
private:
    char str[10];

public:
    Op(const char str[10]) {
        strcpy(this->str, str);
    }

    void operator==(Op s){
        if (!strcmp(this->str, s.str)) {
            cout << "Strings are equal";
        } else {
            cout << "Strings are not equal";
        }
    }
};

int main() {
    Op op1("Zainab");
    Op op2("Shaikh");

    op1 == op2;

    return 0;
}
