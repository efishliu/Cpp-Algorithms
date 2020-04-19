
//priority_queue 模板有 3 个参数，其中两个有默认的参数；第一个参数是存储对象的类型，第二个参数是存储元素的底层容器，第三个参数是函数对象，模板类型是：
    template <typename T, typename Container=std::vector<T>, typename Compare=std::less<T>> class priority_queue
//priority_queue 实例默认有一个 vector 容器。函数对象类型 less<T> 是一个默认的排序，定义在头文件 function 中，决定了容器中最大的元素会排在队列前面。
//fonction 中定义了  greater<T>，用来作为模板的最后一个参数对元素排序，最小元素会排在队列前面。

//头文件
    #include <priority_queue>
//创建priority_queue
    std::priority_queue<std::string> words;
    std::priority_queue<std::string, std::vector<std::string>,std: :greater<std::string>> words1;
/*        
priority_queue 操作
push(const T& obj)：将obj的副本放到容器的适当位置，这通常会包含一个排序操作。
push(T&& obj)：将obj放到容器的适当位置，这通常会包含一个排序操作。
emplace(T constructor a rgs...)：通过调用传入参数的构造函数，在序列的适当位置构造一个T对象。为了维持优先顺序，通常需要一个排序操作。
top()：返回优先级队列中第一个元素的引用。
pop()：移除第一个元素。
size()：返回队列中元素的个数。
empty()：如果队列为空的话，返回true。
swap(priority_queue<T>& other)：和参数的元素进行交换，所包含对象的类型必须相同。
*/

//priority_queue 也实现了赋值运算，可以将右操作数的元素赋给左操作数；同时也定义了拷贝和移动版的赋值运算符。需要注意的是，priority_queue 容器并没有定义比较运算符。因为需要保持元素的顺序，所以添加元素通常会很慢。
