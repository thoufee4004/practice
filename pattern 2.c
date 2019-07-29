int main(int argc,char *argv [])
{
  int row,i,j;
  row=atoi(argv[1]);
  scanf("%d", &row);
  printf("%d", row);
  for(i=0;i>=1;--i)
  {
    for(j=0;j<=i;++j)
    {
      printf("*");
    }
    printf("/n");
  }
  return 0;
}
