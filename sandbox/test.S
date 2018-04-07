    .section    .text
    .global main

main:
    lsl     r0
    lsl     r1
    lsr     r1
    pop     r1
    push    r1
    rjmp    main
    ret
