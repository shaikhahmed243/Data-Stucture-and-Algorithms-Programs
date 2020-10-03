// https://www.facebook.com/anul.rajeev/posts/345077733501869
// Subscribed by Anul Rajeev


//Funciton Counts the number of set bits in n
int countSetBits(int n) 
{ 
       int count = 0; 
       while (n) { 
          n &= (n - 1); 
          count++; 
       } 
      return count; 
} 
