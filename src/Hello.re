let component = ReasonReact.statelessComponent("Hello");
let make = (~greeting, _children) => {
  ...component,
  render: _self =>
    <div>
      <h1>
        {ReasonReact.string("Hello, " ++ greeting ++ " from Reason!")}
      </h1>
    </div>,
};

/*
 Everything below this point is specifically to allow the resulting
 JS to be imported as a module into existing JS. Modules that will
 be used directly in other Reason modules don't need to be wrapped for
 use in JS

 This component is exported as `default` and imported in App.js as:
 `import Hello from './Hello.bs'`

 Then used in the JSX like:
 `<Hello greeting="World" />`
  */

/* Define the prop types */
[@bs.deriving abstract]
type jsProps = {greeting: string};

/* Create an export for use in JS, wrapping the component - default used here for ES6 */
let default =
  ReasonReact.wrapReasonForJs(~component, jsProps =>
    make(
      ~greeting=jsProps->greetingGet,
      [||] /* pass empty array as children */
    )
  );
