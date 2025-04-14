# Comparison Operators in MongoDB

MongoDB provides a variety of comparison operators to query documents based on specific conditions. Below is a list of commonly used comparison operators:

| Operator  | Description                              | Example Usage                          |
|-----------|------------------------------------------|----------------------------------------|
| `$eq`     | Matches values that are equal to a value | `{ field: { $eq: value } }`           |
| `$ne`     | Matches values that are not equal       | `{ field: { $ne: value } }`           |
| `$gt`     | Matches values greater than a value     | `{ field: { $gt: value } }`           |
| `$gte`    | Matches values greater than or equal    | `{ field: { $gte: value } }`          |
| `$lt`     | Matches values less than a value        | `{ field: { $lt: value } }`           |
| `$lte`    | Matches values less than or equal       | `{ field: { $lte: value } }`          |
| `$in`     | Matches any value in an array           | `{ field: { $in: [value1, value2] } }`|
| `$nin`    | Matches none of the values in an array  | `{ field: { $nin: [value1, value2] } }`|

### Example Query
```json
db.collection.find({ age: { $gte: 18, $lte: 30 } })
```
The above query retrieves documents where the `age` field is between 18 and 30 (inclusive).

For more details, refer to the [MongoDB Documentation](https://www.mongodb.co m/docs/manual/reference/operator/query-comparison/).