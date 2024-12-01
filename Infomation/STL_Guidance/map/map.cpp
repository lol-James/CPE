#include <bits/stdc++.h>

using namespace std;

/**
 * map: store elements formed by a combination of a key value and a mapped value, following a specific order. 
 * 一、Member functions
 * 1. Constructor/Destructor/assignment
 *  1.1 map()
 *      (1) map (const map& x);
 *      (2) map (InputIterator first, InputIterator last)；
 *  1.2 ~map()
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
 *  3.1 size()
 *  3.2 max_size()
 *  3.3 empty()
 *  
 * 4. Element access
 *  4.1 mapped_type& operator[] (const key_type& k);
 *  4.2 mapped_type& at (const key_type& k);
 * 
 * 5. Modifiers
 *  5.1 insert()
 *   (1) insert(kv_pair)
 *   (2) insert(const_iterator position, kv_pair)    // 優先位置
 *   (3) insert (InputIterator first, InputIterator last);
 *  5.2 erase()
 *   (1) iterator  erase (const_iterator position)
 *   (2) int erase (const key_type& k);     // return 0/1
 *   (3) iterator  erase (const_iterator first, const_iterator last);
 *  5.3 swap (map& x);
 *  5.4 clear()
 *  5.5 iterator emplace (Args&&... args);   // mymap.emplace(key, value)
 *  5.6 iterator emplace_hint (const_iterator position, Args&&... args);
 * 
 * 6. Operations
 *  6.1 const_iterator find (const value_type& val)
 *  // if not found, return end()
 *  6.2 size_type count (const value_type& val) 
 *  // Because all elements in a set are unique, the function can only return 0/1
 *  6.3 iterator lower_bound (const value_type& val)
 *  6.4 iterator upper_bound (const value_type& val)
 *  6.5 pair<const_iterator,const_iterator> equal_range (const value_type& val)
 *  // returnValue.first == lower_bound (const value_type& val)
 *  // returnValue.second == upper_bound (const value_type& val)
 * 
 * 二、Traverse 
 * 1. Iterator
 *  std::map<int, std::string>::iterator it;
 *  for (it = mymap.begin(); it != mymap.end(); ++it) 
 *      std::cout << it->first << ": " << it->second << std::endl;
 * 2. for each
 *  for (const auto& pair : mymap)
 *      std::cout << pair.first << ": " << pair.second << std::endl;
 * 
*/

int main()
{
    map<string, int> map_1;

    /*
        map的宣告運用泛型宣告 syntax: map<key_type, value_type> map_name;
        PS. map可在宣告時順便初始化:
        map<key_type, value_type> map_name =
        {
            {key1, value1},
            {key2, value2},
            {key3, value3},
            {key4, value4}
        };
    */
    /*
        add new elements
        1. map_name[key] = value;     // 可用於新增及修改
        2. map_name.insert(map<key_datatype, value_datatype> ::value_type(key, value));
        3. map_name.insert(pair<key_datatype, value_datatype>(key, value));
        4. map_name.insert(make_pair<key_datatype, value_datatype>(key, value));

        PS1. 插入的元素會自動依照key的值由小到大進行排序
        PS2. 即若使用自定義的物件作為key, 至少需overloading < operator
        PS3. 若用map_name[key] = value; 的key重複，則為覆蓋(修改)先前相應key的value
        PS4. 若用 insert() 的key重複，則為"無效操作"
    */
    map_1["Jack"] = 87;
    map_1.insert(map<string, int>::value_type("John", 90));
    map_1.insert(pair<string, int>("Mary", 77));
    map_1.insert(make_pair<string, int>("Ame", 100));

    /* map的遍歷與vector一樣運用iterator或const_iterator(不可用於修改value) */
    map<string, int>::iterator it;                    // iterator宣告與vector相似
    for (it = map_1.begin(); it != map_1.end(); it++) // 與vector的 (r)begin() / (r)end() 用法相同
    {
        cout << it->first << " " << it->second << endl;
        // it->first 為key;
        // it->second 為 value
    }
    cout << endl;

    /* 存取map裡的elements */
    // 法1. use map_name[key] (較不安全: 當key不存在時，取到的會是相應型別的默認值)
    int score_1 = map_1["Jack"];
    cout << "Jack: " << score_1 << endl;
    cout << endl;

    // 法2. use iterator, map_name.find(key), and it->second (較安全: 當key不存在時，itreator_name = map_name.end())
    it = map_1.find("Ame");
    if (it != map_1.end()) // it != map_1.end() 說明有找到(key存在)
    {
        it->second = 33;
        cout << "After it->second = 33;\n"
             << it->first << " " << it->second << endl;
    }
    cout << endl;

    for (it = map_1.begin(); it != map_1.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;

    /* 刪除map裡的elements  運用map_name.erase( ) */
    // erase() will return the number of elements has been deleted
    // i.e. if we erase an element doesn't exist in the map, map_name.erase(key) will do nothing and return 0
    // 法1. map_name.erase(key);
    map_1.erase("Jack");

    cout << "After erase Jack\n";
    for (it = map_1.begin(); it != map_1.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;

    cout << "map_1.size() = " << map_1.size() << endl;         // return the number of elements in the map
    cout << "map_1.max_size() = " << map_1.max_size() << endl; // return the maximum number of element the map can contain
    cout << "map_1.empty() = " << map_1.empty() << endl;       // return a boolean value, ckeck ig the map is empty or not

    // 法2. use map_name.erase(iterator_name);
    it = map_1.find("Mary");
    if (it != map_1.end())
    {
        map_1.erase(it);
    }

    cout << "\nAfter erase Mary\n";
    for (it = map_1.begin(); it != map_1.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;

    /*
        map_name.count(key); return the number of element matching the key.
        'cause all elements in the map are unique, so it can only return 0 or 1.
        So we usually use count() to check if a certien element is in the map or not.
    */
    cout << "map_1.count(\"Mary\") = " << map_1.count("Mary") << endl;

    /* 清除map內所有元素    map_name.clear(); */
    map_1.clear();
    for (it = map_1.begin(); it != map_1.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;
    cout << "map_1.empty() = " << map_1.empty() << endl;

    system("pause");
    return 0;
}