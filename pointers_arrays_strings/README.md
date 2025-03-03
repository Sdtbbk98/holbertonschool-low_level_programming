
# C - More pointers, arrays and strings
## who am i ?
[![Typing SVG](https://readme-typing-svg.herokuapp.com?font=Sigmar&pause=1000&width=435&lines=I+am+Sadat+BABAK+;sdtbbk98+at+HolbertonSchool)](https://git.io/typing-svg)

## Github stats
![sdtbbk98's Streak](https://github-readme-streak-stats.herokuapp.com/?user=sdtbbk98&theme=vue-dark&hide_border=true)

## Programming language used
![sdtbbk98's Top Languages](https://github-readme-stats.vercel.app/api/top-langs/?username=sdtbbk98&theme=synthwave&show_icons=true&hide_border=true&layout=compact)
### DESCRIPTION: 
In this projet you will learn more about Pointers, arrays and strings.

In addition, you will find code down below that i used to complete all task of this project. I add some tips how to solve , intallation, how to use and helper (the one who help me complete my task i will add his github or slack ;)).
#### Table of Contents

- [x] - [0. strcat](#0.strcat)
- [x] - [1. strncat](#1.strncat)
- [x] - [2. strncpy](#2.strncpy)
- [x] - [3. strcmp](#3.strcmp)
- [x] - [4.I am a kind of paranoid in reverse. I suspect people of plotting to make me happy](#4.I)
- [x] - [ 5. Always look up ](#5.Always)
- [ ] - [ 6. Expect the best. Prepare for the worst. Capitalize on what comes ](#6.Expect)
- [x] - [ 7. Mozart composed his music not for the elite, but for everybody ](#7.Mozart)

# Tasks
## 0.strcat
Task description see Holberton school platform.

Tips:

#### .C Programe:
`

    #include "main.h"


    /**
    * _strcat - Concatenates two strings.
    * @dest: Pointer to the destination string.
    * @src: Pointer to the source string to be appended.
    *
    * Return: Pointer to the resulting string @dest.
    */


    char *_strcat(char *dest, char *src)
    {

        int dest_len = 0;
        int index = 0;

        while (dest[dest_len] != '\0')
        {
            dest_len++;
        }
        while (src[index] != '\0')
        {
            dest[dest_len + index] = src[index];
            index++;
        }
        dest[dest_len + index] = '\0';
        return (dest);
    }
`

#### Main.c =>



#### Inistallation:

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-strcat.c -o 0-strcat

#### Result : 
    ./0-strcat 

  
#### Usage:
### 1.strncat
Task description see Holberton school platform.

#### Tips:

#### .C Programe:

`
    #include "main.h"

    /**
    * _strncat - concatenate two strings @n bystes
    * @dest: char*, destination
    * @src: char* source
    * @n: int, bytes
    * Return: char*, dest(destination)
    */

    char *_strncat(char *dest, char *src, int n)
    {
        
        int len_dest = 0;
        int len_src = 0;

        while (dest[len_dest])
        {
            len_dest++;
        }
        while (src[len_src] != '\0' && len_src < n)
        {
            dest[len_dest + len_src] = src[len_src];
            len_src++;
        }
        dest[len_dest + len_src] = '\0';
        return (dest);
    }

`

#### Main.c =>




#### Inistallation:

    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-strncat.c -o 1-strncat

#### Result:
    ./1-strncat

#### Usage:
### 2.strncpy
Task description see Holberton school platform.

#### Tips:

#### .C Programe:


#### Main.c =>


#### Inistallation:
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strncpy.c -o 2-strncpy
#### Result:
    ./2-strncpy

    
#### Usage:
### 3.strcmp 
Task description see Holberton school platform.
#### Tips:

#### .C Programe:

`

    #include "main.h"
    /**
    * *_strcmp - function that compares two strings
    * @s1: char* , first string
    * @s2: char*, scd string
    * Return: 0 if equal - shorter + greater S1 to S2
    */

    int _strcmp(char *s1, char *s2)

    {
        while (*s1 != '\0' && *s2 != '\0')
        {
            if (*s1 != *s2)
            {
                return (*s1 - *s2);
            }
            s1++;
            s2++;
        }
        return (*(unsigned char *)s1 - *(unsigned char *)s2);
    }
`
#### Main.c =>

#### Inistallation:
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-strcmp.c -o 3-strcmp
#### Result:

#### Usage:
### 4.I am a kind of paranoid in reverse. I suspect people of plotting to make me happy
Task description see Holberton school platform.
#### Tips:

#### .C Programe:

`

    #include "main.h"

    /**
    * reverse_array - function that reverses the content of an array of integers
    * @a: int, array
    * @n: int, numbers of elements
    * Return: nada
    */

    void reverse_array(int *a, int n)
    {
        int start = 0;
        int end = n;
        int tmp;

        while (start < end - 1)
        {
            tmp = a[start];
            a[start] = a[end - 1];
            a[end - 1] = tmp;

            start++;
            end--;
        }
    }

`
#### Main.c =>

#### Inistallation:

#### Result:

#### Usage:
### 5.Always look up
Task description see Holberton school platform.
#### Tips:

#### .C Programe:

`

    #include "main.h"

    /**
    *  string_toupper - function change strings lowercase to uppercase.
    *  @str: char*, string
    *  Return: char*
    *  pstr: pointer of str
    */

    char *string_toupper(char *str)
    {
        char *p_strings = str;

        while (*p_strings != '\0')
        {
            if (*p_strings >= 'a' && *p_strings <= 'z')
            {
                *p_strings = *p_strings - ('a' - 'A');
            }
            p_strings++;
        }
        return (str);
    }
`
#### Main.c =>

#### Inistallation:

#### Result:

#### Usage:
### 6.Expect the best. Prepare for the worst. 
Task description see Holberton school platform.
#### Tips:

#### .C Programe:

`

    #include "main.h"
    /**
    * *cap_string - function that capitalizes all words
    * @str: char *, strings given
    * Return: char @str:
    * n_word: int, new_word not n.g.a word it determine our first character.
    */

    char *cap_string(char *str)
    {
        char *ptr = str;
        int n_word = 1;

        while (*ptr != '\0')
        {
            if (*ptr == '\t')
            {
                *ptr = ' ';
            }
            ptr++;
        }

        ptr = str;/*to restart from zero*/

        while (*ptr != '\0')
        {
            if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z'))
            {
                if (n_word && *ptr >= 'a' && *ptr <= 'z')
                {
                    *ptr -= ('a' - 'A');/*table acsii*/
                }
                n_word = 0;
            }
            else
            {
                if (*ptr == ',' || *ptr == ';' || *ptr == '!' || *ptr == '?' ||
                    *ptr == '.' || *ptr == '"' || *ptr == '(' || *ptr == ')' ||
                    *ptr == '{' || *ptr == '}' || *ptr == ' ' || *ptr == '\n')
                {
                n_word = 1;
                }
            }
            ptr++;
        }
        return (str);
    }
`
#### Main.c =>

#### Inistallation:

#### Result:

#### Usage:
Usage:Capitalize on what comes 
### 7.Mozart composed his music not for the elite, but for everybody 
Task description see Holberton school platform.
#### Tips:

#### .C Programe:

`
    #include "main.h"

    /**
    * leet - function encodes a string to a number
    * @str: char*, character
    * Return: char*
    */

    char *leet(char *str)
    {
        char *Main = str;
        char *characters = "aeotlAEOTL";
        char *replacements = "4307143071";

        while (*str)
        {
            char *leet_ptr = characters;
            char *replacement_ptr = replacements;

            while (*leet_ptr)
        {
                if (*str == *leet_ptr)
                {
                    *str = *replacement_ptr;
                    break;
                }
                leet_ptr++;
                replacement_ptr++;
            }
            str++;
        }
        return (Main);
    }
`
#### Main.c =>

#### Inistallation:

#### Result:

#### Usage:
