# Boilerplate for teaching with React, ReasonML and Reason React

If you're teaching Reason React, having a local API is useful, but you don't want to go through the trouble of setting up a server. This project is pre-configured with [json-server](https://github.com/typicode/json-server) for that purpose.

The setup is minimal, with a bsconfig for compiling ReasonML files to JavaScript and a webpack config for building the React app, then serving it with [json-server](https://github.com/typicode/json-server). `db.json` can be populated with data and that can be reached via `localhost:3030/api/*` from the React app.

There are a handful of scripts in `package.json` and that is enough to build and run the local server for development.

There is no HMR or LiveReload, by design. I just need a simple setup.

**If you have something to add that is useful to many people and still keeps this relatively simple, I'm happy to accept contributions.**

## Starting a new project

1. Clone this repository with `git clone git@github.com:avanslaars/react-reason-training-boilerplate.git`
2. Remove the `.git` directory with `rm -rf .git` from the project root
3. Add your own `git` history with `git init` and then you can associate your own remote with `git remote add origin <remote url>`

## Included scripts

- `build` - runs `webpack` which results in a build to the `./build` directory
- `build:re` - runs buckelscript with `bsb -make-world` to build `.re` files
- `watch` - runs bucklescript with the `-w` flag and webpack with the `--watch` flag
- `serve` - runs `json-server` using `db.json`
- `dev` - runs both `watch` and `serve` for development
