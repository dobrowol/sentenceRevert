#include <iostream>
#include <cstring>
#include <cstdio>
#include <string>
#include <ios>

char* reverseSentence(const char* sentence)
{
    size_t len = strlen(sentence);
   // std::cout << "sentence len " << len << std::endl;
    char* reversed = new char[len+1];
    const char* buff;
    char* buffReversed = reversed;
    size_t lastWhitespace = len;
    buff  = sentence + len;
    for (int i = len -1; i >= 0; i--)
    {
        buff--;
        if (sentence[i] == ' ')
        {
            std::cout << "space position " << i << " len of word " << lastWhitespace - i << " part of the string " << buff << std::endl;
            snprintf(buffReversed, lastWhitespace - i+1, "%s ", buff+1);
            buffReversed+=lastWhitespace - i;
            std::cout << reversed << std::endl;
            lastWhitespace = i;
        }

    }
    std::cout << "space position " << 0 << " len of word " << lastWhitespace - 0 << " part of the string " << buff << std::endl;
    snprintf(buffReversed, lastWhitespace +1 , "%s", buff);
    reversed[len]= '\0';
    return reversed;
}

int main()
{
    std::cout <<"Hello world"<<std::endl;

    char sentence_c[200];
    std::cin.getline(sentence_c,200);

    char * reversedSentence = nullptr;

    reversedSentence = reverseSentence(sentence_c);
    std::cout <<reversedSentence << std::endl;

    delete reversedSentence;
    return 0;
}

