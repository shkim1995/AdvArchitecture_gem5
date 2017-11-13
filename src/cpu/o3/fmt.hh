/* Author: Sehoon Kim */

#ifndef __FMT__
#define __FMT__


typedef
struct _FMTentry{
	int robID;
	bool mispredictBit;
	int branchPenalty;
	int L1Cache;
	int L2Cache;
	int tlb;
} FMTentry;


class FMT{
	private:
		int size = 50;
		FMTentry FMTtable[50];

	public:
		/* functions*/
		FMT();
		void ResetEntry(int i);
		void ResetAll();
		FMTentry *GetEntry(int i);
		void SetEntryROB(int i, int rob);
		void PrintEntry(int i);

		/*variables*/
		int dispatch_head;
		int dispatch_tail;
		int fetch;
};

#endif
