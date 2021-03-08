

## explicit

按照默认规定，`只有一个参数的构造函数`也定义了一个隐式转换，将该构造函数对应数据类型的数据转换为该类对象
```
  class String {
    String ( const char* p ); // 用C风格的字符串p作为初始化值

  }
  String s1 = "hello";    //OK 隐式转换，等价于String s1 = String（"hello"）;
``` 
但是有的时候可能会不需要这种隐式转换:
```
  class String {
    String ( int n ); // 本意是预先分配n个字节给字符串
    String ( const char* p ); // 用C风格的字符串p作为初始化值
  }
``` 
下面两种写法比较正常：
```
  String s2 (10);            // OK 分配10个字节的空字符串
  String s3 = String (10);   // OK 分配10个字节的空字符串
```

下面两种写法就比较疑惑了：
```
  String s4 = 10;   // 编译通过，也是分配10个字节的空字符串
  String s5 = 'a';  // 编译通过，分配int（‘a’）个字节的空字符串
```

s4 和s5 分别把一个int型和char型，隐式转换成了分配若干字节的空字符串，容易令人误解。
为了避免这种错误的发生，我们可以声明显示的转换，使用explicit 关键字：
```
  class String {
    explicit String ( int n ); //本意是预先分配n个字节给字符串
    String ( const char* p ); // 用C风格的字符串p作为初始化值
  }
```
加上explicit，就抑制了String ( int n )的隐式转换，
 

- explicit 关键字只能用于类内部的构造函数声明上。
- explicit 关键字作用于单个参数的构造函数。
