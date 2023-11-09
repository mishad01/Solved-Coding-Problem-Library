#include<iostream>
#include<cstring>
int main(){
    char text[20] ="john cena";
    char pat[20] ="cena";

    int x = strlen(text);
    int y = strlen(pat);

    int index;
    int i,j;

    for(i=0;i<x-y;i++){
        for(j=0;j<y;j++){
            if(text[i+j]!=pat[j]){
                break;
            }
            //std::cout<<j<<" ";
        }
        if(j==y){
            index = i;
        }
    }
   std::cout<<index;
}
