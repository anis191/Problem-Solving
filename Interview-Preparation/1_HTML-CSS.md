# HTML & CSS Interview Questions and Answers

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

## Q1: What is the difference between Block-level and Inline elements in HTML? {#q1}

### সহজ বাংলায় ব্যাখ্যা

HTML এ element সাধারণত দুই ধরনের হয়:

**1️⃣ Block-level elements**  
**2️⃣ Inline elements**

এদের মূল পার্থক্য হলো **layout এ তারা কীভাবে space নেয়**।

---

### 1️⃣ Block-level elements

Block-level elements সবসময় **নতুন লাইন থেকে শুরু হয়** এবং পুরো **width (পুরো লাইন)** দখল করে।

মানে: একটা block element এর পরে আরেকটা element এলে সেটা **নতুন লাইনে চলে যায়**।

**Example:**

```html
<div>Hello</div>
<p>World</p>
```

এখানে:

- `div` এক লাইনে
- `p` নতুন লাইনে

**Common block elements:**

- `div`
- `p`
- `h1` – `h6`
- `section`
- `article`
- `header`
- `footer`
- `ul`, `ol`, `li`

---

### 2️⃣ Inline elements

Inline elements **নতুন লাইন শুরু করে না**।  
এগুলো **content যতটুকু লাগে ততটুকু space নেয়**।

**Example:**

```html
<p>Hello <span>World</span></p>
```

এখানে `span` একই লাইনে থাকবে।

**Common inline elements:**

- `span`
- `a`
- `strong`
- `em`
- `img`
- `label`

---

### সহজভাবে মনে রাখার ট্রিক

- **Block** → new line + full width
- **Inline** → same line + content width

---

### Interview Ready Answer

#### বাংলা

HTML এ Block-level elements এবং Inline elements এর মধ্যে মূল পার্থক্য হলো তাদের layout behavior। Block-level elements সবসময় নতুন লাইন থেকে শুরু হয় এবং পুরো available width দখল করে। অন্যদিকে Inline elements নতুন লাইন শুরু করে না এবং শুধুমাত্র তাদের content যতটুকু জায়গা প্রয়োজন ততটুকুই space নেয়।

#### English

The main difference between Block-level and Inline elements in HTML is their layout behavior. Block-level elements always start on a new line and take up the full available width of the container. In contrast, inline elements do not start on a new line and only take up as much width as their content requires.

---

## Q2: What are Semantic HTML elements, and why are they important? {#q2}

### সহজ বাংলায় ব্যাখ্যা

Semantic HTML elements হলো এমন HTML tag, যেগুলো দেখে বোঝা যায় সেই অংশটার আসল কাজ কী। যেমন `header`, `nav`, `main`, `section`, `article`, `aside`, `footer`।  
এগুলো শুধু ডিজাইনের জন্য না, বরং content-এর meaning বোঝানোর জন্য ব্যবহার করা হয়।

**উদাহরণ:**

- `header` = পেজের উপরের অংশ
- `nav` = navigation menu
- `main` = মূল content
- `article` = আলাদা একটি লেখা বা পোস্ট
- `footer` = নিচের অংশ

এগুলো important কারণ:

1. কোড পড়তে সহজ হয়।
2. SEO ভালো হয়, সার্চ ইঞ্জিন বুঝতে পারে কোন অংশটা গুরুত্বপূর্ণ।
3. Accessibility ভালো হয়, screen reader ব্যবহারকারীরা সহজে বুঝতে পারে।
4. Teamwork এ অন্য developer-দের জন্য code বোঝা সহজ হয়।

---

### Interview Ready Answer

#### বাংলা

Semantic HTML elements হলো এমন HTML tags, যেগুলো content-এর অর্থ বা role বোঝায়। যেমন `header`, `nav`, `main`, `section`, `article`, এবং `footer`। এগুলো ব্যবহার করলে code বেশি readable হয়, SEO improve হয়, এবং accessibility better হয়। তাই modern web development-এ semantic HTML খুব important।

#### English

Semantic HTML elements are HTML tags that clearly describe the meaning and structure of content, such as `header`, `nav`, `main`, `section`, `article`, and `footer`. They make the code more readable, improve SEO, and enhance accessibility for assistive technologies like screen readers. That is why semantic HTML is very important in modern web development.

---

## Q3: What are HTML Entities, and when would you use them? {#q3}

### সহজ বাংলায় ব্যাখ্যা

**HTML Entities** হলো কিছু special code যেগুলো ব্যবহার করা হয় এমন characters দেখানোর জন্য যেগুলো সরাসরি HTML এ লিখলে সমস্যা হতে পারে বা browser সেগুলোকে HTML tag মনে করতে পারে।

HTML এ কিছু character আছে যেগুলোর **special meaning** আছে। যেমন:

- `<` → tag শুরু বোঝায়
- `>` → tag শেষ বোঝায়
- `&` → entity শুরু বোঝায়

যদি আমরা এগুলো সরাসরি লিখি, browser ভুলভাবে interpret করতে পারে।  
তাই আমরা **HTML Entities** ব্যবহার করি।

**কিছু common example:**

| Character | Entity   |
| --------- | -------- |
| `<`       | `&lt;`   |
| `>`       | `&gt;`   |
| `&`       | `&amp;`  |
| `"`       | `&quot;` |
| `©`       | `&copy;` |
| space     | `&nbsp;` |

**Example:**

```html
<p>5 &lt; 10</p>
```

Browser এ দেখাবে:

```
5 < 10
```

### কখন ব্যবহার করা হয়?

1. যখন **reserved characters** দেখাতে চাই (`< > &`)
2. যখন **special symbols** দেখাতে চাই (© ® ™)
3. যখন **extra space** রাখতে চাই (`&nbsp;`)

---

### Interview Ready Answer

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

## Q4: What is the purpose of the `<meta>` tag in the HTML `<head>` section, and what are some important attributes it can have? {#q4}

### সহজ বাংলায় ব্যাখ্যা

`<meta>` tag ব্যবহার করা হয় **web page সম্পর্কে তথ্য (metadata)** browser বা search engine-কে দেওয়ার জন্য।

এই তথ্যগুলো সরাসরি page এ দেখা যায় না, কিন্তু browser, SEO tools, এবং social media এগুলো ব্যবহার করে।

`<meta>` tag সাধারণত `<head>` section এর ভিতরে থাকে।

**উদাহরণ:**

```html
<head>
  <meta charset="UTF-8">
  <meta name="description" content="This is a tutorial website">
  <meta name="keywords" content="HTML, CSS, JavaScript">
  <meta name="author" content="Anisul Alam">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
```

### গুরুত্বপূর্ণ attributes

**1️⃣ charset**  
এটা বলে দেয় কোন **character encoding** ব্যবহার হবে।

```html
<meta charset="UTF-8">
```

এটা important কারণ এতে সব language (বাংলা, ইংরেজি ইত্যাদি) ঠিকভাবে দেখায়।

**2️⃣ name**  
`name` attribute দিয়ে metadata এর **type** বোঝানো হয়।

```html
<meta name="description" content="Learning web development">
```

Common values: `description`, `keywords`, `author`, `viewport`

**3️⃣ content**  
`content` attribute এ actual information থাকে।

```html
<meta name="author" content="Anisul Alam">
```

**4️⃣ viewport** (responsive design এর জন্য খুব important)

```html
<meta name="viewport" content="width=device-width, initial-scale=1.0">
```

এটা mobile device এ website responsive করতে সাহায্য করে।

---

### Interview Ready Answer

#### বাংলা

`<meta>` tag HTML এর `<head>` section এ ব্যবহার করা হয় webpage সম্পর্কে metadata দেওয়ার জন্য। এই তথ্যগুলো browser, search engine, এবং social platforms ব্যবহার করে, কিন্তু page এ সরাসরি দেখা যায় না। গুরুত্বপূর্ণ কিছু attributes হলো `charset` (character encoding সেট করার জন্য), `name` এবং `content` (page description, author, keywords ইত্যাদি দেওয়ার জন্য), এবং `viewport` (mobile responsive design এর জন্য)।

#### English

The `<meta>` tag is used in the `<head>` section of an HTML document to provide metadata about the webpage. This information is not displayed on the page but is used by browsers, search engines, and other services. Important attributes include `charset` for defining character encoding, `name` and `content` for specifying metadata like description, keywords, and author, and `viewport` for controlling responsive behavior on mobile devices.

---

## Q5: What are Void/Empty elements in HTML? Provide an example. {#q5}

### সহজ বাংলায় ব্যাখ্যা

**Void / Empty elements** হলো এমন HTML tag যেগুলোর **কোন closing tag থাকে না** এবং **ভিতরে কোনো content থাকে না**।

অর্থাৎ:

- শুধু **একটা tag** থাকে
- এর মধ্যে **text বা child element রাখা যায় না**

**Example:**

```html
<br>
```

এটা line break দেয়। এর কোনো closing tag নেই।

**আরো কিছু common void elements:**

- `<br>` → line break
- `<img>` → image দেখানোর জন্য
- `<hr>` → horizontal line
- `<input>` → form input field
- `<meta>` → metadata
- `<link>` → CSS file link

**Example:**

```html
<p>Hello</p>
<br>
<p>World</p>
```

এখানে `<br>` নতুন লাইন তৈরি করে।

---

### Interview Ready Answer

#### বাংলা

Void বা Empty elements হলো এমন HTML elements যেগুলোর কোনো closing tag থাকে না এবং এগুলোর ভিতরে কোনো content রাখা যায় না। এগুলো শুধুমাত্র একটি single tag হিসেবে ব্যবহৃত হয়। উদাহরণ হিসেবে `<br>` element ব্যবহার করা যায়, যা একটি line break তৈরি করে।

#### English

Void or Empty elements are HTML elements that do not have a closing tag and cannot contain any content inside them. They are written as a single tag. A common example is the `<br>` element, which is used to create a line break in a webpage.

---

## Q6: Explain the CSS Box Model. What are its components? {#q6}

### সহজ বাংলায় ব্যাখ্যা

**CSS Box Model** হলো একটি concept যা বলে **একটি HTML element browser এ কীভাবে box আকারে space নেয়**।

প্রত্যেকটা HTML element আসলে একটি **box** এর মতো। এই box এর চারটি অংশ থাকে।

**Structure (ভিতর থেকে বাইরে):**

```
Content → Padding → Border → Margin
```

#### 1️⃣ Content

এটা হলো element এর **মূল content area**।

```html
<p>Hello World</p>
```

এই text যেখানে থাকে সেটাই content area।

#### 2️⃣ Padding

Padding হলো **content এর চারপাশের ভেতরের space**।

```css
padding: 20px;
```

এতে content এর চারপাশে 20px space তৈরি হবে।

#### 3️⃣ Border

Border হলো **padding এর বাইরে থাকা line**।

```css
border: 2px solid black;
```

এটা element এর চারপাশে border দেয়।

#### 4️⃣ Margin

Margin হলো **element এর বাইরে অন্য element থেকে দূরত্ব**।

```css
margin: 30px;
```

এতে element এর বাইরে 30px space হবে।

### ছোট Example

```html
<div class="box">Hello</div>
```

```css
.box {
  width: 200px;
  padding: 20px;
  border: 2px solid black;
  margin: 30px;
}
```

এখানে:

- content width = 200px
- padding = 20px
- border = 2px
- margin = 30px

---

### Interview Ready Answer

#### বাংলা

CSS Box Model হলো একটি layout concept যা ব্যাখ্যা করে একটি HTML element browser এ কীভাবে space নেয়। প্রতিটি element একটি rectangular box হিসেবে কাজ করে। এই box চারটি অংশ নিয়ে গঠিত: **content, padding, border, এবং margin**। Content হলো element এর মূল অংশ, padding হলো content এর চারপাশের ভিতরের space, border হলো element এর চারপাশের boundary, এবং margin হলো element এর বাইরের space যা অন্য element থেকে দূরত্ব তৈরি করে।

#### English

The CSS Box Model is a layout concept that describes how an HTML element takes up space in the browser. Each element is represented as a rectangular box consisting of four parts: **content, padding, border, and margin**. The content is the main area where text or images appear, padding is the space around the content, the border surrounds the padding and content, and the margin is the outer space that separates the element from other elements.

---

## Q7: What are the three ways to include CSS in an HTML document, and which one is generally preferred? {#q7}

### সহজ বাংলায় ব্যাখ্যা

HTML এ CSS যোগ করার **৩টি উপায়** আছে।

### 1️⃣ Inline CSS

এটা সরাসরি **HTML tag এর ভিতরে** `style` attribute ব্যবহার করে লেখা হয়।

```html
<p style="color: red;">Hello World</p>
```

এখানে CSS শুধু এই `p` tag এর উপর কাজ করবে।

❌ **Problem:** বড় project এ manage করা কঠিন, code messy হয়ে যায়।

### 2️⃣ Internal CSS

এটা HTML file এর **`<head>` section এর ভিতরে `<style>` tag** ব্যবহার করে লেখা হয়।

```html
<head>
  <style>
    p {
      color: blue;
    }
  </style>
</head>
```

এটা পুরো **একটি HTML page** এ apply হবে।

### 3️⃣ External CSS ⭐ (Most preferred)

এখানে CSS **আলাদা file (.css)** এ লেখা হয় এবং HTML এ link করা হয়।

```html
<link rel="stylesheet" href="style.css">
```

`style.css`:

```css
p {
  color: green;
}
```

### কেন External CSS preferred?

1. Code **clean থাকে**
2. **Multiple pages** এ একই CSS ব্যবহার করা যায়
3. **Maintenance সহজ**
4. **Faster loading** (browser cache করতে পারে)

---

### Interview Ready Answer

#### বাংলা

HTML document এ CSS যোগ করার তিনটি উপায় আছে: **Inline CSS**, **Internal CSS**, এবং **External CSS**। Inline CSS সরাসরি HTML tag এর `style` attribute এর মাধ্যমে ব্যবহার করা হয়। Internal CSS `<style>` tag এর মাধ্যমে `<head>` section এ লেখা হয়। External CSS আলাদা `.css` file এ লেখা হয় এবং `<link>` tag ব্যবহার করে HTML এর সাথে যুক্ত করা হয়। সাধারণত **External CSS বেশি preferred**, কারণ এটি code maintain করা সহজ করে এবং multiple webpage এ reuse করা যায়।

#### English

There are three ways to include CSS in an HTML document: **Inline CSS, Internal CSS, and External CSS**. Inline CSS is applied directly within an HTML element using the `style` attribute. Internal CSS is written inside the `<style>` tag within the `<head>` section of the HTML document. External CSS is written in a separate `.css` file and linked to the HTML document using the `<link>` tag. Generally, **External CSS is preferred** because it keeps the code clean, reusable, and easier to maintain across multiple pages.

---

## Q8: Explain the difference between `id` and `class` selectors in CSS. {#q8}

### সহজ বাংলায় ব্যাখ্যা

CSS এ **id** এবং **class** দুটোই HTML element select করার জন্য ব্যবহার করা হয়। কিন্তু এদের ব্যবহার এবং নিয়ম আলাদা।

### 1️⃣ `id` selector

`id` একটি **unique identifier**।  
মানে: একটি page এ **একই id শুধু একবার ব্যবহার করা উচিত**।

CSS এ `#` দিয়ে id select করা হয়।

```html
<p id="title">Hello World</p>
```

```css
#title {
  color: red;
}
```

এখানে `title` id শুধু এই element এর জন্য।

### 2️⃣ `class` selector

`class` ব্যবহার করা হয় **একই style অনেক element এ apply করার জন্য**।  
একই class **multiple element এ ব্যবহার করা যায়**।

CSS এ `.` দিয়ে class select করা হয়।

```html
<p class="text">Hello</p>
<p class="text">World</p>
```

```css
.text {
  color: blue;
}
```

এখানে দুইটা `p` element একই style পাবে।

### Extra Important Point (Interview এ ভালো লাগে)

- `id` → **specific element**
- `class` → **multiple elements**

আরেকটা important difference: **CSS specificity তে id class থেকে stronger।**

---

### Interview Ready Answer

#### বাংলা

CSS এ `id` এবং `class` selectors HTML elements select করার জন্য ব্যবহার করা হয়। `id` একটি unique identifier এবং সাধারণত একটি page এ শুধুমাত্র একবার ব্যবহার করা হয়। CSS এ এটি `#` চিহ্ন দিয়ে select করা হয়। অন্যদিকে `class` selector একাধিক element এ একই style প্রয়োগ করার জন্য ব্যবহার করা হয় এবং CSS এ এটি `.` চিহ্ন দিয়ে select করা হয়। এছাড়া CSS specificity অনুযায়ী `id` selector এর priority `class` selector এর থেকে বেশি।

#### English

In CSS, `id` and `class` selectors are used to select HTML elements for styling. An `id` is a unique identifier and should typically be used only once in a page. It is selected in CSS using the `#` symbol. On the other hand, a `class` selector can be used on multiple elements to apply the same styles, and it is selected using the `.` symbol. Additionally, in CSS specificity, an `id` selector has higher priority than a `class` selector.

---

## Q9: What is CSS Specificity, and what is the general order of precedence when styles conflict? {#q9}

### সহজ বাংলায় ব্যাখ্যা

**CSS Specificity** হলো একটি rule যেটা browser ব্যবহার করে **যখন একাধিক CSS rule একই element কে style করতে চায়**, তখন কোনটা apply হবে তা ঠিক করার জন্য।

মানে যদি একই element এর জন্য **একাধিক style থাকে**, তখন browser দেখে কোন selector বেশি **specific (শক্তিশালী)**।

**Example:**

```html
<p id="title" class="text">Hello</p>
```

```css
p {
  color: blue;
}

.text {
  color: green;
}

#title {
  color: red;
}
```

এখানে তিনটা style আছে:

- element selector (`p`)
- class selector (`.text`)
- id selector (`#title`)

**Final result:** text হবে **red**, কারণ `id` selector এর specificity বেশি।

### CSS Specificity Order (Low → High)

```text
Element selector < Class selector < ID selector < Inline CSS
```

মানে priority:

1️⃣ **Element selector** (`p`, `div`, `h1`)  
2️⃣ **Class / attribute / pseudo-class** (`.class`, `[type=text]`, `:hover`)  
3️⃣ **ID selector** (`#id`)  
4️⃣ **Inline CSS** (`style=""`)

**Example:**

```html
<p style="color: orange;">Hello</p>
```

এটা সবকিছুর উপর priority পাবে।

### Important Extra (Interview smart point)

`!important` ব্যবহার করলে সেটা সবকিছুকে override করতে পারে।

```css
p {
  color: blue !important;
}
```

---

### Interview Ready Answer

#### বাংলা

CSS Specificity হলো একটি rule যা নির্ধারণ করে যখন একাধিক CSS rule একই element এর উপর apply হয় তখন কোন style টি কার্যকর হবে। Browser selector এর specificity অনুযায়ী সিদ্ধান্ত নেয়। সাধারণ precedence order হলো: **Element selector < Class selector < ID selector < Inline CSS**। অর্থাৎ selector যত বেশি specific হবে তার priority তত বেশি হবে।

#### English

CSS Specificity is a rule used by the browser to determine which CSS style should be applied when multiple rules target the same element. The browser calculates specificity based on the type of selectors used. The general order of precedence is: **Element selector < Class selector < ID selector < Inline CSS**. This means the more specific a selector is, the higher its priority will be.

---

## Q10: What is the difference between `display: none;` and `visibility: hidden;` in CSS? {#q10}

### সহজ বাংলায় ব্যাখ্যা

`display: none` এবং `visibility: hidden` দুটোই element **hide করার জন্য** ব্যবহার করা হয়, কিন্তু এদের behavior আলাদা।

### 1️⃣ `display: none`

যখন `display: none` ব্যবহার করা হয়:

- element **পুরোপুরি page থেকে remove হয়ে যায়**
- element **কোনো space নেয় না**
- browser এমনভাবে behave করে যেন element **existই করে না**

**Example:**

```css
.box {
  display: none;
}
```

**Example HTML:**

```html
<p>First</p>
<div class="box">Hidden</div>
<p>Second</p>
```

এখানে **First এবং Second একসাথে চলে আসবে**, কারণ মাঝের element space নেবে না।

### 2️⃣ `visibility: hidden`

যখন `visibility: hidden` ব্যবহার করা হয়:

- element **দেখা যাবে না**
- কিন্তু element **তার জায়গা (space) ধরে রাখবে**

**Example:**

```css
.box {
  visibility: hidden;
}
```

এখানে element invisible হবে, কিন্তু **layout space থাকবে**।

### সহজভাবে মনে রাখার ট্রিক

- `display: none` → **remove from layout**
- `visibility: hidden` → **hide but keep space**

---

### Interview Ready Answer

#### বাংলা

`display: none` এবং `visibility: hidden` উভয়ই element লুকানোর জন্য ব্যবহৃত হয়, তবে তাদের আচরণ ভিন্ন। `display: none` ব্যবহার করলে element পুরোপুরি document layout থেকে সরিয়ে দেওয়া হয় এবং এটি কোনো space নেয় না। অন্যদিকে `visibility: hidden` element কে invisible করে দেয়, কিন্তু element তার layout space ধরে রাখে।

#### English

Both `display: none` and `visibility: hidden` are used to hide elements in CSS, but they behave differently. When `display: none` is applied, the element is completely removed from the document layout and does not take up any space. In contrast, `visibility: hidden` makes the element invisible while still preserving the space it occupies in the layout.

---
