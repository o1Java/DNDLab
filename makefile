group=character.o main.o barbarian.o wizard.o main.o

DND: $(group)
	c++ $(group) -o DND

main.o: main.cpp 
	c++ -c main.cpp
	
character.o: character.cpp character.h
	c++ -c character.cpp

wizard.o: wizard.cpp wizard.h
	c++ -c wizard.cpp

barbarian.o: barbarian.cpp barbarian.h
	c++ -c barbarian.cpp
