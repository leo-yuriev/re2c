/* Generated by re2c */
// This test shows that tag liveness should be attributed to DFA edges,
// not to DFA states. State granularity is too crude: there might be
// two different paths to the same state, with some tag alive on one
// path but not on the other. If liveness is attributed to states, then
// tag liveness on one path implies tag liveness in the join state,
// which affects the other path. But if liveness is attributed to
// edges, then liveness of one path won't affect liveness of the other.

// In this example tag 'p' is loop-invariant: it should be moved out
// of loop and set once in the very end. However, if liveness is
// attributed to states rather than edges, the accepting state (dispatch
// on 'yyaccept') will force liveness on the looping path and prevent
// tag from hoisting out of loop.


{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	long yyt0p;
	YYCTXMARKER = YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
	case 'a':	goto yy3;
	default:	goto yy2;
	}
yy2:
	p = YYCTXMARKER + yyt0p;
	{ p }
yy3:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':	goto yy5;
	default:	goto yy4;
	}
yy4:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		goto yy2;
	} else {
		yyt0p = (YYCURSOR - YYCTXMARKER);
		goto yy2;
	}
yy5:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy3;
	default:
		yyt0p = (YYCURSOR - YYCTXMARKER);
		goto yy2;
	}
}

re2c: warning: line 17: rule matches empty string [-Wmatch-empty-string]
