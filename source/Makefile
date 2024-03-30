# Tell make that these targets are not files.
.PHONY: all build doc clean

CXXFLAGS=-std=c++17 -g

# HINT: These variables may be useful for target doc.
CONFIG_FILES=doxygen.conf
SOURCE_FILES=game.cpp othello.cpp main.cpp
HEADER_FILES=colors.hpp game.hpp othello.hpp

all: build doc
build: othello_main

othello_main: main.o game.o othello.o
	$(CXX) $(LDFLAGS) -o $@ $^

main.o: main.cpp game.hpp othello.hpp
	$(CXX) $(CXXFLAGS) -c -I../vendors -o $@ $<

doc: $(CONFIG_FILES) $(SOURCE_FILES) $(HEADER_FILES)
	@echo "Generating documentation using Doxygen..."
	doxygen $(CONFIG_FILES)

clean:
	@echo "Cleaning up..."
	-rm -f *.o
	-rm othello_main
	-rm -rf docs-generated

