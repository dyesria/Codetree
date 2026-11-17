# [[챌린지]출력결과 37](https://www.codetree.ai/trails/complete/curated-cards/challenge-reading-k201647)

| 항목 | 내용 |
|---|---|
| 분류 | Trail |
| 커리큘럼 | [Trail 1 / 단순 반복문 / 언제 끝날지 모르는 상황에서의 loop](https://www.codetree.ai/trail-info/novice-low/) |
| 난이도 | 보통 |
| 경험치 | 10 XP |

<!-- CODETREE_PROBLEM:START -->

## 문제

다음 프로그램의 출력 결과가 $5$가 되는 양의 정수 $n$의 개수는 몇 개인가?

## Python3 코드

```python
m = 0
n = int(input())
while n != 1:
    if n % 2 == 0:
        n //= 2
    else:
        n = 3 * n + 1
    m += 1
print(m)
```

## C 코드

```cpp
int m = 0;
int n;
scanf("%d", &n);
while (n != 1) {
    if(n % 2 == 0) n /= 2;
    else n = 3 * n + 1;
    m++;
}
printf("%d", m);
```

## C++ 코드

```cpp
int m = 0;
int n;
cin >> n;
while (n != 1) {
    if(n % 2 == 0) n /= 2;
    else n = 3 * n + 1;
    m++;
}
cout << m;
```

## Java 코드

```java
Scanner sc = new Scanner(System.in);
int m = 0;
int n = sc.nextInt();
while (n != 1) {
    if(n % 2 == 0) n /= 2;
    else n = 3 * n + 1;
    m++;
}
System.out.println(m);
```

## JavaScript 코드

```JavaScript
const fs = require("fs");
let m = 0;
let n = Number(fs.readFileSync(0).toString().trim());

while (n != 1) {
    if(n % 2 == 0) n /= 2;
    else n = 3 * n + 1;
    m++;
}

console.log(m);
```

## 보기

다음 보기 중 해당하는 항목 하나를 선택하세요.

### 보기 1

1

### 보기 2

2

### 보기 3

3

### 보기 4

4

### 보기 5

5

<!-- CODETREE_PROBLEM:END -->
