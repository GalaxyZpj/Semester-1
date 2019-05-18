#include <stdio.h>
#include <string.h>
int main(){
  FILE *fp;
  char name[20], t[20];
  int n,i=0;
  printf("Enter the number of names to be entered: ");
  scanf("%d",&n);

  char p[n][20];
  fp=fopen("/Users/pranavjain/Desktop/N.txt","w");


  for(i=0; i<n; i++){
    printf("Enter name %d: ",i+1);
    scanf("%s", name);
    fprintf(fp,"%s\n", name);
  }
  printf("\nData entered in file successfully.");
  fclose(fp);

  fp=fopen("/Users/pranavjain/Desktop/N.txt","r");
  while(fscanf(fp,"%s",name)!=EOF){
    strcpy(p[i],name);
    i++;
  }
  fclose(fp);


  for(i;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(strcmp(p[j],p[j+1])>0){
        strcpy(t,p[j]);
        strcpy(p[j],p[j+1]);
        strcpy(p[j+1],t);
      }
    }
  }
  printf("\nThe names in ascending order are:\n");
  for(i; i<n; i++) {
    printf("%s", p[i]);
  }

  FILE *f=fopen("/Users/pranavjain/Desktop/Nnew.txt","w+");
    for(i;i<n;i++){
    fprintf(f,"%s",p[i]);
  }

  fclose(f);
  return 0;
}
