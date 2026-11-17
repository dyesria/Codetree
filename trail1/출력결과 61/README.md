# [[챌린지]출력결과 61](https://www.codetree.ai/trails/complete/curated-cards/challenge-reading-k201814)

| 항목 | 내용 |
|---|---|
| 분류 | Trail |
| 커리큘럼 | [Trail 1 / 조건문 / 중첩 조건문](https://www.codetree.ai/trail-info/novice-low/) |
| 난이도 | 쉬움 |
| 경험치 | 10 XP |

<!-- CODETREE_PROBLEM:START -->

## 문제

다음 프로그램의 출력 결과는 무엇인가?

## Python3 코드

```python
x = 9
y = 11
if x < 10:
    if y > 10:
        print('A', end = '')
    else:
        print('B', end = '')
print('C', end = '')
```

## C 코드

```c
int x = 9, y = 11;
if (x < 10)  
    if (y > 10)    
        printf("A");  
    else    
        printf("B");
printf("C");
```

## C++ 코드

```cpp
int x = 9, y = 11;
if (x < 10)  
    if (y > 10)    
        cout << "A";
    else    
        cout << "B";
cout << "C";
```

## Java 코드

```java
int x = 9, y = 11;
if (x < 10)  
    if (y > 10)
        System.out.print("A");
    else
        System.out.print("B");
System.out.print("C");
```

## JavaScript 코드

```JavaScript
let x = 9, y = 11;
let answer = "";
if (x < 10)  
    if (y > 10)
        answer += "A";
    else
        answer += "B";
answer += "C";
console.log(answer);
```

## 보기

다음 보기 중 해당하는 항목 하나를 선택하세요.

### 보기 1

A

### 보기 2

AB

### 보기 3

BC

### 보기 4

AC

### 보기 5

ABC

<!-- CODETREE_PROBLEM:END -->
