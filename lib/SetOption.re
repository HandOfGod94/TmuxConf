type flag =
  | Global
  | Server

let deriveFlagValue = (flag): string => {
  let result : string = switch (flag) {
  | Global => "g"
  | Server => "s"
  };
  result;
};

let createElement =
    (~flag: flag=Global, ~option: string, ~value: string, ~children as _, ()) => {
  "set -" ++ deriveFlagValue(flag) ++ " " ++ option ++ " " ++ value;
};
