class Isomorphic{
    // This function returns true if str1 and str2 are ismorphic
    // else returns false
    public static boolean areIsomorphic(String S1,String S2)
    {
        if(S1.length()!=S2.length()){
return false;
}
int count1[] = new int[256];
int count2[] = new int[256];
for(int i = 0; i < S1.length(); i++){
if(count1[S1.charAt(i)] != count2[S2.charAt(i)]){
return false;
}else{
count1[S1.charAt(i)]++;
count2[S2.charAt(i)]++;
}
        
    }
    return true;
}
}
