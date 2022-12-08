/*# 小玉买文具

## 题目描述

        班主任给小玉一个任务，到文具店里买尽量多的签字笔。已知一只签字笔的价格是 $1$ 元 $9$ 角，而班主任给小玉的钱是 $a$ 元 $b$ 角，小玉想知道，她最多能买多少只签字笔呢。

## 输入格式

        输入只有一行两个整数，分别表示 $a$ 和 $b$。

## 输出格式

        输出一行一个整数，表示小玉最多能买多少只签字笔。

## 样例 #1

### 样例输入 #1

```
10 3
```

### 样例输出 #1

```
5
```

## 提示

#### 数据规模与约定

        对于全部的测试点，保证 $0 \leq a \leq 10^4$，$0 \leq b \leq 9$。*/
#include<stdio.h>
int main()
{
    int a,b;//a元b角
    int c;
    scanf("%d %d",&a,&b);
    c=a*10+b;//a元b角=a*10+b角
    printf("%d",c/19);//1.9元(19角)
    return 0;
}