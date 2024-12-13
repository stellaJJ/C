#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//C 커피, #이미 마신 까나리액젓, F 까나리액젓


void initial_arrary(char choose_cup[5][5]) //배열초기화
{
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            choose_cup[i][j]='.';
            printf("%c",choose_cup[i][j]);
        }
    
        printf("\n");
    }
}

void current_array(char choose_cup[5][5]) //현재상태출력
{
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            printf("%c",choose_cup[i][j]);
        }
    
        printf("\n");
    }
}


int main (void)
{
    int row=0, col=0;
    int C_count=0; //count는 커피횟수

    char choose_cup[5][5];
    char visited[5][5]; //방문기록(열람기록)

    char alphabet[5][5]; //랜덤배열
    int index=0;
    char temp;
    char values[25]={'C','C','C','C','C',
                     'C','C','C','C','C',
                     'C','C','C','C','C',
                     'C','C','C','C','C',
                     'F','F','F','F','F',};

    srand ((unsigned int)time(NULL));

    for(int i=0; i<5; i++)
        {
            for(int j=0; j<5; j++)
            {
                do{
                    index=rand()%25; //인덱스번호 0~24까지 values에서 랜덤뽑기.
                    temp=values[index]; //템프에 해당 인덱스의 values값을 저장.
                }while(temp==' ');

                alphabet[i][j]=temp;
                values[index]=' ';
            }
        }
    initial_arrary(choose_cup);
    
    

    while(C_count<5) //C->카운트 +1, 5되면 종료
    {

        printf("컵을 선택하세요 (행번호 열번호): ");
        scanf(" %d%d", &row, &col);
        
        if (row<0 || 4<row || col<0 || 4<col ) //0~4아니면 재입력
            continue;

        else 
        {
            choose_cup[row][col]=alphabet[row][col];

            if(visited[row][col]!='1') //방문기록이 없을때
            {
                if(choose_cup[row][col]=='C') //방문기록이없고, C일때
                {
                    current_array(choose_cup);
                    C_count++; //C발견횟수 추가

                    if(C_count==5)
                    {
                        printf("당신이 이겼습니다! 커피 다섯 컵을 골랐네요!\n");
                        for(int i=0; i<5; i++) //F 공개
                        {
                            for(int j=0; j<5; j++)
                            {
                                if(alphabet[i][j]=='F')
                                    choose_cup[i][j]=alphabet[i][j];
                            }
                        }
                        current_array(choose_cup);
                        break;
                        
                    }
                }

                if(choose_cup[row][col]=='F') //방문기록X, F
                {
                    printf("커피가 아닌 까나리 액젓이네요! \n");

                    for(int i=0; i<5; i++) //F 공개
                    {
                        for(int j=0; j<5; j++)
                        {
                            if(alphabet[i][j]=='F')
                                choose_cup[i][j]=alphabet[i][j];
                        }
                    }
                    choose_cup[row][col]='#'; //고른 까나리는 #으로 표기
                    current_array(choose_cup);
                    break;
                
                }
                
            }

            else if(visited[row][col]=='1') //중복값입력(방문기록O)0
        
            {
                printf("이미 마신 컵입니다.\n");
                current_array(choose_cup);
                continue;
            }

        }
        visited[row][col]='1'; //방문기록 추가
    }
    
    
}