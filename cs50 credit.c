#include<stdio.h>
#include<cs50.h>

int main(){
    long number = get_long("Number:");

    long temphold = number;
    int j=0,n=1;
    while(j==0){
        temphold = temphold / 10;
        n++;
        if(temphold <= 10){
            j = 1;
        }
    }

    temphold = number;
    long temphold2;
    int ind=0, c=0,d=0, count=1,temp1;
    for(int i=0;i<n;i++){
        temphold2=temphold/10;
        if(count % 2==0){
            temp1=(temphold - temphold2*10)*2;
            c+=(temp1-(temp1/10)*10)+(temp1/10);
        }else{
            temp1=(temphold - temphold2*10);
            d+=(temp1-(temp1/10)*10)+(temp1/10);
        }
        temphold=temphold2;
        count++;
    }
    c = c+d;
    if(c % 10 == 0){
        ind = 1;
    }

    for(int k=0;k<n-2;k++){
        number=number/10;
    }
    if(ind==1){
        if(n==15 && (number == 34 || number == 37)){
            printf("AMEX\n");
        }else if((n==13 || n==16) && number/10 == 4){
            printf("VISA\n");
        }else if(n==16 && (number == 51 || number == 52 || number == 53 || number == 54 || number == 55)){
            printf("MASTERCARD\n");
        }else{
            printf("INVALID\n");
        }
    }else if(ind==0){
        printf("INVALID\n");
    }else{
        printf("INVALID\n");
    }
    return 0;
}