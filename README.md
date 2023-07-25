# AR Company Simulation Project

This is a C++ project that simulates an AR (Augmented Reality) company, where employees are managed based on their roles. The project includes several classes - `Employee`, `Manager`, `Schedule`, `Worker`, and `User`.

## Overview

The AR Company Simulation Project aims to read user data from a text file and assign roles to the employees based on the columns in the file. The program will then manage the employees, their schedules, and their roles accordingly.

## Classes

### Employee

The `Employee` class represents a basic employee in the company. It contains attributes like `employeeID`, `name`, `age`, and `role`. This class serves as the base class for `Manager`, `Worker`, and `User` classes.

### Manager

The `Manager` class is a derived class from `Employee`. It represents a manager in the company and inherits attributes from the `Employee` class. Additionally, it has its own specific attributes and methods to handle managerial tasks.

### Schedule

The `Schedule` class manages the schedules of employees. It allows adding, modifying, and retrieving schedules for each employee based on their roles.

### Worker

The `Worker` class is another derived class from `Employee`. It represents a regular worker in the company and inherits attributes from the `Employee` class. It also has methods specific to worker responsibilities.

### User

The `User` class is the final derived class from `Employee`. It represents users who interact with the AR company's software. It inherits attributes from the `Employee` class and has methods specific to user interactions.

## Input Data

The program reads user data from a text file that includes information about employees. The format of the text file should be as follows:

```
employeeID, name, age, role
1, John Doe, 30, Manager
2, Jane Smith, 25, Worker
3, Alex Johnson, 22, User
...
```

The program will read each line of the text file, extract the employee's data, and assign the corresponding role (Manager, Worker, or User) to each employee.

## Getting Started

To run the AR Company Simulation Project, follow these steps:

1. Clone the project repository from [GitHub Repo URL].
2. Open the project in your preferred C++ IDE.
3. Build and compile the project.
4. Prepare a text file with employee data in the specified format (employeeID, name, age, role).
5. Run the program and provide the path to the text file as input.
6. The program will read the data, assign roles to employees, and manage their schedules accordingly.

## Contributing

...

## License

...
## Contact
...
