.PHONY: run clean all

ALGORITHM_OBJECTS=Sqrt.o

Algorithm.a: $(ALGORITHM_OBJECTS)
	ar -cvq Algorithm.a $<

%.o: %.cc
	g++ -c -o $@ $<

FindRemovedNumber.e: FindRemovedNumber.cc
	g++ -o FindRemovedNumber.e FindRemovedNumber.cc
MyAtoi.e: MyAtoi.cc
	g++ -o MyAtoi.e MyAtoi.cc
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
Deduplicate.e: Deduplicate.cc
	g++ -o Deduplicate.e Deduplicate.cc
Compact.e: Compact.cc
	g++ -o Compact.e Compact.cc
MergeTwoArray.e: MergeTwoSortedArray.cc
	g++ -o MergeTwoSortedArray.e MergeTwoSortedArray.cc

clean: 
	rm -rf *.e rm *.o *.a
run:
	make FindRemovedNumber
	./FindRemovedNumber.e

