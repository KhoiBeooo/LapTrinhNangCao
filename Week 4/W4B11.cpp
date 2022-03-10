string pigLatin(string word){
   string res="";
   if(word[0]=='u' || word[0]=='e' ||word[0]=='o' || word[0]=='a' || word[0]=='i' ){
        res += word;
       res += "way";
    }
   else{
       for(int i=1; i<word.length();i++){ 
           res +=word[i];
       }
       res+=word[0];
       res+="ay";
   }
   return res;
}