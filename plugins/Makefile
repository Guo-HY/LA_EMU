CXX = g++
CXXFLAGS = -g -O2 -Werror -fPIC -std=c++11 -I.. -I../include

SRCS = $(wildcard *.cc)
LIBS = $(patsubst %.cc,lib%.so,$(SRCS))

all: $(LIBS)

lib%.so: %.cc
	$(CXX) $(CXXFLAGS) -shared -o $@ $<

clean:
	rm -f *.so

.PHONY: all clean
