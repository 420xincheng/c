/*������36��ש����36�˰ᣬSupermanһ�ΰ�4�飬superwomanһ�ΰ�3�飬2��Сƨ��̧һ�飬
Ҫ�����θպ�ȫ�����ꡣ��Superman��superwoman��Сƨ����������Ϊ���٣�*/

#include <stdio.h>
void main ()
{
	int man,f,child;			//�ֱ��ʾ�С�Ů��С��
	
	for (man=1;man<9;man++)
		for (f=1;f<12;f++)
		{
			child = 36-man-f;
			if (child%2!=0)
				continue;											//�˴�Ӧ����continue��ֱ�ӽ�����һ��ѭ��������������break������break������������������forѭ��
					if (4*man+3*f+child/2==36)
						printf ("supermen=%d superwomen=%d child=%d\n",man,f,child);

		}
}



//�������ɱ�дΪ
//if ((4*man+3*f+child/2==36) && (child%2==0))