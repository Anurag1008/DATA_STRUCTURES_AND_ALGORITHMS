#include<stdio.h>

//length of string
int length(char a[])
{
    int i=0;
    while(a[i] != '\0')
        i++;

    return i;
}

//index of a char in string
int indexOf(char a[], char k)
{
    for(int i=0; i<length(a); i++)
    {
        if(a[i]==k)
            return i;
    }

    return -1;
}

//extract the char present at a index
char getChar(char a[], int i)
{
    if(i>=length(a))
        return '\0';

    return a[i];
}

//put a char in a string at  a index
void putChar(char* a, int i, char ch)
{
    for(int j=length(a)-1; j>=i; j--)
        a[j+1] = a[j];
    a[i] = ch;
}

//concatinating two strings
void concat(char* a, char* b)
{
    int i;
    int j = length(a);
    for(i=0; b[i]!='\0'; i++)
        a[i+j] = b[i];
    a[i+j] = '\0';
}

//copying a string to another
void copy(char* a, char* b)
{
    for(int i=0; i<length(a); i++)
        b[i] = a[i];
}

//deleting a char or substring from str
void delete(char* a, int i, int size)
{
    for(int j=size; j<length(a);j++)
    {
        a[i] = a[j];
        i++;
    }
    for(int k=i; k<length(a); k++)
        a[k] = '\0';
}

//comparing two str
int compare(char* a, char* b)
{
    int flag = 0;
    while(*a!='\0' || *b!='\0')
    {
        if(*a==*b)
        {
            a++;
            b++;
        }
        else if((*a=='\0' || *b!='\0') || *a!=*b)
        {
            flag = 1; 
            return -1;
        }
        else if((*b=='\0' || *a!='\0') || *a!=*b)
        {
            flag = 1; 
            return 1;
        }
    }

    if (flag==0)
    {
        return 0;
    }
}

//lowercase the ch in str
void lower(char* a)
{
    int i=0;
    while(a[i]!='\0')
    {
        if(a[i]>='A' || a[i]<='Z')
            a[i] += 32;
        i++;
    }
}

//uppercase the ch in str
void upper(char* a)
{
    int i=0; 
    while (a[i]!='\0')
    {
        if(a[i]>='a' || a[i]<='z')
            a[i] -= 32;
        i++;
    }
}

//extract substring of a str
void substring(char a[], int i, int size, char* s)
{
    int k=0;
    for(int j=i; j<size; j++)
    {
        s[k] = a[j];
        k++;
    }
}

//reversing the string
void rev(char* a)
{
    int e = length(a)-1;
    for(int i=0; i<length(a)/2; i++)
    {
        char temp = a[i];//swaping
        a[i] = a[e];
        a[e] = temp;
        e--;
    }
}


int main()
{
    char str[50] = "ANURAG";
    char s[] = "TATWAL";
    char result[100];

    printf("length of str = %d\n", length(str));
    printf("index of B = %d\n", indexOf(str, 'B'));
    printf("char at 2 index in str = %c\n", getChar(str, 2));
    putChar(str, 4, 'Z');
    printf("%s\n", str);

    concat(str, s);
    printf("%s\n",str);
    copy(str, result);
    printf("%s\n",result);
    delete(str, 0, 2);
    printf("%s\n",str);
    printf("%d\n", compare(str, result));

    lower(str);
    printf("%s\n", str);
    upper(str);
    printf("%s\n", str);

    substring(str, 1, 3, result);
    printf("%s\n", result);

    rev(s);
    printf("%s\n", s);

    return 0;
}