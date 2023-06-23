#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int hash[MAX] = {-1};
void insert(int key){
    int pos = key % 10;
    if(hash[pos] == -1) hash[pos] = pos;
    else{
        while(hash[pos+1] != -1 && pos+1<MAX){
            pos++;
        }
        if(pos == MAX) printf("\nhash table is filled\n");
        else hash[pos] = pos;
    }
}

void display(){
    for(int i=0;i<MAX;i++){
        printf("%d ",hash[i]);
    }