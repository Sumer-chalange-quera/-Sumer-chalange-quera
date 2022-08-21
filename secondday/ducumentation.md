Mr. Hashemi's language is an attempt to produce a native programming language, suitable for those who want to start programming.

For the first time, on 28 December 2018, the creation of this language came to the public's knowledge in a tweet from the creator of this language. The reason for choosing Mr. Hashemi's name for this language is the strong interest of the creator of the language in the characters of the elementary school social studies book, who are known by the name of Mr. Hashemi's family.

However, it seems that Mr. Hashemi's work in Iran's post office has also played a significant role in choosing his name for this language!

In the next parts of this documentation, we will get to know the language itself and the unique features provided by Mr. Hashemi.

A picture of Mr. Hashemi's private life

Getting started with Mr. Hashemi's language
The installation of Mr. Hashemi is very simple, you only need to download the executable file of the latest version from Mr. Hashemi's GitHub.

Please note that by default this file is not allowed to run. So the first step will be to allow this file to run.

chmod +x hashem
Programs executable by this language must be stored in files with the file_name.hashem extension.

Now we can write the "Drud Jahan" program together in this language to learn more about the syntax of this language. First, create a file called dorood-jahan.hashem that contains the code below.

bebin azinja() {
  bechap("Dorood Jahan");
}
As you can see, the structure of Mr. Hashemi's language is very similar to C-like languages.

To run the above program, just give the address of the file to hashem.

hashem dorood-jahan. hashem
If you have any problems in the implementation of the above steps, make sure to create an issue for Mr. Hashemi so that we can solve the problems as soon as possible.

variable defining
To define the variable, it is enough to write the name of the variable and then set its value.

nam = "Mr";
famil = "Hashemi";
tedadeBache = 3;
moteahel = 1==1;
mabda = "Kazeroon";
maghsad = "Neishaboor";
  
bechap("Aghaye "+nam+famil+", "+tedadeBache+" farzand darad.");
// => ke chap khahad kard "Aghaye Mr Hashemi, 3 farzand darad."
Two methods are used to add comments in this language. Or use two slashes to add details (like the print result in the code above) or a slash and an asterisk for a commented space. Note: The commented parts are only for human study and cannot be processed for Mr. Hashemi's language

A diagonal line and two stars are used to produce documents.

// yek comment
/*
in teke az code pardazesh nakhahad shod
*/
/**
 * baraye neveshtan e mostanadat
 */
Monitor program flow
Using commands such as if age and until ta, we can monitor the flow of the program.

control flow

As an example, in the following program, if the condition of the printed text is true, the output will be doroste, but if it is false, it will print dorost nist, ye fekri barash bokon.

    age (1==1) bood {
        bechap("doroste");
        } na? {
        bechap("dorost nist, ye fekri barash bokon");
    }
// => ke chap khahad kard "doroste"
By using the keyword until our condition is true, the lines written inside the loop will be executed. In the following loop, numbers from 1 to 10 are added together and the result is stored in a variable.

addadeMan = 0;
majmoo = 0;
  
ta (adadeMan<11) bood {
    majmoo = majmoo + adadeMan;
    adadeMan +=1;
}
  
bechap("majmoo barabar ast ba: "+majmoo);
Function definition
Functions in Mr. Hashemi's programming language are defined by bebin. You can see the structure of a function below. After the bebin keyword, the function name is written here, esme_functione_bebin. Then we specify the desired inputs for the function inside the parentheses. Note that the values ​​defined in parentheses are accessible to the internal scope of the function and are so-called local.

bebin esme_functione_bebin(voroodi) {
    khorooji = voroodi;
    // Desired commands for this function
    // It is written before reaching the "give" command
    bede khorooji;
}
A function definition, similar to what you see above, is not supposed to contain a result by itself. Therefore, the desired function should be called. In this way, we will be able to use the function function many times in our own code without having to write all the commands. Just call the function.

azinja function
In Mr. Hashemi's programming language, there is a special function called azinja and this name is reserved for starting programs. In other words, azinja, when you run a .hashem file at the command line of your operating system, Mr. Hashemi's language kernel must pick a starting point and execute the program. The answer to the question of where the core of Mr. Hashemi's language starts is bebin azinja.

Example
An example function to add two numbers. We save this code in a file called jam_adad_ha.hashem.

bebin jam(alef, be) {
    javab = alef + be;
    // Each time the desired answer is sent out of the function
    bede javab;
}

bebin azinja() {
    ye_adad = 100;
    ye_adad_dige = 200;
    result = jam(ye_adad, ye_adad_dige);
    bechap(natije);
}
You can see the implementation of the same piece of Hashemi language code and its result below.

user@hashemi-lang-pc $ hashemi ./jam_adad_ha.hashem
300
user@hashemi-lang-pc $
recursive functions
Recursive functions are called functions that call themselves. In mathematics, this is the caseIt is used to define the factorial function or to display the Fibonacci series.

N! := 1 (if n := 0)
N! = n * (n-1)! otherwise
Implementation of factorial recursive code in Mr. Hashemi's programming language:

bebin factorial(n) {
   age (n < 1) bood {
      bede 1;
   }
   bede factorial(n-1) * n;
}

bebin azinja() {
    f = factorial(10);
    bechap(f);
}
Output:

user@hashemi-lang-pc $ hashemi ./factorial.hashem
3628800
user@hashemi-lang-pc $
More professional use of functions
To calculate the mathematical combination and calculate the number of possible states for choosing k members from a set of n members, we use the following formula

image

But in this formula, factorial is used three times, and we only need to call the factorial function of the previous example three times in a new function.

bebin factorial(n) {
   age (n < 1) bood {
      bede 1;
   }
   bede factorial(n-1) * n;
}

bebin tarkib(k, n) {
    soorat = factorial(n);
    makhraj = factorial(k) * factorial(n-k);
    javab = soorat / makhraj;
    bede javab;
}

bebin azinja() {
    f = tarkib(5, 2);
    bechap(f);
}
Definition of text strings
Definition of disciplines
To define a text string (string), you can use the symbol ". The beginning and end of a text string must be marked with a quotation mark (quotation mark or "). Text strings in Mr. Hashemi's programming language support the utf-8 standard. As an example, you can see how to work with strings in the following code sample:

// We save this file with the name strings_basic.hashem
bebin azinja() {
    payam = "Greetings to the world";
    bechap(payam);

    matn = "dorood jahan";
    bechap(matn);
}
output

user@hashemi-lang-pc $ hashem ./strings_basic.hashem
hello world
dorood jahan
user@hashemi-lang-pc $
Special characters
If we want to use special characters inside the string, we display these characters with an escape sign (skip, backslash, or backslash \). In the example below, you see a \n character between the hello and world characters. This character means new line and the second part is displayed in the output.

// Save this file with the name strings_scapes.hashem
bebin azinja() {
    payam = "Hello world";
    bechap(payam);

    matn = "1\tdoroodjahan";
    bechap(matn);
}
output

user@hashemi-lang-pc $ hashem ./strings_scapes.hashem
Hello
the world
1 dorood jahan
You can see some examples of characters that are displayed with the escape sign \ in the table below.

Character description
======== =================
 \n new line
 tab
Define text block
If we want to write a long text in string format, adding \n reduces the readability of the written hashmiscripts. Therefore, an alternative solution can be to use three quotation marks at the beginning and end of the string ("""). In this case, we will be able to define a new line inside the text (press the Enter key).

// Save this file with the name textarea.hashem

bebin azinja() {
  matn_toolani = """A poem by Rumi
The coolness of that gambling game that lost what it was
Nothing left but the desire to gamble
  """;
  bechap(matn_toolani);
}
output

user@hashemi-lang-pc $ hashem ./textarea.hashem
Poem by Rumi
The coolness of that gambling game that lost what it was
Nothing left but the desire to gamble
  
jfarzand in the language of Mr. Hashemi
Definition of jfarzand
Before jfarzand, let's give a brief introduction about json. JSON (in English: JSON) stands for JavaScript Object Notation. JSON is derived from the JavaScript scripting language in representing simple data structures and associative arrays. Despite its deep connection to JavaScript, JSON is language-independent, with interpreters available for almost any language.

In Mr. Hashemi's language, emphasizing the negation of sexism and sexism, the word son, which only refers to a male child, has been removed and replaced by farzand.

Use jfarzand
// Save this file with the name jfarzand_usage.hashem
bebin azinja() {
    object = jfarzand("""{"name":"Mr.Hashemi"}""");
    bechap(object.name);
    bechap(object.x);
}
output

user@hashemi-lang-pc $ hashem ./jfarzand_usage.hashem
Mr. Hashemi
POOCH
As you can see, it is also possible to use jfarzand via namespace. If a key of a jfarzand object is referenced, while the said key is not previously defined, the output will be POOCH.

Boolean in Mr. Hashemi's language
Boolean data type
Mr. Hashemi's programming language allows programmers to define expressions whose result is a Boolean value. But until this moment, since we have not found a literal to represent the value, it was not possible to assign the value directly.

The design team of Mr. Hashemi's programming language has come to the conclusion to use the keyword false like other languages ​​and not specify a replacement for it, but the value true will not exist in Mr. Hashemi's programming language, because this literal does not express the fact that the certainty value is 100 has a percentage For this reason, it was decided to replace this keyword with the keyword zirsakht.

The reason for choosing the word zirsakht
We were looking for an Iranian symbol whose name expresses 100% authenticity. Among the choices on the table, Iran's only infrastructure communication company drew our attention to itself. Under A construction that has never bowed its eyebrows under the many problems that neighboring countries created for it by cutting off the internet and network connections, and has always given us complete assurance that Iran's infrastructure has no problems and everything is great and the problem is elsewhere.

Therefore, we decided to appreciate the day and night efforts of the employees of this company, and with great pleasure, use the literal zirsakht to display the correct value in Mr. Hashemi's programming language.
