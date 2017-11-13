#include "fmt.hh"
#include <iostream>

FMT::FMT(){
	ResetAll();
}

void FMT::ResetAll(){
	for(int i=0; i<size; i++)
		ResetEntry(i);
	dispatch_head = 0;
	dispatch_tail = 0;
	fetch = 0;
}

void FMT::ResetEntry(int i){

		FMTtable[i].robID = 0;
		FMTtable[i].mispredictBit = false;
		FMTtable[i].branchPenalty = 0;
		FMTtable[i].L1Cache = 0;
		FMTtable[i].L2Cache = 0;
		FMTtable[i].tlb = 0;
}
/*
FMTentry GetEntry(int i){
	return (FMTtable[i]);	
}*/

void FMT::SetEntryROB(int i, int rob){
	FMTtable[i].robID = rob;
}

void FMT::PrintEntry(int i){
	std::cout<<i<<": "<<FMTtable[i].robID<<std::endl;
}
