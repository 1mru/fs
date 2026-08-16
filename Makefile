CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -O2
PREFIX = /usr/local/bin
SOURCE = fs.cpp
TARGET = fs

$(TARGET) : $(SOURCE)
		$(CXX) $(CXXFLAGS) $(SOURCE) -o $(TARGET)

install: $(TARGET)
		install -m 755 $(TARGET) $(PREFIX)/$(TARGET)

uninstall:
		rm -f $(PREFIX)/$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: clean install uninstall
