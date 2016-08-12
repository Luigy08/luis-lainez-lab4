lab4_llainez: lab4_llainez.o trianguloPascal.o
	g++ lab4_llainez.o trianguloPascal.o -o lab4_llainez

lab4_llainez.o: lab4_llainez.cpp trianguloPascal.h
	g++ -c lab4_llainez.cpp

trianguloPascal.o: trianguloPascal.h trianguloPascal.cpp
	g++ -c trianguloPascal.cpp
