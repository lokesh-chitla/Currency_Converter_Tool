#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Problem : Given a String of length S, reverse the whole string without reversing the individual words in it. Words are separated by dots. //
//
void main(){
	char *Str = "hello.world.this.is.Lokesh";	
	int i=0, j=0;
	int cur = strlen(Str);
	printf("Entered String : %s \n", Str);
	for(;cur >= 0; cur--){
		if((Str[cur]=='.') || (cur == 0))
		{
			char *tmp_Str = malloc(strlen(Str));
			i = cur+1; 
			if(cur == 0) i = 0;
			for(j=0;;j++){
				tmp_Str[j]=Str[i];
				i++;
				if((Str[i] == '.') || (Str[i] == '\0'))
					break;
			}
			if(cur > 0)
				printf("%s.", tmp_Str);	
			else if(cur == 0)
				printf("%s\n", tmp_Str);	
				
			free(tmp_Str);
		}
	}
}
