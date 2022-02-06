void setup() {// put your setup code here, to run once:
 pinMode(13,OUTPUT);
 pinMode(12,OUTPUT);
 pinMode(11,OUTPUT);
 pinMode(10,OUTPUT);

}

void loop() {// put your main code here, to run repeatedly:
  //Enter the decimal number (decimal number should range from 0 to 15 as it is a hexadecimal encoder)which you want to represent as its binary equivalent i.e. assign decimal number to varibale n. 
  int n=9;int temp=1;int r=0;
  while(n!=0)
  {
  int d=n%2;
      n=n/2;
      r=r+temp*d;
      temp=temp*10;
  }
  while (r!=0)
  {
   int digit=r%10;
   r=r/10;
   if (digit==0)
   {
    digitalWrite(10,LOW);
    break;
   }
   if(digit==1)
   {
    digitalWrite(10,HIGH);
    break;
   }
   }
   while (r!=0)
  {
   int digit=r%10;
   r=r/10;
   if (digit==0)
   {
    digitalWrite(11,LOW);
    break;
   }
   if(digit==1)
   {
    digitalWrite(11,HIGH);
    break;
  }
  }
   while (r!=0)
  {
   int digit=r%10;
   r=r/10;
   if (digit==0)
   {
    digitalWrite(12,LOW);
    break;
   }
   if(digit==1)
   {
    digitalWrite(12,HIGH);
    break;
   } 
  }
   while (r!=0)
  {
   int digit=r%10;
   r=r/10;
   if (digit==0)
   {
    digitalWrite(13,LOW);
    break;
   }
   if(digit==1)
   {
    digitalWrite(13,HIGH);
    break;
   } 
  }
 

}
