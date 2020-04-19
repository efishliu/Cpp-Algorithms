/*

  stack 容器适配器的模板有两个参数。第一个参数是存储对象的类型，第二个参数是底层容器的类型。stack<T> 的底层容器默认是 deque<T> 容器
  namespace std {
       template <class T,
                 class Container = deque<T> >
       class stack;
   }

*/
/*

和其他序列容器相比，stack 是一类存储机制简单、所提供操作较少的容器。下面是 stack 容器可以提供的一套完整操作：
top()：返回一个栈顶元素的引用，类型为 T&。如果栈为空，返回值未定义。
push(const T& obj)：可以将对象副本压入栈顶。这是通过调用底层容器的 push_back() 函数完成的。
push(T&& obj)：以移动对象的方式将对象压入栈顶。这是通过调用底层容器的有右值引用参数的 push_back() 函数完成的。
pop()：弹出栈顶元素。
size()：返回栈中元素的个数。
empty()：在栈中没有元素的情况下返回 true。
emplace()：用传入的参数调用构造函数，在栈顶生成对象。
swap(stack<T> & other_stack)：将当前栈中的元素和参数中的元素交换。参数所包含元素的类型必须和当前栈的相同。对于 stack 对象有一个特例化的全局函数 swap() 可以使用。

*/

/*

stack就三个接口函数，push(),top(),pop():
push()会将一个元素放入stack中。
top()会返回stack中的栈顶元素，返回的是reference，可以就地修改值。
pop()移除栈顶元素，无返回值。
size()返回stack长度。
empty()返回stack是否为空。

*/
