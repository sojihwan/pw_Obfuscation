#include <stdio.h>
#include <windows.h>

int main(){
	for(int i=0; ;i++){
	
		int a;
		printf("1:난독화 2: 풀기 3:비번 입력 4:종료 :");
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
				printf("비밀번호를 입력하세요:");
				scanf("%lld",&hpw);
				if(hpw==pw){
					break;
				}
				printf("%d회 틀렸습니다.\n",i);
				if(i>=5){
					printf("3초 후 시도해 주세요\n");
					Sleep(3000);
					system("pause");
				}
			}
		} 
		if(a==4){
			printf("종료합니다.");
			break;
		}
	}
}
