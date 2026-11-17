# [[챌린지]출력결과 8](https://www.codetree.ai/trails/complete/curated-cards/challenge-reading-k201528)

| 항목 | 내용 |
|---|---|
| 분류 | Trail |
| 커리큘럼 | [Trail 1 / 단순 반복문 / for문 a → b 1씩 증가](https://www.codetree.ai/trail-info/novice-low/) |
| 난이도 | 쉬움 |
| 경험치 | 10 XP |

<!-- CODETREE_PROBLEM:START -->

## 문제

다음 프로그램의 출력 결과는 무엇인가?

## Python3 코드

```python
a = 60
b = 0

for i in range(1, a + 1):
    if a % i == 0:
        b += 1

print(b)
```

## C 코드

```cpp
int a = 60, b = 0; 
for (int i = 1; i <= a; i++) {
    if (a % i == 0)
        b++;
}
printf("%d\n", b);
```

## C++ 코드

```cpp
int a = 60, b = 0; 
for (int i = 1; i <= a; i++) {
    if (a % i == 0)
        b++;
}
cout << b;
```

## Java 코드

```java
int a = 60, b = 0; 
for (int i = 1; i <= a; i++) {
    if (a % i == 0)
        b++;
}
System.out.println(b);
```

## JavaScript 코드

```JavaScript
let a = 60, b = 0; 
for (let i = 1; i <= a; i++) {
    if (a % i == 0)
        b++;
}
console.log(b);
```

## 보기

다음 보기 중 해당하는 항목 하나를 선택하세요.

### 보기 1

`0`

### 보기 2

`1`

### 보기 3

`4`

### 보기 4

`8`

### 보기 5

`12`

<!-- CODETREE_PROBLEM:END -->
