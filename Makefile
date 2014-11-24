CXX = g++
CXXFLAGS = -Wall -MMD
EXEC = flood
OBJECTS = main.o square.o lateralsquare.o level.o level0.o
DEPENDS = ${OBJECTS:.o=.d}

${EXEC}: ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}

-include ${DEPENDS}

.PHONY: clean

clean:
	rm ${OBJECTS} ${EXEC} ${DEPENDS}
