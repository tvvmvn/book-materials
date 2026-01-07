# String

Strings are used for storing text/characters.

For example, "Hello World" is a string of characters.

Unlike many other programming languages, C does not have a String type to easily create string variables. Instead, you must use the char type and create an array of characters to make a string in C:

```c
char greetings[] = "Hello World!";

printf("%s", greetings);
```

Another Way Of Creating Strings
In the examples above, we used a `string literal` to create a string variable. This is the easiest way to create a string in C.

You should also note that you can create a string with a set of characters. This example will produce the same result as the example in the beginning of this page:

```c
char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};

printf("%s", greetings);
```

Why do we include the `\0` character at the end? This is known as the `null terminating character`, and must be included when creating strings using this method. It tells C that this is the end of the string.


## Access

```c
char greetings[] = "Hello World!";

printf("%c", greetings[0]);
```


### Modify

```c
char greetings[] = "Hello World!";
greetings[0] = 'J';

printf("%s", greetings);
// Outputs Jello World! instead of Hello World!
```