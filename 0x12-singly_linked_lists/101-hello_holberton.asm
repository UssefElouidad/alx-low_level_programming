section .data
    hello db "Hello, Holberton", 10, 0
section .text
    global main
    extern printf
main:
    ; Set up the stack frame
    push rbp
    mov rbp, rsp
    
    ; Call printf with the string as the argument
    mov rdi, hello
    xor rax, rax
    call printf
    
    ; Clean up and return
    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret
