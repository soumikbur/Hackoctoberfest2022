public class Call_By_Value_and_Reference{
    int a,b;
    
    /*In call by value a copy of the values of the variables are passed theirfore the actual variables remain unmodified*/
    public static void swap_by_value(int a,int b){
        int temp=a;
        a=b;
        b=temp;
        System.out.println("Call by Value:");
        System.out.println("a: "+a);
        System.out.println("b: "+b);
    }
    
    /*In call by reference Actual variables are modified as we pass their reference to the function*/
    public void swap_by_reference(Call_By_Value_and_Reference ob){
        int temp=ob.a;
        ob.a=ob.b;
        ob.b=temp;
    }
    public static void main(String[] args){
        Call_By_Value_and_Reference ob=new Call_By_Value_and_Reference();
        ob.a=12;
        ob.b=13;
        
        //Call by value
        swap_by_value(ob.a,ob.b); 
        
        //Call by reference
        ob.swap_by_reference(ob);
        
        System.out.println("Call by Reference:");
        System.out.println("a: "+ob.a);
        System.out.println("b: "+ob.b);
    }
}
