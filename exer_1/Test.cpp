/* Take the Person class from Exer 9-2 and add a derived class called Employee. You can omit the overload of operator
   <=> from exer 9-2. The Employee class adds one data member, an employee ID. Provide an appropiate constructor.
   From Employee, derive two more classes called Manager And Director.
   
   Put all your classes, including the Person class, in a namespace called HR. Note that you can export everything
   in a namespace as follows:
   
   export namespace HR { ... } */

import hr;

int main()
{
	HR::Person person{ "Otis", "Lowe" };
	HR::Employee employee{ 123, "Otis", "Lowe" };
}

   