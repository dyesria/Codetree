# [[챌린지]출력결과 25](https://www.codetree.ai/trails/complete/curated-cards/challenge-reading-k201626)

| 항목 | 내용 |
|---|---|
| 분류 | Trail |
| 커리큘럼 | [Trail 1 / 연산자 / 사칙연산](https://www.codetree.ai/trail-info/novice-low/) |
| 난이도 | 쉬움 |
| 경험치 | 10 XP |

<!-- CODETREE_PROBLEM:START -->

## 문제

다음 보기 중 프로그램을 실행할 때 오류가 발생하는 $a$, $b$의 값은 무엇인가?

## Python3 코드

```python
print(a % b, a % (a % b))
```

## C 코드

```cpp
printf("%d %d", a % b, a % (a % b));
```

## C++ 코드

```cpp
cout << a % b << " " << a % (a % b);
```

## Java 코드

```java
System.out.println((a % b) + " " + (a % (a % b)));
```

## JavaScript 코드

```JavaScript
console.log(a % b, a % (a % b))
```

## 보기

다음 보기 중 해당하는 항목 하나를 선택하세요.

### 보기 1

`a=1, b=2`

### 보기 2

`a=4, b=3`

### 보기 3

`a=7, b=4`

### 보기 4

`a=10, b=5`

### 보기 5

`a=13, b=6`

<!-- CODETREE_PROBLEM:END -->
