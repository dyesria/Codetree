# [[챌린지]출력결과 48](https://www.codetree.ai/trails/complete/curated-cards/challenge-reading-k201724)

| 항목 | 내용 |
|---|---|
| 분류 | Trail |
| 커리큘럼 | [Trail 1 / 단순 반복문 / 반복문 안의 if](https://www.codetree.ai/trail-info/novice-low/) |
| 난이도 | 쉬움 |
| 경험치 | 10 XP |

<!-- CODETREE_PROBLEM:START -->

## 문제

다음 프로그램의 출력 결과는 무엇인가?

## Python3 코드

```python
result = 0
for i in range(1, 11, 2):
    if i % 3 == 0:
        result += i - 1
print(result)
```

## C 코드

```c
int sum = 0;
for(int i = 1; i <= 10; i += 2){
    if(i % 3 == 0) {
        sum += i - 1;
    }
}
printf("%d\n",sum);
```

## C++ 코드

```cpp
int sum = 0;
for(int i = 1; i <= 10; i += 2){
    if(i % 3 == 0) {
        sum += i - 1;
    }
}
cout << sum << endl;
```

## Java 코드

```java
int sum = 0;
for(int i = 1; i <= 10; i += 2){
    if(i % 3 == 0) {
        sum += i - 1;
    }
}
System.out.println(sum);
```

## JavaScript 코드

```JavaScript
let sum = 0;
for(let i = 1; i <= 10; i += 2){
    if (i % 3 == 0) {
        sum += i - 1;
    }
}
console.log(sum);
```

## 보기

다음 보기 중 해당하는 항목 하나를 선택하세요.

### 보기 1

5

### 보기 2

10

### 보기 3

20

### 보기 4

50

### 보기 5

55

<!-- CODETREE_PROBLEM:END -->
