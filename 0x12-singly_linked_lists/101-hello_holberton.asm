section .data
    hello db "Hello, Holberton", 10, 0  ; The string to print, with a newline character

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, hello  ; Load the address of the string into rdi
    call printf     ; Call printf
    add rsp, 8      ; Adjust the stack pointer
    xor rax, rax    ; Return 0 (optional)
    pop rbp
    ret
