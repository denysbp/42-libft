<h1 style="text-align:center;">Libft</h1>

<b style="text-align:justify; display:block;">This project has been created as part of the 42 curriculum by deferrei</b>

<h2>Description</h2>

<p style="font-size:16px; font-family:Arial, sans-serif;">This is the first one of projects of 42 school and I created more than 20 functions. This project aims to help you understand how these functions work by implementing them yourself and learning to use them effectively, which will be valuable for your future C school assignments.</p>

<h3>Functions</h3>

<h4>Verifications</h4>

<h5>ft_isalpha:</h5>
<pre><code>int ft_isalpha(int c);</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;">Function that verifies if the parameter is an alphabetic character. Returns 1 if true, 0 otherwise.</p>
<hr>

<h5>ft_isdigit:</h5>
<pre><code>int ft_isdigit(int c);</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;">Function that verifies if the parameter is a digit. Returns 1 if true, 0 otherwise.</p>
<hr>

<h5>ft_isalnum:</h5>
<pre><code>int ft_isalnum(int c);</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;">Function that verifies if the parameter is alphanumeric. Returns 1 if true, 0 otherwise.</p>
<hr>

<h5>ft_isascii:</h5>
<pre><code>int ft_isascii(int c);</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;">Function that verifies if the parameter is an ASCII character. Returns 1 if true, 0 otherwise.</p>
<hr>

<h5>ft_isprint:</h5>
<pre><code>int ft_isprint(int c);</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;">Function that verifies if the parameter is a printable character. Returns 1 if true, 0 otherwise.</p>
<hr>

<h4>To functions</h4>

<h5>ft_toupper:</h5>
<pre><code>int ft_toupper(int c);</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;">Function that converts the parameter to uppercase if it is a lowercase letter.</p>
<hr>

<h5>ft_tolower:</h5>
<pre><code>int ft_tolower(int c);</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;">Function that converts the parameter to lowercase if it is an uppercase letter.</p>
<hr>

<h4>String functions</h4>

<h5>ft_strlen:</h5>
<pre><code>size_t ft_strlen(const char *str);</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;">Function that receives a string and counts the number of characters, returning the size without including the null character.</p>
<hr>

<h5>ft_strchr:</h5>
<pre><code>char *ft_strchr(const char *str, int ch);</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;">Function that receives a string and a character, and returns the substring starting from the first occurrence of the character until the end of the string.</p>
<hr>

<h5>ft_memcpy:</h5>
<pre><code>void *ft_memcpy(void *dest, const void *src, size_t count);</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;">Function that copies data from one void pointer to another, byte by byte, up to the specified size.</p>
<hr>

<h5>ft_strncmp:</h5>
<pre><code>int ft_strncmp(const char *str, const char *st, size_t count);</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;">Function that compares two strings up to <code>count</code> characters, returning the difference between them. Returns a negative number if <code>st</code> is larger than <code>str</code>.</p>
<hr>

<h5>ft_atoi:</h5>
<pre><code>int ft_atoi(const char *str);</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;">Function that converts a string to an integer, following these rules:</p>
<ul>
  <li>Stops conversion when encountering non-digit characters after the initial number sequence.</li>
  <li>Does not perform conversion if there is more than one sign character.</li>
</ul>
<hr>

<h5>ft_bzero:</h5>
<pre><code>void ft_bzero(void *str, size_t n);</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;">Function that sets <code>n</code> bytes of the given void pointer to the null character.</p>
<hr>

<h5>ft_memset:</h5>
<pre><code>void ft_memset(void *dest, int ch, size_t count);</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;">Function that sets <code>count</code> bytes of <code>dest</code> to the character <code>ch</code>.</p>
<hr>

<h5>ft_memmove:</h5>
<pre><code>void *ft_memmove(void *dest_str, const void *src_str, size_t numBytes);</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;">Function that copies <code>numBytes</code> from <code>src_str</code> to <code>dest_str</code>, handling overlapping memory safely by copying forwards or backwards as needed.</p>
<hr>

<h5>ft_strlcpy:</h5>
<pre><code>size_t ft_strlcpy(char *dest, const char *src, size_t size);</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;">Copies up to <code>size-1</code> characters from <code>src</code> to <code>dest</code> and adds a null terminator.</p>
<hr>

<h5>ft_strlcat:</h5>
<pre><code>size_t ft_strlcat(char *dest, const char *src, size_t size);</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;">Concatenates <code>src</code> to the end of <code>dest</code> up to <code>size</code> bytes total, adding a null terminator. Returns the length the string would have had if there was enough space.</p>
<ul>
  <li>If buffer has space: <code>return len_src + len_dest;</code></li>
  <li>If buffer too small: <code>return size + len_src;</code></li>
</ul>
<hr>

<h5>ft_strnstr:</h5>
<pre><code>char *ft_strnstr(const char *str, const char *src, size_t size);</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;">Searches for the first occurrence of <code>src</code> in <code>str</code> within the first <code>size</code> characters. Returns a pointer to the match or <code>NULL</code> if not found.</p>
<hr>

<h5>ft_strrchr:</h5>
<pre><code>char *ft_strrchr(const char *str, int chr);</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;">Searches for the last occurrence of <code>chr</code> in <code>str</code>. Returns a pointer to the match or <code>NULL</code> if not found.</p>
<hr>

<h5>ft_memchr:</h5>
<pre><code>void *ft_memchr(const void *str, int chr, size_t size);</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;">Searches for the first occurrence of <code>chr</code> in <code>void *str</code> until <code>size_t size</code> bytes of a block of memory. Returns a pointer to the match or <code>NULL</code> if not found.</p>
<hr></p>

<h5>ft_memcmp:</h5>
<pre><code>int ft_memcmp(const void *s1, const void *s2, size_t size);
</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;"> This function will compare two<code>void *</code> pointer <code>s1</code> and <code>s2</code> until <code>size_t size</code> bytes of a block of memory.Them will return 0 if they are equals a positive number if <code>s1</code> is bigger than  <code>s2</code> and a negative number if <code>s1</code> are smaller than <code>s2</code>.</p>
<hr>

<h5>ft_calloc:</h5>
<pre><code>void	*ft_calloc(size_t space, size_t size);</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;"> This function allocates a amount of memory<code>size_t space</code> of a type of the data you wanna pass <code>size_t size</code> and fills it with 0 and return a pointer to it.</p>
<hr>

<h5>ft_memcmp:</h5>
<pre><code>int ft_memcmp(const void *s1, const void *s2, size_t size);
</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;"> This function will compare two<code>void *</code> pointer <code>s1</code> and <code>s2</code> until <code>size_t size</code> bytes of a block of memory.Them will return 0 if they are equals a positive number if <code>s1</code> is bigger than  <code>s2</code> and a negative number if <code>s1</code> are smaller than <code>s2</code>.</p>
<hr>

<h5>ft_strdup:</h5>
<pre><code>char *ft_strdup(const char *src);
</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;"> This function will receive <code>const char *src</code> and will store the equal size of memory, copy the string and return a pointer that will be the copy of the <code> const char *src</code>.</p>
<hr>

<h5>ft_substr:</h5>
<pre><code>char *ft_substr(const char *s, unsigned int start, size_t end);</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;"> This function will receive <code>const char *str</code> and will create a substring of the string,from the <code>size_t start</code> until the <code>size_t end</code> and will return the new string.</p>
<hr>

<h5>ft_strjoin:</h5>
<pre><code>char *ft_strjoin(char const *s1, char const *s2);</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;"> This function will receive <code>const char *s1</code> and <code>const char *s2</code> will create a new string, it will literally join the both string in new one, and will return the pointer to new string.
<hr>

<h5>ft_split:</h5>
<pre><code>char	**ft_split(char const *str, char c);</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;"> This function will receive <code>char const *s1</code> and <code>char set</code>, and will create a 2d array, counting the words by the <code>char set</code> delimiter, if just one of the allocation of new strings to the array fails it will free all the array, and return <code>NULL</code>.</p>
<hr>

<h5>ft_itoa:</h5>
<pre><code>char *ft_itoa(int number);</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;"> This function will receive <code>int number</code> and converte it to a string and return a string, if something fails will return a <code>NULL</code>.</p>
<hr>

<h5>ft_strmapi:</h5>
<pre><code>char *ft_strmapi(char const *s, char (*f)(unsigned int, char));</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;"> Applies the function <code>f</code> to each character of the
string <code>s</code>, passing its index as the first argument
and the character itself as the second. A new
string is created <code>(using malloc(3))</code> to store the
results from the successive applications of <code>f</code> .</p>
<hr>

<h5>ft_striteri:</h5>
<pre><code>void ft_striteri(char *s, void (*f)(unsigned int, char*));
</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;"> Applies the function <code>f</code> to each character of the
string passed as argument, passing its index as
the first argument. Each character is passed by
address to ’f’ so it can be modified if necessary.
</p>
<hr>

<h4>Write functions</h4>

<h5>ft_putchar_fd:</h5>
<pre><code>void ft_putchar_fd(char c, int fd);
</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;">This function will write a character passed on <code>char c</code> on the <code>int fd</code> to the file descriptor:
<ul>
	<li> Standard Input (0, stdin)</li>
	<li>Standard Output (1, stdout)</li>
	<li>Standard Error (2, stderr)</li>
</ul></p>
<hr>

<h5>ft_putstr_fd:</h5>
<pre><code>void ft_putstr_fd(char *s, int fd);
</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;">This function will write a array of character a character passed on <code>char *s</code> on the <code>int fd</code> to the file descriptor:
<ul>
	<li> Standard Input (0, stdin)</li>
	<li>Standard Output (1, stdout)</li>
	<li>Standard Error (2, stderr)</li>
</ul></p>
<hr>

<h5>ft_putendl_fd:</h5>
<pre><code>void ft_putendl_fd(char *s, int fd);
</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;">This function will write a array of character a character passed on <code>char *s</code> on the <code>int fd</code> to the file descriptor and write a new line character <code> \n</code>:
<ul>
	<li> Standard Input (0, stdin)</li>
	<li>Standard Output (1, stdout)</li>
	<li>Standard Error (2, stderr)</li>
</ul></p>
<hr>

<h5>ft_putnbr_fd:</h5>
<pre><code>void ft_putnbr_fd(int n, int fd);

</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;">This function will write  numbers  passed on <code>int n</code> on the <code>int fd</code> to the file descriptor:
<ul>
	<li> Standard Input (0, stdin)</li>
	<li>Standard Output (1, stdout)</li>
	<li>Standard Error (2, stderr)</li>
</ul></p>
<hr>

<h4>Linked list functions</h4>

<h5>The stuct:</h5>
<pre><code>typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;">linked list is a linear data structure made of nodes connected using pointers. Each node has: <code>content</code>: The value stored in the node. <code>next</code>: A reference to the next node.<br>
<strong style="color: #800080">Struct:</strong> It's like a mold that groups related variables, like a database.<br>
<strong style="color: #801A0A">typedef:</strong>
It is used to create an alias for a data type; instead of writing a struct s_list, we simply write t_list..</p>
<hr>

<h5 style>ft_lstnew:</h5>
<pre><code>t_list *ft_lstnew(void *content);
</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;">This function create a new list, and receive a <code>void *content</code> and the list receive the passed content, and point to NULL.
<hr>

<h5 style>ft_lstadd_front:</h5>
<pre><code>void ft_lstadd_front(t_list **lst, t_list *new);
</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;">This function lets us add a new element to the front of an existing list.
<br><code>t_list **lst</code>.
lst: pointer address to the first element of the list.
<br><code>*new</code> pointer address of the new element to add to the list.
<hr>

<h5 style>ft_lstsize:</h5>
<pre><code>int ft_lstsize(t_list *lst);
</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;">This function count the amost of list that we have on hour linked-list.
<hr>

<h5 style>ft_lstlast:</h5>
<pre><code>t_list *ft_lstlast(t_list *lst);
</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;">This function will iterate to the linked list and return the last list of the linked list.
<hr>

<h5 style>ft_lstadd_back:</h5>
<pre><code>void ft_lstadd_back(t_list **lst, t_list *new);
</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;">This function  adds a new node  to the end of a linked list . It ensures the new node becomes the last element, properly updating the pointer of the previous last node to point to the new node, handling empty lists by setting the head to the new node.
<hr>

<h5 style>ft_lstdelone:</h5>
<pre><code>void ft_lstdelone(t_list *lst, void (*del)(void*));
</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;">The function ft_lstdelone deletes the content of a list node with the function passed as parameter before freeing the memory of the node.
<hr>

<h5 style>ft_lstclear:</h5>
<pre><code>void	ft_lstclear(t_list **lst, void (*del)(void*));
</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;">Deletes and frees the given node and all its successors, using the function ’del’ and free(3).Finally, set the pointer to the list to NULL.
<hr>

<h5 style>ft_lstiter:</h5>
<pre><code>void	ft_lstiter(t_list *lst, void (*f)(void *));
</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;">This function aply the passed function <code>void (*f)(void *)</code> to each content of the lists on the linked list.
<hr>

<h5 style>ft_lstmap:</h5>
<pre><code>t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
</code></pre>
<p style="font-size:16px; font-family:Arial, sans-serif;">Iterate over the list 'lst' and apply the function 'f' to the content of each elements. Create a new list resulting of the successive applications of 'f'. The function 'del' is used to destroy the content of an element if necessary.
<