int main()
{
    char c[] = "a3b14";
    
    for(int i=0;c[i]!='\0';)
    {   
          char alpha = c[i];
          i++;
          int num = 0;

        while((c[i] >= '0' && c[i] <= '9'))
        {
            num = num*10 + (c[i] - '0');
            i++;
        }
        
        for(int k=0;k<num;k++)
        {
            printf("%c",alpha);
        }
    }
}