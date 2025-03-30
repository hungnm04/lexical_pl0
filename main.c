#include "lexer.h"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        return 1;
    }
    
    initLexer(argv[1]);
    
    do {
        getToken();
        if (Token == NONE) break;
        printToken();
    } while (Token != NONE);
    
    closeLexer();
    return 0;
}
