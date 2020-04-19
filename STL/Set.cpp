/*

set 容器是关联容器，其中的对象是对象它们自己的键。set<T> 容器内部元素的组织方式和 map<K，T> 相同，都是平衡二叉树。
有序 set 的模板定义在 set 头文件中，有序 set 包含的元素必须支持比较运算，
无序 set 的模板定义在 unordered_set 头文件中，无序 set 中的元素必须支持哈希运算。

set<T> 容器保存 T 类型的对象，而且保存的对象是唯一的。其中保存的元素是有序的，默认用 less<T> 对象比较。可以用相等、不相等来判断对象是否相同。
unorderd_set<T> 容器保存 T 类型的对象，而且对象是唯一的。元素在容器中的位置由元素的哈希值决定。默认用 equal_to<T> 对象来判断元素是否相等。

*/

//1.头文件和声明
    #include <set>                  //有序set
    #include <unorderd_set>         //无序set
    
    set<string> words;                      //set集合为string型
    set<std::pair<string,string>> words;    //set集合为pair<string,string>型
    set<string, std::greater<string>> words {"one", "two", "three"};    //set按降序排列，并初始化
    
//2.set添加元素
//2.1使用insert()插入元素
//插入单个元素会返回一个 pair<iterator，bool> 对象。插入单个元素和一个标识，会返回一个迭代器。插入一段元素或一个初始化列表就不会有返回值。
    auto pr1 = words.insert("four");
    words.insert ({ "five","six"});
//2.2使用emplace()、emplace_hint()插入元素(c++11)
    auto pr = words.emplace("Lisa", "Carr");
    auto iter = words.emplace_hint(pr.first, "Joe", "King");
    
//3.删除set中的元素
    auto n = words.erase("Lisa");   //删除"Lisa"元素
    words.clear();                  //删除所有set元素
    
//4.查找set中的元素
//set 的成员函数 find() 会返回一个和参数匹配的元素的迭代器。如果对象不在 set 中，会返回一个结束迭代器。
    auto iter = words.find ("one")；
//调用成员函数 count() 可以返回指定键所对应的元素个数，返回值通常是 0 或 1，因为 set 容器中的元素是唯一的。
    int n = words.count("one");
    
