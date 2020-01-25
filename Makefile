all:
	g++ test.cpp -ldl
test:
	gcc -E test.cpp -o preproc.o
