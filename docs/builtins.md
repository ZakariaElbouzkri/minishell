# Built-in Commands

Minishell includes several built-in commands that are executed directly within the shell process. This document describes their usage and behavior.

## Standard Built-ins

### `cd` [path]
Changes the current working directory of the shell.
- If no path is provided, it defaults to the `HOME` directory.
- Updates the `PWD` and `OLDPWD` environment variables.

### `echo` [-n] [string...]
Prints the given strings followed by a newline.
- `-n`: Suppresses the trailing newline.

### `env`
Displays the current environment variables.
- Lists all variables in the format `NAME=VALUE`.

### `exit` [status]
Exits the shell with the specified status.
- If no status is provided, it exits with the status of the last executed command.
- Handles numeric and non-numeric arguments according to `bash` standards.

### `export` [name[=value]]
Adds or updates environment variables.
- If no arguments are provided, it lists all environment variables in alphabetical order, formatted for re-export.
- Supports adding variables with or without values.

### `pwd`
Prints the absolute path of the current working directory.

### `unset` [name...]
Removes the specified environment variables.

## Implementation Details

All built-ins are defined in the `builtins/` directory. They are dispatched via the `exec_builtins` function in the execution module. This allows the shell to avoid the overhead of forking processes for these core commands.
