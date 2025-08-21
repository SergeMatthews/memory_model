#include <iostream>
using namespace std;

template<typename T>
void varInfo(T& var);

int main()
{
    setlocale(LC_ALL, "RU");

    int var_int = 0;
    short var_short = 0;
    long var_long = 0;
    long long var_long_long = 0;
    float var_float = 0;
    double var_double = 0;
    long double var_long_double = 0;
    bool var_bool = 0;

    varInfo(var_int);
    varInfo(var_short);
    varInfo(var_long);
    varInfo(var_long_long);
    varInfo(var_float);
    varInfo(var_double);
    varInfo(var_long_double);
    varInfo(var_bool);

    return 0;
}

template<typename T>
void varInfo(T& var) {
    cout << typeid(var).name() << ":  " << &var << "  " << sizeof(var) << endl;
}
void varInfo<long long>(long long& var) {
    cout << "long long" << ":  " << &var << "  " << sizeof(var) << endl;
}
    

