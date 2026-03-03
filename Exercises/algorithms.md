# Containers

## Vector

```bash
std::vector<int> v;

Structure: Dynamic Array
Insert/Delete at end: O(1)
Insert/Delete at middle: O(n)

You need Indexing (v[i])
```

## Deque

```bash
std::deque<int> dq;

Structure: Double-ended Dynamic Array

You need both front & back operations
```

## List

```bash
std::list<int> l;

Structure: Doubly Linked List

Insert/Delete Anywhere
```

## Set

```bash
std::set<int> s;

Structure: Balanced BST
Order: Sorted
Duplicates: Not allowed

Always Sorted Slower than Unordered_set
```

## Unordered_set

```bash
std::unordered_set<int> s;

Structure: Hash table
Order: No Order

Very Fast
```

## Map

```bash
std::map<int,int> mp;

Sorted by Key
No Duplicate Keys
```

## Unordered_map

```bash
std::unordered_map<int,int> mp;

Not Sorted
```

## Stack

```bash
LIFO (Last In First Out)

Push -> Top
Pop -> Top
```

## Queue

```bash
FIFO (First In First Out)

Push -> Back
Pop -> Front
```

## Priority_queue

```bash
Highest Value Comes First (max heap by default)

Always Removes Largest Element First
```

---

| Container      | Sorted | Duplicates | Access    | Speed      |
|----------------|--------|------------|-----------|------------|
| vector         | ❌     | ✅         | O(1)      | Fastest    |
| deque          | ❌     | ✅         | O(1)      | Fast       |
| list           | ❌     | ✅         | O(n)      | Slow       |
| set            | ✅     | ❌         | No index  | O(log n)   |
| unordered_set  | ❌     | ❌         | No index  | O(1) avg   |
| map            | ✅     | ❌ keys    | Key-based | O(log n)   |
| unordered_map  | ❌     | ❌ keys    | Key-based | O(1) avg   |

---
