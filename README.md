<div align="center">
  <img src="docs/assets/logo.png" alt="Minishell Logo" width="200"/>
  <h1>Minishell</h1>
  <p><i>A sleek, efficient, and professional shell implementation.</i></p>

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![C Language](https://img.shields.io/badge/Language-C-blue.svg)](<https://en.wikipedia.org/wiki/C_(programming_language)>)

</div>

---

## 🚀 Overview

**Minishell** is a lightweight, custom-built shell developed as part of the 42 curriculum. It replicates the core functionality of `bash`, providing a robust environment for command execution, pipelining, and environment management.

Designed with a focus on **memory efficiency** and **architectural clarity**, Minishell serves as a deep dive into systems programming, process management, and lexical analysis.

## ✨ Key Features

- **Built-in Commands**: Optimized implementations of `cd`, `echo`, `env`, `exit`, `export`, `pwd`, and `unset`.
- **Execution Engine**: Support for multiple pipelines (`|`) and complex redirections (`<`, `>`, `<<`, `>>`).
- **Environment Management**: Dynamic tracking and expansion of environment variables.
- **Signal Handling**: Responsive management of `SIGINT`, `SIGQUIT`, and `EOF`.
- **Robust Memory Management**: Integrated custom garbage collector to ensure zero leaks.

## 🛠️ Installation & Usage

### Prerequisites

- A C compiler (`gcc` or `clang`).
- `make` utility.
- `readline` library.

### Building the Project

```bash
git clone https://github.com/yourusername/minishell.git
cd minishell
make
```

### Running the Shell

```bash
./minishell
```

## 📖 Documentation

For developers and curious users, detailed technical documentation is available in the [`docs/`](docs/) directory:

- [**Architecture Overview**](docs/architecture.md): Understand the internal lifecycle of a command.
- [**Built-in Commands**](docs/builtins.md): Detailed usage and behavior of core shell commands.
- [**Execution Engine**](docs/execution.md): Deep dive into process management, pipes, and redirections.

## 🤝 Contributing

Contributions are welcome! If you find a bug or have a feature request, please open an issue or submit a pull request.

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
