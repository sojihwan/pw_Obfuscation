#include <stdio.h>
#include <windows.h>

int main(){
	for(int i=0; ;i++){
	
		int a;
		printf("1:����ȭ 2: Ǯ�� 3:��� �Է� 4:���� :");
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
				printf("��й�ȣ�� �Է��ϼ���:");
				scanf("%lld",&hpw);
				if(hpw==pw){
					break;
				}
				printf("%dȸ Ʋ�Ƚ��ϴ�.\n",i);
				if(i>=5){
					printf("3�� �� �õ��� �ּ���\n");
					Sleep(3000);
					system("pause");
				}
			}
		} 
		if(a==4){
			printf("�����մϴ�.");
			break;
		}
	}
}
