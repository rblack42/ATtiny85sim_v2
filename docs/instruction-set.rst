IN      Rd, PORT
OUT     PORT, Rr

LDI     Rd, k
LDS     Rd, k
STS     k, Rr
STS     k, Rr
MOV     Rd, Rr

RCALL   k
RET
PUSH    Rr
POP     Rd

RJMP    k
BRNE    K
SBRS    Rr, b
SBRC    Rr, b

NOP
DEC     Rd
INC     Rd
ADD     Rd, Rr
SUB     Rd, Rr

AND     Rd, Rr
OR      Rd, Rr
EOR     Rd, Rd
COM     Rd

SEI
CLI
