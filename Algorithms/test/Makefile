.PHONY: all clean run

TESTS=MathTest.e ConvTest.e StringTest.e

run:
	(cd ..; make)
	make all
	ls *.e | xargs -n1 ./call.sh

all: $(TESTS)

%.e: %.cc ../Algorithm.a
	g++ -o $@ $^ -I. -lgtest 

clean:
	rm -rf *.e

