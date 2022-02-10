all: unit werewolf soldier state humanState wolfState main
	g++ *.o -o main.exe

unit: Unit.cpp
	g++ -c Unit.cpp -o Unit.o

werewolf: Werewolf.cpp
	g++ -c Werewolf.cpp -o Werewolf.o

soldier: Soldier.cpp
	g++ -c Soldier.cpp -o Soldier.o

state: State.cpp
	g++ -c State.cpp -o State.o

humanState: HumanState.cpp
	g++ -c HumanState.cpp -o HumanState.o

wolfState: WolfState.cpp
	g++ -c WolfState.cpp -o WolfState.o

main: main.cpp
	g++ -c main.cpp -o main.o

clear:
	rm *.o *.exe
