if &cp | set nocp | endif
let s:cpo_save=&cpo
set cpo&vim
imap <S-Tab> 
inoremap <C-Tab> 	
inoremap <silent> <Plug>NERDCommenterInInsert  <BS>:call NERDComment(0, "insert")
vmap  :call CompileCode()
nmap  :call CompileCode()
omap  :call CompileCode()
vmap  :AuthorInfoDetectGi
nmap  :AuthorInfoDetectGi
omap  :AuthorInfoDetectGi
noremap  h
noremap <NL> j
noremap  k
noremap  l
vmap  :call RunResult()
nmap  :call RunResult()
omap  :call RunResult()
vmap  :w
nmap  :w
omap  :w
vmap  :Tlist
nmap  :Tlist
omap  :Tlist
vnoremap <silent> # :call VisualSearch('b')
vnoremap <silent> * :call VisualSearch('f')
vnoremap C "+y
vmap V d"+P
nmap V "+p
omap V "+p
map \mbt <Plug>TMiniBufExplorer
map \mbu <Plug>UMiniBufExplorer
map \mbc <Plug>CMiniBufExplorer
map \mbe <Plug>MiniBufExplorer
nmap <silent> \ucs :call C_RemoveGuiMenus()
nmap <silent> \lcs :call C_CreateGuiMenus()
nmap \ihn :IHN
nmap \is :IHS:A
nmap \ih :IHS
nmap \ca <Plug>NERDCommenterAltDelims
vmap \cA <Plug>NERDCommenterAppend
nmap \cA <Plug>NERDCommenterAppend
vmap \c$ <Plug>NERDCommenterToEOL
nmap \c$ <Plug>NERDCommenterToEOL
vmap \cu <Plug>NERDCommenterUncomment
nmap \cu <Plug>NERDCommenterUncomment
vmap \cn <Plug>NERDCommenterNest
nmap \cn <Plug>NERDCommenterNest
vmap \cb <Plug>NERDCommenterAlignBoth
nmap \cb <Plug>NERDCommenterAlignBoth
vmap \cl <Plug>NERDCommenterAlignLeft
nmap \cl <Plug>NERDCommenterAlignLeft
vmap \cy <Plug>NERDCommenterYank
nmap \cy <Plug>NERDCommenterYank
vmap \ci <Plug>NERDCommenterInvert
nmap \ci <Plug>NERDCommenterInvert
vmap \cs <Plug>NERDCommenterSexy
nmap \cs <Plug>NERDCommenterSexy
vmap \cm <Plug>NERDCommenterMinimal
nmap \cm <Plug>NERDCommenterMinimal
vmap \c  <Plug>NERDCommenterToggle
nmap \c  <Plug>NERDCommenterToggle
vmap \cc <Plug>NERDCommenterComment
nmap \cc <Plug>NERDCommenterComment
map \g :vimgrep // **/*.<Left><Left><Left><Left><Left><Left><Left>
nmap <silent> \ff :LookupFile
nmap <silent> \b :BufExplorer
map \cw :copen
nmap \sd :cs find d d=expand("<cword>"):copen
nmap \si :cs find i i=expand("<cfile>")$:copen
nmap \sf :cs find f f=expand("<cfile>"):copen
nmap \se :cs find e e=expand("<cword>"):copen
nmap \st :cs find t t=expand("<cword>"):copen
nmap \sc :cs find c c=expand("<cword>"):copen
nmap \sg :cs find g g=expand("<cword>")
nmap \ss :cs find s s=expand("<cword>"):copen
nmap gx <Plug>NetrwBrowseX
vnoremap <silent> gv :call VisualSearch('gv')
nmap wm :WMToggle
nnoremap <silent> <Plug>NetrwBrowseX :call netrw#NetrwBrowseX(expand("<cWORD>"),0)
noremap <C-Right> l
noremap <C-Left> h
noremap <C-Up> k
noremap <C-Down> j
nmap <silent> <Plug>NERDCommenterAppend :call NERDComment(0, "append")
nnoremap <silent> <Plug>NERDCommenterToEOL :call NERDComment(0, "toEOL")
vnoremap <silent> <Plug>NERDCommenterUncomment :call NERDComment(1, "uncomment")
nnoremap <silent> <Plug>NERDCommenterUncomment :call NERDComment(0, "uncomment")
vnoremap <silent> <Plug>NERDCommenterNest :call NERDComment(1, "nested")
nnoremap <silent> <Plug>NERDCommenterNest :call NERDComment(0, "nested")
vnoremap <silent> <Plug>NERDCommenterAlignBoth :call NERDComment(1, "alignBoth")
nnoremap <silent> <Plug>NERDCommenterAlignBoth :call NERDComment(0, "alignBoth")
vnoremap <silent> <Plug>NERDCommenterAlignLeft :call NERDComment(1, "alignLeft")
nnoremap <silent> <Plug>NERDCommenterAlignLeft :call NERDComment(0, "alignLeft")
vmap <silent> <Plug>NERDCommenterYank :call NERDComment(1, "yank")
nmap <silent> <Plug>NERDCommenterYank :call NERDComment(0, "yank")
vnoremap <silent> <Plug>NERDCommenterInvert :call NERDComment(1, "invert")
nnoremap <silent> <Plug>NERDCommenterInvert :call NERDComment(0, "invert")
vnoremap <silent> <Plug>NERDCommenterSexy :call NERDComment(1, "sexy")
nnoremap <silent> <Plug>NERDCommenterSexy :call NERDComment(0, "sexy")
vnoremap <silent> <Plug>NERDCommenterMinimal :call NERDComment(1, "minimal")
nnoremap <silent> <Plug>NERDCommenterMinimal :call NERDComment(0, "minimal")
vnoremap <silent> <Plug>NERDCommenterToggle :call NERDComment(1, "toggle")
nnoremap <silent> <Plug>NERDCommenterToggle :call NERDComment(0, "toggle")
vnoremap <silent> <Plug>NERDCommenterComment :call NERDComment(1, "norm")
nnoremap <silent> <Plug>NERDCommenterComment :call NERDComment(0, "norm")
map <F10> :call Debug()
nmap <C-.> :shell
map <F4> :cn
map <F3> :cp
map <F12> :call Do_CsTag()
imap  :call CompileCode()
imap  /*  hhi
imap  I
imap 	 
imap  kA
imap  A
imap  :call RunResult()
imap  :wa
imap  :Tlist
inoremap  
inoremap " ""i
inoremap ' ''i
inoremap ( ()i
inoremap ) =ClosePair(')')
inoremap [ []i
imap \ihn :IHN
imap \is :IHS:A
imap \ih :IHS
inoremap ] =ClosePair(']')
inoremap ` ``i
inoremap { {}i
inoremap } =ClosePair('}')
let &cpo=s:cpo_save
unlet s:cpo_save
set autochdir
set background=dark
set backspace=2
set cindent
set cmdheight=2
set cscopetag
set cscopetagorder=1
set cscopeverbose
set fileencodings=utf-8,cp936,gbk,gb18030,big5,latin1
set guifont=Eunjin\ 11
set guioptions=aegimrLt
set helplang=en
set hidden
set hlsearch
set incsearch
set laststatus=2
set mouse=a
set omnifunc=ccomplete#Complete
set ruler
set shiftwidth=4
set showmatch
set smartindent
set statusline=[%n]\ %f%m%r%h\ |\ \ pwd:\ %{CurDir()}\ \ |%=|\ %l,%c\ %p%%\ |\ ascii=%b,hex=%b%{((&fenc==\"\")?\"\":\"\ |\ \".&fenc)}\ |\ %{$USER}\ @\ %{hostname()}\ 
set tabstop=4
set termencoding=utf-8
set window=21
set nowrapscan
" vim: set ft=vim :
