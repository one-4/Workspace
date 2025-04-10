#Why MongoDB??
We use SQL primarily. It is a stcructured type Database {in the form of tables}.

we create a db.

create a Table. Table contains Primary Key Foreign Keys.
They use structured Tables to store Data in Columns and Rows.

This is switable for applications with well defined schemas and fixed data structures.

USe in E-commerce platforms, Employee tables, HR Management, etc..

Example: MySQL, PostgreSQL, Oracle.

Now in case of MONGODB......

IT uses NoSQL Databases.
NoSQL is a Non-relational Databases.

They provide flexibility in Data storage, allowing varied data types and structures.

These are Ideal for applications with dynamic or evolving data models.

CMS, social media platforms, gaming...
 Examples- MongoDB, cassandra, Redis,etc



MongoDB is a semi structured document. Data stored not in tables format.
Every entry stored in document(JSON) format. 

Different entries of same collection can have different number of fields.  
suppose:
>>ENTRY 1          //These are Written in JSON format.
```{
    "name": "Papai",
    "age": 34,
    "address": {
        "city": "Ichapore",
    }
}
```
>>ENTRY 2 
```
{
    "name": "Sanu",
    "address": {
        "city": "Barrackpore",
    }
}
```
Both the entries are acceptable. 
Here, age field is not in the 2nd entry but this will create no problem in MongoDB. But SQL will not accept it.

```Embedded Documents:- When there is objects inside other objects is called Embedded Documents.```

![a cute Dog!!](https://picsum.photos/id/237/200/300)  //image link in md

**Written in Bold!!**
*Written in Italic*
***Written in Bold & Italic!!***

>Hello
>>This Note is written By
>>>Anindya Roy.
