#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int flag=0;
char org[102];
char str[102];

 
void swap (char* a, char* b)
{
    char t = *a;
    *a = *b;
    *b = t;
}
int findCeil (char str[], char first, int l, int h)
{
    int ceilIndex = l;
    for (int i = l+1; i <= h; i++)
      if (str[i] > first && str[i] < str[ceilIndex])
            ceilIndex = i;
 
    return ceilIndex;
}
void next ( char str[] )
{    
    int size = strlen(str);
	//strcp
    //qsort( str, size, sizeof( str[0] ), compare );
    bool isFinished = false;
    while ( ! isFinished &&flag<1)
    {
	int i;
	flag++;
        for ( i = size - 2; i >= 0; --i )
           if (str[i] < str[i+1])
              break;
        
        if ( i == -1 )
            isFinished = true;
        else
        {
            int ceilIndex = findCeil( str, str[i], i + 1, size - 1 );
            swap( &str[i], &str[ceilIndex] );
            //qsort( str + i + 1, size - i - 1, sizeof(str[0]), compare );
        }
	
	flag++;
	if(!strcmp(str,org))
		printf("no answer\n");
	else
		printf ("%s\n", str);
    }
}
 

int main()
{
   long t;
	
	scanf("%ld",&t);
	while(t--){
		flag=0;
		scanf("%s",str);
		strcpy(org,str);
		 next( str );
		memset(str,102,sizeof(str));
		memset(org,102,sizeof(str));
	}
   // sortedPermutations( str );
    return 0;
}
