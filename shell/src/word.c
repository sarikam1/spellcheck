#include "dictionary.h"
#include <stdio.h>
#include <strings.h>





int valid_word(char* word, dict_t* dict) {
	///printf("output is %d ", in_dict(word, dict));
	if (*word == ',' || *word == '\n' || *word == '.') { //we cannot spellcheck for punctuation
		return 1;
	}
    return in_dict(word, dict);
}

	