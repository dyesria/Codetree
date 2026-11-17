# [[챌린지]출력결과 10](https://www.codetree.ai/trails/complete/curated-cards/challenge-reading-k201530)

| 항목 | 내용 |
|---|---|
| 분류 | Trail |
| 커리큘럼 | [Trail 1 / 단순 반복문 / for문 a → b 1씩 증가](https://www.codetree.ai/trail-info/novice-low/) |
| 난이도 | 쉬움 |
| 경험치 | 10 XP |

<!-- CODETREE_PROBLEM:START -->

## 문제

다음 프로그램의 실행 결과 $result$의 값은 무엇인가?

## Python3 코드

```python
n = 128
result = 0

for i in range(1, n):
    if n % i == 0:
        result += i
```

## C/C++ 코드

```cpp
int n = 128, result = 0; 
for (int i = 1; i < n; i++) {
    if (n % i == 0) { 
        result += i;
    } 
}
```

## Java 코드

```java
int n = 128, result = 0; 
for (int i = 1; i < n; i++) {
    if (n % i == 0) { 
        result += i;
    } 
}
```

## JavaScript 코드

```JavaScript
let n = 128, result = 0; 
for (let i = 1; i < n; i++) {
    if (n % i == 0) { 
        result += i;
    } 
}
```

## 보기

다음 보기 중 해당하는 항목 하나를 선택하세요.

### 보기 1

`127`

### 보기 2

`128`

### 보기 3

`129`

### 보기 4

`131`

### 보기 5

`135`

<!-- CODETREE_PROBLEM:END -->
