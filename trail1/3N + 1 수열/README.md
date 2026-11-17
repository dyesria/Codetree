# [[개념]3N + 1 수열](https://www.codetree.ai/trails/complete/curated-cards/intro-3n-plus-1-sequence)

| 항목 | 내용 |
|---|---|
| 분류 | Trail |
| 커리큘럼 | [Trail 1 / 단순 반복문 / 언제 끝날지 모르는 상황에서의 loop](https://www.codetree.ai/trail-info/novice-low/) |
| 난이도 | 쉬움 |
| 경험치 | 10 XP |

<!-- CODETREE_PROBLEM:START -->

## 문제

자연수 $N$이 주어집니다. 다음 조건에 따라, $N$을 변경하여 최종적으로 $1$을 만들고자 합니다.

- $N$이 짝수인 경우, $2$로 나눕니다.
- $N$이 홀수인 경우, $3$을 곱하고 $1$을 더합니다.

총 몇 번을 반복해야, $1$이 되는지 계산하는 프로그램을 작성해보세요.

예를 들어,  $N=3$ 인 경우,  

$3 \to 10 \to 5 \to 16 \to 8 \to 4 \to 2 \to 1$ 순서로 $1$이 되므로 답이 $7$이 됩니다.

## 입력

첫 번째 줄에 $N$이 주어집니다.

## 제한 조건

- $1 \le N \le 100$

## 출력

$N$이 $1$이 되기 위해서는 몇 번 반복해야 하는지를 출력합니다.

## 입력 예제

### 예제 1

입력

```text
3
```

출력

```text
7
```

### 예제 2

입력

```text
1
```

출력

```text
0
```

### 예제 3

입력

```text
6
```

출력

```text
8
```

## 제한

• Time Limit: 500 ms

• Memory Limit: 64 MiB

<!-- CODETREE_PROBLEM:END -->
