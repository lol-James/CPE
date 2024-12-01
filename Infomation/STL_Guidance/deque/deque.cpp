#include <bits/stdc++.h>

using namespace std;

/**
 * deque:  double-ended queue, 可常用來實作queue與stack的資料結構
 * 
 * 一、Member Functions
 * Member functions
 * 1. Constructor/Destructor/assignment
 *  1.1 deque() *
 *  1.2 ~deque()
 *  1.3 operator=
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
 *  // Returns the number of elements in the deque.
 *  3.2 max_size()
 *  // Returns the maximum number of elements the queue can hold.
 *  // usually a very large number
 *  3.3 resize(const int n, const value_type& val)
 *  // Used to resize the queue,
 *  // if the size is expended, fill it with val, default is 0
 *  3.4 bool empty()*
 *  3.5 shrink_to_fit()
 *  // Can be used to free the unused space
 * 
 * 4. Element Access
 *  4.1 operator[] *
 *  // You can use [index] to access elements
 *  4.2 at() *
 *  // More secure than [index]
 *  4.3 front() *
 *  // Returns a reference to the first element in the deque.
 *  4.4 back() *
 *  // Returns a reference to the last element in the deque.
 * 
 * 5. Modifiers
 *  5.1 assign()
 *  // Assigns new contents to the deque, replacing its current contents, and modifying its size accordingly.
 *      (1) void assign (InputIterator first, InputIterator last);  // 某一個object的begin() end()
 *      (2) void assign (size_type n, const value_type& val);       // 從index=0開始的n個元素都assign為val
 *      (3) void assign (initializer_list<value_type> il);          // 用il來做assignment
 *  5.2 push_back(const value_type& val) *
 *  // Adds a new element at the end of the deque
 *  5.3 push_front(const value_type& val) *
 *  // Adds a new element at the front of the deque
 *  5.4 pop_back() *
 *  // Removes the last element in the deque
 *  5.5 pop_front() *
 *  // Removes the first element int the deque
 *  5.6 insert() *
 *  // Insert elements at specific position in deque
 *      (1) iterator insert (const_iterator position, const value_type& val);
 *      (2) iterator insert (const_iterator position, size_type n, const value_type& val);
 *      (3) template <class InputIterator>iterator insert (const_iterator position, InputIterator first, InputIterator last);
 *      (4) iterator insert (const_iterator position, value_type&& val);
 *      (5) iterator insert (const_iterator position, initializer_list<value_type> il);
 *  5.7 erase() *
 *  // Erase elements at specific position in deque
 *      (1) iterator erase (const_iterator position);
 *      (2) iterator erase (const_iterator first, const_iterator last);
 *  5.8 void swap (deque& x)
 *  // Exchanges the content of the two deque
 *  5.9 clear() *
 *  // Remove all elements from the deque
 *  5.10 emplace()
 *  // insert elements at specific position in deque, but new element is constructed in place using args as the arguments for its constructor
 *  (1) iterator emplace (const_iterator position, Args&&... args);
 *  5.11 emplace_back(Args&&... args)
 *  // similar to push_back(), but new element is constructed in place using args as the arguments for its constructor.
 *  5.12 emplace_front(Args&&... args)
 *  // similar to push_front(), but new element is constructed in place using args as the arguments for its constructor.
 *  P.S.所有跟區間範圍有關的都是前閉後開區間
 * 
**/

int main() {
    // 1. Constructor/Destructor/Assignment
    // 1.1 deque()
    std::deque<int> dq1;
    std::cout << "Size of empty deque: " << dq1.size() << std::endl;

    // 1.3 operator=
    dq1 = {1, 2, 3, 4, 5};
    std::cout << "Deque after assignment: ";
    for (const auto& elem : dq1) std::cout << elem << " ";
    std::cout << std::endl;

    // 2. Iterator
    // 2.1 begin() and 2.2 end()
    std::cout << "Using iterators to print deque: ";
    for (auto it = dq1.begin(); it != dq1.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // 3. Capacity
    // 3.1 size()
    std::cout << "Size of deque: " << dq1.size() << std::endl;

    // 3.4 bool empty()
    std::cout << "Is deque empty? " << std::boolalpha << dq1.empty() << std::endl;

    // 4. Element Access
    // 4.1 operator[]
    std::cout << "Element at index 2: " << dq1[2] << std::endl;

    // 4.2 at()
    std::cout << "Element at index 3 using at(): " << dq1.at(3) << std::endl;

    // 4.3 front()
    std::cout << "First element: " << dq1.front() << std::endl;

    // 4.4 back()
    std::cout << "Last element: " << dq1.back() << std::endl;

    // 5. Modifiers
    // 5.2 push_back(const value_type& val)
    dq1.push_back(6);
    std::cout << "Deque after push_back: ";
    for (const auto& elem : dq1) std::cout << elem << " ";
    std::cout << std::endl;

    // 5.3 push_front(const value_type& val)
    dq1.push_front(0);
    std::cout << "Deque after push_front: ";
    for (const auto& elem : dq1) std::cout << elem << " ";
    std::cout << std::endl;

    // 5.4 pop_back()
    dq1.pop_back();
    std::cout << "Deque after pop_back: ";
    for (const auto& elem : dq1) std::cout << elem << " ";
    std::cout << std::endl;

    // 5.5 pop_front()
    dq1.pop_front();
    std::cout << "Deque after pop_front: ";
    for (const auto& elem : dq1) std::cout << elem << " ";
    std::cout << std::endl;

    // 5.6 insert()
    dq1.insert(dq1.begin() + 1, 10);
    std::cout << "Deque after insert: ";
    for (const auto& elem : dq1) std::cout << elem << " ";
    std::cout << std::endl;

    // 5.7 erase()
    dq1.erase(dq1.begin() + 1);
    std::cout << "Deque after erase: ";
    for (const auto& elem : dq1) std::cout << elem << " ";
    std::cout << std::endl;

    // 5.9 clear()
    dq1.clear();
    std::cout << "Deque after clear, size: " << dq1.size() << std::endl;

    return 0;
}