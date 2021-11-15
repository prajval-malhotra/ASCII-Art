CXX = g++
CXXFLAGS = -g -std=c++14 -Wall -MMD
EXEC = art
OBJECTS = studio.o asciiart.o blank.o main.o decorator.o filledBox.o blinkingBox.o movingBox.o maskBox.o subject.o addtext.o addgraphics.o window.o
DEPENDS = ${OBJECTS:.o=.d}

${EXEC}: ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC} -lX11

-include ${DEPENDS}

.PHONY: clean

clean:
	rm ${OBJECTS} ${EXEC} ${DEPENDS}
