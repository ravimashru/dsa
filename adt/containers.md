Containers
=========
A class, data strucuture, or ADT whose instance is a collection of other objects.

Containers can be looked at in three ways:
 - **Access:** the way of accessing the objects of the container.
 - **Storage:** the way the objects of the container are stored.
 - **Traversal:** the way the objects of the container are traversed.

Containers are expected to implement methods to do the following:
 - Create an empty container. *(constructor)*
 - Insert objects into the container.
 - Delete objects from the container.
 - Delete all the objects in the container. *(clear)*
 - Access the objects in the container.
 - Access the number of objects in the container. *(count)*

Containers are sometimes implemented in conjunction with iterators.

Containers can be divided into two groups:
 - **Single value containers:** Each object is stored independently in the container and is accessed directly or with an iterator.
 - **Associative containers:** An associative array, map, or dictionary is a container composed of (key, value) pairs, such that each key appears at most once in the container. The key is used to find the value, the object, if it is stored in the container.
