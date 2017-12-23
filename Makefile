main: test dll
	testdll

test: testdll.o
	g++ -o testdll testdll.o

testdll.o: testdll.cpp
	g++ -std=c++11 -Wall -c testdll.cpp -o testdll.o

dll: dllmain.o
	g++ -shared dllmain.o -o dllmain.dll

dllmain.o: dllmain.cpp
	g++ -std=c++11 -Wall -c dllmain.cpp -DBUILD_DLL -o dllmain.o

.PHONY: clean
clean:
	rm -rf *.o *.exe & del *.o *.exe
