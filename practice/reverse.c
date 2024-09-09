/*
In this programme we will reverse a five digit number and tell if it's equal to the number taken or not
and tell the sum of the number and the product too.
*/


#include <stdio.h>
int main(){
int a,d1,d2,d3,d4,d5,sum=0,product=1,rev=0,o;
printf("Enter the number");
scanf("%d",&a);
o=a;
d1=a%10;
a=a/10;
d2=a%10;
a=a/10;
d3=a%10;
a=a/10;
d4=a%10;
a=a/10;
d5=a%10;
printf("d1=%d\nd2=%d\nd3=%d\nd4=%d\nd5=%d\n",d1,d2,d3,d4,d5);
// need to find sum
// need t find the product 
// need to reverse the number
// need to check if reversed number is equal to the original number
sum=d1+d2+d3+d4+d5;
printf("sum=%d\n",sum);
product=d1*d2*d3*d4*d5;
printf("product=%d\n",product);

// if ( condition ){

//     actions;
// }

rev=d1*10000+d2*1000+d3*100+d4*10+d5;
if(rev==o){
    printf("The numbers are equal\n");
}else{
    printf("The numbers are not equal\n");
}

return 0;
}

/*
 # debugging here 
a = 12493
39421



d1=3
d2=9
d3=4
d4=2
d5=1

rev = 1*10000+2*1000+4*100+9*10+3
rev = 12493

*/




