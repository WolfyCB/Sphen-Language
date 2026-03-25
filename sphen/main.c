#include <stdio.h>
#include "parser.h"

int main() {
	Parser p = parser_init("program/main.th");

	printf("code:\n%s\n", p.lexer.code);
	
	parse(&p);

	parser_close(&p);
    return 0;
}
