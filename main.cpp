#include <iostream>
#include <cstdlib>
#include <bitset>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void dec_to_bin(int liczba)
{
	if(liczba>0)
	{
		dec_to_bin(liczba/2);
		cout<<liczba%2;
	}
};


void printBits( unsigned int n )
{
    const int Bits = 8 * sizeof n;
    char tmp[ Bits + 1 ];
   
    for( int i = 0; i < Bits; ++i )
    {
        tmp[ Bits - i - 1 ] = '0' + n % 2;
        n /= 2;
    }
   
    tmp[ Bits ] = 0;
    cout << tmp;
};

void showOperation( unsigned int a, unsigned int b, unsigned int result, char op )
{
    cout << "   ";
    printBits( a );
    cout << " (" << a << ")\n " << op << ' ';
    printBits( b );
    cout << " (" << b << ")\n = ";
    printBits( result );
    cout << " (" << result << ")\n\n";
};


int main(int argc, char** argv) {
	
	
	unsigned char a;
	cout<<"Podaj a: ";
	cin>>a;
	cout<<"Liczba "<<a<<" w systemie dwojkowym to: ";
	dec_to_bin(a);
	cout<<endl;
	unsigned char b;
	cout<<"Podaj b: ";
	cin>>b;
	cout<<"Liczba "<<b<<" w systemie dwojkowym to: ";
	dec_to_bin(b);
	cout<<endl;
	
	cout<<"Negacja a: ";
	printBits( a );
    cout<<" (" << a << ")\n";
    a <<= 4;
    
    cout<<"a|b to: ";
    showOperation( a, b, a | b, '|' );
	
	cout<<"a&b to: ";
	showOperation( a, b, a & b, '&' );
	
	cout<<"a^b to: ";
	showOperation( a, b, a ^ b, '^' );	
	return 0;
}
