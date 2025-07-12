class Person { 
String name; 
int age; 
// Constructor 
Person(this.name, this.age); 
void sayHello() { 
print("Hello, my name is $name and I am $age years old."); 
} 
} 
void main() { 
Person p2 = Person("Sakif", 23); 
p2.sayHello();  // Output: Hello, my name is Sakif and I am 23 years old. 
}