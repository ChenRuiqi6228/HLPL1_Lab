#include "std_lib_facilities.h"
//1. Define a global vector<int> gv; initialize it with ten ints, 1, 2, 4, 8, 16, etc.
vector<int> gv = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };

//2. Define a function f() taking a vector<int> argument.
void f(vector<int> gv)
{
    //3.1: Define a local vector<int> lv with the same number of elements as the argument vector.
    vector<int> lv(gv.size());

    //3.2: Copy the values from gv into lv.
    lv = gv;

    //3.3: Print out the elements of lv.
    for (int i : lv)
        cout << i << " , ";
    cout << endl;

    //3.4: Define a local vector<int> lv2; initialize it to be a copy of the argument vector.
    vector<int> lv2 = gv;

    //3.5: Print out the elements of lv2.
    for (int i : lv2)
        cout << i << " , ";
    cout << endl;
}

int main()
{
    //4.1: Call f() with gv as its argument.
    f(gv);

    //4.2: Define a vector<int> vv, and initialize it with the first ten factorial values (1, 2*1, 3*2*1, 4*3*2*1, etc.).
    vector<int> vv(10);
    int n = 1;
    for (int i = 0; i < vv.size(); ++i)
    {
        n *= (i+1);
        vv[i] = n;
    }

    //4.3: Call f() with vv as its argument.
    f(vv);

    return 0;
}
