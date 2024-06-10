open TmuxConf.Render;
open TmuxConf;

render(
  <Tmux>
    <SetOption option="mouse" value="on" />
    <SetOption option="default-command" value="\"/bin/zsh\"" />
    <SetOption
      option="terminal-overrides"
      value="',*256color*:smcup@:rmcup@'"
    />
  </Tmux>,
);
