.PHONY: all clean run

TESTS=MathTest.e

run:
	(cd ..; make)
	make all
	ls *.e | xargs ./call.sh

all: $(TESTS)

%.e: %.cc
	g++ -o $@ $< ../Sqrt.o -I. -lgtest 

clean:
	rm -rf *.e

