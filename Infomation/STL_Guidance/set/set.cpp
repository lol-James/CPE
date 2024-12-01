#include <bits/stdc++.h>

using namespace std;

/**
 * set: 有序且唯一的元素集合，常用來去重，沒有index用法！
 * 
 * 一、 Member functions
 * 1. Constructor/Destructor/assignment
 *  1.1 set() *
 *      // constructors used in the same order as described above:
        (1) set<int> first;                                // empty set of ints
        (2) set<int> third (first.begin(),first.end());  // iterating through first
        (3) set<int> fourth (third);                       // a copy of third
 *  1.2 ~set()
 *  1.3 operator= *
 *      // copy constructor, does not point to the same address
 *      // ex.
 *      // set<int> v2 = {1, 2, 3};
 *      // set<int> v = v2;
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
 *  3.1 size()
 *  3.2 max_size()
 *  3.3 empty()
 * 
 * 4. Modifiers
 *  4.1 insert()
 *      (1) insert (const value_type& val);
 *      (2) insert (InputIterator first, InputIterator last); 
 *  4.2 erase() 
 *      (1) erase (const value_type& val);
 *      (2) erase (const_iterator first, const_iterator last);
 *  4.3 swap (set& x);
 *  4.4 clear()
 *  4.5 emplace(Args&&... args)   
 *  // 當元素是物件時，使用emplace效率更佳
 *  4.6 emplace_hint (const_iterator position, Args&&... args)
 *  // 給一個希望插入的位置(position)
 * 
 * 5. Operations
 *  5.1 const_iterator find (const value_type& val)
 *  // if not found, return end()
 *  5.2 size_type count (const value_type& val) 
 *  // Because all elements in a set are unique, the function can only return 0/1
 *  5.3 iterator lower_bound (const value_type& val)
 *  5.4 iterator upper_bound (const value_type& val)
 *  5.5 pair<const_iterator,const_iterator> equal_range (const value_type& val)
 *  // returnValue.first == lower_bound (const value_type& val)
 *  // returnValue.second == upper_bound (const value_type& val)
 *  
 * 二、Traverse 
 * 遍歷使用iterator或for each，不可使用index法！
*/

int main()
{   
    int a[] = {1, 2, 4, 5, 6, 7, 8};
    set<int> second (a, a + 3);
    for (auto i : second) cout << i << endl; 

    system("pause");
    return 0;
}