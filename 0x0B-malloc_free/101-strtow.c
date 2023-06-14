#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(char *str);

/**
 * extract_word - Extracts a word from a string.
 * @str: The input string.
 * @index: Pointer to the current index in the string.
 *
 * Return: The extracted word.
 */
char *extract_word(char *str, int *index);

/**
 * free_words - Frees memory allocated for an array of words.
 * @words: The array of words.
 */
void free_words(char **words);

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of words, or NULL on failure.
 */
char **strtow(char *str)
{
        int word_count;
	int word_index;
	char **words;
	int i;

	if (str == NULL || *str == '\0')
        {
                return NULL;
        }

        word_count = count_words(str);
        if (word_count == 0)
        {
                return NULL;
        }

        words = (char **)malloc((word_count + 1) * sizeof(char *));
        if (words == NULL)
        {
                return NULL;
        }

        word_index = 0;
        for (i = 0; i < word_count; i++)
        {
                words[i] = extract_word(str, &word_index);
                if (words[i] == NULL)
                {
                        free_words(words);
                        return NULL;
                }
        }

        words[word_count] = NULL;
        return words;
}

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
        int count = 0;
        int length = strlen(str);
        int i = 0;

        while (i < length)
        {
                while (i < length && str[i] == ' ')
                {
                        i++;
                }

                if (i < length && str[i] != '\0')
                {
                        count++;

                        while (i < length && str[i] != ' ')
                        {
                                i++;
                        }
                }
        }

        return (count);
}

/**
 * extract_word - Extracts a word from a string.
 * @str: The input string.
 * @index: Pointer to the current index in the string.
 *
 * Return: The extracted word.
 */
char *extract_word(char *str, int *index)
{
        int length = strlen(str);
        int start = *index;
	int end;
	int word_length;
	char *word;

        while (start < length && str[start] == ' ')
        {
                start++;
        }

        if (start >= length)
        {
                return (NULL);
        }

        end = start;

        while (end < length && str[end] != ' ')
        {
                end++;
        }

        *index = end;

        word_length = end - start;
        word = (char *)malloc((word_length + 1) * sizeof(char));
        if (word == NULL)
        {
                return (NULL);
        }

        strncpy(word, str + start, word_length);
        word[word_length] = '\0';

        return (word);
}

/**
 * free_words - Frees memory allocated for an array of words.
 * @words: The array of words.
 */
void free_words(char **words)
{

	int i;

	if (words == NULL) {
        return;
    }
    
    for (i = 0; words[i] != NULL; i++) {
        free(words[i]);
    }
    
    free(words);
}

