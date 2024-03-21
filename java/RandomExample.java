public class RandomExample{
    //main method
    public static void main(String[] args){
    //Randomly generate numbers between 0-1
    System.out.println((int)(0 + (int)(Math.random() * ((1  -0) + 1))));
    
    //Activity 2: add codes here to generate integers 0,1,2,...,9
    System.out.println((int)(0 + (int)(Math.random() * ((9  -0) + 1))));
    /*
    Homework 1.1: add codes to generate:
    a) 0,1,2,3
    b) 1,2,3,4,5,6
    c) 2,4,6,8
    d) -5,-4,...,4,5
    */
    //a)
    System.out.println((int)(0 + (int)(Math.random() * ((3  -0) + 1))));
    //b)
    System.out.println((int)(1 + (int)(Math.random() * ((6  -1) + 1))));
    //c)
    System.out.println(2 * (int)(1 + (int)(Math.random() * ((4  -0) + 1))));
    //d)
    System.out.println((int)(0 + (int)(Math.random() * ((10  -0) + 1)))-11);
    }
}
