#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    int ch;
    int pre;
    int word_num = 0;
    int char_num = 0;

    /*标记 是否正在输入单词*/
    bool inword = false;            

    while ((ch = getchar()) != EOF)
    {
        if (ispunct(ch))
        {  
            continue;
        }

        if (isalpha(ch))
        {
            char_num++;
        }
        /*
        输入字母时，检测是否处在“正在输入单词”状态。
        是，跳过
        否，单词个数+1
        */
        if (!isspace(ch) && !inword)
        {
            word_num++;
            inword = true;
        }
        /*检测到空格输入，取消“正在输入单词”状态*/
        if (isspace(ch) && inword)
        {
            inword = false;
        }
    }   
    printf("Characters: %d.\n", char_num);
    printf("Words: %d.\n", word_num);
    /*注意数据类型转换*/
    printf("Characters per Word: %f.\n", (float)char_num / word_num);

    return 0;
}