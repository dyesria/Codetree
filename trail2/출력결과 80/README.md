# [[챌린지]출력결과 80](https://www.codetree.ai/trails/complete/curated-cards/challenge-reading-k201835)

| 항목 | 내용 |
|---|---|
| 분류 | Trail |
| 커리큘럼 | [Trail 2 / 함수 / 값을 반환하지 않는 함수](https://www.codetree.ai/trail-info/novice-mid/) |
| 난이도 | 쉬움 |
| 경험치 | 10 XP |

<!-- CODETREE_PROBLEM:START -->

## 문제

그림과 같은 패턴이 있다고 하자. 이 패턴을 출력하기 위해 함수를 구현하고 `draw(5)`를 호출하였다. (A)에 들어갈 알맞은 코드는?

```text
*****
** **
* * *
** **
*****
```

## Python3 코드

```python
def draw(n):
    for i in range(1, n+1, 1):
        for j in range(1, n+1):
            if i == 1 or i == n or j == 1 or j == n or (A):
                print('*', end='')
            else:
                 print(' ', end='')
        print()
```

## C 코드

```c
void draw(int n) {  
    for (int i=1; i<=n; i++) {    
        for (int j=1; j<=n; j++)      
            if (i==1 || i==n || j==1 || (A) || j == n) 
                printf ("*"); 
            else 
                printf (" ");    
        printf ("\n");  
    }
}
```

## C++ 코드

```cpp
void draw(int n) {  
    for (int i=1; i<=n; i++) {    
        for (int j=1; j<=n; j++)      
            if (i==1 || i==n || j==1 || (A) || j == n) 
                cout << '*';
            else 
                cout << ' ';
        cout << '\n';
    }
}
```

## Java 코드

```java
void draw(int n) {  
    for (int i=1; i<=n; i++) {    
        for (int j=1; j<=n; j++)      
            if (i==1 || i==n || j==1 || (A) || j == n)
                System.out.print("*");
            else
                System.out.print(" ");    
        System.out.println();  
    }
}
```

## JavaScript 코드

```JavaScript
function draw(n) {
    for (let i = 1; i <= n; i++) {
        for (let j = 1; j <= n; j++) {
            if (i === 1 || i === n || j === 1 || j === n || (A)) {
                process.stdout.write("*");
            }
            else {
                process.stdout.write(" ");
            }
        }
        process.stdout.write("\n");
    }
}
```

## 보기

다음 보기 중 해당하는 항목 하나를 선택하세요.

### 보기 1

j == n - 1

### 보기 2

j

### 보기 3

i

### 보기 4

j == i or j == n - i + 1

### 보기 5

j == i or j == n - 1

<!-- CODETREE_PROBLEM:END -->
