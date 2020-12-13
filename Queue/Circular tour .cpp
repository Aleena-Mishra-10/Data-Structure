int tour(petrolPump p[],int n)
{
    int start=0,deficit=0;
    int cap=0;
    for(int i=0;i<n;i++){
        cap+=p[i].petrol-p[i].distance;
        if(cap<0){
            start=i+1;
            deficit+=cap;
            cap=0;
        }
    }
    return (cap+deficit>0)?start:-1;
}
