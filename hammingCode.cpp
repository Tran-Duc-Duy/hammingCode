#include <iostream>
using namespace std;
int a[]={1,1,1,0,0,0,1,0,1,0,1,1,1,1,1};
int i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,r1,r2,r3,r4,s1,s2,s3,s4,bug=0;
char ch;
int cStringToInt(char* str) {
	int temp = 0;
	int sign = 1;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str>='0' && *str <='9')
	{
		temp *= 10;
		temp += (int)(*str - '0');
		str++;
	}
	return temp * sign;
}
void out74 (int a[], int bug){
    for(int i=0; i<7;i++){
        cout<< a[i]<<"  ";
    }
    cout<<endl;
    switch(bug){
    case 0:
        cout<<"NOT";
        break;
    case 1:
        cout<<"r1";
        break;
    case 2:
        cout<<"r2";
        break;
    case 3:
        cout<<"i1";
        break;
    case 4:
        cout<<"r3";
        break;
    case 5:
        cout<<"i2";
        break;
    case 6:
        cout<<"i3";
        break;
    case 7:
        cout<<"i4";
        break;
    default:
        cout<<"error";
        break;
    }
}
void out1511 (int a[], int bug){
    for(int i=0; i<15;i++){
        cout<< a[i]<<"  ";
    }
    cout<<endl;
    switch(bug){
    case 0:
        cout<<"NOT";
        break;
    case 1:
        cout<<"r1";
        break;
    case 2:
        cout<<"r2";
        break;
    case 3:
        cout<<"i1";
        break;
    case 4:
        cout<<"r3";
        break;
    case 5:
        cout<<"i2";
        break;
    case 6:
        cout<<"i3";
        break;
    case 7:
        cout<<"i4";
        break;
    case 8:
        cout<<"r4";
        break;
    case 9:
        cout<<"i5";
        break;
    case 10:
        cout<<"i6";
        break;
    case 11:
        cout<<"i7";
        break;
    case 12:
        cout<<"i8";
        break;
    case 13:
        cout<<"i9";
        break;
    case 14:
        cout<<"i10";
        break;
    case 15:
        cout<<"i11";
        break;
    default:
        cout<<"error";
        break;
    }
}
void ch74(){
    r1=a[0];
    r2=a[1];
    i1=a[2];
    r3=a[3];
    i2=a[4];
    i3=a[5];
    i4=a[6];
    s1=r1^i1^i2^i4;
    s2=r2^i1^i3^i4;
    s3=r3^i2^i3^i4;
    bug=s3*4+s2*2+s1;
    cout<< "r1 r2 i1 r3 i2 i3 i4\n";
    out74(a,bug);
    return;
}
void ch1511(){
    r1=a[0];
    r2=a[1];
    i1=a[2];
    r3=a[3];
    i2=a[4];
    i3=a[5];
    i4=a[6];
    r4=a[7];
    i5=a[8];
    i6=a[9];
    i7=a[10];
    i8=a[11];
    i9=a[12];
    i10=a[13];
    i11=a[14];
    s1=r1^i1^i2^i4^i5^i7^i9^i11;
    s2=r2^i1^i3^i4^i6^i7^i10^i11;
    s3=r3^i2^i3^i4^i8^i9^i10^i11;
    s4=r4^i5^i6^i7^i8^i9^i10^i11;

    bug=s4*8+s3*4+s2*2+s1;
    cout<< "r1 r2 i1 r3 i2 i3 i4 r4 i5 i6 i7 i8 i9 i10 i11\n";
    out1511(a,bug);
    return;
}
int main(int argc, char *argv[])
{
    int choose=1;
    while(choose){
        cout<< "(7,4) => 1 enter\n(15,11) =>2 enter"<<endl;
        cin>>choose;
        switch(choose){
            case 1:
                for(int i=0;i<7;i++){
                    a[i]=cStringToInt(argv[i]);
                }
                ch74();
                break;
            case 2:
                for(int i=0;i<15;i++){
                    a[i]=cStringToInt(argv[i]);
                }
                ch1511();
                break;
            default:
                cout<<"error";
                break;
        }
        cout<<"\ncontinue: y/n"<<endl;
        cin>>ch;
        if(ch=='y'||ch=='Y'){
            choose=1;
        }else choose=0;
    }

    return 0;
}
