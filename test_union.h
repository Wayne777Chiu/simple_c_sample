

typedef unsigned short WORD;
typedef unsigned char BYTE;

#if !defined(_WIN32)
#define PACKED __attribute__((packed))
#else
#define PACKED 
#endif

#define FIELD unsigned char

typedef union {
	WORD Val;
	struct {
		BYTE Data[2];
	} PACKED two;
	struct {
		union {
			BYTE LS_Byte;
                        struct {
                                FIELD bit0: 1;
                                FIELD bit1: 1;
                                FIELD bit2: 1;
                                FIELD bit3: 1;
                                FIELD bit4: 1;
                                FIELD bit5: 1;
                                FIELD bit6: 1;
                                FIELD bit7: 1;
                        } PACKED field;
		} PACKED lm;
                union {
                        BYTE MS_Byte;
                        struct {
                                FIELD bit8: 1;
                                FIELD bit9: 1;
                                FIELD bit10: 1;
                                FIELD bit11: 1;
                                FIELD bit12: 1;
                                FIELD bit13: 1;
                                FIELD bit14: 1;
                                FIELD bit15: 1;
                        } PACKED field;
                } PACKED um;		
	} PACKED byte;
} REG;


