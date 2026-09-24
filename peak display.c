// push==used to insert an elelment at the stack,
// pop==used to delelte an element at the stack,
// peak==used to display element at tha top elemantof stack,
// display==used to display all the element of stack,
 
start

   if top==(size-1){

    printf("over flow");
}
else{
    top=top+1;
    printf("Enter the value of insert");
    scanf("%d",&value);
    stack[top]=value;
}
    end;

    start
       if top (top==-1){
        printf("under flow");
       }
    else{
        printf("%d deleted",stack[top]);
        top=top-1;
    }
        end;

        start
        if (top==-1){
            printf("Empty stack");
        }
        else{
            printf("%d peak element",stack[top]);
        }
        end;

        start
        if(top==-1){
            display empty;
        }
        else{
            for(i=top;i>=0;i--){
                printf("%d",&[i]);
            }
            end;
        }