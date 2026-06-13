# LL0-Parsers: Compiler Syntax Analysis Engine

A lightweight, high-performance syntax analysis framework written in C, designed to process context-free grammars using LL(0) and LL(1) deterministic parsing strategies.

![Language](https://img.shields.io/badge/Language-C99-blue?logo=c&logoColor=white)
![Domain](https://img.shields.io/badge/Domain-Compiler%20Construction-red)
![Parser Type](https://img.shields.io/badge/Parser-LL(0)%20%2F%20LL(1)-orange)
![Environment](https://img.shields.io/badge/Environment-Linux%20%2F%20GCC-darkgreen)
![Build](https://img.shields.io/badge/Build-Native%20Compilation-lightgrey)

---

## 🌐 Engine Overview

The LL0-Parsers project implements deterministic, top-down predictive parsing state machines within a clean, dependency-free C runtime environment. By building explicit First and Follow computation matrices, lookahead verification utilities, and syntactic validation tables, the platform evaluates string token arrays against custom grammar configurations while establishing absolute memory boundary safety.

---

## 📍 Quick Navigation

* [🌐 Project Overview](#-engine-overview)
* [💻 Languages & Technologies Used](#%EF%B8%8F-tech-stack)
* [📁 Repository Structure and Module Index](#-repository-structure-and-module-index)
* [🧱 Document Structure (`CA3LL0.c`)](#-repository-structure-and-module-index)
* [⚙️ Application Logic (`ll1_parser.c`)](#-architectural-highlights)

---

## 📦 System Architecture

```text
┌──────────────────────────────────────────────────────────────┐
│                    SOURCE TOKEN STREAM INPUT                 │
├──────────────────────────────────────────────────────────────┤
│                Lexical Tokens / Target Strings               │
│               (Terminal Symbols & End Markers)               │
└──────────────────────────────┬───────────────────────────────┘
                               ↓
┌──────────────────────────────────────────────────────────────┐
│               DETERMINISTIC SYNTAX ANALYSIS ENGINE           │
├────────────┬─────────────┬────────────┬─────────────┬────────┤
│ Tokenizer  │ Parsing Tbl │ FIRST/FOLLOW│ Stack State │ Trace  │
│ Buffer     │ Lookahead   │ Calculation│ Push/Pop    │ Debug  │
│ Mechanics  │ Matrices    │ Sets       │ Operations  │ Logger │
└────────────┴─────────────┴────────────┴─────────────┴────────┘
                               ↓
┌──────────────────────────────────────────────────────────────┐
│                     SYNTACTIC TREE OUTPUT                    │
├──────────────────────────────────────────────────────────────┤
│         Derivation Status (ACCEPTED / REJECTED) Matrix       │
└──────────────────────────────────────────────────────────────┘

```

| Architectural Layer | Core Components & Strategies | Quick Links / Reference |
| --- | --- | --- |
| **Top: Input Ingestion** | Static source tokens and terminal stream evaluation loops | [Setup & Execution Guide](https://www.google.com/search?q=%23-setup--execution-guide) |
| **Middle: Parser Core** | Non-terminal expansion, production mapping, and lookahead state arrays | [Repository Structure](https://www.google.com/search?q=%23-repository-structure-and-module-index) |
| **Bottom: Output Report** | Derivation tracking pipelines and semantic abstract tracing layouts | [Application Core Interfaces](https://www.google.com/search?q=%23-application-core-interfaces) |

---

## ✨ Key Architecture Features

✅ **Deterministic Predictive Parsing** - Employs structured top-down processing arrays to expand non-terminal grammar symbols without relying on heavy backtracking algorithms.

✅ **Isolated State Management** - Keeps internal string tokenization states and validation matrices localized within modular, low-overhead arrays.

✅ **First & Follow Set Generation** - Integrates automated computation logic to map out parsing boundaries based on grammatical nullability and symbol dependencies.

✅ **Defensive Buffer Validation** - Eliminates classic runtime overflows by manually validating bounds on array limits, token index values, and tracking pointers.

---

## 📁 Repository Structure and Module Index

The project codebase is organized into the following logical components:

### Core Parsing Source Engines

* **`CA3LL0.c`** - Modular C engine executing the underlying LL(0) structural parsing assignments and string verification state checks.
* **`ll1_parser.c`** - Functional parsing engine dedicated to running predictive LL(1) non-terminal mapping loops.

### Academic Specifications & Reports

* **`LL0 Assignment 3.pdf`** - Academic specification document outlining task rules, grammars, and operational limitations.
* **`report.pdf`** - Comprehensive summary document detailing architectural design metrics, testing procedures, and run configurations.

---

## 🛠️ Tech Stack

| Component | Technology | Quick Links |
| --- | --- | --- |
| **Core Engine Language** | C (ISO/IEC 9899:1999 Standard Distribution) | [ISO C Standard](https://www.google.com/search?q=https://www.iso.org/standard/29237.html) |
| **Compiler Suite** | GCC (GNU Compiler Collection Framework) | [gcc.gnu.org](https://www.google.com/search?q=https://gcc.gnu.org/) |
| **Build Tools** | Standard Unix Terminal Utilities & Script Buffers | [GNU Coreutils](https://www.google.com/search?q=https://www.gnu.org/software/coreutils/) |
| **Verification Layer** | Native Standard Library Input Validation Elements (`<stdio.h>`, `<string.h>`) | [C Library Guide](https://www.google.com/search?q=https://en.cppreference.com/w/c) |

---

## 💻 System Requirements

Ensure your execution environment adheres to the following baseline parameters:

* **Compilation Architecture:** Target environment containing GCC or any C99-compliant standard compiler toolchain.
* **Operating System:** Native deployment across POSIX platforms (Linux, macOS) or Windows subsystems running WSL.
* **Memory Constraints:** Light system signature footprint (Runs processing routines securely within minimal RAM space).

---

## 🚀 Setup & Execution Guide

### Step 1: Clone the File Layout Hierarchy

Clone the repository framework directly onto your active terminal workstation:

```bash
git clone [https://github.com/MoNsT3R-code/LL0-Parsers.git](https://github.com/MoNsT3R-code/LL0-Parsers.git)
cd LL0-Parsers

```

### Step 2: Compile the Engine Source

Use GCC to build your execution binaries cleanly directly from the console profile:

```bash
# Compile the LL(0) Assignment Binary
gcc -Wall -Wextra -std=c99 CA3LL0.c -o ca3ll0_engine

# Compile the LL(1) Parser Module
gcc -Wall -Wextra -std=c99 ll1_parser.c -o ll1_parser_engine

```

### Step 3: Run the Syntax Analysis Loop

Run the compiled binaries locally to initiate string verification arrays:

```bash
# Run the target system validation
./ca3ll0_engine
./ll1_parser_engine

```

---

## 📊 Application Core Interfaces

The processing engine divides parsing validation mechanics into distinct functional zones:

| Engine Context | Parsing Methodology | Target Purpose | Primary Validation Tracker |
| --- | --- | --- | --- |
| **`CA3LL0.c`** | Deterministic LL(0) | Evaluates strict context-free structures without relying on active lookahead symbols. | State Ingestion Buffer |
| **`ll1_parser.c`** | Lookahead LL(1) | Computes FIRST/FOLLOW tables to select non-terminal rules based on single-token looks. | Parsing Transition Matrix |

---

## 🏗️ Architectural Highlights

### 📊 Parsing Table Vector Arrays

State transitions are mapped directly to multidimensional arrays where row indexes represent non-terminal variables and column positions represent terminal character sequences. This architecture maps lookup checks directly to $O(1)$ constant time efficiency limits.

### 🎮 Pure Defensive Ingestion Buffers

The logic blocks process string tokens step-by-step using strict boundary loops. Token inputs are automatically mapped to internal terminal IDs using specialized string scanners, protecting compilation branches from runtime errors and corrupted inputs:

$$\text{Lookahead}(S) = \text{TokenStream}[\text{CurrentIndex}]$$

---

## 📄 License & Terms

This project is open-source. Feel free to copy, modify, and redistribute the syntax analysis modules and parsing engine files as required.

