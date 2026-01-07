# Java Threads

Threads allows a program to operate more efficiently by doing multiple things at the same time.

Threads can be used to perform complicated tasks in the background without interrupting the main program.

There are two ways to create a thread.


## extending the Thread class and overriding its run() method:

the thread can be run by creating an instance of the class and call its start() method:

```java
public class MyThread extends Thread {
  public void run() {
    System.out.println("This code is running in a thread");
  }
}

MyThread thread = new MyThread();
thread.start();

System.out.println("This code is outside of the thread");
```


## implement the Runnable interface:

the thread can be run by passing an instance of the class to a Thread object's constructor and then calling the thread's start() method:

```java
public class MyRunnable implements Runnable {
  public void run() {
    System.out.println("This code is running in a thread");
  }
}

MyRunnable runnable = new MyRunnable();
Thread thread = new Thread(runnable);

thread.start();

System.out.println("This code is outside of the thread");
```