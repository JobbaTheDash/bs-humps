type options = Js.t({.});

[@bs.obj]
external makeOptions:
  (~separator: string=?, ~split: Js_re.t=?, unit) => options =
  "";

[@bs.module "humps"] external camelize: string => string = "camelize";

[@bs.module "humps"] external decamelize: string => string = "decamelize";

[@bs.module "humps"]
external decamelizeWithOptions: (string, options) => string = "decamelize";

[@bs.module "humps"] external pascalize: string => string = "pascalize";

[@bs.module "humps"] external depascalize: string => string = "depascalize";

[@bs.module "humps"]
external depascalizeWithOptions: (string, options) => string = "depascalize";
