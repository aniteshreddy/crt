int main(){
 int n,a[100],i=0,count=0;
 printf("enter number \n");
 scanf("%d",&n);
 while(n!=0){
 	a[count]=n%10;
	n=n/10;
  	count=count+1;
 }
	for(i=count-1;i>=0;i--)
 	switch(a[i]){
		case 1:
	 	 printf("one ");
	 	 break;
	 	case 2:
	 	 printf("two ");
	 	 break;
		 case 3:
	 	 printf("three ");
	 	break;
		 case 4:
	 	 printf("four ");
	 	break;
		 case 5:
	 	 printf("five ");
	 	break;
		 case 6:
	 	 printf("six ");
	 	break;
		 case 7:
	 	 printf("seven ");
	 	break;
		 case 8:
	 	 printf("eight ");
	 	break;
		 case 9:
	 	 printf("nine ");
	 	break;
	 }
 }

