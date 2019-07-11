CC = gcc
all:
	${CC} -c fgets.c -isystem opt
	${CC} -c opt/test.cpp
	${CC} -c opt/hello/hello.cpp
	${CC} -c function_metrics.c
	${CC} -c c99.c
clean:
	rm -rf fgets.o
	rm -rf opt/test.o
	rm -rf function_metrics.o
	rm -rf c99.o
	rm -rf opt/hello/hello.o