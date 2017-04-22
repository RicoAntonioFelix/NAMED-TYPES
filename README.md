# NAMED-VALUES
Literal types to make APIs more expressive at the call site.

Consider having a function to perform dhcp negotiation as follows:
```cpp
void negotiate_dhcp(const double timeout = 10.0);
```
At the call site, a call to such function will look like the following:
```cpp
negotiate_dhcp(5.0);
```
Here the value `5.0` is vague from the call site. *In order to understand the meaning of `5.0`, one must become intimately familiar with the function and use memorization to add meaning to the value `5.0`.

We can do better an enhance the expressiveness at the call site. Consider having a function to perform dhcp negotiation as follows:
```cpp
using timeout = double_t<class timeout_tag>;
void negotiate_dhcp(const timeout tmout = timeout{10.0});
```
At the call site, a call to such function will look like the following:
```cpp
negotiate_dhcp(timeout{5.0});
```
Now it's simple to read and understand the meaning of the function call, where the meaning of the value `5.0` is the timeout value.
This can be applied to interfaces with no overhead of increase in binary size or overhead in runtime execution. There is only the added benefit of readability and expressiveness.

* Not everyone make use of IDE's and prefer a simple lightweight text editor which may not provide intellisense.
* It's better to express intent explicitly using language, after all it's a skill we humans have developed over centuries.
