# Execution Engine

The execution module is the heart of Minishell, responsible for coordinating process creation, data flow between commands, and handling external binaries.

## Command Execution Flow

When a command is submitted, the execution engine performs the following:
1. **Redirection Handling**: It processes redirections (`<`, `>`, `<<`, `>>`) first to set up the appropriate file descriptors for input and output.
2. **Built-in Check**: It checks if the command is a built-in. If so, it executes it directly in the current process.
3. **External Command Execution**: If the command is not a built-in, it forks a new process and uses `execve` to search for and execute the binary using the `PATH` environment variable.

## Handling Pipelines

Pipelines (`|`) allow the output of one command to be used as the input for another.
- Minishell creates a `pipe` between each command in a pipeline.
- The `stdout` of the preceding command is redirected to the write-end of the pipe.
- The `stdin` of the succeeding command is redirected to the read-end of the pipe.
- All processes in a pipeline are forked and executed concurrently.

## Redirections

- **Input Redirection (`<`)**: Reading input from a file instead of `stdin`.
- **Output Redirection (`>`)**: Directing output to a file instead of `stdout` (overwrites).
- **Append Redirection (`>>`)**: Directing output to a file instead of `stdout` (appends).
- **Heredoc (`<<`)**: Providing input directly in the shell until a specified delimiter is reached.

## Process Management

Minishell carefully manages child processes:
- It waits for all commands in a pipeline to finish using `waitpid`.
- It captures and updates the exit status (accessible via `$?`).
- It properly closes file descriptors after use to prevent leaks and exhausted resources.
