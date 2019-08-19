" To start vim without using this .vimrc file, use:
" vim -u NORC
"
" To start vim without loading any .vimrc or plugins, use:
" vim -u NONE
"
" Use vim settings, rather then vi settings (much better!)
" This must be first, because it changes other options as a side effect.
set nocompatible

" Instead of emitting an obnoxious noise, the window will flash very briefly. This is similar to screen‘s interpretation of the bell in its default configuration.
set visualbell

" Intuitive backspacing in insert mode
set backspace=indent,eol,start

" File-type highlighting and configuration.
" Run :filetype (without args) to see what you may have
" to turn on yourself, or just set them all to be sure.
syntax on
filetype on
filetype plugin on
filetype indent on
 
" Store temporary files in a central spot
" $ mkdir ~/.vim-tmp  # or whatever
" set backupdir=~/.vim-tmp,~/.tmp,~/tmp,/var/tmp,/tmp
" set directory=~/.vim-tmp,~/.tmp,~/tmp,/var/tmp,/tmp

" Highlight search terms...
set hlsearch
set incsearch          " ...dynamically as they are typed.
set showmode           " always show what mode we're currently editing in
set nowrap             " don't wrap lines
set tabstop=2          " a tab is four spaces
set softtabstop=2      " when hitting <BS>, pretend like a tab is removed, even if spaces
set expandtab          " expand tabs by default (overloadable per file type later)
set shiftwidth=2       " number of spaces to use for autoindenting
set shiftround         " use multiple of shiftwidth when indenting with '<' and '>'
set autoindent         " always set autoindenting on
set number             " always show line numbers
set showmatch          " set show matching parenthesis
set ignorecase         " ignore case when searching
set smartcase          " ignore case if search pattern is all lowercase,
                       " case-sensitive otherwise
set smarttab           " insert tabs on the start of a line according to
                       " shiftwidth, not tabstop
set scrolloff=4        " keep 4 lines off the edges of the screen when scrolling
set cino=:0,g0      " indent of case of switch 
autocmd FileType java :set cino=:0 "지정된 filetype에 대해 cindent를 적용한다

let @a = 'i#include <stdio.h>#include <stdlib.h>#include <string.h>#include <time.h>#include <math.h>int main(void){  '
let @b = 'i#include <iostream>#include <cstring>#include <string>using std::cout;using std::endl;using std::cin;/*using namespace std;*/int main(void){ '
