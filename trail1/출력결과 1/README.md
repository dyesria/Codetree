# [[챌린지]출력결과 1](https://www.codetree.ai/trails/complete/curated-cards/challenge-reading-k201517)

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
q = 0; s = 1; t = 1
for i in range(4):
    q = s + t
    t = s
    s = q
print(q)
```

## C 코드

```cpp
int q = 0, s = 1, t = 1;
for (int i = 0; i < 4; i++) {
    q = s + t;
    t = s;
    s = q;
}
printf("%d\n", q);
```

## C++ 코드

```cpp
int q = 0, s = 1, t = 1;
for (int i = 0; i < 4; i++) {
    q = s + t;
    t = s;
    s = q;
}
cout << q;
```

## Java 코드

```java
int q = 0, s = 1, t = 1;
for (int i = 0; i < 4; i++) {
    q = s + t;
    t = s;
    s = q;
}
System.out.println(q);
```

## JavaScript 코드

```JavaScript
let q = 0, s = 1, t = 1;
for (let i = 0; i < 4; i++) {
    q = s + t;
    t = s;
    s = q;
}
console.log(q);
```

## 보기

다음 보기 중 해당하는 항목 하나를 선택하세요.

### 보기 1

`2`

### 보기 2

`4`

### 보기 3

`6`

### 보기 4

`8`

### 보기 5

`10`

<!-- CODETREE_PROBLEM:END -->
