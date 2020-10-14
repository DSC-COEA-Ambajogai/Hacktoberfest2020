
void pushBottom(int ele){            //push to bottom
    int x;
    if (top == -1)
    {
        push(ele);                   //pushing element
        return;
    }
    else
    {
        x = pop();                    //popout element
        pushBottom(ele);
        push(x);
    }
}
