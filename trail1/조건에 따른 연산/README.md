# [[테스트]조건에 따른 연산](https://www.codetree.ai/trails/complete/curated-cards/test-operatino-by-rule)

| 항목 | 내용 |
|---|---|
| 분류 | Trail |
| 커리큘럼 | [Trail 1 / 단순 반복문 / 언제 끝날지 모르는 상황에서의 loop](https://www.codetree.ai/trail-info/novice-low/) |
| 난이도 | 쉬움 |
| 경험치 | 10 XP |

<!-- CODETREE_PROBLEM:START -->

## 문제

정수 $N$의 값에 따라 다음과 같은 연산을 진행할 때, $cnt$ 번의 연산을 했을 때 처음으로 $1000$ 이상이 된다고 합니다. $cnt$의 값을 구해보는 프로그램을 작성해보세요.

- $N$이 짝수일 때, $N$에 $3$을 곱하고 $1$을 더합니다.
- $N$이 홀수일 때, $N$에 $2$를 곱하고 $2$를 더합니다.

## 입력

첫 번째 줄에 정수 $N$이 주어집니다.

## 제한 조건

- $1\le N\le 100$

## 출력

첫 번째 줄에 $cnt$의 값을 출력합니다.

## 입력 예제

### 예제 1

입력

```text
50
```

출력

```text
4
```

예제 설명

접기

$50$에서 시작하게 되면, 다음 $4$번의 연산을 진행해야 합니다.

- $50\times3+1=151$
- $151\times2+2=304$
- $304\times3+1=913$
- $913\times2+2=1828$

$4$번째 연산에서 $N$이 $1828$이 되어 $1000$ 이상이 됩니다.

## 제한

• Time Limit: 500 ms

• Memory Limit: 64 MiB

<!-- CODETREE_PROBLEM:END -->
