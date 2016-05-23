all: mainfun.exe

mainfun.exe: mainfun.o
	gcc -o mainfun.exe mainfun.o

mainfun.o: mainfun.c
	gcc -c mainfun.c

clean: 
     
	rm mainfun.o mainfun.exe
