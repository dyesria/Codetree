# [[챌린지]체질량지수](https://www.codetree.ai/trails/complete/curated-cards/challenge-bmi)

| 항목 | 내용 |
|---|---|
| 분류 | Trail |
| 커리큘럼 | [Trail 1 / 조건문 / if 조건문](https://www.codetree.ai/trail-info/novice-low/) |
| 난이도 | 보통 |
| 경험치 | 10 XP |

<!-- CODETREE_PROBLEM:START -->

## 문제

키가 $h$ cm, 몸무게가 $w$ kg인 사람의 체질량지수(BMI) $b$는 다음과 같이 계산할 수 있습니다.

$ \displaystyle b := \frac{w}{(h / 100)^2} = \frac{10\,000 \times w}{h \times h}$

또한, 체질량지수 $b$가 $25$ 이상이라면 비만이라고 정의합시다.

키 $h$와 몸무게 $w$가 주어졌을 때, 체질량지수 $b$를 계산하고 비만인지 판정하는 프로그램을 작성해주세요.

## 입력

첫 줄에 키(cm)와 몸무게(kg)를 나타내는 정수 $h$, $w$가 공백으로 구분되어 주어집니다.

## 제한 조건

- $1 \le h \le 1,000$
- $1 \le w \le 1,000$

## 출력

첫 줄에 체질량지수 $b$를 소수점 첫째 자리에서 버림하여 정수로 출력합니다.

만약 비만이라면, 두 번째 줄에 `Obesity`를 출력합니다.

## 입력 예제

### 예제 1

입력

```text
178 88
```

출력

```text
27
Obesity
```

### 예제 2

입력

```text
153 48
```

출력

```text
20
```

## 제한

• Time Limit: 500 ms

• Memory Limit: 64 MiB

<!-- CODETREE_PROBLEM:END -->
