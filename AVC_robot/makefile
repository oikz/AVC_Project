INCLUDE = -I C:\ENGR101Project3\SFML(32)\include
LIBS = -L C:\ENGR101Project3\SFML(32)\lib
robot.exe: robot.o 
	g++ $(LIBS) -o robot robot.o -lsfml-window  -lsfml-graphics -lsfml-system -lsfml-network 
robot.o: robot.cpp 
	g++  -c $(INCLUDE) robot.cpp 


