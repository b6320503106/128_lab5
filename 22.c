#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int n,i,j,p,a=0,y;
    scanf("%d" ,&n);
    char num[n];
    int b[n];
    for(i=0;i<n;i++)
    {
        b[a]=0;
        scanf("%s" ,num);
        j=strlen(num);
        if(!(strcmp(num,"-")))
        {
            b[a-2]-=b[a-1];
            a--;
        }
        else if(!(strcmp(num,"+")))
        {
            b[a-2]+=b[a-1];
            a--;
        }
        else if(!(strcmp(num,"")))
        {
            b[a-2]=b[a-1];
           a--;
        }
        else
        {
            for(p=0;p<j;p++)
            {
                y=j-p-1;
                switch(y)
                {
                    case 0 : b[a]+=(num[p]-48); break;
                    case 1 : b[a]+=(num[p]-48)*10; break;
                    case 2 : b[a]+=(num[p]-48)*100; break;
                    case 3 : b[a]+=(num[p]-48)*1000; break;
                    case 4 : b[a]+=(num[p]-48)*10000; break;
                    case 5 : b[a]+=(num[p]-48)*100000; break;
                }
            }
            a++;
        }
    }
    printf("%d\n" ,b[0]);
    return 0;
}
