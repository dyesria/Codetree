# [[챌린지]날짜 변경하여 출력](https://www.codetree.ai/trails/complete/curated-cards/challenge-print-date-with-different-format)

| 항목 | 내용 |
|---|---|
| 분류 | Trail |
| 커리큘럼 | [Trail 1 / 입출력 / 특정 문자를 사이에 두고 입력](https://www.codetree.ai/trail-info/novice-low/) |
| 난이도 | 쉬움 |
| 경험치 | 10 XP |

<!-- CODETREE_PROBLEM:START -->

## 문제

$yyyy.mm.dd$ 모양의 날짜 정보를 입력받아 $mm-dd-yyyy$ 형식으로 출력하는 프로그램을 작성해보세요.

## 입력

첫 번째 줄에 날짜 정보가 $yyyy.mm.dd$ 형태로 주어집니다. $yyyy$는 연도를, $mm$은 월을, $dd$는 일을 의미합니다.

## 제한 조건

- $1 \le yyyy \le 2\,021$
- $1 \le mm \le 12$
- $1 \le dd \le 28$

## 출력

입력받은 날짜를 $mm-dd-yyyy$ 형식으로 바꾸어 출력합니다.

## 입력 예제

### 예제 1

입력

```text
1994.5.26
```

출력

```text
5-26-1994
```

### 예제 2

입력

```text
1.2.28
```

출력

```text
2-28-1
```

## 힌트

Java에서 useDelimiter를 사용할 경우 "."이 아닌, "\\\\."를 적어주셔야 함에 유의합니다. Java에서 useDelimiter 안에 적어야 하는 내용은 실제 정규 표현식 (Regular expression)이기에, "." 문자를 문자 그대로 사용하고 싶을시 escape string인 "\\"를 붙여주셔야 합니다.

## 제한

• Time Limit: 500 ms

• Memory Limit: 64 MiB

<!-- CODETREE_PROBLEM:END -->
