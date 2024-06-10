let render = component => {
  print_endline(component);
};

let renderChildren = children => {
  children |> List.iter(render);
};
