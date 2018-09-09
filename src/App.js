import React, { Component } from "react"
import "./styles.css"
import Hello from "./Hello.bs"

export default class App extends Component {
  render() {
    return (
      <div>
        <h1>This is the app</h1>
        <Hello greeting="World" />
      </div>
    )
  }
}
