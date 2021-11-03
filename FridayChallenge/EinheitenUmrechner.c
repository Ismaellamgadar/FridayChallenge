double Ctof(double num1);
double Ftoc(double num1);


int Einheitenumrechner () {
    int cf;
    double num1 = 1.0;
    double ret;

    printf("\n");
    printf("F in C: 1\nC in F: 2 \n");
    scanf("%d", &cf);

    printf("Zahl 1:");
    scanf("%lf", &num1);


    if (cf == 69){
        printf("haha the funny number \n");
    }
    else if (cf == 1){
        ret = Ctof(num1);
        printf("%lf\n",ret);
    }
    else if (cf == 2){
        ret = Ftoc(num1);
        printf("%lf\n",ret);
    } else{
        printf("this is not a valid number :(");
    }

    return 0;
}



double Ctof(double num1){
    double result;

    result = num1 - 32.0 ;
    result = result * (5.0/9.0);

    return result;

}

double Ftoc(double num1){
    double result;

    result = num1 * (9.0/5.0) ;
    result = result  + 32.0;

    return result;

}