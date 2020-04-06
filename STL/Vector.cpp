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
