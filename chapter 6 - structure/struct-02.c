
struct item
{
    int icode;
    char iname[50];
    int iprice;
    int iqty;
    int iamount;
};

struct item i1, i2, i3;

void main()
{

    //get input
    printf("\n Item 1 Data: ");
    scanf("%d %s %d %d", &i1.icode, i1.iname, &i1.iprice, &i1.iqty);
    printf("\n Item 2 Data: ");
    scanf("%d %s %d %d", &i2.icode, i2.iname, &i2.iprice, &i2.iqty);
    printf("\n Item 3 Data: ");
    scanf("%d %s %d %d", &i3.icode, i3.iname, &i3.iprice, &i3.iqty);

    //set amount
    i1.iamount = i1.iprice * i1.iqty;
    i2.iamount = i2.iprice * i2.iqty;
    i3.iamount = i3.iprice * i3.iqty;

    //output
    printf("\n Icode \t Iname \t Price \t Quantity \t Amount");
    printf("\n %d \t %s \t %d \t %d \t \t %d",i1.icode,i1.iname,i1.iprice,i1.iqty,i1.iamount);
    printf("\n %d \t %s \t %d \t %d \t \t %d",i2.icode,i2.iname,i2.iprice,i2.iqty,i2.iamount);
    printf("\n %d \t %s \t %d \t %d \t \t %d",i3.icode,i3.iname,i3.iprice,i3.iqty,i3.iamount);
    printf("\n \t \t \t \t \t %d",(i1.iamount+i2.iamount+i3.iamount));

}
