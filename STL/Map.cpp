/*
map是STL的一个关联容器，它提供一对一（其中第一个可以称为关键字，每个关键字只能在map中出现一次，第二个可能称为该关键字的值）的数据处理能力。
map内部自建一颗红黑树(一 种非严格意义上的平衡二叉树)，这颗树具有对数据自动排序的功能，所以在map内部所有的数据都是有序的。
map是一类关联式容器。它的特点是增加和删除节点对迭代器的影响很小，除了那个操作节点，对其他的节点都没有什么影响。
对于迭代器来说，可以修改实值，而不能修改key。
*/

//1.使用map所包含头文件
    #include <map>
//map类位于标准命名空间std
    using namespace std;
//或者
    std::map<int,string>mymap;

//2.map的构造函数与声明
    map<int,string> mymap;

//3.map的插入
//3.1使用insert函数插入pair数据
    mymap.insert(pair<int,string>(1,"hello"));
//3.2使用insert函数插入value_type数据
    mymap.insert(map<int,string>::value_type(2,"world"));
//3.3使用数组方式插入数据
    mymap[3] = "nihao";
//3.1和3.2方式插入涉及数据集合的唯一性，相同的key第二次无法插入，判断是否插入成功如下：
    pair<map<int,string>::iterator,bool> Insert_Pair;
    Insert_Pair = mymap.insert(pair<int,string>(1,"hi"));
    if(Insert_Pair.second == true)      //Insert_Pair包含的第一个变量是一个map的迭代器，第二个变量是插入是否成功的布尔值
        cout<<"Insert Successful"<<endl;
//3.3方法如果插入相同key的数据，则进行相同key数据的覆盖

//4.map的遍历
//4.1使用前向迭代器进行遍历
    map<int,string>::iterator iter;
    for(iter = mymap.begin();iter != mymap.end();iter++)
        cout<<iter->first<<cout<<iter->second<<endl;
//4.2使用反向迭代器进行遍历
    map<int,string>::reverse_iterator riter;
    for(riter = mymap.rbegin();iter != mymap.rend();riter++)
        cout<<riter->first<<cout<<riter->second<<endl;
//4.3使用数组形式进行遍历
    int num = mymap.size();
    for(int index = 1;index <= num;index++)
        cout<<index<<mymap[index]<<endl;

//5.map的查找
//5.1使用count函数判断元素是否存在于map
//使用count，返回的是被查找元素的个数。如果有，返回1；否则，返回0。注意，map中不存在相同元素，所以返回值只能是1或0。
    cout<<mymap.count(2)<<endl;
//5.2使用find函数查找map中的元素
    map<int,string>::iterator it;
    it = mymap.find(2);
    if(it == mymap.end())
        cout<<"Not Found"<<endl;
    else
        cout<<it->first<<it->second<<endl;

//6.在map中删除元素
//6.1通过迭代器进行删除
    map<int,string>::iterator it;
    it = mymap.find(2);
    if(it != mymap.end())
        mymap.erase(it);
//6.2通过关键字进行删除
    mymap.erase(2);     //删除成功返回1，否则返回0
//6.3批量删除
    mymap.erase(mymap.begin(),mymap.end());     //清空mymap，相当于mymap.clear()

//7.map的基本操作函数
//7.1删除所有元素
    mymap.clear();
//7.2判断map是否为空
    mymap.empty();
//7.3返回key>=给定元素的第一个位置
    map<int,string>::iterator iter = mymap.lower_bound();
//7.4返回key>给定元素的第一个位置
    map<int,string>::iterator iter = mymap.upper_bound();
//7.5返回map元素的个数
    int num = mymap.size();
