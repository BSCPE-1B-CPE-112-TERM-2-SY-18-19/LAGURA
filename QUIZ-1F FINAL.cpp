#include <iostream>  
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// global
int k,temp2; // Gideclare nako ni as global kay magamit man siya sa whole process 
class cpe1b{
	public:
		//'LONG' ANG DATA TYPE NGA AKONG GIGAMIT SA MGA FUNCTIONS KAY ANG 'LONG' MAS DAKO PA UG LIMIT KAYSA SA 'LONG'
		void palindromic_prime(long x); // PASABOT ANI KAY MAGHIMO KAG FUNCTION NGA PALINDROMIC PRIME
		void wasteful_number(long x); // PASABOT ANI KAY MAGHIMO KAG FUNCTION NGA WASTEFUL NUMBER
		long prime(long num);  // FUNCTION NI SIYA NGA GINGANLAN UG PRIME PARA MADETERMINE NATU ANG PRIME NUMBERS SA INPUT
		long binary(long num1); //FUNCTION NI SIYA NGA GINGANLAN UG BINARY PARA MADETERMINE ANG BINARY SA MGA NUMBER NGA PRIME
		long reverse(long num2); //FUNCTION NI SIYA NGA GINGANLAN UG REVERSE NGA PANGREVERSE SA BINARY UG ICOMPARE SA ORIGINAL BINARY 
		long digit(long num3); //FUNCTION NI SIYA NGA GINGANLAN UG DIGIT PARA IHAP SA DIGITS SA NUMBER
		long primefactorization(long num4); ////FUNCTION NI SIYA NGA GINGANLAN UG PRIMEFACTORIZATION PARA DETERMINE SA MGA PRIME FACTORS SA NUMBER
		
		//DECLARATIONS 
		long j,count,x;
		long pdtemp, bin, base, rem;
		long rev, temp, key;
		long dolor, digits;
		long factors,t,i;
		long rem1[100];
		long johanna;
	};

int main() {
	cpe1b guwapo; //gatawag ko sa class gamit ang guwapo
    string str;  // local declaration sa akong string kay string man ang gamit sa pag input then ani raman nga process siya magamit

    cout<<"INPUT STRING: ";
	cin>>str;
    cout << "The size of str is " << str.length() << " bytes.\n"<<endl;
	
	// EXAM

	if (str.length()%2!=0) //statement ni siya para mahibaw an nga ODD ang str.length
		{
	//	temp2=str.length(); //akoang gisud sa 'temp' nga variable ang str.length para iwas error unta pero akoa gitry ang str.length ra, ok man pod
		for(k=2;k<=str.length();k++) //loop statement ni siya para ma-isa-isa ang range ug process
			{	
			guwapo.palindromic_prime(k); //gitawag ang function nga 'palindromic_prime' ni 'guwapo' para muperform sa tanang process sa range
			}
		}
	else
		{
	//	temp2=str.length();
		for(k=2;k<=str.length();k++)
			{
			guwapo.wasteful_number(k); //gitawag ang function nga 'wasteful_number' ni 'guwapo' para muperform sa tanang process sa range
			}
		}
	return 0;
}

void cpe1b::palindromic_prime(long x)//mao ni pagperform sa function
	{ 	
		prime(x); //gitawag ni 'palindromic_prime' si 'prime' para masud ang process ni prime ani nga function to ready napd inig tawag ni 'guwapo' kang 'palindromic_prime'
	}
	
void cpe1b::wasteful_number(long x)
	{
		digit(x);	//gitawag ni 'wasteful_number' si 'digit' para masud ang process ni digit ani nga function to ready napd inig tawag ni 'guwapo' kang 'wasteful_number'

		if (digits<factors) // ga if-else statement ko to compre the number of digits and prime factors to identify if wasteful ba or dili
			{
				cout<<"--- WASTEFUL KO YEEY"<<endl<<endl;
			}
		else
			{
				cout<<"--- DILI KO WASTEFUL.HUHU!"<<endl<<endl;
			}
	}
//FUNCTIONS NI SIYA PARA SA PALINDROMIC PRIME

long cpe1b::prime(long num)  //process sa function prime
	{
	
	/* PRIME */ //--- process sa pagdetrmine if prime ba or dili ang range

	count = 0;
		for (j=2;j<num;j++)
			{
			if (num%j==0)
				{
					count++;
				}
			}		
			if (count==0)
				{
					cout<<"PRIME: "<<num<<endl;
					binary(num);
				}
			else
				{
					cout<<"COMPOSITE: "<<num<<endl;
					cout<<"--- DILI KO PRIME:("<<endl;
				}
	}
	
long cpe1b::binary(long num1) //mao ni sulod sa function nga binary which is gitawag sa prime nga function
	{	
	/* BINARY */ //process sa pagkuhag binary sa number nga prime which is gi-identify sa prime function sa babaw 

	pdtemp = num1;
	bin=0;
	base = 1;
	
	for (;pdtemp>0;)
		{
			rem=pdtemp%2;
			bin=bin+(rem*base);
			base = base*10;
			pdtemp=pdtemp/2;
		}
							printf("\tBINARY: %ld", bin);
							reverse(bin);
	}
long cpe1b::reverse(long num2) //mao ni sulod sa function nga reverse nga gitawag sa function nga binary
	{
	/*REVERSE*/ // process sa pagreverse sa binary sa babaw para macompare silang duha arun maka-identify ko nga palindromic ba siya or dili
	key=num2;
	temp=0;
	rev=0;

	for (;key!=0;)
		{
			temp=key%10;
			key=key/10;
			rev=temp+(rev*10);
		}
							printf("\tREVERSE: ");
							cout<<rev<<endl;
	
		if (rev==num2)
			{
				cout<<"--- PALINDROMIC PRIME KO YEHEY"<<endl;
			}
		else
			{
				cout<<"--- DILI KO PALINDROMIC PRIME :("<<endl;
			}
}
// FUNCTIONS NAPOD NI SILA PARA SA WASTEFUL NUMBER
long cpe1b::digit(long num3) // mao ni sulod sa function nga digit para maihap kung pila ang digits sa range
	{
		dolor=num3;
		johanna=num3;
		digits = 0;
 cout<<"NUMBER: "<<num3<<endl; //giprint nako if unsa na nga number ang gigamit para dli ko maglibog
	for (;dolor!=0;) //process ni siya para ihap sa digits
		{
			dolor=dolor/10;
			digits++;
		}
	printf("\t\t\tDIGITS OF NUM: %ld\n", digits);
		
		primefactorization(johanna); //gitawag ni siya ni function digit para macompare silang duha adtu sa ibabaw nga function 'void wasteful_number' which is ang digit function napd gitawag adtu 
	}

long cpe1b::primefactorization(long num4) //mao ni sulod sa function nga prime factorization
	{
			//initializations sa mga variables nga gamiton sa process
	x=num4;
	factors=0;
	i=2; //kaning 'i=2' since 2 mn magsugod ang prime number , therefore mao ni basehan sa prime nga atong makuha
	t=0;
			//mao ni process sa pagdetermine kung unsa ang iyahang prime factors
	for (;x!=0;)  // if muequal to '0' ang pagkuha sa modulus therefore factor niya whatever ang value sa 'i' 
	   {
	   	if (x%i==0)
	   		{
	       		x=x/i;
	       		rem1[t]=i; //gisulod napd ni 'i' ang iyahng value sa array 'rem1[t]' kay array man inag print
	       		t++;
	       		factors++; //gaihap ni siya kung pila kabook ang iyahang prime factors 
	       				if (x==1)
						   {
	              				break; //mubreak siya since ang prime is nagikan sa '2'
					        }
	        }
	    else
			{
		       i++; //mu-increment ni siya if dili '0' ang iyahang value sa if-statement hantud nga ma'0' na siya
	        }
	    }
	    
	    // mao ni process sa pagprint sa mga values or prime factors nga gisulod sa rem[t] sa ibabaw through loop kay array man
	    printf("\t\tprimeFACTORS: ");
	    
		for (i=0;i<factors;i++)
			{
				printf(" %ld  ",rem1[i]);
			}
		printf("\n");
		printf("\t\t\tDIGITS OF FACTORS: %ld\n", factors);

	}

//*AND THAT WOULD BE ALL, THANK YOU AND GODBLESS!*// 
//JEHOVAHISLOVE//
//LEE_ZAH//
