# How does the structure of the compiler look like?

This file contains my study notes on the compiler's structure based on the Introduction to Compilers and Language Design book.

## Structure of the compiler

Scanner -> Parser -> Semantic Routines -> Intermediate Representation (<-> Optimizers) -> Code Generator

- Scanner
    - Takes input as plain text of the program and groups the individual characters together to form complete tokens. It returns the
    tokens to the Parser

- Parser
    - It takes the tokens from the Scanner and groups them together into expressions, statements. The Parser is guided by a grammar
    which states the formal rules of the composition in a given language. The Parser produces the AST (Abstract Syntax Tree).
