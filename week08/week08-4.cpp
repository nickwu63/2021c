#include <stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    for(int n=2;n<=m;n++){
        ///n�O���O���:1�Mn�����i�㰣,��L������
        int bad=0;///�S���a��,�S���ѹ���
        for(int i=2;i<n;i++){///�u�P�_ 2...n-1
            if(n%i==0) bad++;///�V�|,�㰣�F,���O���
    }
    if(bad==0)printf("%d",n);
  }
}

