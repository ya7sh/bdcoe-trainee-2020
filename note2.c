int birthday(int s_count, int* s, int d, int m) {
     int count =0;
     for(int i=0;i<s_count;i++){
         int sum=0;
         for(int j=i;j<i+m;j++)
         sum+=s[j];
         if(sum==d)
         count++;
     }
     return count ;
}
????