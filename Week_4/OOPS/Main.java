class Outer {
    void display() {
        System.out.println("Display method of Outer Class");
    }

    class Inner {
        void display() {
            System.out.println("Display method of Inner Class");
        }
    }
}

public class Main {
    public static void main(String[] args) {
        Outer objOuter = new Outer();
        objOuter.display();

        Outer.Inner objInner = objOuter.new Inner();
        objInner.display();
    }
}
