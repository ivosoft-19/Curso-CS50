#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Nme, Age, Phone number, Location
    string name = get_string("Name: ");
    int age = get_int("Age: ");
    string phone = get_string("Phone number: ");
    string location = get_string("Location: ");

    // printf("Name: %s\nAge: %d\nPhone: %s\nLocation: %s\n", name, age, phone, location);
    printf("New Contacts: %s, %i, Lives in %s, and can be reached at %s\n", name, age, location, phone);


}