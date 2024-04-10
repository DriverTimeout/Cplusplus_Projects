#include <iostream>

using namespace std; 
void BubbleSort(int[]);
int main()
{
  bool isValid= true;
  int x[10] = {10,12,14,16,18,16,14,12,10,8 };
   for (int i = 0; i < 10-1; i++){
      if(abs(x[i] - x[i + 1]) !=2){//! is not equal

        isValid=false;
      }
   }
if(isValid){
cout << "You have the right chain sequence!!" <<endl;

} 
else{
cout << "You have the wrong chain sequence!!" <<endl;
}
}
