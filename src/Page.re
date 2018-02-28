let component = ReasonReact.statelessComponent("Page");

let make = _children => {
  ...component,
  render: _self => {
    let data = [|
      {"x": 1, "y": 13000},
      {"x": 2, "y": 16500},
      {"x": 3, "y": 14250},
      {"x": 4, "y": 19000}
    |];
    Js.log(data);
    <Victory.VictoryBar />;
  }
};