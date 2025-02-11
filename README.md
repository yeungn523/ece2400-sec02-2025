
ECE 2400 Section 4
==========================================================================

Git repo that goes along with section 4 for spring 2025.


## Before You Begin Checklist

- [x] Be able to connect to ECELinux with VS Code (see [tutorial](https://cornell-ece-docs.github.io/ece-tutorials/tut0-ecelinux/#3-remote-access-via-vs-code))
- [x] Set up ssh with GitHub (we did this in last week's discussion section)
- [x] `git clone --branch sec04 git@github.com:cornell-ece2400/ece2400-sec02-2025.git ece2400-sec04` this repo to ecelinux
- [x] RECOMMENDED: Install [clangd extension](https://marketplace.visualstudio.com/items?itemName=llvm-vs-code-extensions.vscode-clangd) on the remote host
  - Clangd provides many useful error messages and auto-corrections
- [x] Open the repo with VS Code on ecelinux, by clicking *File > Open Folder* 
- [x] Mark the build script as executable
  - `cd ece2400-sec04`
  - `chmod +x build.sh`
- [x] Build the starter code
  - `./build.sh` (It should say 'Build Successful')

Now you are ready to begin!

## Building the Code

Make sure your working directory is `ece2400-sec04`. Then, execute the build script: `./build.sh`
