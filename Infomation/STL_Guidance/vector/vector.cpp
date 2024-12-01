#include <bits/stdc++.h>

using namespace std;

/**
 * vector: 可變陣列(長度可變化的陣列)，為許多container的根本
 * 可用變數來宣告vector的初始長度，C++的普通陣列做不到！
 * 一、Member functions
 * 1. Constructor/Destructor/assignment
 *  1.1 vector() *
 *      // constructors used in the same order as described above:
        (1) vector<int> first;                                // empty vector of ints
        (2) vector<int> second (4,100);                       // four ints with value 100, you can also not give an initial value
        (3) vector<int> third (second.begin(),second.end());  // iterating through second
        (4) vector<int> fourth (third);                       // a copy of third
 *  1.2 ~vector()
 *  1.3 operator= *
 *      // copy constructor, does not point to the same address
 *      // ex.
 *      // vector<int> v2 = {1, 2, 3};
 *      // vector<int> v = v2;
 *
 * 2. Iterator
 *  2.1 begin() *
 *  2.2 end() *
 *  2.3 rbegin()
 *  2.4 rend()
 *  // Adding c at the begining means it is a const iterator
 *  // it cannot be used to modify the contents it points to
 *  2.5 cbegin()
 *  2.6 cend()
 *  2.7 crbegin()
 *  2.8 crend()
 *
 * 3. Capacity
 *  3.1 size() *
 *  // Returns the number of elements in the vector.
 *  3.2 max_size()
 *  // Returns the maximum number of elements the vector can hold.
 *  // usually a very large number
 *  3.3 resize(const int n, const value_type& val)
 *  // Used to resize the vector,
 *  // if the size is expended, fill it with val, default is 0
 *  3.4 capacity()
 *  // Returns the preconfigured space size of vector
 *  3.5 bool empty()*
 *  3.6 reserve()
 *  // Set the preconfigured space size of vector
 *  3.7 shrink_to_fit()
 *  // Can be used to free the unused space
 *
 * 4. Element Access
 *  4.1 operator[] *
 *  // You can use [index] to access elements
 *  4.2 at() *
 *  // More secure than [index]
 *  4.3 front() *
 *  // Returns a reference to the first element in the vector.
 *  4.4 back() *
 *  // Returns a reference to the last element in the vector.
 *  4.5 data()
 *  // Returns a pointer to the beginning of the vector, which used for assignment
 *
 * 5. Modifiers
 *  5.1 assign()
 *  // Assigns new contents to the vector, replacing its current contents, and modifying its size accordingly.
 *      (1) void assign (InputIterator first, InputIterator last);  // 某一個object的begin() end()
 *      (2) void assign (size_type n, const value_type& val);       // 從index=0開始的n個元素都assign為val
 *      (3) void assign (initializer_list<value_type> il);          // 用il來做assignment
 *  5.2 push_back(const value_type& val) *
 *  // Adds a new element at the end of the vector
 *  5.3 pop_back() *
 *  // Removes the last element in the vector
 *  5.4 insert() 非常不建議，一般的iterator可能會失效，如果非要用insert()的話，最好改用list，效率也較好！
 *  // Insert elements at specific position in vector
 *      (1) iterator insert (const_iterator position, const value_type& val);
 *      (2) iterator insert (const_iterator position, size_type n, const value_type& val);
 *      (3) template <class InputIterator>iterator insert (const_iterator position, InputIterator first, InputIterator last);
 *      (4) iterator insert (const_iterator position, value_type&& val);
 *      (5) iterator insert (const_iterator position, initializer_list<value_type> il);
 *  5.5 erase() 不建議
 *  // Erase elements at specific position in vector
 *      (1) iterator erase (const_iterator position);
 *      (2) iterator erase (const_iterator first, const_iterator last);
 *  5.6 void swap (vector& x)
 *  // Exchanges the content of the two vector
 *  5.7 clear() *
 *  // Remove all elements from the vector
 *  5.8 emplace()
 *  // insert elements at specific position in vector, but new element is constructed in place using args as the arguments for its constructor
 *  (1) iterator emplace (const_iterator position, Args&&... args);
 *  5.9 emplace_back(Args&&... args)
 *  // similar to push_back(), but new element is constructed in place using args as the arguments for its constructor.
 *  P.S.所有跟區間範圍有關的都是前閉後開區間
 * 
 * 二、two-dimensional vector：較使用單純的二維陣列更加靈活！ *
 * vector<vector<int>> matrix;
 * int a[4][5] = {{0}};等價於vector<vector<int> > a(4, vector<int>(5, 0));
 *
 * 三、Traverse
 * vector<int> vec = {1, 2, 3, 4, 5};
 * 1. index
 * for (int i = 0; i < vec.size(); i++)
 *     cout << vec[i] << endl;
 * 2. for each
 * for (int value : vec)
 *     cout << value << endl;
 * 3. iterator
 * for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
 * std::cout << *it << std::endl;
*/

int main()
{
    vector<int> numbers_1, numbers_2;
    vector<double> doubles_1({1.2, 2.4, 3.5, 4.6});

    numbers_1 = {1, 2, 3};  
    numbers_1.push_back(4); 
    numbers_1.push_back(5);
    numbers_1.push_back(6);
    numbers_1.push_back(7);

    numbers_2 = numbers_1;

    int arr_1[] = {10, 20, 30};
    vector<int> numbers_3(arr_1, arr_1 + 2);

    vector<int> numbers_4(numbers_1.begin() + 2, numbers_1.end());

    numbers_4[2] = 666;
    numbers_4.at(3) = 777;
    numbers_1.pop_back();

    cout << "numbers_1: ";
    for (int i = 0; i < numbers_1.size(); i++)
        cout << numbers_1[i] << " ";
    cout << endl;

    cout << "doubles_1: ";
    for (vector<double>::iterator ptr = doubles_1.begin(); ptr != doubles_1.end(); ptr++)
        cout << *ptr << " ";
    cout << endl;

    cout << "numbers_2: ";
    for (auto ptr = numbers_2.begin(); ptr != numbers_2.end(); ptr++)
        cout << *ptr << " ";
    cout << endl;

    cout << "numbers_3: ";
    for (auto ptr = numbers_3.begin(); ptr != numbers_3.end(); ptr++)
        cout << *ptr << " ";
    cout << endl;

    cout << "numbers_4: ";
    for (auto &ref : numbers_4)
        cout << ref << " ";
    cout << endl;

    cout << "--------------------------------\n\n";

    cout << "numbers_1.size() = " << numbers_1.size() << endl;
    cout << "numbers_1.capacity() = " << numbers_1.capacity() << endl;

    cout << "--------------------------------\n\n";

    vector<int> v1;
    v1.reserve(10);
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    cout << "v1.size() = " << v1.size() << endl;
    cout << "v1.capacity() = " << v1.capacity() << endl;

    v1.shrink_to_fit();
    cout << "\nafter shink_to_fit()" << endl;
    cout << "v1.size() = " << v1.size() << endl;
    cout << "v1.capacity() = " << v1.capacity() << endl;
    cout << "--------------------------------\n\n";

    vector<int> v(2); // {0, 0}

    cout << "Before push_back()" << endl;
    cout << "v.size() = " << v.size() << ", v.capacity() = " << v.capacity() << "\n";

    v.push_back(1); // {0, 0, 1}
    v.push_back(2); // {0, 0, 1, 2}
    v.push_back(3); // {0, 0, 1, 2, 3}

    cout << "\nafter push_back()" << endl;
    cout << "v.size() = " << v.size() << ", v.capacity() = " << v.capacity() << "\n";
    cout << "v1: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << "\n";

    cout << "--------------------------------\n\n";

    vector<int> vec_1 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Original vec_1:\n";
    cout << "vec_1.size() = " << vec_1.size() << ", vec_1.capacity() = " << vec_1.capacity() << endl;
    for (vector<int>::iterator i = vec_1.begin(); i != vec_1.end(); i++)
        cout << *i << " ";
    cout << endl;

    vec_1.resize(6);

    cout << "\nafter vec_1.resize(6):\n";
    cout << "vec_1.size() = " << vec_1.size() << ", vec_1.capacity() = " << vec_1.capacity() << endl;
    for (vector<int>::iterator i = vec_1.begin(); i != vec_1.end(); i++)
        cout << *i << " ";
    cout << endl;

    vec_1.resize(9, 333);
    cout << "\nafter vec_1.resize(9, 333):\n";
    cout << "vec_1.size() = " << vec_1.size() << ", vec_1.capacity() = " << vec_1.capacity() << endl;
    for (vector<int>::iterator i = vec_1.begin(); i != vec_1.end(); i++)
        cout << *i << " ";
    cout << endl;

    cout << "--------------------------------\n\n";

    vector<int> my_vector = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    cout << "Original my_vector:\n";
    cout << "my_vector.size() = " << my_vector.size() << "my_vector.capacity() = " << my_vector.capacity() << endl;
    for (vector<int>::iterator i = my_vector.begin(); i != my_vector.end(); i++)
        cout << *i << " ";
    cout << endl;

    my_vector.erase(my_vector.begin() + 5);

    cout << "\nafter my_vector.erase(my_vector.begin() + 5): \n";
    cout << "my_vector.size() = " << my_vector.size() << ", my_vector.capacity() = " << my_vector.capacity() << endl;
    for (vector<int>::iterator i = my_vector.begin(); i != my_vector.end(); i++)
        cout << *i << " ";
    cout << endl;

    my_vector.erase(my_vector.begin() + 1, my_vector.end() - 2);
    cout << "\nafter my_vector.erase(my_vector.begin() + 1, my_vector.end() - 2): \n";
    cout << "my_vector.size() = " << my_vector.size() << ", my_vector.capacity() = " << my_vector.capacity() << endl;
    for (vector<int>::iterator i = my_vector.begin(); i != my_vector.end(); i++)
        cout << *i << " ";
    cout << endl;

    cout << my_vector.empty() << endl;

    my_vector.clear();
    cout << "\n after my_vector.clear():" << endl;
    cout << "my_vector.size() = " << my_vector.size() << ", my_vector.capacity() = " << my_vector.capacity() << endl;
    for (vector<int>::iterator i = my_vector.begin(); i != my_vector.end(); i++)
        cout << *i << " ";
    cout << endl;
    cout << my_vector.empty() << endl;

    cout << "--------------------------------\n\n";
    stack<int> stack;
    system("pause");
    return 0;
}