# Hocon grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter)

## Syntax highlighting
Tree-sitter highting in neovim: ![image](https://user-images.githubusercontent.com/14187674/149541157-651517b5-716a-40a3-9d58-28f2bd86dd1b.png)
For highlighting to work you need to tell neovim to set right filetype. To do it put this in your init.lua:  
```lua
vim.api.nvim_create_autocmd({'BufNewFile', 'BufRead'}, {pattern = '*.conf', command = 'set ft=hocon'})
```

## Useful links
[hocon-playground](https://hocon-playground.herokuapp.com/)  
[hocon-description](https://github.com/lightbend/config/blob/master/HOCON.md)
