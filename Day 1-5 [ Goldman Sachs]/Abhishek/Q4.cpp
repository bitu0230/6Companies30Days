
string encode(string src)
{     
    int n=src.size(),c=1;
    string temp;
    for(int i=0;i<n;i++)
    {   
        if(src[i]==src[i+1])
        {
            c++;
            
        }
        else
        {   string t=to_string(c);
            temp+=src[i]+t;
            c=1;
        }
        
    }
   // cout<<temp;
    return temp;
  //Your code here 
}     
