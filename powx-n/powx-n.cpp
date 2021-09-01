class Solution {
public:
    double myPow(double x, int n) {
           long n1 = n;
    if(n < 0)
    {
        n1 = (-1) *n1;
    }
    else
    {
        n1 = n;
    }
    double  mul = 1;
    
    
    while(n1 != 0)
    {
        if(n1%2 == 0)
        {
            x = x*x;
            n1 = n1/2;
        }          
        else
        {
        mul = mul * x;
        n1 --;
        }
    }
    
    if(n < 0)
    {
         return (1 / mul);
      
    }
    
    return mul;
    
}
};
        
