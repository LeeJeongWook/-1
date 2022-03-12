4.알고리즘의 시간 복잡도 분석

알고리즘: 주어진 문제를 해결하는 한 가지 방법을 명료하게 써 놓은

4.1 도입
프로그램의 실행 시간은 알고리즘의 속도를 일반적으로 이야기하는 기준이 되기에는 부적합하다
- 사용한 프로그래밍 언어, 하드웨어, 운영체제, 컴파일러 등 수많은 요소에 의해 바뀔 수 있다.
- 실제 수행 시간이 다양한 입력에 대한 실행 시간을 반영하지 못한다.(입력의 크기나 특성에 따라 수행 시간이 달라질 수 있다)

**반복문이 지배한다**
입력의 크기가 작을때는 반복외의 다른 부분들이 갖는 비중이 클 수 있지만, 입력의 크기가 커지면 커질수록 반복문이 알고리즘의 수행 시간을 지배하게된다.


4.2 선형 시간 알고리즘
수행 시간이 N인 알고리즘은은 선형 시간(Linear time)알고리즘이라고 부른다. 선형 시간에 실행되는 알고리즘은 대개 찾을 수 있는 알고리즘 중 가장 좋은 알고리즘인 경우가 많다.


4.3 선형 이하 시간 알고리즘
입력의 크기가 커지는 것보다 수행 시간이 느리게 증가하는 알고리즘을 선형 이하 시간(Sublinear Time)알고리즘이라 한다.

- 이진 탐색 
N번의 작업에 대해 매번 절반씩 나누어 1 이하가 될 댸까지 나누게 된다면 밑이 2인 log로 표현 할 수 있다


4.4 지수 시간 알고리즘
다항 시간 알고리즘 : 하나의 분류에 포함되는 알고리즘 간에는 엄청나게 큰 시간 차이가 날 수 있다.(N, N^2, N^10, N^100도 다항시간이다)
지수 시간 알고리즘 : N이 하나 증가할 때마다 걸리는 시간이 배로 증가하는 알고리즘


4.5 시간 복잡도
시간복잡도 : 알고리즘의 수행 시간 기준으로 알고리즘이 실행되는 동안 수행하는 기본적인 연산의 수를 입력의 크기에 대한 함수로 표현한 것이다.
시간복잡도가 낮다고 해서 언제나 더 빠르게 동작하는 것은 아니다 - 입력의 크기가 충분히 작을 때는 시간 복잡도가 높은 알고리즘이 더빠르게 동작할 수도있다 더빠르게동작할수도있다.
때문에 해결할 입력의 크기가 매우 작을 경우 시간 복잡도는 큰 의미를 갖지 못할 수도 있다.

- 입력의 종류에 따른 수행 시간의 변화
입력의 크기가 수행 시간을 결정하는 유일한 척도는 아니다.
입력이 어떤 형태로 구성되어 있는지도 수행 시간에 영향을 미친다

- 점근적 시간 표기 : O표기법(Big-O Notation)
주어진 함수에서 가장 빨리 증가하는 항만을 남긴 채 나머지를 다 버리는 표기법
Ex. N^2 + N + 4 -> O(N^2) : 오더 엔 제곱
Ex. 42 = O(1) : 상수 시간(Constant-time)알고리즘

O표기법이 수행 시간의 상한을 나타낸다 해서 알고리즘의 최악의 수행 시간을 알아내는것이 아니다.
O표기법은 각 경우의 수행 시간을 간단히 나타내는 표기법일 뿐, 특별히 최악의 수행 시간과 관련이 있는 것은 아니다.

- 시간 복잡도의 분할 상환 분석
알고리즘의 시간 복잡도를 항상 반복문의 개수를 세는 것으로만 결정하지는 않는다.
가끔은 문제의 조건에 따라 그보다 더 정확한 시간 복잡도를 계산하는 것도 가능한데, 그 대표적인 예가 시간 복잡도의 분할 상환 분석(Amortized Analysis)을 사용하는 것이다.


4.6 수행 시간 어림짐작하기


4.7 계산 복잡도 클래스 : P, NP
시간 복잡도는 알고리즘의 특성이지 문제의 특성이 아니다.
한 문제를 푸는 두 가지 이상의 알고리즘이 있을 수 있고, 이들의 시간 복잡도는 각각 다를 수 있기 때문이다.
- 계산 복잡도 이론
각 문제에 대해 이를 해결하는 얼마나 빠른 알고리즘이 존재하는지를 기준으로 문제들을 분류하고 각 분류의 특성을 연구하는 학문이다

P(Polynomial) 문제 : 다항 시간 알고리즘이 존재하는 문제들의 집합
NP(Non-Polynomial) 문제 : 답이 주어졌을 대 이것이 정답인지를 다항 시간 내에 확인할 수 있는 문제

