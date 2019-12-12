#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
	class hazel{ //gagama ko ug class nga hazel para sudlan sa mga functions nga gideclare
		public:
			void display(int leezah[10]); //function nga display
	
			int n, x, digit[100],j,t,factor[100], i, rem[100]; //declarations sa mga variables nga gipanggamit sud sa function nga display 
															//sa pagprocess sa wasteful number
	};
	
int main(int argc, char** argv) {
	int leezah[10] = {18, 19, 20, 21, 22, 23, 24, 25, 26, 27};
	hazel gwapa; //gatawag ko sa class nga hazel gamit ang gwapa kay gwapa man ko aw HAHAHAH JOKE
	gwapa.display(leezah); //gatawag ko sa function nga display sa ubos
	return 0;
}

	void hazel::display(int leezah[10]) //mao ni process sa function
	{
		cout<<"DISPLAYING LEEZAH: "<<endl; 
		 
		for(int i=0;i<10;i++)	//mao ni sud sa process pagkuha sa WASTEFUL NUMBER (just watch and learn! HAHAHA murag true)
	{
	n=leezah[i];
	x=n;
	digit[i]=0;
	for (;n!=0;)
		{
		n=n/10;
		digit[i]++;
		}
	t=0;
	j=2;
	factor[i]=0;
	for (;x!=0;)
		{
		if (x%j==0)
			{
			x=x/j;
			rem[t]=j;
			t++;
			factor[i]++;
			if (x==1)
				{
				break;
				}
			}
		else
			{
			j++;
			}
		}
	}


printf("\nWASTEFUL NUMBER(S):\n");  
for (i=0; i<10; i++)
	{
	if (factor[i]>digit[i]) //gacompare ko sa factors ug digits para makhibaw ko kung unsa ang wasteful numbers
		{
		printf("	%ld	", leezah[i]); //giprint na nako ang wasteful numbers
		printf("\n");
		}
	}

}
	
//#ANDTHISWOULDBEALLLLLLTHANKYOOOOOWWWW
//#LEE_ZAH


