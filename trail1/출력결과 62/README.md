# [[챌린지]출력결과 62](https://www.codetree.ai/trails/complete/curated-cards/challenge-reading-k201815)

| 항목 | 내용 |
|---|---|
| 분류 | Trail |
| 커리큘럼 | [Trail 1 / 연산자 / 사칙연산](https://www.codetree.ai/trail-info/novice-low/) |
| 난이도 | 쉬움 |
| 경험치 | 10 XP |

<!-- CODETREE_PROBLEM:START -->

## 문제

다음 프로그램의 출력 결과는 무엇인가?

## Python3 코드

```python
a = 1
b = 1.3
c = a + b
print('%.2f' % c)
```

## C 코드

```c
int a = 1; 
double b = 1.3; 
double c;
c = a + b; 
printf("%.2lf", c);
```

## C++ 코드

```cpp
cout << fixed;
int a = 1; 
double b = 1.3; 
double c;
c = a + b; 
cout.precision(2);
cout << c << endl;
```

## Java 코드

```java
int a = 1; 
double b = 1.3; 
double c;
c = a + b;
System.out.printf("%.2f", c);
```

## JavaScript 코드

```JavaScript
let a = 1;
let b = 1.3;
let c = a + b;
console.log(c.toFixed(2));
```

## 보기

다음 보기 중 해당하는 항목 하나를 선택하세요.

### 보기 1

2.30

### 보기 2

2.3

### 보기 3

2.0

### 보기 4

.30

### 보기 5

정답없음

<!-- CODETREE_PROBLEM:END -->
