.PHONY: run clean all test

ALGORITHM_OBJECTS=Sqrt.o Conv.o Compact.o FindSubstring.o

Algorithm.a: $(ALGORITHM_OBJECTS)
	rm -f Algorithm.a
	ar -cq Algorithm.a $^

%.o: %.cc
	echo "touched"
	g++ -c -o $@ $<

test:
	(cd test; make)

FindRemovedNumber.e: FindRemovedNumber.cc
	g++ -o FindRemovedNumber.e FindRemovedNumber.cc
ToInt.e: ToInt.cc
	g++ -o ToInt.e ToInt.cc
SplitWords.e: SplitWords.cc
	g++ -o SplitWords.e SplitWords.cc
BinarySearch.e: BinarySearch.cc
	g++ -o BinarySearch.e BinarySearch.cc
MergeSort.e: MergeSort.cc
	g++ -o MergeSort.e MergeSort.cc
QuickSort.e: QuickSort.cc
	g++ -o QuickSort.e QuickSort.cc
Sqrt.e: Sqrt.cc
	g++ -o Sqrt.e Sqrt.cc
FindKth.e: FindKth.cc
	g++ -o FindKth.e FindKth.cc
PartitionAnyType.e: PartitionAnyType.cc PartitionAnyType.h
	g++ -o PartitionAnyType.e PartitionAnyType.cc
PartitionCriteria.e: PartitionCriteria.cc
	g++ -o PartitionCriteria.e PartitionCriteria.cc
PartitionZero.e: PartitionZero.cc
	g++ -o PartitionZero.e PartitionZero.cc
InplaceMerge.e: InplaceMerge.cc
	g++ -o InplaceMerge.e InplaceMerge.cc
HasDuplicate.e: HasDuplicate.cc
	g++ -o HasDuplicate.e HasDuplicate.cc
Compact.e: Compact.cc
	g++ -o Compact.e Compact.cc
MergeTwoArray.e: MergeTwoSortedArray.cc
	g++ -o MergeTwoSortedArray.e MergeTwoSortedArray.cc

clean: 
	rm -rf *.e rm *.o *.a
run:
	make FindRemovedNumber
	./FindRemovedNumber.e

