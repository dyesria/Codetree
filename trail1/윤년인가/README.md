# [[개념]윤년인가](https://www.codetree.ai/trails/complete/curated-cards/intro-is-leap-year)

| 항목 | 내용 |
|---|---|
| 분류 | Trail |
| 커리큘럼 | [Trail 1 / 조건문 / 중첩 조건문](https://www.codetree.ai/trail-info/novice-low/) |
| 난이도 | 쉬움 |
| 경험치 | 10 XP |

<!-- CODETREE_PROBLEM:START -->

## 문제

자연수 $Y$를 입력받아 $Y$년이 윤년인지를 판단하는 프로그램을 작성해보세요.
윤년일 조건은 다음과 같습니다.

- $4$로 나누어 떨어지는 해는 윤년, 그 밖의 해는 평년입니다.
- 단, 예외적으로 $100$으로 나누어 떨어지되 $400$으로 나누어 떨어지지 않는 해는 평년으로 합니다.

## 입력

첫 번째 줄에는 $Y$이 주어집니다.

## 제한 조건

- $1 \leq Y \leq 2222$

## 출력

입력받은 연도가 윤년이라면 `true`를 아니라면 `false`를 출력합니다.

## 입력 예제

### 예제 1

입력

```text
2020
```

출력

```text
true
```

### 예제 2

입력

```text
2200
```

출력

```text
false
```

## 제한

• Time Limit: 500 ms

• Memory Limit: 64 MiB

<!-- CODETREE_PROBLEM:END -->
