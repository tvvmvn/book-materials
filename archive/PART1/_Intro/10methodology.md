# S/W 개발 방법론

1. 개념
1. 객체지향 방법론
1. 컴포넌트 기반 방법론
1. Agile 방법론


## 개념

방법론은 생명주기의 각 단계를 어떻게 수행할지에 대한 철학과 실천 방안을 제시합니다.

소프트웨어 개발은 생명주기 모델이라는 뼈대(단계와 순서) 위에 개발 방법론이라는 철학과 실행 원칙을 적용하여 진행됩니다. 예를 들어, 기업은 나선형 모델을 큰 뼈대로 사용하되, 각 반복 주기는 애자일(스크럼) 방법론에 따라 수행할 수 있습니다.


## 객체지향 방법론

..


## 컴포넌트 기반 방법론(CBD)

..


## 애자일 방법론

Agile. 민첩하고 유연한  
새로운, 젊은 


### 애자일 핵심 가치 4

1. 프로세스와 도구보다는 개인과 상호작용에 더 가치를 둔다
2. 방대한 문서보다는 실행되는 소프트웨어에 더 가치를 둔다
3. 계약 협상보다는 고객과 협업에 더 가치를 둔다
4. 계획은 따르기보다는 변화에 반응하는 것에 더 가치를 둔다


### 종류

- Scrum
- XP
- FDD
- Kanban


## Scrum

`소규모 팀(Scrum)` 중심의 개발 방법.  
팀원 간 소통과 협동심이 중요하다.  
요구사항 변화에 신속하게 대처가능

> Scrum은 럭비 용어. 팀을 가르킵니다

### Scrum Team

- 제품 소유자 (Product Owner)  
개발 의뢰자, 사용자

- 스크럼 마스터 (Scrum Master)  
개발 팀장

- 스크럼 팀 (Scrum Team)  
개발자

![scrum-team](./scrum-team.webp)


### Scrum Process

1. 요구사항
2. 스프린트 계획 회의
3. Sprint
4. Sprint 검토/회고

![scrum-process](./scrum-process.jpg)


#### 1 요구 사항

제품 요구사항 명세서를 `Product Backlog` 라고 부른다.  
개발 과정에서 수정될 수 있다.


#### 2 스프린트 계획 회의

Product Backlog에서 진행할 항목을 선택한다.  
스프린트 별 할일 목록인 `Sprint Backlog`를 작성한다.


#### 3 스프린트

`전력 질주`라는 뜻, 개발을 하는 과정.  
2 - 4주의 기간.  
일일 스크럼 회의를 통해 진행 상황을 점검한다

*일일 스크럼 회의*

스프린트에서 매일 정해진 시간에 약 15분 정도의 짧은 시간 동안 서서하는 회의.
소멸 차트(Burndown Chart)를 통해 남은 작업의 양을 기록한다.

![burndown-chart](./burndown.png)


#### 4 스프린트 검토 및 획고

#### 검토

하나의 스프린트가 끝나면 실행 가능한 제품이 생성되고 이것을 검토한다.
제품 책임자의 피드백은 `Product Backlog`에 추가되고 다음 스프린트에 반영된다

#### 회고

스프린트 결과를 분석하고 규칙이나 표준을 잘 준수했는지 확인한다.  
개발 추정 속도와 실제 작업속도의 차이가 있다면 이유를 분석한다


## XP (eXtreme Programming)

고객의 참여와 개발 과정의 반복을 극대화한다.  
요구사항에 유연하게 대처할 수 있다.   
요구사항의 변동이 심한 경우 적합한 방법론.  
Kent Beck, 1999년

> 까다로운 고객을 대응하기에 안성맞춤인 방법론!

### XP 핵심 가치 5가지

1. 의사소통
2. 단순성
3. 용기
4. 존중
5. 피드백


### XP 핵심 가치를 위한 12가지 실천 사항

#### Fine Scale Feedback  

- Pair Programming
- Planning Game
- Test Driven Development
- Whole Team

#### Continuous Process  

- Continuous Integration
- Design Improvement
- Small Releases

#### Shared Understanding  

- Coding Standards
- Collective Code Ownership
- Simple Design
- System Metaphor

#### Programmer Welfare  

- Sustainable Pace


### XP Process

최종 제품이 출시 될 때까지 반복적

1. User Story - 요구사항
2. Release Planning - 출시 일정 수립
3. Iteration - 개발
4. Acceptance Test - 테스트
5. Small Release - Small(부분 완성품) 출시

![xp-process](./xp-process.jpg)