#include "std_lib_facilities.h"

//1. Define a global int array ga of ten ints initialized to 1, 2, 4, 8, 16, etc.

    int ga[10] = {1,2,4,8,16,32,64,128,256,512};

//2. Define a function f() taking an int array argument and an int argument indicating the number of elements in the array.

    void f(int a[], int n)
{
    //3.1: Define a local int array la of ten ints.

	int la[10];

    //3.2: Copy the values from ga into la.

	for (int i = 0; i < n; ++i)
        la[i] = ga[i];

    //3.3: Print out the elements of la.

    for (int i = 0; i < n; ++i)
        cout << la[i] << "  ";
    cout << endl;

    //3.4: Define a pointer p to int and initialize it with an array allocated on the free store with the same number of elements as the argument array.
   
    int* p = new int[n];
    //3.5: Copy the values from the argument array into the free-store array.
    
    for (int i = 0; i < n; ++i)
        p[i] = a[i];

    //3.6: Print out the elements of the free-store array.
    for (int i = 0; i < n; ++i)
        cout << p[i] << "  ";
    cout << endl;

    //3.7: Deallocate the free-store array.
    delete[] p;
}
int main()
{ 
    //4.1: Call f() with ga as its argument.
    f(ga, 10);
    //4.2: Define an array aa with ten elements, and initialize it with the first ten factorial values (1, 2*1, 3*2*1, 4*3*2*1, etc.).
    int aa[10];
    int n = 1;
    for (int i = 0; i < 10; i++)
    {
        n *= (i + 1);
        aa[i] = n;
    }
    //c. Call f() with aa as its argument.
    f(aa, 10);

    return 0;
}
