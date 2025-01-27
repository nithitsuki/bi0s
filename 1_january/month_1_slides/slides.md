---
title: Nithitsuki's Jan Report
author: Nithitsuki
transition: fade-out
colorSchema: dark
---

# Nithitsuki's Progress Report
January 2025

---
transition: fade
---

# Week 1 & Week 2

Mostly Non Working days

---
transition: fade
---

# Week 3:

<br>

## Nightmare: 05-bof_callfunction
Series of challenges to craft payloads to buffer overflow rip/eip with someone's house address\
or usually another  malicious functions adress

<br>
<br>
<br>

## Srdnlen CTF 2025 (32.28 Rated)
\[2 Solves!\]
+ babypwn1: call function challenge
+ babypwn2: shellcode challenge (w/ Ajays Help)

---
layout: image
# the image source
image: ./imgs/callfunc.png
---

---
layout: image
# the image source
image: ./imgs/Srdnlen.png
---

---
transition: fade
---

# Week 4:

<br>

## Nightmare: 06-bof_shellcode
Set of challenges to craft payloads to buffer overflow rip/eip to run our own malicious code\
as in, shellcode stolen from shellstorm or other sources such as shellcraft

<br>

## TUCTF "2024" (28.60)
+ no PWN questions unfortunately
+ was actually held in 2025 (such misleading!)
+ helped out others in their domain questions

<br>

## TUCTF 2023?
+ single PWN question
+ Turned back time to solve the question

---
layout: image
# the image source
image: ./imgs/TUCTF.png
---

---
layout: image
# the image source
image: ./imgs/shellcode.png
---

---

# Some other questions solved:

<br>

## PicoCTF:
+ heap 2
+ heap 3 (improperly freed memory exploit)

---
layout: image
# the image source
image: ./imgs/picoCTF.png
---

---
layout: image-right
# the image source
image: ./imgs/bus.jpg
---

# Honorable Mention
Solving our first shellcode problem in the bus:

--- 

<div class="text-center">
    <h1>Conclusion</h1>
</div>

<br>

## Things learnt this month:
+ Mainly Heap attacks
+ finding variables in stack using debuggers (gdb/gef)
+ finding offset between input and rip using said debugger
+ understanding the working of rip and abusing it
+ using above knowledge to run shellcode and pop a shell

## Things I wish to learn moving forward:
+ Creating my own custom shellcode (just asm?)
+ Bypass stack canary by leaking it
+ and more to come!