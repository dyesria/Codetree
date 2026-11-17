# [[챌린지]출력결과 72](https://www.codetree.ai/trails/complete/curated-cards/challenge-reading-k201827)

| 항목 | 내용 |
|---|---|
| 분류 | Trail |
| 커리큘럼 | [Trail 2 / 함수 / 값을 반환하지 않는 함수](https://www.codetree.ai/trail-info/novice-mid/) |
| 난이도 | 쉬움 |
| 경험치 | 10 XP |

<!-- CODETREE_PROBLEM:START -->

## 문제

함수 `f`를 구현하였을 때, 문자열 "Lee"를 출력하는 경우는 무엇인가?

## Python3 코드

```python
def f(a, b):
    d = 0; e = 17
    c = a + 5
    if a + b < c:
        if a == b:
            print("Lee")
```

## C 코드

```c
void f(int a, int b) {  
    int c, d = 0, e = 17;  
    c = a + 5;  
    if (a + b < c) {     
        if (a == b) {      
            printf("Lee");   
        }     
    }
}
```

## C++ 코드

```cpp
void f(int a, int b) {  
    int c, d = 0, e = 17;  
    c = a + 5;  
    if (a + b < c) {     
        if (a == b) {      
            cout << "Lee";
        }     
    }
}
```

## Java 코드

```java
void f(int a, int b) {  
    int c, d = 0, e = 17;  
    c = a + 5;  
    if (a + b < c) {     
        if (a == b) {   
            System.out.print("Lee");
        }     
    }
}
```

## JavaScript 코드

```JavaScript
function f(a, b) {  
    let c, d = 0, e = 17;  
    c = a + 5;  
    if (a + b < c) {     
        if (a === b) {   
            console.log("Lee");
        }     
    }
}
```

## 보기

다음 보기 중 해당하는 항목 하나를 선택하세요.

### 보기 1

f(3, 3)

### 보기 2

f(3, 5)

### 보기 3

f(4, 10)

### 보기 4

f(10, 10)

### 보기 5

f(20, 20)

<!-- CODETREE_PROBLEM:END -->
