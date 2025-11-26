# Reverse Me

Project overview:
- Reverse engineer each binary/exercise.
- Find the password for each level.
- Re-implement the logic in C once understood.

### Organization:
- `binary/level1`, `binary/level2`, `binary/level3`: binaries.
- Passwords are in `levelX/password` (e.g., `level1/password`).
- A C reimplementation is in `level1/source.c`.
- The brief is available in `en.subject.pdf`.

### Quick start:
- Extract the `binary.tgz` archive into `binary/` (see [Binary extraction](#binary-extraction))
- Run or inspect the binaries (strings, objdump, gdb, etc.).
- Deduce the verification mechanism and the password.
- Put/read the password in `levelX/password`.
- Recode the verification in C and compile.

<a id="binary-extraction"></a>
### Binary extraction
- The `binary.tgz` file contains the three binary levels.
- To extract into the `binary/` folder:
  - Ensure the folder exists: `mkdir -p binary`
  - Extract the archive: `tar -xzf binary.tgz -C binary/`
- After extraction, you should have `binary/level1`, `binary/level2`, `binary/level3`.

### Final objective:
- Obtain the three passwords and a working C implementation for each level.