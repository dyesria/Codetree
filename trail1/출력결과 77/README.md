# [[챌린지]출력결과 77](https://www.codetree.ai/trails/complete/curated-cards/challenge-reading-k201832)

| 항목 | 내용 |
|---|---|
| 분류 | Trail |
| 커리큘럼 | [Trail 1 / 단순 반복문 / 언제 끝날지 모르는 상황에서의 loop](https://www.codetree.ai/trail-info/novice-low/) |
| 난이도 | 쉬움 |
| 경험치 | 10 XP |

<!-- CODETREE_PROBLEM:START -->

## 문제

다음 프로그램의 출력 결과는 무엇인가?

## Python3 코드

```python
i = 1; tmp = 0
while i < 10:
    if i % 2 == 0:
        i += 1
    if tmp > 5:
        break
    tmp += i

print(tmp)
```

## C 코드

```c
int tmp = 0, i = 1;
while(i < 10) {  
    if(i % 2 == 0)     
        i++;         
    if(tmp > 5)    
        break;   
    tmp += i; 
}
printf("%d\n",tmp);
```

## C++ 코드

```cpp
int tmp = 0, i = 1;
while(i < 10) {  
    if(i % 2 == 0)     
        i++;         
    if(tmp > 5)    
        break;   
    tmp += i; 
}
cout << tmp << endl;
```

## Java 코드

```java
int tmp = 0, i = 1;
while(i < 10) {  
    if(i % 2 == 0)     
        i++;         
    if(tmp > 5)    
        break;   
    tmp += i; 
}
System.out.println(tmp);
```

## JavaScript 코드

```JavaScript
let tmp = 0, i = 1;
while(i < 10) {  
    if(i % 2 == 0)     
        i++;         
    if(tmp > 5)    
        break;   
    tmp += i; 
}
console.log(tmp);
```

## 보기

다음 보기 중 해당하는 항목 하나를 선택하세요.

### 보기 1

2

### 보기 2

3

### 보기 3

4

### 보기 4

5

### 보기 5

6

<!-- CODETREE_PROBLEM:END -->
