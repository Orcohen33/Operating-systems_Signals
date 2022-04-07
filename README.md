# Operating-systems_Signals

## Signals

 - We were asked to write a program that creates signals.
When each signal causes a different signal to arise.

## Explanation of signals and code

### **What is signal:**

A signal is used to notify a process of an synchronous or asynchronous event. When a signal is sent, the operating system interrupts the target process' normal flow of execution to deliver the signal. If the process has previously registered a signal handler, that routine is executed.

### **What signals we used, and what they were for:**

  - SIGCHLD - child process terminated, stopped, or continued
  - SIGFPE - floating point exception (division by zero)
  - SIGABRT - abnormal termination (abort) signal from abort(3) function (core dump).
  - SIGALRM - alarm clock (timer expired) signal.
  - SIGUSR1 - user-defined signal 1.

## How to run

1. Clone this repository.
2. Open terminal in the folder where you cloned this repository.
3. To compile the code , write in terminal `make` 
4. To run the code, write in terminal `./signals`
5. When finished to run, write in terminal `make clean`


### A video that you can see how to run the code:

https://user-images.githubusercontent.com/92351152/162192780-0b69eda9-d408-428c-983d-bedfe84336eb.mp4

