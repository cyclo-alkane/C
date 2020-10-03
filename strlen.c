    #include <stdio.h>
     
    int findLength(char *b){
    	static int count=0;
    	if(*b!=NULL){
    		count++;
    		findLength(++b);
    	}
    	else{
    		return count;
    	}
    }
     
    int main(void) {
    	char a[10001];
    	scanf("%s",a);
    	int len=findLength(a);
    	printf("%d",len);
    	return 0;
    }
