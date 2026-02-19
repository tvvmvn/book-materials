# 미들웨어 (Middleware)

중간(Middle)과 소프트웨어(Software)가 합쳐진 단어로 운영 체제와 응용 프로그램 또는 서버와 클라이언트 사이에서 다양한 서비스를 제공하는 소프트웨어입니다. 

- MOM (Message Oriented Middleware)
- TP-Monitor 
- RPC (Remote Procedure Call)
- WAS (Web Application Server)
- ORB (Object Request Broker)


# MOM 

메시지 지향 미들웨어(Message Oriented Middleware)는 다양한 서버들이 서로 메시지를 주고받는 복잡한 환경에서 메시지를 중점적으로 관리하기 위해 설치하는 미들웨어입니다. 

마치 여러 사람들이 편리하고 안전하게 편지를 주고받기 위해 설치한 우체국 같은 역할이라고 생각할 수 있습니다.

예) RabbitMQ, Apache Kafka 


# TP-Monitor

트랜잭션 처리 모니터(TP-Monitor)는 트랜잭션들이 급격히 몰릴 수 있는 환경에서 트랜잭션을 처리하고 감시하기 위해 설치하는 미들웨어입니다. 

예를 들어 인기가 많은 여행지 티켓을 예약하는 과정을 생각해보세요. 동시에 많은 트랜잭션(예약 요청)이 몰리는 경우 TP-Monitor가 일차적으로 트랜잭션을 받고 요청을 처리할 서버들에게 분산시킵니다.


# RPC

RPC는 원격 프로시저(Procedure)를 로컬 프로시저처럼 사용할 수 있는 기능을 제공하는 미들웨어입니다. 

예를 들어 RPC를 활용하면 내가 사용하고 싶은 원격지의 함수를 내 로컬에 있는 함수를 호출하는 것과 똑같이 복잡한 과정을 생략하고 간편하게 호출할 수 있습니다.


# WAS 

WAS(웹 애플리케이션 서버)는 동적 콘텐츠를 처리하기 위해 설치하는 미들웨어입니다.


# ORB 

코바(CORBA) 표준을 구현한 객체지향 미들웨어입니다. 최근에는 TP-Monitor의 장점인 트랜잭션 처리/모니터링을 추가적으로 구현한 제품도 있습니다.
