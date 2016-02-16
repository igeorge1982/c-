//
//  main.cpp
//  Practice
//
//  Created by Gaspar Gyorgy on 14/01/16.
//  Copyright © 2016 Gaspar Gyorgy. All rights reserved.
//

// pointers to base class
#include <iostream>
#include "second.h"

using namespace std;
using namespace sec;

class Base {
    int b;
    virtual void dummy() {}
};

class Derived:
public Base {
    int a;
};

/* Parts inventory item */
struct Item {
    int         id;     /* Part number */
    char *      name;   /* Part name   */
    float       cost;   /* Cost        */
};

/* Allocate and initialize a new Item object */
struct Item * make_item(const char *name) {
    struct Item * item;
    
    /* Allocate a block of memory for a new Item object */
    item = (struct Item *)malloc(sizeof(struct Item));
    if (item == NULL)
    return NULL;
    
    /* Initialize the members of the new Item */
    memset(item, 0, sizeof(struct Item));
    item->id =   -1;
    item->name = NULL;
    item->cost = 0.0;
    
    /* Save a copy of the name in the new Item */
    item->name = (char *)malloc(strlen(name) + 1);
    if (item->name == NULL) {
        free(item);
        return NULL;
    }
    strcpy(item->name, name);
    
    /* Return the newly created Item object */
    return item;
}

class Polygon {
protected:
    
    int width, height;
    
    public:
        void set_values (int a, int b)
        {
            width=a; height=b;
        }
    };


class Rectangle: public Polygon {

    public:
        int area()
        {
            return width*height;
        }
    };

class Triangle: public Polygon {

    public:
        int area()
        {
            return width*height/2;
        }
    };

void foo(int * &x, int** &y) {
    // modifying x or y here will modify a or b in main
    *x = 7;
}

int main () {
    
    struct Items {
        int         id;     /* Part number */
        char *      name;   /* Part name   */
        float       cost;   /* Cost        */
    };
    
    int val = 42;
    int *a  = &val;
    int **b = &a;
    int c = *a;

    Rectangle rect;
    Triangle trgl;
    
    Item it;
    Items at;
    Item * its;
    Item * sts = its;

    it.name = "hello";
    
    Item * st;
    st = &it;
    
    
    Polygon * ppoly1 = &rect;
    Polygon * ppoly2 = &trgl;
    
    ppoly1->set_values (4,5);
    ppoly2->set_values (4,5);
    
    Second* sec = 0;
    
    int id = at.id=2;
    char * name = at.name = "Name";
    float cost = at.cost = 1000;
    
    foo(a, b);
    cout <<*a << " a\n";
    cout <<b << " b\n";
    cout <<c << " c\n";
    
    cout << rect.area() << '\n';
    cout << trgl.area() << '\n';
    cout << it.Item::name << '\n';
    cout << st->name << '\n';
    cout << sec << '\n';
    
    cout <<its << " it\n";
    cout <<sts << " st\n";
    cout <<id << " id\n";
    cout <<&at << " at\n";
    
  
    try {
        Base * pba = new Derived;
        Base * pbb = new Base;
        Derived * pd;
        
        pd = dynamic_cast<Derived*>(pba);
        if (pd==0) cout << "Null pointer on first type-cast.\n";
        
        pd = dynamic_cast<Derived*>(pbb);
        
        if (pd==0) cout << "Null pointer on second type-cast.\n";
        
    } catch (exception& e) {
        
        cout << "Exception: " << e.what();
    }


    
    return 0;
}
