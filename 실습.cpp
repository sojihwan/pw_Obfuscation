#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
int main(){
	system("color 20");
	for(int i=0; ;i++){
		int a;
		printf("1:����ȭ 2: Ǯ�� 3:��� �Է�4:���� :");
		scanf("%d",&a); 
		if(a==1){
			printf("���ڸ� �Է��ϼ���(4�ڸ� ��й�ȣ):");
			long long pw;
			scanf("%lld",&pw);
			pw=pw*524287;
			printf("%x\n",pw); 
			system("pause");
			system("cls");
		} 
		if(a==2){
			printf("���ڸ� �Է��ϼ���(Ű):");
			long long pw;
			scanf("%x",&pw);
			pw=pw/524287;
			printf("%lld\n",pw); 
			system("pause");
			system("cls");
		}
		if(a==3){
			printf("����ȭ �� Ű�� �Է��� �ּ���:");
			long long pw;
			long long hpw;
			scanf("%x",&pw);
			pw=pw/524287;
			printf("%lld",&pw);
			system("cls");
			for(int i=1; ; i++){
				printf("��й�ȣ�� �Է��ϼ���(4�ڸ�):");
				scanf("%lld",&hpw);
				if(hpw==pw){
					printf("�����Դϴ�\n");
					system("pause");
					system("cls");
					break;
				}
				if(hpw==4&&i>=5){
						printf("�����մϴ�. ��й�ȣ�� %d�����ϴ�.\n",pw);
						system("pause");
						system("cls");
						break;
					}
				printf("%dȸ Ʋ�Ƚ��ϴ�.\n",i);
				if(i>=5){
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),36);
					printf("%d�� �� �õ��� �ּ���\n",i);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),32);
					Sleep(i*1000);
					system("pause");
					printf("�����ҷ��� 4�� �����ּ���.\n") ;
				}
				if(i>=10){
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),36);
					printf("�̰����� �����ϴ�.\n");
					system("pause");
					exit(0);
				}
			}
		} 
		if(a==4){
			printf("�����մϴ�.");
			break;
		}
	}
}
