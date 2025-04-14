# Methods to Insert Data in MongoDB

MongoDB provides several methods to insert data into a collection. Below are the commonly used methods:

## 1. `insertOne()`
Inserts a single document into a collection.

```javascript
db.collection.insertOne({
    name: "John Doe",
    age: 30,
    city: "New York"
});
```

## 2. `insertMany()`
Inserts multiple documents into a collection.

```javascript
db.collection.insertMany([
    { name: "Alice", age: 25, city: "Los Angeles" },
    { name: "Bob", age: 28, city: "Chicago" }
]);
```

## 3. `save()` (Deprecated)
Inserts a document or updates it if it already exists. This method is deprecated and should be avoided.

```javascript
db.collection.save({
    _id: ObjectId("507f1f77bcf86cd799439011"),
    name: "Jane Doe",
    age: 32
});
```

## Notes
- Use `insertOne()` and `insertMany()` for better control and performance.
- Always handle errors when inserting data to ensure data integrity.
