#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
int main(){
	system("color 20");
	for(int i=0; ;i++){
		int a;
		printf("1:난독화 2: 풀기 3:비번 입력4:종료 :");
		scanf("%d",&a); 
		if(a==1){
			printf("숫자를 입력하세요(4자리 비밀번호):");
			long long pw;
			scanf("%lld",&pw);
			pw=pw*524287;
			printf("%x\n",pw); 
			system("pause");
			system("cls");
		} 
		if(a==2){
			printf("숫자를 입력하세요(키):");
			long long pw;
			scanf("%x",&pw);
			pw=pw/524287;
			printf("%lld\n",pw); 
			system("pause");
			system("cls");
		}
		if(a==3){
			printf("난독화 된 키를 입력해 주세요:");
			long long pw;
			long long hpw;
			scanf("%x",&pw);
			pw=pw/524287;
			printf("%lld",&pw);
			system("cls");
			for(int i=1; ; i++){
				printf("비밀번호를 입력하세요(4자리):");
				scanf("%lld",&hpw);
				if(hpw==pw){
					printf("정답입니다\n");
					system("pause");
					system("cls");
					break;
				}
				if(hpw==4&&i>=5){
						printf("종료합니다. 비밀번호는 %d였습니다.\n",pw);
						system("pause");
						system("cls");
						break;
					}
				printf("%d회 틀렸습니다.\n",i);
				if(i>=5){
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),36);
					printf("%d초 후 시도해 주세요\n",i);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),32);
					Sleep(i*1000);
					system("pause");
					printf("종료할려면 4을 눌러주세요.\n") ;
				}
				if(i>=10){
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),36);
					printf("이계정은 잠겼습니다.\n");
					system("pause");
					exit(0);
				}
			}
		} 
		if(a==4){
			printf("종료합니다.");
			break;
		}
	}
}
