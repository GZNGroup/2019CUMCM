//T2-2
//��ɺ������ݴ����ʱ���ͳ��

#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int n=642,cnt[24],sum;
char data[10000][10][50];

int time_part_check(int minute)
{
	return minute>=30?1:0;
}

int main()
{
	freopen("Leave_Data.txt","r",stdin);//������ɺ�������
	freopen("Leave_Stat.txt","w",stdout);//���ͳ������
	for (int i=1;i<=n;i++)
	{
		for (scanf("%s",data[i][0]);
			!((data[i][0][0]>='A'&&data[i][0][0]<='Z')
			||(data[i][0][0]>='0'&&data[i][0][0]<='9'));
			scanf("%s",data[i][0]));//���뺽��ţ�����ȱʧ����
		for (int j=1;j<=6;j++) scanf("%s",data[i][j]);//������ɵء�����ء��ƻ���ʱ��
		//for (int j=0;j<=6;j++) cout<<data[i][j]<<' ';cout<<endl;
	}

	int hour;
	for (int i=1;i<=n;i++) if (strcmp(data[i][2],data[i-1][2]))
	{
		hour  =(data[i][4][0]-'0')*10+(data[i][4][1]-'0');
		//minute=(data[i][4][3]-'0')*10+(data[i][4][4]-'0');
		//cout<<hour<<' '<<minute<<endl;
		cnt[hour/2]++;//ͳ��ÿ��Сʱ�ɻ���������
		//sum++;
	}
	for (int i=0;i<12;i++) printf("%d %d\n",(i)*2,cnt[i]);//������ݣ����ڻ�ͼ����
	//printf("\n%d\n",sum);

	fclose(stdin);
	fclose(stdout);
 	return 0;
}
