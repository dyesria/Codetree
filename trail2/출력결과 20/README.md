# [[챌린지]출력결과 20](https://www.codetree.ai/trails/complete/curated-cards/challenge-reading-k201544)

| 항목 | 내용 |
|---|---|
| 분류 | Trail |
| 커리큘럼 | [Trail 2 / 함수 / 값을 반환하지 않는 함수](https://www.codetree.ai/trail-info/novice-mid/) |
| 난이도 | 어려움 |
| 경험치 | 50 XP |

<!-- CODETREE_PROBLEM:START -->

## 문제

다음 프로그램의 출력 결과는 무엇인가?

## Python3 코드

```python
_list = [[2, 0, 1, 5],
         [0, 4, 1, 1],
         [1, 4, 0, 0]]

def f(b):
    for i in range(4):
        _list[b][i] = _list[(b + 1) % 3][(i + 1) % 4]

f(1)
f(2)
f(0)
result = 0

for i in range(3):
    result += _list[i][(i + 1) % 4]
print(result)
```

## C 코드

```c
#include <stdio.h>

int a[3][4] = {
    {2, 0, 1, 5},
    {0, 4, 1, 1},
    {1, 4, 0, 0}
};
void f(int b) {
    int i;
    for(i = 0; i < 4; i++) {
        a[b][i] = a[(b + 1) % 3][(i + 1) % 4];
    }
}
int main() {
    int i, tot = 0;
    f(1);
    f(2);
    f(0);
    for(i = 0; i < 3; i++) {
        tot = tot + a[i][(i + 1) % 4];
    }
    printf("%d\n", tot);
    return 0;
}
```

## C++ 코드

```cpp
#include <iostream>
using namespace std;

int a[3][4] = {
    {2, 0, 1, 5},
    {0, 4, 1, 1},
    {1, 4, 0, 0}
};
void f(int b) {
    int i;
    for(i = 0; i < 4; i++) {
        a[b][i] = a[(b + 1) % 3][(i + 1) % 4];
    }
}
int main() {
    int i, tot = 0;
    f(1);
    f(2);
    f(0);
    for(i = 0; i < 3; i++) {
        tot = tot + a[i][(i + 1) % 4];
    }
    cout << tot;
    return 0;
}
```

## Java 코드

```java
public class Main {
    public static int[][] a = new int[][]{
        {2, 0, 1, 5},
        {0, 4, 1, 1},
        {1, 4, 0, 0}
    };
    public static void f(int b) {
        int i;
        for(i = 0; i < 4; i++) {
            a[b][i] = a[(b + 1) % 3][(i + 1) % 4];
        }
    }

    public static void main(String[] args) {
        int i, tot = 0;
        f(1);
        f(2);
        f(0);
        for(i = 0; i < 3; i++) {
            tot = tot + a[i][(i + 1) % 4];
        }
        System.out.println(tot);
    }

}
```

## JavaScript 코드

```JavaScript
let a = [
    [2, 0, 1, 5],
    [0, 4, 1, 1],
    [1, 4, 0, 0]
];

function f(b) {
    for (let i = 0; i < 4; i++) {
        a[b][i] = a[(b + 1) % 3][(i + 1) % 4];
    }
}

f(1);
f(2);
f(0);

let result = 0;
for (let i = 0; i < 3; i++) {
    result += a[i][(i + 1) % 4];
}

console.log(result);
```

## 보기

다음 보기 중 해당하는 항목 하나를 선택하세요.

### 보기 1

2

### 보기 2

4

### 보기 3

5

### 보기 4

6

### 보기 5

9

<!-- CODETREE_PROBLEM:END -->
