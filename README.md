# 🎓 42 — Rank 04

Rank 04 of the 42 curriculum: raycasting, networking, C++ fundamentals, and an exam.

![Rank](https://img.shields.io/badge/42%20Rank-04-5c6ac4?style=for-the-badge)
![Time](https://img.shields.io/badge/Estimated%20time-400%20hours%20%2B%20exam-007ec6?style=for-the-badge)

---

## 📚 Projects

| Project | Grade | Time | Main topic |
|---|---:|---:|---|
| 🎮 [cub3d](https://github.com/MariaBarreiro/42_Cub3d) | **110/125** | ~280 h | Raycasting · Group project |
| 🌐 [NetPractice](https://projects.intra.42.fr/projects/netpractice) | **100/100** | ~50 h | IP addressing and routing |
| ⏱️ Exam Rank 04 | **100/100** | 3 days reported | Programming assessment |
| 🧩 [CPP Module 00](https://github.com/MariaBarreiro/42_Cpp/tree/main/cpp00) | **100/100** | ~22 h | C++ and object-oriented programming |
| 🧩 [CPP Module 01](https://github.com/MariaBarreiro/42_Cpp/tree/main/cpp01) | **100/100** | ~12 h | Memory, references, and pointers |
| 🧩 [CPP Module 02](https://github.com/MariaBarreiro/42_Cpp/tree/main/cpp02) | **80/100** | ~12 h | Operator overloading and canonical classes |
| 🧩 [CPP Module 03](https://github.com/MariaBarreiro/42_Cpp/tree/main/cpp03) | **100/100** | ~12 h | Inheritance |
| 🧩 [CPP Module 04](https://github.com/MariaBarreiro/42_Cpp/tree/main/cpp04) | **80/100** | ~12 h | Subtype polymorphism and abstract classes |

---

## 🎮 cub3d

> Explore a maze through a dynamic first-person view built with raycasting.

![Grade](https://img.shields.io/badge/Grade-110%2F125-brightgreen?style=flat-square)
![Time](https://img.shields.io/badge/Time-~280%20hours-blue?style=flat-square)
![Group project](https://img.shields.io/badge/Group%20project-Yes-8a63d2?style=flat-square)

**What I learned**
- How raycasting turns a 2D map into a 3D-style view
- How to calculate wall distances and render textured surfaces
- How to handle movement, input, and window events
- How to coordinate development on a larger group project

**Compile and run**

```sh
make
./cub3D maps/valid/subject_map.cub
```

The Makefile builds the bundled libraries, including MiniLibX.

---

## 🌐 NetPractice

> Configure network diagrams by solving progressive networking challenges.

![Grade](https://img.shields.io/badge/Grade-100%2F100-brightgreen?style=flat-square)
![Time](https://img.shields.io/badge/Time-~50%20hours-blue?style=flat-square)

**What I learned**
- How IPv4 addresses and subnet masks divide networks
- How hosts use gateways and routes to communicate
- How to troubleshoot network configurations and reason about TCP/IP and OSI layers

This project is completed interactively in the 42 NetPractice interface; there’s no local program to compile.

---

## ⏱️ Exam Rank 04

> A three-day programming assessment.

![Grade](https://img.shields.io/badge/Grade-100%2F100-brightgreen?style=flat-square)
![Time](https://img.shields.io/badge/Time-3%20days%20reported-lightgrey?style=flat-square)

---

## 🧩 C++ Modules 00–04

> A series of exercises introducing C++ and object-oriented programming.

**Grades and time**

| Module | Grade | Time |
|---|---:|---:|
| CPP 00 | **100/100** | ~22 h |
| CPP 01 | **100/100** | ~12 h |
| CPP 02 | **80/100** | ~12 h |
| CPP 03 | **100/100** | ~12 h |
| CPP 04 | **80/100** | ~12 h |

**What I learned**
- **CPP 00:** C++ syntax, namespaces, classes, and object-oriented programming
- **CPP 01:** Memory allocation, references, pointers to members, and `switch`
- **CPP 02:** Ad-hoc polymorphism, operator overloading, and orthodox canonical classes
- **CPP 03:** Inheritance
- **CPP 04:** Subtype polymorphism, abstract classes, and interfaces

Each exercise has its own Makefile. From the repository root, build an exercise like this:

```sh
make -C cpp00/ex00
```

Run the resulting executable from that exercise’s directory. Repeat with the relevant `cppXX/exYY` folder for other exercises.
