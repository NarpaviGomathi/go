package DSA;

public class Stack {
    private int arr[];
    private int top;
    private int capacity;

    Stack(int size){
        arr = new int[size];
        capacity = size;
        top = -1;
    }

    public void puch(int x){
        if(isFull()){
            System.out.println("Stack is full.");
        }
    }
}
