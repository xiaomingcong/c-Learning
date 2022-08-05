CPP = g++
#hello.exe: main.cpp
#	$(CPP) -o hello.exe main.cpp
.SUFFIXES: .exe .cpp
.cpp.exe:
	$(CPP) $<	
