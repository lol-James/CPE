#include <bits/stdc++.h>

using namespace std;

/**
 * Lambda expression 為一種匿名函數，
 * 是一種用來產生不具名(Anonymous)函數物件(Function Object)的表示式。
 * 簡單說就是可以把函數體當做是函數名的語法，常與STL的函數搭配使用，如：sort(), count_if()...
 * 優點：使用靈活，除了可以使用外部變數之外，甚至可以在{ }內定義(ex. 在main function裡自訂函數)
 *
 * Syntax: [capture_clause] (param_list) mutable -> return_type { body; }
 *
 * 1. [] capture clause(lambda-introducer)  // cannot be omitted
 *    It is the keyword of lambda expression, so "cannot" be omitted, at least [].
 *    also has the function of catching variables,
 *    which can be divided into catching by value(read only) and catching by reference.
 *    []     : No external variables are catched.
 *    [=]    : All external variables are catched by value.
 *    [&]    : All external variables are catched by reference.
 *    [x, y] : x and y are catched by value.
 *    [x, &y]: x is catched by value, y is catched by reference.
 *    [=, &y]: All external variables except y are catched by value, y is catched by reference.
 *    [&, x] : All external variables except x are catched by reference, x is catched by reference.
 *    nate: capture default(&, =) should be placed before all other variables.
 * 2. ( ) parameter list    // can be omitted if there is no parameter
 *    Same as normal function.
 * 3. mutable   // can be omitted
 *    A keyword that can make the variable catched by value(read only)
 *    changed to a variable that its value can be changed in the function and
 *    does not affect the value of the external variable.
 * 4. -> return_type // it can be omitted if there is only 0 or 1 return statement
 *    Same as normal function.
 * 5. { body; } // cannot be omitted
 *    Same as normal function.
 *
**/

int main()
{
    /* test for sort() */
    int arr[7] = {2, 6, 1, 0, -3, 2, -66};
    sort(arr, arr + 7, [](int a, int b) { return a > b; });
    for (int i = 0; i < 7; i++)
        cout << arr[i] << " ";
    cout << endl;
    cout << "\n\n";

//**************************************//

    /* alias the lambda expression to fun, use auto to determine the type automatically. */
    auto fun = [] { cout << "Hello world\n"; };   
    fun();
    cout << "\n\n";

//**************************************//

    /* test for =, &, "mutable" */
    int a = 3, b = 4;
    auto add_one = [a, &b](void) mutable -> void 
    {
        cout << "a = " << a << ", b = " << b << endl;
        a++;    // error if we remove "mutable".
        b++;
        cout << "after +1...\n";
        cout << "a = " << a << ", b = " << b << endl;
    };
    add_one();
    cout << "after playing the function\n";
    cout << "a = " << a << ", b = " << b << endl;
    cout << "\n\n";

//**************************************//

    /* test for count_if() */
    vector<int> numbers{ 1, 2, 3, 4, 5, 10, 15, 20, 25, 35, 45, 50 };
    // count_if() : return the number of elements in the container that can let the condition function return true.
    auto count = count_if(numbers.begin(), numbers.end(), [](int x) { return (x > 5); });
    cout << "count: " << count << endl;
    cout << "\n\n";

//**************************************//

    /* test for function pointer */
    vector<double> v{4.1, 3.4, 4.2, 3.3, 2.};
    // if a lambda expression "did not" catch any external variables, it can also be a function pointer
    bool (*icmp)(int, int) = [](auto a, auto b) { return a > b; };
    sort(v.begin(), v.end(), icmp);
    for (const auto &i : v) 
        cout << i << " ";
    cout << endl;
    cout << "\n\n";


    system("pause");
    return 0;
}