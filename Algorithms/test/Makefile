.PHONY: all clean run

TESTS=MathTest.e ConvTest.e

run:
	(cd ..; make)
	make all
	ls *.e | xargs -n1 ./call.sh

all: $(TESTS)

%.e: %.cc
	# g++ -o $@ $< ../Algorithm.a -I. -lgtest 
	g++ -o $@ $< ../Conv.o ../Sqrt.o -I. -lgtest 

clean:
	rm -rf *.e

