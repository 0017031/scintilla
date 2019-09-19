#ifndef SCINTILLA_NPP_INCLUDE_H
#define SCINTILLA_NPP_INCLUDE_H

#ifdef KEYWORDSET_MAX
#undef KEYWORDSET_MAX
#endif
#define KEYWORDSET_MAX 30

#define SC_SEARCHRESULT_LINEBUFFERMAXLENGTH 1024

#define SCN_SCROLLED 2080
#define SCN_FOLDINGSTATECHANGED 2081

struct SearchResultMarking {
	long _start;
	long _end;
};

struct SearchResultMarkings {
	long _length;
	SearchResultMarking *_markings;
};

#endif //SCINTILLA_NPP_INCLUDE_H