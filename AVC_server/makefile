INCLUDE = -I C:\ENGR101Project3\SFML(32)\include
LIBS = -L C:\ENGR101Project3\SFML(32)\lib
server3.exe: server3.o 
	g++ $(LIBS) -o server3 server3.o -lsfml-window  -lsfml-graphics -lsfml-system -lsfml-network 
server3.o: server3.cpp 
	g++  -c $(INCLUDE) server3.cpp 


