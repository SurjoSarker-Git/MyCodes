package JavaProject;
public class Car

{
    String model;
    String owner ;
    int serialNumber;

    public Car(String model,String owner,int serialNumber)
    {
        this.model=model;
        this.owner=owner;
        this.serialNumber=serialNumber;
    }

    public void start(String mode)
    {
        if("START".equals(mode))
        {
            System.out.println("Car started");
        }
        else
        {
            System.out.println("Car is stopped");
        }
    }

    public void stop(String status)
    {
        if("stop".equals(status))
        {
            System.out.println("Car is stopped");
        }

        else
        {
            System.out.println("Car is running");
        }
    }

    public void fuel(int liter)
    {
        if(liter>=50)
        {
            System.out.println("Fuel is enough");
        }

        else
        {
            System.out.println("Fuel needed!");
        }
    }

    public static void main(String[] args) 
    {
        Car car=new Car("BMW","Surjo",1397424);
        car.start("START");
        car.stop("STOP");
        car.fuel(75);
    }
}