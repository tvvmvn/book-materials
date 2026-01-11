#  제어자


- 접근 제어자(Access Modifiers)
- 비접근 제어자(Non-Access Modifiers)


# 접근 제어자

1. 클래스

- default (기본값)
- public

default 클래스는 같은 패키지 내의 클래스들만 접근할 수 있습니다. 기본값 접근 제어자입니다. public 클래스는 프로그램 내의 모든 클래스에서 접근할 수 있습니다.


2. 클래스 멤버

- default (기본값)
- public
- private
- protected

default 멤버는 같은 패키지 내의 클래스에서 접근할 수 있습니다. 
public 멤버는 모든 클래스에서 접근할 수 있습니다.
private은 해당 private 변수가 선언된 클래스에서만 접근할 수 있습니다.
protected는 같은 패키지 내의 클래스 또는 하위 클래스에서 접근할 수 있습니다.



# 비접근 제어자

1. 클래스

- final
- abstract

final 클래스는 상속할 수 없는 클래스입니다.
abstract 클래스는 객체 생성이 불가능한 클래스입니다.


2. 클래스 멤버

- final
- static
- abstract
- transient
- synchronized
- volatile

final 멤버는 수정/Override할 수 없습니다.

static 멤버는 인스턴스가 아닌 클래스의 속성입니다. 따라서 인스턴스를 생성할 필요없이 클래스를 이용해 접근 가능합니다.

abstract 멤버는 abstract 클래스의 메서드에만 사용할 수 있는 비접근 제어자입니다. abstract 메서드는 몸체가 없으며 상속받은 클래스가 이를 구현해야 합니다.