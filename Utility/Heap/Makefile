.PHONY: run all clean cgi

BIN=bin
CPPFLAGS=-g -Wall

$(BIN)/%.o: %.cc %.h
	$(CXX) $(CPPFLAGS) -c -o $@ $<

OBJECTS=HeapTest.cc $(BIN)/PriorityQueue.o \
					$(BIN)/HeapAlgorithm.o

$(BIN)/HeapTest.e: $(OBJECTS)
	$(CXX) $(CPPFLAGS) -o $@ $^

run:
	make
	./bin/HeapTest.e
clean:
	rm -rf $(BIN)/*.o $(BIN)/*.e

