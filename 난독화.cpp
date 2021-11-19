#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int r = 0; 
	system("color 20");
	for(int i=0; ;i++){
		srand(time(NULL)); 
		r = rand()%5;
		int a;
		printf("1:난독화 2: 풀기 3:비번 입력4:누르지 마시오 5:종료 :");
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
			if(r==0){
				system("pause");	
				printf("두 수를 입력하시오(100~1000사이로):\n");
				int a,b;
				long long pw;
				scanf("%d %d",&a,&b);
				pw=a*b/2;
				printf("눈 앞에 세모의 금고가 있다 열어보자\n");
				long long hpw;
				
				for(int i=1; ; i++){
					printf("비밀번호를 입력하세요:");
					scanf("%lld",&hpw);
					if(hpw==pw){
						printf("정답입니다\n");
						printf("금고가 열리고 당신은 보면 안될것을 보았다");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),35);
						printf("scp-096의 사진을 보았다. 당신은 찟겨 죽었다.\n"); 
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),32);
						system("pause");
						system("cls");
					break;
					}
					if(hpw==4&&i>=5){
							printf("시뮬레이션을종료합니다. 비밀번호는 %d였습니다.\n",pw);
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
					}
					if(i>=10){
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),36);
						printf("이계정은 잠겼습니다.\n");
						printf("세모한테 총살 당했습니다..\n");
						system("pause");
						exit(0);
					}
				}
			}
			if(r==1){
				system("pause");
				long long pw;
				pw=1910;
				printf("scp173이 사라졌다. 당신은 이때를 틈타 박사의 금고를 열려 한다.\n");
				long long hpw;
				
				for(int i=1; ; i++){
					printf("비밀번호를 입력하세요:");
					scanf("%lld",&hpw);
					if(hpw==pw){
						printf("정답입니다\n");
						printf("금고가 열리고 당신은 카드키를 얻어다");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),35); 
						printf("끈적이는 느낌에 밑을 보니 검은 엑체가 있어다.\n 당신은 즉사하였다."); 
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),32);
						system("pause");
						system("cls");
					break;
					}
					if(hpw==4&&i>=8){
							printf("시뮬레이션을 종료합니다. 비밀번호는 %d였습니다.\n",pw);
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
					}
					if(i>=10){
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),36);
						printf("이계정은 잠겼습니다.\n");
						printf("당신은 특무대의 총에 맟아 사망하셨습니다.\n");
						system("pause");
						exit(0);
					}
				}
			}
			if(r==2){	
				system("pause");
				long long pw;
				pw=15120;
				printf("개발자의 나이 X 개발자의 눈의 수 X 개발자의 손가락X2(0010 1010)=pw\n");
				long long hpw;
				
				for(int i=1; ; i++){
					printf("비밀번호를 입력하세요:");
					scanf("%lld",&hpw);
					if(hpw==pw){
						printf("정답입니다\n");
						printf("금고가 열리고 당신은 흰트를 얻어다\n");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),35); 
						printf("트흰트흰흰트흰트흰트흰트흰트흰트흰트흰트흰트흰트흰트흰트흰트흰트흰트\n"); 
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),32);
						system("pause");
						system("cls");
					break;
					}
					if(hpw==4&&i>=8){
							printf("시뮬레이션을 종료합니다. 비밀번호는 %d였습니다.\n",pw);
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
					}
					if(i>=10){
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),36);
						printf("이계정은 잠겼습니다.\n");
						printf("당신은 개발자의 은총에 맟아 사망하셨습니다.\n");
						system("pause");
						exit(0);
					}
				}
			}
			if(r==3){
				system("pause");	
				long long pw;
				pw=24610;
				printf("통통 통통통통 통통통통통통 토로로로로로로ㅗ로ㅗ로롤=pw\n");
				long long hpw;
				for(int i=1; ; i++){
					printf("비밀번호를 입력하세요:");
					scanf("%lld",&hpw);
					if(hpw==pw){
						printf("정답입니다\n");
						printf("금고가 열리고 당신은 흰트를 얻어다\n");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),35); 
						printf("4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4\n"); 
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),32);
						system("pause");
						system("cls");
					break;
					}
					if(hpw==4&&i>=8){
							printf("시뮬레이션을 종료합니다. 비밀번호는 %d였습니다.\n",pw);
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
					}
					if(i>=10){
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),36);
						printf("이계정은 잠겼습니다.\n");
						printf("당신은....뭐였지\n기.. 기억이 않나... 어쨌든 뒤짐 ㅅㄱ\n");
						system("pause");
						exit(0);
					}
				}
			}
			if(r==4){
				system("pause");	
				long long pw;
				pw=7373;
				printf("개발자가 좋아하는 숫자는\n");
				long long hpw;
				for(int i=1; ; i++){
					printf("비밀번호를 입력하세요:");
					scanf("%lld",&hpw);
					if(hpw==pw){
						printf("정답입니다\n");
						printf("금고가 열리고 당신은 흰트를 얻어다\n");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),35); 
						printf("4을 계속 입력하시오\n"); 
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),32);
						system("pause");
						system("cls");
					break;
					}
					if(hpw==4&&i>=8){
							printf("시뮬레이션을 종료합니다. 비밀번호는 %d였습니다.\n",pw);
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
					}
					if(i>=10){
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),36);
						printf("이계정은 잠겼습니다.\n");
						printf("어떻게 니가.. 니가 컥 죽어라 이놈아 탕 탕 탕\n");
						system("pause");
						exit(0);
					}
				}
			}
		} 
		if(a==5){
			printf("종료합니다.");
			break;
		}
	}
}
