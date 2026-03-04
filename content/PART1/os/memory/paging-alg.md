# 페이지 교체 알고리즘

페이지의 부재가 발생하면 가상기억장치에서 필요한 페이지를 찾아 주기억장치에 적재해야 합니다. 이때 주기억장치의 모든 페이지 프레임이 사용중일 때 어떤 페이지 프레임을 교체할 것인지 결정하는 알고리즘을 의미합니다

- FIFO (First In First Out)
- LRU (Least Recently Used)
- LFU (Least Frequently Used)
- OPT (OPTimal replacement)
- NUR (Not Used Recently)
- SCR (Second Change Replacement)


# FIFO

FIFO(First In First Out)는 가장 먼저 들어온(가장 오래된) 페이지를 교체하는 기법입니다.

페이지 참조 순서가 다음과 같을 때 페이지 부재의 수는?
[2, 3, 2, 1, 5, 2, 3, 5]

FIFO: 6번

1. #2 => 2
2. #3 => 23
3. 2 => 23
4. #1 => 231 
5. #5 => 315
6. #2 => 152
7. #3 => 523
8. 5 => 523


# LRU

LRU(Least Recently Used)는 최근에 가장 적게 사용된 페이지를 교체하는 기법입니다.

페이지 참조 순서가 다음과 같을 때 페이지 부재의 수는?
[2, 3, 2, 1, 5, 2, 3, 5]

LRU: 5번

1. #2 => 2
2. #3 => 23
3. 2 => 32
4. #1 => 321
5. #5 => 215
6. 2 => 152
7. #3 => 523
8. 5 => 235


# 기타

LFU(Least Frequently Used)는 사용 빈도가 가장 적은 페이지를 교체하는 기법입니다.

OPT(OPTimal replacement)는 앞으로 가장 오랫동안 사용하지 않을 페이지를 교체하는 기법입니다.
