; Disclaimer
; Code obtained from ChatGPT 3.5

section .data
    hello db 'Hello, World!', 0

section .text
    global _start

_start:
    ; Get a handle to the standard output (stdout)
    push    dword -11          ; -11 is the standard output handle
    call    GetStdHandle
    mov     ebx, eax           ; Store the handle in ebx for later use

    ; Write the string to stdout
    push    dword 0            ; lpNumberOfCharsWritten (not used)
    push    dword hello        ; lpBuffer
    push    dword 13           ; nNumberOfBytesToWrite
    push    ebx                ; hFile (stdout handle)
    call    WriteFile

    ; Exit the program
    push    dword 0            ; Exit code
    call    ExitProcess

; Import the necessary functions from kernel32.dll
extern GetStdHandle
extern WriteFile
extern ExitProcess
