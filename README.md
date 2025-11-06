## Obfuscation Study

This repository contains small C++ programs and matching Ghidra decompiler outputs to demonstrate and compare common code obfuscation techniques:

- **Baseline**: straight-line, readable implementation
- **Junk Code**: noise/opaque predicates/volatile sinks introduced
- **Data Obfuscation**: string/data XOR encryption with runtime decryption
- **Control-Flow Flattening**: logic rewritten into a state machine

All examples implement the same basic program: prompt for a password and reveal a secret on success. The obfuscated variants make reverse engineering progressively harder.

### Study overview

- **Title**: An Analysis of Code Obfuscation Effectiveness
- **Author**: Andreas Felder (`andreas.felder@students.fhnw.ch`), FHNW cysL
- **Date**: November 3, 2025

**Abstract (condensed)**: The project evaluates how well different obfuscation layers hinder reverse engineering of a C++ password-checking app. A manual, layered strategy (layout/symbol stripping → junk code with opaque predicates and a volatile sink → data obfuscation via XOR with runtime key construction → control-flow flattening) is contrasted with an automated toolchain (DeClang/OLLVM). Results show that isolated techniques are weak: strings in clear text defeat both layout and junk-only obfuscation. The critical turning point is data obfuscation, which removes the “easy wins.” Control-flow flattening then hides logic structure. DeClang delivers far higher logical complexity but, by design, does not obfuscate data. The key conclusion is that effective obfuscation requires a holistic “defense in depth” combining logic and data-hiding.

## Key findings

- **Strings are the weak link**: Without data obfuscation, readable strings in the binary allow rapid recovery of intent—even with junk code or stripped symbols.
- **Data obfuscation is pivotal**: XOR-encrypting literals and constructing the key at runtime (tied to opaque predicates) removes “easy wins,” forcing deeper analysis first.
- **Control-flow flattening amplifies difficulty**: Converting core logic into a state machine degrades decompiler readability and requires manual state tracing.
- **Automated vs manual**:
  - Manual CFF stack reached around the mid-30s for total cyclomatic complexity in the test scope, after junk+data layers increased size.
  - DeClang achieved far higher logical complexity (report notes ~182 in the same scope) and larger decompiled code, but kept strings in clear text.
- **Defense in depth**: Best results combine automated logical obfuscation with separate, targeted data-hiding.

### Repository layout

- `CodeAndGhidra/`
  - `Baseline/`
    - `baseline.cpp`: minimal, readable version
    - `ghidraBaseline.c`: Ghidra decompiler output for reference
  - `JunkCode/`
    - `junkCode.cpp`: adds opaque predicates, junk computations, and a volatile sink to resist DCE
    - `ghidraJunkCode.c`: decompiler output
  - `DataObfuscation/`
    - `dataObfuscation.cpp`: encrypts literals (prompt/deny/grant/secret/password) with XOR and decrypts at runtime
    - `xor.py`: helper to generate the C arrays for encrypted strings
    - `ghidraDataObfuscation.c`: decompiler output
  - `ControlFlowFlattening/`
    - `controlFlowFlattening.cpp`: combines data obfuscation, junk code, and a flattened state-machine password check
    - `ghidraControlFlowFlattening.c`: decompiler output
  - `DeClang/`, `LayoutObfuscation/`: additional decompiler outputs for related experiments

## Environment

- Build host: Apple Silicon macOS (arm64-apple-darwin25.0.0)
- Analysis: Ghidra 11.4.2 (default auto-analysis)
- Manual builds: Apple Clang 17.0.0 (or any C++17 compiler)
- Automated obfuscation: DeClang v1.0.0 (Obfuscator-LLVM fork)


## Ghidra decompiler outputs

Files named like `ghidra*.c` in each folder are exported C decompilations produced by Ghidra after analyzing the corresponding compiled binary. They are included to:

- Compare source vs decompiled output as obfuscation increases
- Highlight how junk code, data obfuscation, and flattened control flow affect readability and structure

Suggested workflow:

1. Build a variant into `build/<name>`
2. Import that binary into Ghidra and run analysis
3. Compare Ghidra's decompiled output with the matching `ghidra*.c` file and original source

## Automated obfuscation (DeClang)

The `DeClang/` artifacts capture decompilations produced from binaries built with DeClang (a modern fork of obfuscator-llvm). In this study, DeClang was configured for aggressive logical obfuscation (flattening, bogus control-flow, instruction substitution) on optimized code. It produced extremely high logical complexity but left program data (strings) unobfuscated by design.

## Encrypting strings with xor.py

`CodeAndGhidra/DataObfuscation/xor.py` generates C arrays for XOR-encrypted strings using a repeating key. The current key in the script is `banenenbrot` and the script prints C declarations for the password and messages used by the sample programs.

Run it:

```bash
python3 CodeAndGhidra/DataObfuscation/xor.py
```

Output example (truncated):

```c
// --- Generated by encrypt_strings.py ---
// --- Key: "banenenbrot" ---
char enc_pw[] = { 0x01, 0x18, ... };
char enc_prompt[] = { 0x32, 0x0d, ... };
...
```

You can change the `KEY_STRING` and source literals in `xor.py` to produce new encrypted arrays and drop them into the C++ files.

## Notes on the techniques

- **Junk code/opaque predicates**: Inserts branches and computations that preserve side effects (via a `volatile` sink) to resist dead-code elimination and confuse analysis.
- **Data obfuscation**: Replaces cleartext strings with XOR-encrypted arrays decrypted at runtime with a non-obvious key construction.
- **Control-flow flattening**: Rewrites loops/branches into a dispatch on a `state` variable, obscuring high-level structure while preserving semantics.




