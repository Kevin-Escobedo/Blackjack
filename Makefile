CXX=g++
WCXX=x86_64-w64-mingw32-g++

CXXFLAGS=-std=c++17 -Wpedantic -Wall -Werror -Wextra -Weffc++ -Wzero-as-null-pointer-constant
LIBS=-static-libgcc -static-libstdc++
OPTIMIZE=-O2

FILES=Card.h Card.cpp Deck.h Deck.cpp Blackjack.h Blackjack.cpp main.cpp
TARGET=blackjack

all: $(TARGET) $(TARGET).exe
$(TARGET): $(FILES)
	$(CXX) $(CXXFLAGS) $(OPTIMIZE) $(FILES) -o $(TARGET)

$(TARGET).exe: $(FILES)
	$(WCXX) $(CXXFLAGS) $(OPTIMIZE) $(LIBS) $(FILES) -o $(TARGET).exe

run: $(TARGET)
	valgrind ./$(TARGET)

clean:
	/bin/rm -f $(TARGET)
	/bin/rm -f $(TARGET).exe
