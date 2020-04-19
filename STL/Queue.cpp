//queue 模板类的定义在<queue>头文件中。
    #include<queue>
//与stack 模板类很相似，queue 模板类也需要两个模板参数，一个是元素类型，一个容器类型，元素类型是必要的，容器类型是可选的，默认为deque 类型。
//queue的声明
    queue<int> q1;

//queue 的基本操作有：
//入队，如例：q.push(x); 将x 接到队列的末端。
//出队，如例：q.pop(); 弹出队列的第一个元素，注意，并不会返回被弹出元素的值。
//访问队首元素，如例：q.front()，即最早被压入队列的元素。
//访问队尾元素，如例：q.back()，即最后被压入队列的元素。
//判断队列空，如例：q.empty()，当队列空时，返回true。
//访问队列中的元素个数，如例：q.size()