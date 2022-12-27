#include <stdio.h>
#include "txtfind.h"

#define LINE 256
#define WORD 30
#define ENTER 10
#define TAB 11

int main()
{

    char searchWord[] = {0};
    get_word(searchWord);

    char method = getchar();

    // char a[] = {0};
    // get_line(a);

    if(method == 'a')
    {
        print_lines(searchWord);
    } 

    else if(method == 'b')
    {
        print_similar_words(searchWord);
    } 



    /// check 1,2

    // char s[WORD];
    // int lenLine = get_line(s);
    // printf("%d\n", lenLine);

    // for(int i = 0; i<lenLine; i++)
    // {
    //     printf("%c ,", s[i]);
    // } 
    // printf("\n");

    /// check 3

    // char c1[] = "abcdefg";
    // char c2[] = "deg";
    // printf("%d\n", substring(c1,c2));

    /// check 4

    // char t[] = "cat";
    // char s[] = "catc";
    // printf("%d\n", similar( s, t, 1));

    /// check 5

    // char c[] = {"ab"};
    // print_lines(c);

    /// check 6

    // char w[] = {"cat"};
    // print_similar_words(w);

   
    return 0;
}