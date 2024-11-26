#include <stdio.h>
#include <string.h>
void convCase(char* ptr)
{   
    for(int i=0; i<strlen(ptr); i++)
    {
        const int diff ='a'-'A'; //아스키코드에서 소문자와 대문자의 차 32..
        if (ptr[i]>='A'&& ptr[i]<='Z')
            ptr[i]=ptr[i]+diff; //배열에 저장된 해당 인덱스 값의 수치를 바로 변경하면 되는거였음;;

        else if(ptr[i]>='a'&& ptr[i]<='z')
            ptr[i]=ptr[i]-diff;
    }

}

int main (void)
{
    char ch[100];

    printf("input> ");
    fgets(ch, sizeof(ch), stdin); //공백 포함한 문자열 입력받기.
    convCase(ch);
    
    char *ptr=ch; //포인터가 int일 필요는 절대없는듯

    printf("변환된 문자열: %s\n", ch);

    return 0;
}
