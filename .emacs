;;add line numbers to each line 
(global-linum-mode)

;;format line numbers to have 3 spaces for numbers, then this: ' | '
(setq linum-format "%3d \u2502 ")

;; add tab length to emacs default instead of spaces, code form Betty Wiki
    (setq c-default-style "bsd"
    c-basic-offset 4
    tab-width 4
    indent-tabs-mode t)
;; add tab length from GNU Library
(setq-default tab-width 4) ; set tab width to 4 for all buffers 

;; highlight lines over 80 characters 
(require 'whitespace)
(setq whitespace-style '(face empty lines-tail trailing))
(global-whitespace-mode t)

;; add current column along with line in emacs
(setq column-number-mode t)
