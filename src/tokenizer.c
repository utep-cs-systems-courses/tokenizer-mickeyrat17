#include "tokenizer.h"

// checks if char is a space or tab
int space_char(char c)
{
  if(c==' ' || c == '\t') return 1;
  return 0;
}

//returns true if char is not a space or zero-terminator
int non_space_char(char c)
{
  if(space_char(c) || c =='\0') return 0;
  return 1;
}

char word_start(char *str); 

/* Returns a pointer terminator char following *word */
char *word_terminator(char *word);

/* Counts the number of words in the string argument. */
int count_words(char *str);

/* Returns a fresly allocated new zero-terminated string 
   containing <len> chars from <inStr> */
char *copy_str(char *inStr, short len);

/* Returns a freshly allocated zero-terminated vector of freshly allocated 
   space-separated tokens from zero-terminated str.

   For example, tokenize("hello world string") would result in:
     tokens[0] = "hello"
     tokens[1] = "world"
     tokens[2] = "string" 
     tokens[3] = 0
*/
char **tokenize(char* str);

/* Prints all tokens. */
void print_tokens(char **tokens);

/* Frees all tokens and the vector containing themx. */
void free_tokens(char **tokens);

#endif
