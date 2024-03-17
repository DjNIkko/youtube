//demontration of strucrure 
struct course
{
    int ccode;
    char cname[50];
    int cfees;
};

struct course c1,c2;
void main(){

    //get inpur
    printf("\n Enter Data: ");
    scanf("%d %s %d",&c1.ccode,c1.cname,&c1.cfees);
    scanf("%d %s %d",&c2.ccode,c2.cname,&c2.cfees);

    //print
    printf("\n ccode \t cname \t cfees");
    printf("\n %d \t %s \t %d \n %d \t %s \t %d",c1.ccode,c1.cname,c1.cfees,c2.ccode,c2.cname,c2.cfees);


} 