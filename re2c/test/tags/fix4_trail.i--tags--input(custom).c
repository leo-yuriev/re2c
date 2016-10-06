/* Generated by re2c */
#include <stddef.h>
#include <stdio.h>

static void lex(const char *s)
{
#define YYPEEK()           *s
#define YYSKIP()           ++s
#define YYBACKUP()         marker = s
#define YYRESTORE()        s = marker
#define YYBACKUPCTX()      base = s
#define YYRESTORECTX(dist) s = base + dist
#define YYTAG(tag, dist)   tag = base + dist
#define YYDIST()           (s - base)
    const char *marker, *base, *p1, *p2, *p3;
    
{
	char yych;
	long yyt0p1;
	long yyt0p3;
	YYBACKUPCTX ();
	yych = YYPEEK ();
	switch (yych) {
	case '0':	goto yy4;
	default:	goto yy2;
	}
yy2:
	YYSKIP ();
yy3:
	{ printf("error\n"); return; }
yy4:
	YYSKIP ();
	YYBACKUP ();
	yych = YYPEEK ();
	switch (yych) {
	case '1':
		yyt0p1 = YYDIST();
		goto yy5;
	case '2':
		yyt0p1 = YYDIST();
		goto yy8;
	default:	goto yy3;
	}
yy5:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '1':	goto yy5;
	case '2':	goto yy8;
	default:	goto yy7;
	}
yy7:
	YYRESTORE ();
	goto yy3;
yy8:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '3':
		yyt0p3 = YYDIST();
		goto yy9;
	case '4':
		yyt0p3 = YYDIST();
		goto yy11;
	default:	goto yy7;
	}
yy9:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '3':	goto yy9;
	case '4':	goto yy11;
	default:	goto yy7;
	}
yy11:
	YYSKIP ();
	YYRESTORECTX (YYDIST() - 1);
	YYTAG(p3, yyt0p3);
	YYTAG(p2, (yyt0p3 - 1));
	YYTAG(p1, yyt0p1);
	{
            printf("'%.*s', '%.*s', '%.*s', '%.*s', '%s'\n",
                p1 - base, base,
                p2 - p1, p1,
                p3 - p2, p2,
                s - p3, p3,
                s);
                return;
        }
}

}

int main(int argc, char **argv)
{
    for (int i = 1; i < argc; ++i) {
        lex(argv[i]);
    }
    return 0;
}
