#include <stdio.h>

int main(void)
{
	int a, b, c, d, e, f, g, h ,i, j, k, l;
	
	printf("�T���Τ@\n�п�J�Ĥ@�����:");
	scanf("%d", &a);
	printf("�п�J�ĤG�����:");
	scanf("%d", &b);
	printf("�п�J�ĤT�����:");
	scanf("%d", &c);
	
	printf("�T���ΤG\n�п�J�Ĥ@�����:");
	scanf("%d", &d);	
	printf("�п�J�ĤG�����:");
	scanf("%d", &e);
	printf("�п�J�ĤT�����:");
	scanf("%d", &f);
	
	printf("�T���ΤT\n�п�J�Ĥ@�����:");
	scanf("%d", &g);
	printf("�п�J�ĤG�����:");
	scanf("%d", &h);
	printf("�п�J�ĤT�����:");
	scanf("%d", &i);
	
	printf("�T���Υ|\n�п�J�Ĥ@�����:");
	scanf("%d", &j);
	printf("�п�J�ĤG�����:");
	scanf("%d", &k);
	printf("�п�J�ĤT�����:");
	scanf("%d", &l);
	/*�T���Τ@���P�_*/
	if (a+b<c || b+c<a || c+a<b)
	  printf("���O�T����\n");
	else if (a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b)
		   printf("�����T����\n");
		else if (a*a+b*b<c*c || b*b+c*c<a*a || c*c+a*a<b*b)
			   printf("�w���T����\n");
			else if ((a*a+b*b>c*c && b*b+c*c>a*a) || (b*b+c*c>a*a && c*c+a*a>b*b) || (c*c+a*a>b*b && a*a+b*b>c*c))
				   printf("�U���T����\n");				   
	/*�T���ΤG���P�_*/
	a=d;
	b=e;
	c=f;
	if (a+b<c || b+c<a || c+a<b)
	  printf("���O�T����\n");
	else if (a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b)
		   printf("�����T����\n");
		else if (a*a+b*b<c*c || b*b+c*c<a*a || c*c+a*a<b*b)
			   printf("�w���T����\n");
			else if ((a*a+b*b>c*c && b*b+c*c>a*a) || (b*b+c*c>a*a && c*c+a*a>b*b) || (c*c+a*a>b*b && a*a+b*b>c*c))
				   printf("�U���T����\n");
	/*�T���ΤT���P�_*/
	a=g;
	b=h;
	c=i;
	if (a+b<c || b+c<a || c+a<b)
	  printf("���O�T����\n");
	else if (a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b)
		   printf("�����T����\n");
		else if (a*a+b*b<c*c || b*b+c*c<a*a || c*c+a*a<b*b)
			   printf("�w���T����\n");
			else if ((a*a+b*b>c*c && b*b+c*c>a*a) || (b*b+c*c>a*a && c*c+a*a>b*b) || (c*c+a*a>b*b && a*a+b*b>c*c))
				   printf("�U���T����\n");
	/*�T���Υ|���P�_*/
	a=j;
	b=k;
	c=l;
	if (a+b<c || b+c<a || c+a<b)
	  printf("���O�T����");
	else if (a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b)
		   printf("�����T����");
		else if (a*a+b*b<c*c || b*b+c*c<a*a || c*c+a*a<b*b)
			   printf("�w���T����");
			else if ((a*a+b*b>c*c && b*b+c*c>a*a) || (b*b+c*c>a*a && c*c+a*a>b*b) || (c*c+a*a>b*b && a*a+b*b>c*c))
				   printf("�U���T����");
	
	return 0;
}
