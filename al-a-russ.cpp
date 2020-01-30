#include <iostream>
#include <time.h>
using namespace std;

int a_la_ruse(int m,int n)
{
  int temp=0;
  while(m!=1)
  {
    
    if(m%2==1)
    {
      temp+=n;
    }
	m=m/2;
    n=n*2;
  }
    temp+=n;
	return temp;
}
int main(){
	clock_t tStart = clock();
 	cout<<a_la_ruse(24,16)<<endl;
 	printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
return 0;
}

