org 0000h   ;começa o prog na l 0000h da EPROM
mov A,#0ffh ;escreve 11111111 no acc
org 000fh ;começa o prog na l 000fhda EPROM
mov A,#00h ;escreve 00000000b no acc
end ;fim