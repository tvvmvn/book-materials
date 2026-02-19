# TCP/IP 모델

OSI 모델과 함께 대표적인 통신 프로토콜 체계입니다. OSI가 이론적인 표준이라면 TCP/IP는 실용적인 표준이라고 볼 수 있습니다.

- 응용 계층 (Applicaiton Layer)
- 전송 계층 (Transport Layer)
- 인터넷 계층 (Internet Layer)
- 네트워크 접근 계층 (Network Access Layer)


# 응용 계층

응용 프로그램과 네트워크가 만나는 지점입니다.
OSI 모델의 상위 계층(응용 계층, 표현 계층, 세션 계층)에 해당합니다.

프로토콜: HTTP, FTP, DNS


# 전송 계층

전송할 데이터와 전송 환경에 적합한 전송 방식을 결정합니다.
OSI 모델의 전송 계층에 해당합니다.

프로토콜: TCP, UDP


# 인터넷 계층

주소 지정(Addressing), 라우팅 등을 수행합니다.
OSI 모델의 인터넷 계층에 해당합니다.

프로토콜: IP, ICMP, ARP, RARP


# 네트워크 계층

프레임(frame)을 다루는 계층입니다.
OSI 모델의 데이터 링크 계층, 물리 계층에 해당합니다.

프로토콜: Ethernet, HDLS, ARQ


# 응용 계층의 프로토콜

- HTTP (Hyper Text Tranfer Protocol)
- FTP (File Transfer Protocol)
- SMTP (Simple Mail Transfer Protocol)
- DNS (Domain Name System)


HTTP는 월드와이드웹(www)에서 HTML 문서를 송/수신 하기 위한 표준 프로토콜입니다.
FTP는 시스템 간 파일을 주고 받는 기능을 제공하는 프로토콜입니다.
SMTP는 전자 우편(이메일)을 송/수신 기능을 제공하는 프로토콜입니다.
DNS는 도메인 네임(google.com 등)을 컴퓨터가 이해할 수 있는 IP 주소(숫자)로 변환하는 시스템입니다.


# 전송 계층의 프로토콜

- TCP (Transmission Control Protocol)
- UDP (User Datagram Protocol)


TCP는 데이터를 전송하기 전에 3 Way-Handshake 과정을 통해 연결을 설정합니다. TCP는 데이터를 순서에 맞게 전송하고 전송 속도를 조절하며 문제가 생긴 경우 다시 보내줍니다. 속도보다 신뢰성이 중요한 전송에 사용됩니다. 예를 들어 웹서핑, 이메일, 파일 전송 등

UDP는 데이터를 전송하기 전에 연결 단계를 거치지 않고 전송 순서나 흐름을 신경쓰지 않아 전송 속도가 빠르다는 장점이 있습니다. 따라서 신뢰성과 안정성보다 속도가 중요한 전송에 주로 사용됩니다. 예를 들어 비디오 스트리밍, 영상 통화, 게임 등


# 인터넷 계층의 프로토콜

- IP (Internet Protocol)
- ICMP (Internet Control Message Protocol)
- ARP (Address Resolution Protocol)
- RARP (Reverse Address Resolution Protocol)


IP는 패킷 헤더에 수신자와 발신자의 IP 주소를 입력합니다. 이 헤더를 보고 라우터가 패킷을 보낼 위치를 식별할 수 있습니다.

ICMP는 IP를 보완하는 역할을 하는 프로토콜입니다. 통신 중에 발생하는 오류를 처리하거나 전송 경로를 변경하는 등의 역할을 수행하는 제어 메시지(Control Message)를 관리하는 프로토콜입니다.

ARP(주소 결정 프로토콜)는 IP 주소를 MAC 주소(물리적 주소)로 변환하는 기능을 수행하는 프로토콜입니다. 

RARP(역순 주소 결정 프로토콜)는 MAC 주소(물리적 주소)를 IP 주소로 변환하는 기능을 수행하는 프로토콜입니다. 
