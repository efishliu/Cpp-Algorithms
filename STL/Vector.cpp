/*
vector是C++标准模板库中的部分内容，它是一个多功能的，能够操作多种数据结构和算法的模板类和函数库。
vector之所以被认为是一个容器，是因为它能够像容器一样存放各种类型的对象，简单地说，vector是一个能够存放任意类型的动态数组，能够增加和压缩数据。
*/

//1.为了可以使用vector，必须在你的头文件中包含下面的代码：  
    #include <vector>
//vector属于std命名域的，因此需要通过命名限定，如下完成你的代码：
    using std::vector;
    vector<int> vInts;
//或者：
    std::vector<int> vInts;
//建议使用全局的命名域方式，在代码开头加入：
    using namespace std;

//2.创建一个vector
//2.1创建一个一维vector：
    vector<Widget> vWidgets;        //创建一个Widget类型的空的vector对象
    vector<Widget> vWidgets(500);   //创建一个包含500个Widget类型数据的vector
    vector<Widget> vWidgets(500, Widget(0));    //创建一个包含500个Widget类型数据的vector，并且都初始化为0
    vector<Widget> vWidgetsFromAnother(vWidgets);   //创建一个Widget的拷贝
//2.2创建一个二维vector:
    vector<Widget> vWidgets[n];     //每个vWidgets[i]都为一个vector

//3.向vector添加一个数据
//vector添加数据的缺省方法是push_back()。push_back()函数表示将数据添加到vector的尾部，并按需要来分配内存。
//例如：向vector<Widget>中添加10个数据，需要如下编写代码：
    for(int i= 0;i<10; i++)
    vWidgets.push_back(Widget(i));

//4.vector的容量
//4.1获取vector中是否存放了数据：
    vWidgets.empty();
//4.2获取当前vector容器真实占用的大小,也就是容器当前拥有多少个Widget:
    vWidgets.size();
//4.3获取vector发生realloc前能允许的最大元素数，即预分配的内存空间：
    vWidgets.capacity();
//4.4重新指定vector的长度,容器内的对象内存空间是真正存在的:
    vWidgets.resize();      //对应size()
//4.5 重新指定vector的容量，使用reserve()仅仅只是修改了capacity的值：
    vWidgets.reserve();     //对应capacity()

//5.访问vector中的数据

