hello: hello.o
	g++ -o $@ $^

hello.o: hello.cpp
	g++ -c $^

clean:
	rm -f hello *.o
