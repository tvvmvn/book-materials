# Protocols

## 목차

1. 프로토콜 개념
1. 프로토콜의 요소
1. 기능
1. 패킷 교환 방식
1. 종류


## 프로토콜 개념

Protocol(의례, 관습)  
서로 다른 기기들 간의 데이터 교환을 원활하게 수행할 수 있도록 표준화 시켜놓은 통신 규약.  
1965년 톰 마릴(Tom Marill)이 컴퓨터가 메시지를 전달하고, 메시지가 제대로 도착했는지 확인하며, 도착하지 않았을 경우 재전송하는 일련의 방법을 '기술적 은어'란 뜻의 프로토콜로 정의한 바 있다.

```
규약은 규칙과 비슷합니다. 
프로토콜은 통신에 참여하는 기기들이 지켜야 하는 규칙이라고 볼 수 있죠.
```


## 프로토콜의 구성 요소

1. 구문 (Syntax) 
2. 의미 (Semantics)
3. 시간 (Timing)

**구문** 전송하고자 하는 데이터의 형식, 부호화, 신호 레벨 등을 규정한다.

**의미** 두 기기 간의 효율적이고 정확한 정보 전송을 위한 협조 사항과 오류 관리를 위한 제어 정보를 규정한다.

**시간** 두 기기 간의 통신 속도, 메시지의 순서 제어 등을 규정한다.

```
..
```


## 프로토콜의 기능

- 흐름 제어 (Flow Control)
- 연결 제어 (Connection Control)
- 오류 제어 (Error Control)
- 순서 제어 (Sequencing Control)
- 동기화 (Synchronization)
- 다중화 (Multiplexing)
- 주소 지정 (Addressing)


## Internet Protocols Suite

TCP/IP Protocols Suite

1. Application Layer 
2. Transport Layer 
3. Internet Layer 
4. Link Layer 


## 애플리케이션 계층 

- HTTP
- SMTP
- FTP
- DNS
- TELNET


### HTTP

Hyper Text Transfer Protocol

### SMTP

Simple Mail Transfer Protocol

### FTP 

File Transfer Protocol


## 전송 계층 

- TCP
- UDP
- RTCP


### TCP

TCP 통신에서 두 컴퓨터는 '핸드셰이크'라는 자동화된 프로세스를 통해 연결을 설정하는 것으로 시작합니다. 이 핸드셰이크가 완료된 후에만 실제로 데이터 패킷이 한 컴퓨터에서 다른 컴퓨터로 전송됩니다.

또한 TCP 통신은 데이터 패킷이 수신되어야 하는 순서를 나타내고 패킷이 의도한 대로 도착하는지 확인합니다. 패킷이 도착하지 않는 경우(예: 중간 네트워크의 혼잡으로 인해) TCP를 다시 보내야 합니다. 

### UDP

비디오 재생 또는 DNS 조회와 같이 시간에 민감한 전송을 위해 인터넷을 통해 사용됩니다. 이 프로토콜의 경우 데이터가 전송되기 전에는 공식적으로 연결이 설정되지 않으므로 통신 속도가 빨라집니다. 따라서 데이터를 아주 빠르게 전송할 수 있지만, 전송 중에 패킷이 손실되어 DDoS 공격의 형태로 악용될 수 있습니다


### RTCP

Real-Time Control Protocol.  
RTP패킷의 전송 품질을 제어하기 위한 프로토콜


```
TCP와 UDP는 각각 장단점이 명확하네요.
TCP는 안전하지만 지연과 복잡도 문제,
UDP는 빠르지만 안전성 문제가 더 빈번하겠어요.
```


## 인터넷 계층 

- IP
- ICMP
- IGP / EGP
- ARP / RARP


### IP 

Internet Protocols.  
소스 장치에서 대상 장치로 정보 패킷을 전달하는 것이 핵심 기능입니다. IP는 패킷 순서 지정 또는 오류 검사를 처리하지 않습니다. 이러한 기능은 다른 또 하나의 프로토콜을 필요로 하며 대개의 경우 전송 제어 프로토콜(TCP)이 그 역할을 합니다.

```
TCP/IP 관계는 퍼즐에 메시지를 작성하여 우편으로 보내는 것과 비슷합니다. 퍼즐의 조각들은 각각 다른 우편 경로를 통해 전달되고 조각마다 도착하는데 걸리는 시간도 다릅니다. 퍼즐의 조각들은 도착하면 순서가 뒤죽박죽되어 있을 것입니다. 

IP는 각 조각이 목적지 주소에 도착하도록 합니다. TCP 프로토콜은 반대쪽에서 조각들을 올바른 순서로 맞추고, 누락된 조각을 다시 보내달라고 요청하고, 발신자에게 조각을 받았음을 알려주는 사람으로 생각하면 됩니다. 
```

### ICMP

Internet Control Message Protocol.  
인터넷 제어 메시지 프로토콜(ICMP)은 네트워크 `통신 문제`를 진단하는 데 사용하는 네트워크 계층 프로토콜입니다. ICMP는 주로 데이터가 의도한 대상에 적시에 도달하는지 여부를 확인하는 데 사용됩니다. 

### IGP / EGP

라우팅 프로토콜은 내부 게이트웨이 프로토콜(IGP)과 외부 게이트웨이 프로토콜(EGP)이라는 2가지 범주로 분류됩니다. IGP는 단일 조직에서 관리자가 제어하는 네트워크인 자율 시스템(AS)에서 가장 효괴적으로 작동합니다. EGP는 두 자율 시스템 간의 정보 전송을 관리하는 데 보다 적합합니다.

### IGP (Internal Gateway Protocols)
  
- RIP
- OSPF(Open Shotest Path First)

**RIP** 홉 수를 기준으로 네트워크 간의 최단 경로를 결정합니다. RIP는 대규모 네트워크를 구현하는 데 적합하지 않기 때문에 현재는 사용되지 않는 레거시 프로토콜입니다.
최단 경로 탐색에 Bellman-Ford 알고리즘을 사용합니다.

**OSPF** RIP의 단점을 해결한 프로토콜. 대규모 네트워크에서 많이 사용됩니다.
최단 경로 탐색에 다익스트라(Dijkstra) 알고리즘을 사용합니다.


### EGP (External Gateway Protocol)
  
**BGP** Border Gateway Protocol(BGP)은 유일한 외부 게이트웨이 프로토콜입니다.


### ARP / RARP

**ARP** Address Resolution Protocol.
IP주소를 물리적 주소(MAC Address)로 변환하는 기능을 수행한다

**RARP** Reverse ARP.
MAC Address(물리적 주소)를 IP주소로 변환하는 기능을 수행한다


## 링크 계층

- X.25


### X.25

흐름 및 오류 제어 기능을 제공한다.  
패킷형 단말기의 패킷 교환망 접속 기능을 제공한다.  

