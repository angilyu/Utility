.PHONY: run all clean cgi

BIN=bin
CPPFLAGS=-g -Wall

$(BIN)/%.o: %.cc %.h
	$(CXX) $(CPPFLAGS) -c -o $@ $<

OBJECTS=QueueTest.cc $(BIN)/ArrayQueue.o $(BIN)/Queue.o\
					$(BIN)/ListQueue.o

$(BIN)/QueueTest.e: $(OBJECTS)
	$(CXX) $(CPPFLAGS) -o $@ $^

run:
	make
	./bin/QueueTest.e
clean:
	rm -rf $(BIN)/*.o $(BIN)/*.e

