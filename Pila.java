// Implementación de una Pila en Java


public class Pila {
    // Vaor constante en Java
    static final int MAX = 100;
    
    double arr[];
    int tope;
    
    // Constructor
    Pila(){
        arr = new double[MAX];
        tope = -1;
    }
    
    public boolean esLlena(){
        return tope == MAX-1;
    }
    
    public boolean esVacia(){
        return tope == -1;
    }
    
    public void push(double x) {
        if(esLlena()){
            System.out.println("Pila Llena\n");
        } else{
            tope++;
            arr[tope] = x; 
        }
    }
    
    public void pop() {
        if(esVacia()){
            System.out.println("Pila Vacia\n");
        } else{
            --tope;
        }
    }
    
    public void desplegar(){
        if(esVacia()){
            System.out.println("Pila Vacia\n");
        } else{
            for(int i=tope; i>=0; i--){
                System.out.print(arr[i] + " ");
            }
            System.out.println();
        }
    }
    
    public double peek(){
        if(esVacia()){
            System.out.println("Pila Vacia\n");
            return Double.MIN_VALUE;
        } else{
            return arr[tope];
        }
    }
    
    public int size(){
        if(tope == -1) return 0;
        else return tope+1;
    }
    
    public static void main(String[] args) {
        Pila p1 = new Pila();
        // Insertando Elementos
        System.out.println("Elementos en la Pila: ");
        p1.push(3.4);
        p1.push(9.1);
        p1.push(12.4);
        p1.push(8.5);
        p1.push(-3.7);
        p1.push(6.5);
        p1.desplegar();
        System.out.println("Valor en el tope: " + p1.peek());
        System.out.println("No. Elementos en la Pila: " + p1.size());
        System.out.println();
        // Borrando Elementos
        System.out.println("Elementos en la Pila: ");
        p1.pop();
        p1.pop();
        p1.pop();
        p1.desplegar();
        System.out.println("Valor en el tope: " + p1.peek());
        System.out.println("No. Elementos en la Pila: " + p1.size());
    }
}
