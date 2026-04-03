# HTML & CSS Interview Questions – Quick Version

## Table of Contents

1. [Difference between Block-level and Inline elements](#q1)
2. [Semantic HTML elements and their importance](#q2)
3. [HTML Entities and when to use them](#q3)
4. [Purpose of the `<meta>` tag and its important attributes](#q4)
5. [Void/Empty elements in HTML](#q5)
6. [CSS Box Model and its components](#q6)
7. [Three ways to include CSS and the preferred method](#q7)
8. [Difference between `id` and `class` selectors in CSS](#q8)
9. [CSS Specificity and order of precedence](#q9)
10. [Difference between `display: none;` and `visibility: hidden;`](#q10)

---

<a name="q1"></a>
## Q1: What is the difference between Block-level and Inline elements in HTML?

#### বাংলা

HTML এ Block-level elements এবং Inline elements এর মধ্যে মূল পার্থক্য হলো তাদের layout behavior। Block-level elements সবসময় নতুন লাইন থেকে শুরু হয় এবং পুরো available width দখল করে। অন্যদিকে Inline elements নতুন লাইন শুরু করে না এবং শুধুমাত্র তাদের content যতটুকু জায়গা প্রয়োজন ততটুকুই space নেয়।

#### English

The main difference between Block-level and Inline elements in HTML is their layout behavior. Block-level elements always start on a new line and take up the full available width of the container. In contrast, inline elements do not start on a new line and only take up as much width as their content requires.

---

<a name="q2"></a>
## Q2: What are Semantic HTML elements, and why are they important?

#### বাংলা

Semantic HTML elements হলো এমন HTML tags, যেগুলো content-এর অর্থ বা role বোঝায়। যেমন `header`, `nav`, `main`, `section`, `article`, এবং `footer`। এগুলো ব্যবহার করলে code বেশি readable হয়, SEO improve হয়, এবং accessibility better হয়। তাই modern web development-এ semantic HTML খুব important।

#### English

Semantic HTML elements are HTML tags that clearly describe the meaning and structure of content, such as `header`, `nav`, `main`, `section`, `article`, and `footer`. They make the code more readable, improve SEO, and enhance accessibility for assistive technologies like screen readers. That is why semantic HTML is very important in modern web development.

---

<a name="q3"></a>
## Q3: What are HTML Entities, and when would you use them?

#### বাংলা

HTML Entities হলো special codes যেগুলো HTML এ এমন characters প্রদর্শনের জন্য ব্যবহার করা হয় যেগুলোর HTML এ special meaning আছে, যেমন `<`, `>`, এবং `&`। এগুলো ব্যবহার করলে browser সেই character গুলোকে tag হিসেবে না ধরে text হিসেবে দেখায়। এছাড়া special symbols যেমন ©, ® বা non-breaking space দেখানোর জন্যও HTML entities ব্যবহার করা হয়।  
এগুলো & দিয়ে শুরু হয় এবং ; দিয়ে শেষ হয়।

#### English

HTML Entities are special codes used in HTML to display characters that have a special meaning in HTML, such as `<`, `>`, and `&`. They ensure that these characters are displayed correctly as text instead of being interpreted as HTML tags. HTML entities are also used to display special symbols like ©, ®, and non-breaking spaces.  
They start with an ampersand (`&`) and end with a semicolon (`;`).

**Common Examples:**  
`&lt;` → displays `<`  
`&gt;` → displays `>`  
`&amp;` → displays `&`  
`&nbsp;` → non-breaking space  
`&copy;` → © copyright symbol  
`&reg;` → ® registered trademark  
`&euro;` → € euro sign

---

<a name="q4"></a>
## Q4: What is the purpose of the `<meta>` tag in the HTML `<head>` section, and what are some important attributes it can have?

#### বাংলা

`<meta>` tag HTML এর `<head>` section এ ব্যবহার করা হয় webpage সম্পর্কে metadata দেওয়ার জন্য। এই তথ্যগুলো browser, search engine, এবং social platforms ব্যবহার করে, কিন্তু page এ সরাসরি দেখা যায় না। গুরুত্বপূর্ণ কিছু attributes হলো `charset` (character encoding সেট করার জন্য), `name` এবং `content` (page description, author, keywords ইত্যাদি দেওয়ার জন্য), এবং `viewport` (mobile responsive design এর জন্য)।

#### English

The `<meta>` tag is used in the `<head>` section of an HTML document to provide metadata about the webpage. This information is not displayed on the page but is used by browsers, search engines, and other services. Important attributes include `charset` for defining character encoding, `name` and `content` for specifying metadata like description, keywords, and author, and `viewport` for controlling responsive behavior on mobile devices.

---

<a name="q5"></a>
## Q5: What are Void/Empty elements in HTML? Provide an example.

#### বাংলা

Void বা Empty elements হলো এমন HTML elements যেগুলোর কোনো closing tag থাকে না এবং এগুলোর ভিতরে কোনো content রাখা যায় না। এগুলো শুধুমাত্র একটি single tag হিসেবে ব্যবহৃত হয়। উদাহরণ হিসেবে `<br>` element ব্যবহার করা যায়, যা একটি line break তৈরি করে।

#### English

Void or Empty elements are HTML elements that do not have a closing tag and cannot contain any content inside them. They are written as a single tag. A common example is the `<br>` element, which is used to create a line break in a webpage.

---

<a name="q6"></a>
## Q6: Explain the CSS Box Model. What are its components?

#### বাংলা

CSS Box Model হলো একটি layout concept যা ব্যাখ্যা করে একটি HTML element browser এ কীভাবে space নেয়। প্রতিটি element একটি rectangular box হিসেবে কাজ করে। এই box চারটি অংশ নিয়ে গঠিত: **content, padding, border, এবং margin**। Content হলো element এর মূল অংশ, padding হলো content এর চারপাশের ভিতরের space, border হলো element এর চারপাশের boundary, এবং margin হলো element এর বাইরের space যা অন্য element থেকে দূরত্ব তৈরি করে।

#### English

The CSS Box Model is a layout concept that describes how an HTML element takes up space in the browser. Each element is represented as a rectangular box consisting of four parts: **content, padding, border, and margin**. The content is the main area where text or images appear, padding is the space around the content, the border surrounds the padding and content, and the margin is the outer space that separates the element from other elements.

---

<a name="q7"></a>
## Q7: What are the three ways to include CSS in an HTML document, and which one is generally preferred?

#### বাংলা

HTML document এ CSS যোগ করার তিনটি উপায় আছে: **Inline CSS**, **Internal CSS**, এবং **External CSS**। Inline CSS সরাসরি HTML tag এর `style` attribute এর মাধ্যমে ব্যবহার করা হয়। Internal CSS `<style>` tag এর মাধ্যমে `<head>` section এ লেখা হয়। External CSS আলাদা `.css` file এ লেখা হয় এবং `<link>` tag ব্যবহার করে HTML এর সাথে যুক্ত করা হয়। সাধারণত **External CSS বেশি preferred**, কারণ এটি code maintain করা সহজ করে এবং multiple webpage এ reuse করা যায়।

#### English

There are three ways to include CSS in an HTML document: **Inline CSS, Internal CSS, and External CSS**. Inline CSS is applied directly within an HTML element using the `style` attribute. Internal CSS is written inside the `<style>` tag within the `<head>` section of the HTML document. External CSS is written in a separate `.css` file and linked to the HTML document using the `<link>` tag. Generally, **External CSS is preferred** because it keeps the code clean, reusable, and easier to maintain across multiple pages.

---

<a name="q8"></a>
## Q8: Explain the difference between `id` and `class` selectors in CSS.

#### বাংলা

CSS এ `id` এবং `class` selectors HTML elements select করার জন্য ব্যবহার করা হয়। `id` একটি unique identifier এবং সাধারণত একটি page এ শুধুমাত্র একবার ব্যবহার করা হয়। CSS এ এটি `#` চিহ্ন দিয়ে select করা হয়। অন্যদিকে `class` selector একাধিক element এ একই style প্রয়োগ করার জন্য ব্যবহার করা হয় এবং CSS এ এটি `.` চিহ্ন দিয়ে select করা হয়। এছাড়া CSS specificity অনুযায়ী `id` selector এর priority `class` selector এর থেকে বেশি।

#### English

In CSS, `id` and `class` selectors are used to select HTML elements for styling. An `id` is a unique identifier and should typically be used only once in a page. It is selected in CSS using the `#` symbol. On the other hand, a `class` selector can be used on multiple elements to apply the same styles, and it is selected using the `.` symbol. Additionally, in CSS specificity, an `id` selector has higher priority than a `class` selector.

---

<a name="q9"></a>
## Q9: What is CSS Specificity, and what is the general order of precedence when styles conflict?

#### বাংলা

CSS Specificity হলো একটি rule যা নির্ধারণ করে যখন একাধিক CSS rule একই element এর উপর apply হয় তখন কোন style টি কার্যকর হবে। Browser selector এর specificity অনুযায়ী সিদ্ধান্ত নেয়। সাধারণ precedence order হলো: **Element selector < Class selector < ID selector < Inline CSS**। অর্থাৎ selector যত বেশি specific হবে তার priority তত বেশি হবে।

#### English

CSS Specificity is a rule used by the browser to determine which CSS style should be applied when multiple rules target the same element. The browser calculates specificity based on the type of selectors used. The general order of precedence is: **Element selector < Class selector < ID selector < Inline CSS**. This means the more specific a selector is, the higher its priority will be.

---

<a name="q10"></a>
## Q10: What is the difference between `display: none;` and `visibility: hidden;` in CSS?

#### বাংলা

`display: none` এবং `visibility: hidden` উভয়ই element লুকানোর জন্য ব্যবহৃত হয়, তবে তাদের আচরণ ভিন্ন। `display: none` ব্যবহার করলে element পুরোপুরি document layout থেকে সরিয়ে দেওয়া হয় এবং এটি কোনো space নেয় না। অন্যদিকে `visibility: hidden` element কে invisible করে দেয়, কিন্তু element তার layout space ধরে রাখে।

#### English

Both `display: none` and `visibility: hidden` are used to hide elements in CSS, but they behave differently. When `display: none` is applied, the element is completely removed from the document layout and does not take up any space. In contrast, `visibility: hidden` makes the element invisible while still preserving the space it occupies in the layout.

---