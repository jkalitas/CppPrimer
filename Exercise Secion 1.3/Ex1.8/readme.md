## Solution 1.8

```c++
		std::cout << "/*";
```

Legal and the cli output is "/\*"

---------------------


```c++
		std::cout << "*/";
```

Legal and the cli output is "\*/"

---------------------

```c++
		std::cout << /* "*/" */;
```

Illegal. The compiler assumes see the begining of double quote as a comment and so the string is never ended. 

---------------------

```c++
		std::cout << /* "*/" /* "/*" */;
```

Legal and the cli output is "/\*".
