public class ShapeTest {
        public static void main(String[] args) {
            // Test Circle
            Circle circle = new Circle(5);
            System.out.println("Circle Area: " + circle.calculateArea());
            System.out.println("Circle Perimeter: " + circle.calculatePerimeter());

            // Test Rectangle
            Rectangle rectangle = new Rectangle(4, 6);
            System.out.println("Rectangle Area: " + rectangle.calculateArea());
            System.out.println("Rectangle Perimeter: " + rectangle.calculatePerimeter());
        }
    }