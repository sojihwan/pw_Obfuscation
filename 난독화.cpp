#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")



int main(){
	int r = 0; 
	system("color 20");
	for(int i=0; ;i++){
		srand(time(NULL)); 
		r = rand()%5;
		int a;
		printf("1:����ȭ 2: Ǯ�� 3:��� �Է�4:������ ���ÿ� 5:���� :");
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
			if(r==0){
				system("pause");	
				PlaySound(TEXT("mymusic.wav"), NULL, SND_ASYNC | SND_LOOP);
				printf("�� ���� �Է��Ͻÿ�(100~1000���̷�):\n");
				int a,b;
				long long pw;
				scanf("%d %d",&a,&b);
				pw=a*b/2;
				printf("�� �տ� ������ �ݰ��� �ִ� �����\n");
				long long hpw;
				
				for(int i=1; ; i++){
					printf("��й�ȣ�� �Է��ϼ���:");
					scanf("%lld",&hpw);
					if(hpw==pw){
						printf("�����Դϴ�\n");
						printf("�ݰ��� ������ ����� ���� �ȵɰ��� ���Ҵ�");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),35);
						printf("scp-096�� ������ ���Ҵ�. ����� ���� �׾���.\n"); 
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),32);
						system("pause");
						system("cls");
					break;
					}
					if(hpw==4&&i>=5){
							printf("�ùķ��̼��������մϴ�. ��й�ȣ�� %d�����ϴ�.\n",pw);
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
					}
					if(i>=10){
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),36);
						printf("�̰����� �����ϴ�.\n");
						printf("�������� �ѻ� ���߽��ϴ�..\n");
						system("pause");
						exit(0);
					}
				}
			}
			if(r==1){
				system("pause");
				PlaySound(TEXT("mymusic.wav"), NULL, SND_ASYNC | SND_LOOP);
				long long pw;
				pw=1910;
				printf("scp173�� �������. ����� �̶��� ƴŸ �ڻ��� �ݰ��� ���� �Ѵ�.\n");
				long long hpw;
				
				for(int i=1; ; i++){
					printf("��й�ȣ�� �Է��ϼ���:");
					scanf("%lld",&hpw);
					if(hpw==pw){
						printf("�����Դϴ�\n");
						printf("�ݰ��� ������ ����� ī��Ű�� ����");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),35); 
						printf("�����̴� ������ ���� ���� ���� ��ü�� �־��.\n ����� ����Ͽ���."); 
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),32);
						system("pause");
						system("cls");
					break;
					}
					if(hpw==4&&i>=8){
							printf("�ùķ��̼��� �����մϴ�. ��й�ȣ�� %d�����ϴ�.\n",pw);
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
					}
					if(i>=10){
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),36);
						printf("�̰����� �����ϴ�.\n");
						printf("����� Ư������ �ѿ� ���� ����ϼ̽��ϴ�.\n");
						system("pause");
						exit(0);
					}
				}
			}
			if(r==2){	
				system("pause");
				PlaySound(TEXT("mymusic.wav"), NULL, SND_ASYNC | SND_LOOP);
				long long pw;
				pw=15120;
				printf("�������� ���� X �������� ���� �� X �������� �հ���X2(0010 1010)=pw\n");
				long long hpw;
				
				for(int i=1; ; i++){
					printf("��й�ȣ�� �Է��ϼ���:");
					scanf("%lld",&hpw);
					if(hpw==pw){
						printf("�����Դϴ�\n");
						printf("�ݰ��� ������ ����� ��Ʈ�� ����\n");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),35); 
						printf("Ʈ��Ʈ����Ʈ��Ʈ��Ʈ��Ʈ��Ʈ��Ʈ��Ʈ��Ʈ��Ʈ��Ʈ��Ʈ��Ʈ��Ʈ��Ʈ��Ʈ\n"); 
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),32);
						system("pause");
						system("cls");
					break;
					}
					if(hpw==4&&i>=8){
							printf("�ùķ��̼��� �����մϴ�. ��й�ȣ�� %d�����ϴ�.\n",pw);
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
					}
					if(i>=10){
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),36);
						printf("�̰����� �����ϴ�.\n");
						printf("����� �������� ���ѿ� ���� ����ϼ̽��ϴ�.\n");
						system("pause");
						exit(0);
					}
				}
			}
			if(r==3){
				system("pause");
				PlaySound(TEXT("mymusic.wav"), NULL, SND_ASYNC | SND_LOOP);	
				long long pw;
				pw=24610;
				printf("���� �������� ������������ ��ηηηηηΤǷΤǷη�=pw\n");
				long long hpw;
				for(int i=1; ; i++){
					printf("��й�ȣ�� �Է��ϼ���:");
					scanf("%lld",&hpw);
					if(hpw==pw){
						printf("�����Դϴ�\n");
						printf("�ݰ��� ������ ����� ��Ʈ�� ����\n");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),35); 
						printf("4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4\n"); 
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),32);
						system("pause");
						system("cls");
					break;
					}
					if(hpw==4&&i>=8){
							printf("�ùķ��̼��� �����մϴ�. ��й�ȣ�� %d�����ϴ�.\n",pw);
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
					}
					if(i>=10){
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),36);
						printf("�̰����� �����ϴ�.\n");
						printf("�����....������\n��.. ����� �ʳ�... ��·�� ���� ����\n");
						system("pause");
						exit(0);
					}
				}
			}
			if(r==4){
				system("pause");
				PlaySound(TEXT("mymusic.wav"), NULL, SND_ASYNC | SND_LOOP);	
				long long pw;
				pw=7373;
				printf("�����ڰ� �����ϴ� ���ڴ�\n");
				long long hpw;
				for(int i=1; ; i++){
					printf("��й�ȣ�� �Է��ϼ���:");
					scanf("%lld",&hpw);
					if(hpw==pw){
						printf("�����Դϴ�\n");
						printf("�ݰ��� ������ ����� ��Ʈ�� ����\n");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),35); 
						printf("4�� ��� �Է��Ͻÿ�\n"); 
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),32);
						system("pause");
						system("cls");
					break;
					}
					if(hpw==4&&i>=8){
							printf("�ùķ��̼��� �����մϴ�. ��й�ȣ�� %d�����ϴ�.\n",pw);
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
					}
					if(i>=10){
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),36);
						printf("�̰����� �����ϴ�.\n");
						printf("��� �ϰ�.. �ϰ� �� �׾�� �̳�� �� �� ��\n");
						system("pause");
						exit(0);
					}
				}
			}
		} 
		if(a==5){
			printf("�����մϴ�.");
			break;
		}
	}
}
