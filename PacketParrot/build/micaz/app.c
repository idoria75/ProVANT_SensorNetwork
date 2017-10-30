#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 152 "/usr/lib/gcc/avr/4.1.2/include/stddef.h" 3
typedef int ptrdiff_t;
#line 214
typedef unsigned int size_t;
#line 326
typedef int wchar_t;
# 8 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
#line 8
  int dummy;
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
#line 13
  int dummy;
}  ;
#line 14
struct __nesc_attr_one_nok {
#line 14
  int dummy;
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
#line 17
  int dummy;
}  ;
# 121 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/stdint.h" 3
typedef int int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int uint8_t __attribute((__mode__(__QI__))) ;
typedef int int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int uint16_t __attribute((__mode__(__HI__))) ;
typedef int int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int uint32_t __attribute((__mode__(__SI__))) ;

typedef int int64_t __attribute((__mode__(__DI__))) ;
typedef unsigned int uint64_t __attribute((__mode__(__DI__))) ;
#line 142
typedef int16_t intptr_t;




typedef uint16_t uintptr_t;
#line 159
typedef int8_t int_least8_t;




typedef uint8_t uint_least8_t;




typedef int16_t int_least16_t;




typedef uint16_t uint_least16_t;




typedef int32_t int_least32_t;




typedef uint32_t uint_least32_t;







typedef int64_t int_least64_t;






typedef uint64_t uint_least64_t;
#line 213
typedef int8_t int_fast8_t;




typedef uint8_t uint_fast8_t;




typedef int16_t int_fast16_t;




typedef uint16_t uint_fast16_t;




typedef int32_t int_fast32_t;




typedef uint32_t uint_fast32_t;







typedef int64_t int_fast64_t;






typedef uint64_t uint_fast64_t;
#line 273
typedef int64_t intmax_t;




typedef uint64_t uintmax_t;
# 77 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/inttypes.h" 3
typedef int32_t int_farptr_t;



typedef uint32_t uint_farptr_t;
# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;





static __inline uint8_t __nesc_ntoh_leuint8(const void * source)  ;




static __inline uint8_t __nesc_hton_leuint8(void * target, uint8_t value)  ;





static __inline int8_t __nesc_ntoh_int8(const void * source)  ;
#line 303
static __inline int8_t __nesc_hton_int8(void * target, int8_t value)  ;






static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;






static __inline uint16_t __nesc_ntoh_leuint16(const void * source)  ;




static __inline uint16_t __nesc_hton_leuint16(void * target, uint16_t value)  ;
#line 340
static __inline uint32_t __nesc_ntoh_uint32(const void * source)  ;






static __inline uint32_t __nesc_hton_uint32(void * target, uint32_t value)  ;
#line 431
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 116 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/string.h" 3
extern int memcmp(const void *arg_0x7f27b1e52020, const void *arg_0x7f27b1e52320, size_t arg_0x7f27b1e525e0) __attribute((__pure__)) ;
extern void *memcpy(void *arg_0x7f27b1e51020, const void *arg_0x7f27b1e51320, size_t arg_0x7f27b1e515e0);



extern void *memset(void *arg_0x7f27b1e4c150, int arg_0x7f27b1e4c3d0, size_t arg_0x7f27b1e4c690);
# 71 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/stdlib.h" 3
#line 68
typedef struct __nesc_unnamed4242 {
  int quot;
  int rem;
} div_t;





#line 74
typedef struct __nesc_unnamed4243 {
  long quot;
  long rem;
} ldiv_t;


typedef int (*__compar_fn_t)(const void *arg_0x7f27b1e2a970, const void *arg_0x7f27b1e2ac70);
# 25 "/home/ivan/Desktop/tinyos-main/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4244 {
#line 26
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;
uint16_t TOS_NODE_ID = 1;






struct __nesc_attr_atmostonce {
};
#line 37
struct __nesc_attr_atleastonce {
};
#line 38
struct __nesc_attr_exactlyonce {
};
# 51 "/home/ivan/Desktop/tinyos-main/tos/types/TinyError.h"
enum __nesc_unnamed4245 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 239 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/avr/fuse.h" 3
#line 234
typedef struct __nesc_unnamed4246 {

  unsigned char low;
  unsigned char high;
  unsigned char extended;
} __fuse_t;
# 211 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/avr/pgmspace.h" 3
typedef void prog_void __attribute((__progmem__)) ;
typedef char prog_char __attribute((__progmem__)) ;
typedef unsigned char prog_uchar __attribute((__progmem__)) ;

typedef int8_t prog_int8_t __attribute((__progmem__)) ;
typedef uint8_t prog_uint8_t __attribute((__progmem__)) ;
typedef int16_t prog_int16_t __attribute((__progmem__)) ;
typedef uint16_t prog_uint16_t __attribute((__progmem__)) ;
typedef int32_t prog_int32_t __attribute((__progmem__)) ;
typedef uint32_t prog_uint32_t __attribute((__progmem__)) ;

typedef int64_t prog_int64_t __attribute((__progmem__)) ;
typedef uint64_t prog_uint64_t __attribute((__progmem__)) ;
# 25 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/atm128const.h"
typedef uint8_t const_uint8_t __attribute((__progmem__)) ;
typedef uint16_t const_uint16_t __attribute((__progmem__)) ;
typedef uint32_t const_uint32_t __attribute((__progmem__)) ;
typedef int8_t const_int8_t __attribute((__progmem__)) ;
typedef int16_t const_int16_t __attribute((__progmem__)) ;
typedef int32_t const_int32_t __attribute((__progmem__)) ;
# 88 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/atm128hardware.h"
static __inline void __nesc_enable_interrupt()  ;



static __inline void __nesc_disable_interrupt()  ;




typedef uint8_t __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t original_SREG);









#line 108
__inline __nesc_atomic_t 
__nesc_atomic_start(void )   ;









#line 118
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)   ;







typedef uint8_t mcu_power_t  ;


enum __nesc_unnamed4247 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};


static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)  ;









typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_float;typedef float __nesc_nxbase_nx_float  ;
# 43 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/adc/Atm128Adc.h"
enum __nesc_unnamed4248 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_RSVD, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4249 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4250 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND
};







#line 94
typedef struct __nesc_unnamed4251 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4252 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4253 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4254 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4255 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4256 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4257 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 150
typedef struct __nesc_unnamed4258 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adfr : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;

typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 41 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4259 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4260 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4261 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4262 {
#line 44
  int notUsed;
} 
#line 44
TMicro;
# 52 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/Atm128Timer.h"
enum __nesc_unnamed4263 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};

enum __nesc_unnamed4264 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4265 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};


enum __nesc_unnamed4266 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4267 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 108
#line 98
typedef union __nesc_unnamed4268 {

  uint8_t flat;
  struct __nesc_unnamed4269 {
    uint8_t cs : 3;
    uint8_t wgm1 : 1;
    uint8_t com : 2;
    uint8_t wgm0 : 1;
    uint8_t foc : 1;
  } bits;
} Atm128TimerControl_t;

typedef Atm128TimerControl_t Atm128_TCCR0_t;
typedef uint8_t Atm128_TCNT0_t;
typedef uint8_t Atm128_OCR0_t;

typedef Atm128TimerControl_t Atm128_TCCR2_t;
typedef uint8_t Atm128_TCNT2_t;
typedef uint8_t Atm128_OCR2_t;
#line 130
#line 120
typedef union __nesc_unnamed4270 {

  uint8_t flat;
  struct __nesc_unnamed4271 {
    uint8_t tcr0ub : 1;
    uint8_t ocr0ub : 1;
    uint8_t tcn0ub : 1;
    uint8_t as0 : 1;
    uint8_t rsvd : 4;
  } bits;
} Atm128Assr_t;
#line 146
#line 133
typedef union __nesc_unnamed4272 {

  uint8_t flat;
  struct __nesc_unnamed4273 {
    uint8_t toie0 : 1;
    uint8_t ocie0 : 1;
    uint8_t toie1 : 1;
    uint8_t ocie1b : 1;
    uint8_t ocie1a : 1;
    uint8_t ticie1 : 1;
    uint8_t toie2 : 1;
    uint8_t ocie2 : 1;
  } bits;
} Atm128_TIMSK_t;
#line 163
#line 150
typedef union __nesc_unnamed4274 {

  uint8_t flat;
  struct __nesc_unnamed4275 {
    uint8_t tov0 : 1;
    uint8_t ocf0 : 1;
    uint8_t tov1 : 1;
    uint8_t ocf1b : 1;
    uint8_t ocf1a : 1;
    uint8_t icf1 : 1;
    uint8_t tov2 : 1;
    uint8_t ocf2 : 1;
  } bits;
} Atm128_TIFR_t;
#line 178
#line 167
typedef union __nesc_unnamed4276 {

  uint8_t flat;
  struct __nesc_unnamed4277 {
    uint8_t psr321 : 1;
    uint8_t psr0 : 1;
    uint8_t pud : 1;
    uint8_t acme : 1;
    uint8_t rsvd : 3;
    uint8_t tsm : 1;
  } bits;
} Atm128_SFIOR_t;






enum __nesc_unnamed4278 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};
#line 202
#line 193
typedef union __nesc_unnamed4279 {

  uint8_t flat;
  struct __nesc_unnamed4280 {
    uint8_t wgm10 : 2;
    uint8_t comC : 2;
    uint8_t comB : 2;
    uint8_t comA : 2;
  } bits;
} Atm128TimerCtrlCompare_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR1A_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR3A_t;


enum __nesc_unnamed4281 {
  ATM128_WAVE16_NORMAL = 0, 
  ATM128_WAVE16_PWM_8BIT, 
  ATM128_WAVE16_PWM_9BIT, 
  ATM128_WAVE16_PWM_10BIT, 
  ATM128_WAVE16_CTC_COMPARE, 
  ATM128_WAVE16_PWM_FAST_8BIT, 
  ATM128_WAVE16_PWM_FAST_9BIT, 
  ATM128_WAVE16_PWM_FAST_10BIT, 
  ATM128_WAVE16_PWM_CAPTURE_LOW, 
  ATM128_WAVE16_PWM_COMPARE_LOW, 
  ATM128_WAVE16_PWM_CAPTURE_HIGH, 
  ATM128_WAVE16_PWM_COMPARE_HIGH, 
  ATM128_WAVE16_CTC_CAPTURE, 
  ATM128_WAVE16_RESERVED, 
  ATM128_WAVE16_PWM_FAST_CAPTURE, 
  ATM128_WAVE16_PWM_FAST_COMPARE
};
#line 241
#line 231
typedef union __nesc_unnamed4282 {

  uint8_t flat;
  struct __nesc_unnamed4283 {
    uint8_t cs : 3;
    uint8_t wgm32 : 2;
    uint8_t rsvd : 1;
    uint8_t ices1 : 1;
    uint8_t icnc1 : 1;
  } bits;
} Atm128TimerCtrlCapture_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR1B_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR3B_t;
#line 259
#line 250
typedef union __nesc_unnamed4284 {

  uint8_t flat;
  struct __nesc_unnamed4285 {
    uint8_t rsvd : 5;
    uint8_t focC : 1;
    uint8_t focB : 1;
    uint8_t focA : 1;
  } bits;
} Atm128TimerCtrlClock_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR1C_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR3C_t;



typedef uint8_t Atm128_TCNT1H_t;
typedef uint8_t Atm128_TCNT1L_t;
typedef uint8_t Atm128_TCNT3H_t;
typedef uint8_t Atm128_TCNT3L_t;


typedef uint8_t Atm128_OCR1AH_t;
typedef uint8_t Atm128_OCR1AL_t;
typedef uint8_t Atm128_OCR1BH_t;
typedef uint8_t Atm128_OCR1BL_t;
typedef uint8_t Atm128_OCR1CH_t;
typedef uint8_t Atm128_OCR1CL_t;


typedef uint8_t Atm128_OCR3AH_t;
typedef uint8_t Atm128_OCR3AL_t;
typedef uint8_t Atm128_OCR3BH_t;
typedef uint8_t Atm128_OCR3BL_t;
typedef uint8_t Atm128_OCR3CH_t;
typedef uint8_t Atm128_OCR3CL_t;


typedef uint8_t Atm128_ICR1H_t;
typedef uint8_t Atm128_ICR1L_t;
typedef uint8_t Atm128_ICR3H_t;
typedef uint8_t Atm128_ICR3L_t;
#line 309
#line 297
typedef union __nesc_unnamed4286 {

  uint8_t flat;
  struct __nesc_unnamed4287 {
    uint8_t ocie1c : 1;
    uint8_t ocie3c : 1;
    uint8_t toie3 : 1;
    uint8_t ocie3b : 1;
    uint8_t ocie3a : 1;
    uint8_t ticie3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIMSK_t;
#line 324
#line 312
typedef union __nesc_unnamed4288 {

  uint8_t flat;
  struct __nesc_unnamed4289 {
    uint8_t ocf1c : 1;
    uint8_t ocf3c : 1;
    uint8_t tov3 : 1;
    uint8_t ocf3b : 1;
    uint8_t ocf3a : 1;
    uint8_t icf3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIFR_t;
# 51 "/home/ivan/Desktop/tinyos-main/tos/platforms/mica/MicaTimer.h"
typedef struct __nesc_unnamed4290 {
} 
#line 51
T64khz;
typedef struct __nesc_unnamed4291 {
} 
#line 52
T128khz;
typedef struct __nesc_unnamed4292 {
} 
#line 53
T2mhz;
typedef struct __nesc_unnamed4293 {
} 
#line 54
T4mhz;
#line 107
typedef T32khz TOne;
typedef TMicro TThree;
typedef uint16_t counter_one_overflow_t;
typedef uint16_t counter_three_overflow_t;

enum __nesc_unnamed4294 {
  MICA_PRESCALER_ONE = ATM128_CLK16_DIVIDE_256, 
  MICA_DIVIDE_ONE_FOR_32KHZ_LOG2 = 0, 
  MICA_PRESCALER_THREE = ATM128_CLK16_DIVIDE_8, 
  MICA_DIVIDE_THREE_FOR_MICRO_LOG2 = 0, 
  EXT_STANDBY_T0_THRESHOLD = 12
};





enum __nesc_unnamed4295 {
  PLATFORM_MHZ = 8
};
# 62 "/home/ivan/Desktop/tinyos-main/tos/platforms/micaz/hardware.h"
enum __nesc_unnamed4296 {
  TOS_SLEEP_NONE = ATM128_POWER_IDLE
};


enum __nesc_unnamed4297 {
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1
};


enum __nesc_unnamed4298 {
  PLATFORM_BAUDRATE = 57600L
};
# 4 "build/micaz/StorageVolumes.h"
enum __nesc_unnamed4299 {
  VOLUME_CONFIGTEST, 
  VOLUME_LOGTEST
};
# 43 "/home/ivan/Desktop/tinyos-main/tos/types/Leds.h"
enum __nesc_unnamed4300 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 39 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/CC2420.h"
typedef uint8_t cc2420_status_t;
#line 93
#line 87
typedef nx_struct security_header_t {
  unsigned char __nesc_filler0[1];


  nx_uint32_t frameCounter;
  nx_uint8_t keyID[1];
} __attribute__((packed)) security_header_t;
#line 113
#line 95
typedef nx_struct cc2420_header_t {
  nxle_uint8_t length;
  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;







  nxle_uint8_t network;


  nxle_uint8_t type;
} __attribute__((packed)) cc2420_header_t;





#line 118
typedef nx_struct cc2420_footer_t {
} __attribute__((packed)) cc2420_footer_t;
#line 143
#line 128
typedef nx_struct cc2420_metadata_t {
  nx_uint8_t rssi;
  nx_uint8_t lqi;
  nx_uint8_t tx_power;
  nx_bool crc;
  nx_bool ack;
  nx_bool timesync;
  nx_uint32_t timestamp;
  nx_uint16_t rxInterval;
} __attribute__((packed)) 





cc2420_metadata_t;





#line 146
typedef nx_struct cc2420_packet_t {
  cc2420_header_t packet;
  nx_uint8_t data[];
} __attribute__((packed)) cc2420_packet_t;
#line 179
enum __nesc_unnamed4301 {

  MAC_HEADER_SIZE = sizeof(cc2420_header_t ) - 1, 

  MAC_FOOTER_SIZE = sizeof(uint16_t ), 

  MAC_PACKET_SIZE = MAC_HEADER_SIZE + 28 + MAC_FOOTER_SIZE, 

  CC2420_SIZE = MAC_HEADER_SIZE + MAC_FOOTER_SIZE
};

enum cc2420_enums {
  CC2420_TIME_ACK_TURNAROUND = 7, 
  CC2420_TIME_VREN = 20, 
  CC2420_TIME_SYMBOL = 2, 
  CC2420_BACKOFF_PERIOD = 20 / CC2420_TIME_SYMBOL, 
  CC2420_MIN_BACKOFF = 20 / CC2420_TIME_SYMBOL, 
  CC2420_ACK_WAIT_DELAY = 256
};

enum cc2420_status_enums {
  CC2420_STATUS_RSSI_VALID = 1 << 1, 
  CC2420_STATUS_LOCK = 1 << 2, 
  CC2420_STATUS_TX_ACTIVE = 1 << 3, 
  CC2420_STATUS_ENC_BUSY = 1 << 4, 
  CC2420_STATUS_TX_UNDERFLOW = 1 << 5, 
  CC2420_STATUS_XOSC16M_STABLE = 1 << 6
};

enum cc2420_config_reg_enums {
  CC2420_SNOP = 0x00, 
  CC2420_SXOSCON = 0x01, 
  CC2420_STXCAL = 0x02, 
  CC2420_SRXON = 0x03, 
  CC2420_STXON = 0x04, 
  CC2420_STXONCCA = 0x05, 
  CC2420_SRFOFF = 0x06, 
  CC2420_SXOSCOFF = 0x07, 
  CC2420_SFLUSHRX = 0x08, 
  CC2420_SFLUSHTX = 0x09, 
  CC2420_SACK = 0x0a, 
  CC2420_SACKPEND = 0x0b, 
  CC2420_SRXDEC = 0x0c, 
  CC2420_STXENC = 0x0d, 
  CC2420_SAES = 0x0e, 
  CC2420_MAIN = 0x10, 
  CC2420_MDMCTRL0 = 0x11, 
  CC2420_MDMCTRL1 = 0x12, 
  CC2420_RSSI = 0x13, 
  CC2420_SYNCWORD = 0x14, 
  CC2420_TXCTRL = 0x15, 
  CC2420_RXCTRL0 = 0x16, 
  CC2420_RXCTRL1 = 0x17, 
  CC2420_FSCTRL = 0x18, 
  CC2420_SECCTRL0 = 0x19, 
  CC2420_SECCTRL1 = 0x1a, 
  CC2420_BATTMON = 0x1b, 
  CC2420_IOCFG0 = 0x1c, 
  CC2420_IOCFG1 = 0x1d, 
  CC2420_MANFIDL = 0x1e, 
  CC2420_MANFIDH = 0x1f, 
  CC2420_FSMTC = 0x20, 
  CC2420_MANAND = 0x21, 
  CC2420_MANOR = 0x22, 
  CC2420_AGCCTRL = 0x23, 
  CC2420_AGCTST0 = 0x24, 
  CC2420_AGCTST1 = 0x25, 
  CC2420_AGCTST2 = 0x26, 
  CC2420_FSTST0 = 0x27, 
  CC2420_FSTST1 = 0x28, 
  CC2420_FSTST2 = 0x29, 
  CC2420_FSTST3 = 0x2a, 
  CC2420_RXBPFTST = 0x2b, 
  CC2420_FMSTATE = 0x2c, 
  CC2420_ADCTST = 0x2d, 
  CC2420_DACTST = 0x2e, 
  CC2420_TOPTST = 0x2f, 
  CC2420_TXFIFO = 0x3e, 
  CC2420_RXFIFO = 0x3f
};

enum cc2420_ram_addr_enums {
  CC2420_RAM_TXFIFO = 0x000, 
  CC2420_RAM_RXFIFO = 0x080, 
  CC2420_RAM_KEY0 = 0x100, 
  CC2420_RAM_RXNONCE = 0x110, 
  CC2420_RAM_SABUF = 0x120, 
  CC2420_RAM_KEY1 = 0x130, 
  CC2420_RAM_TXNONCE = 0x140, 
  CC2420_RAM_CBCSTATE = 0x150, 
  CC2420_RAM_IEEEADR = 0x160, 
  CC2420_RAM_PANID = 0x168, 
  CC2420_RAM_SHORTADR = 0x16a
};

enum cc2420_nonce_enums {
  CC2420_NONCE_BLOCK_COUNTER = 0, 
  CC2420_NONCE_KEY_SEQ_COUNTER = 2, 
  CC2420_NONCE_FRAME_COUNTER = 3, 
  CC2420_NONCE_SOURCE_ADDRESS = 7, 
  CC2420_NONCE_FLAGS = 15
};

enum cc2420_main_enums {
  CC2420_MAIN_RESETn = 15, 
  CC2420_MAIN_ENC_RESETn = 14, 
  CC2420_MAIN_DEMOD_RESETn = 13, 
  CC2420_MAIN_MOD_RESETn = 12, 
  CC2420_MAIN_FS_RESETn = 11, 
  CC2420_MAIN_XOSC16M_BYPASS = 0
};

enum cc2420_mdmctrl0_enums {
  CC2420_MDMCTRL0_RESERVED_FRAME_MODE = 13, 
  CC2420_MDMCTRL0_PAN_COORDINATOR = 12, 
  CC2420_MDMCTRL0_ADR_DECODE = 11, 
  CC2420_MDMCTRL0_CCA_HYST = 8, 
  CC2420_MDMCTRL0_CCA_MOD = 6, 
  CC2420_MDMCTRL0_AUTOCRC = 5, 
  CC2420_MDMCTRL0_AUTOACK = 4, 
  CC2420_MDMCTRL0_PREAMBLE_LENGTH = 0
};

enum cc2420_mdmctrl1_enums {
  CC2420_MDMCTRL1_CORR_THR = 6, 
  CC2420_MDMCTRL1_DEMOD_AVG_MODE = 5, 
  CC2420_MDMCTRL1_MODULATION_MODE = 4, 
  CC2420_MDMCTRL1_TX_MODE = 2, 
  CC2420_MDMCTRL1_RX_MODE = 0
};

enum cc2420_rssi_enums {
  CC2420_RSSI_CCA_THR = 8, 
  CC2420_RSSI_RSSI_VAL = 0
};

enum cc2420_syncword_enums {
  CC2420_SYNCWORD_SYNCWORD = 0
};

enum cc2420_txctrl_enums {
  CC2420_TXCTRL_TXMIXBUF_CUR = 14, 
  CC2420_TXCTRL_TX_TURNAROUND = 13, 
  CC2420_TXCTRL_TXMIX_CAP_ARRAY = 11, 
  CC2420_TXCTRL_TXMIX_CURRENT = 9, 
  CC2420_TXCTRL_PA_CURRENT = 6, 
  CC2420_TXCTRL_RESERVED = 5, 
  CC2420_TXCTRL_PA_LEVEL = 0
};

enum cc2420_rxctrl0_enums {
  CC2420_RXCTRL0_RXMIXBUF_CUR = 12, 
  CC2420_RXCTRL0_HIGH_LNA_GAIN = 10, 
  CC2420_RXCTRL0_MED_LNA_GAIN = 8, 
  CC2420_RXCTRL0_LOW_LNA_GAIN = 6, 
  CC2420_RXCTRL0_HIGH_LNA_CURRENT = 4, 
  CC2420_RXCTRL0_MED_LNA_CURRENT = 2, 
  CC2420_RXCTRL0_LOW_LNA_CURRENT = 0
};

enum cc2420_rxctrl1_enums {
  CC2420_RXCTRL1_RXBPF_LOCUR = 13, 
  CC2420_RXCTRL1_RXBPF_MIDCUR = 12, 
  CC2420_RXCTRL1_LOW_LOWGAIN = 11, 
  CC2420_RXCTRL1_MED_LOWGAIN = 10, 
  CC2420_RXCTRL1_HIGH_HGM = 9, 
  CC2420_RXCTRL1_MED_HGM = 8, 
  CC2420_RXCTRL1_LNA_CAP_ARRAY = 6, 
  CC2420_RXCTRL1_RXMIX_TAIL = 4, 
  CC2420_RXCTRL1_RXMIX_VCM = 2, 
  CC2420_RXCTRL1_RXMIX_CURRENT = 0
};

enum cc2420_rsctrl_enums {
  CC2420_FSCTRL_LOCK_THR = 14, 
  CC2420_FSCTRL_CAL_DONE = 13, 
  CC2420_FSCTRL_CAL_RUNNING = 12, 
  CC2420_FSCTRL_LOCK_LENGTH = 11, 
  CC2420_FSCTRL_LOCK_STATUS = 10, 
  CC2420_FSCTRL_FREQ = 0
};

enum cc2420_secctrl0_enums {
  CC2420_SECCTRL0_RXFIFO_PROTECTION = 9, 
  CC2420_SECCTRL0_SEC_CBC_HEAD = 8, 
  CC2420_SECCTRL0_SEC_SAKEYSEL = 7, 
  CC2420_SECCTRL0_SEC_TXKEYSEL = 6, 
  CC2420_SECCTRL0_SEC_RXKEYSEL = 5, 
  CC2420_SECCTRL0_SEC_M = 2, 
  CC2420_SECCTRL0_SEC_MODE = 0
};

enum cc2420_secctrl1_enums {
  CC2420_SECCTRL1_SEC_TXL = 8, 
  CC2420_SECCTRL1_SEC_RXL = 0
};

enum cc2420_battmon_enums {
  CC2420_BATTMON_BATT_OK = 6, 
  CC2420_BATTMON_BATTMON_EN = 5, 
  CC2420_BATTMON_BATTMON_VOLTAGE = 0
};

enum cc2420_iocfg0_enums {
  CC2420_IOCFG0_BCN_ACCEPT = 11, 
  CC2420_IOCFG0_FIFO_POLARITY = 10, 
  CC2420_IOCFG0_FIFOP_POLARITY = 9, 
  CC2420_IOCFG0_SFD_POLARITY = 8, 
  CC2420_IOCFG0_CCA_POLARITY = 7, 
  CC2420_IOCFG0_FIFOP_THR = 0
};

enum cc2420_iocfg1_enums {
  CC2420_IOCFG1_HSSD_SRC = 10, 
  CC2420_IOCFG1_SFDMUX = 5, 
  CC2420_IOCFG1_CCAMUX = 0
};

enum cc2420_manfidl_enums {
  CC2420_MANFIDL_PARTNUM = 12, 
  CC2420_MANFIDL_MANFID = 0
};

enum cc2420_manfidh_enums {
  CC2420_MANFIDH_VERSION = 12, 
  CC2420_MANFIDH_PARTNUM = 0
};

enum cc2420_fsmtc_enums {
  CC2420_FSMTC_TC_RXCHAIN2RX = 13, 
  CC2420_FSMTC_TC_SWITCH2TX = 10, 
  CC2420_FSMTC_TC_PAON2TX = 6, 
  CC2420_FSMTC_TC_TXEND2SWITCH = 3, 
  CC2420_FSMTC_TC_TXEND2PAOFF = 0
};

enum cc2420_sfdmux_enums {
  CC2420_SFDMUX_SFD = 0, 
  CC2420_SFDMUX_XOSC16M_STABLE = 24
};

enum cc2420_security_enums {
  CC2420_NO_SEC = 0, 
  CC2420_CBC_MAC = 1, 
  CC2420_CTR = 2, 
  CC2420_CCM = 3, 
  NO_SEC = 0, 
  CBC_MAC_4 = 1, 
  CBC_MAC_8 = 2, 
  CBC_MAC_16 = 3, 
  CTR = 4, 
  CCM_4 = 5, 
  CCM_8 = 6, 
  CCM_16 = 7
};


enum __nesc_unnamed4302 {

  CC2420_INVALID_TIMESTAMP = 0x80000000L
};
# 6 "/home/ivan/Desktop/tinyos-main/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4303 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4304 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 83 "/home/ivan/Desktop/tinyos-main/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4305 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4306 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4307 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 121
#line 109
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 123
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 131
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 136
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 60 "/home/ivan/Desktop/tinyos-main/tos/platforms/micaz/platform_message.h"
#line 57
typedef union message_header {
  cc2420_header_t cc2420;
  serial_header_t serial;
} message_header_t;



#line 62
typedef union message_footer {
  cc2420_footer_t cc2420;
} message_footer_t;




#line 66
typedef union message_metadata {
  cc2420_metadata_t cc2420;
  serial_metadata_t serial;
} message_metadata_t;
# 19 "/home/ivan/Desktop/tinyos-main/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 52 "/home/ivan/Desktop/tinyos-main/tos/types/Storage.h"
typedef uint8_t volume_id_t;
typedef uint32_t storage_addr_t;
typedef uint32_t storage_len_t;
typedef uint32_t storage_cookie_t;

enum __nesc_unnamed4308 {
  SEEK_BEGINNING = 0
};
# 47 "/home/ivan/Desktop/tinyos-main/tos/platforms/mica2/chips/at45db/HplAt45db_chip.h"
enum __nesc_unnamed4309 {
  AT45_MAX_PAGES = 2048, 
  AT45_PAGE_SIZE = 264, 
  AT45_PAGE_SIZE_LOG2 = 8
};

typedef uint16_t at45page_t;
typedef uint16_t at45pageoffset_t;
# 16 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45db.h"
enum __nesc_unnamed4310 {
  AT45_C_READ_BUFFER1 = 0xd4, 
  AT45_C_READ_BUFFER2 = 0xd6, 
  AT45_C_READ_CONTINUOUS = 0xe8, 
  AT45_C_READ_PAGE = 0xd2, 
  AT45_C_WRITE_BUFFER1 = 0x84, 
  AT45_C_WRITE_BUFFER2 = 0x87, 
  AT45_C_WRITE_MEM_BUFFER1 = 0x82, 
  AT45_C_WRITE_MEM_BUFFER2 = 0x85, 
  AT45_C_FILL_BUFFER1 = 0x53, 
  AT45_C_FILL_BUFFER2 = 0x55, 
  AT45_C_FLUSH_BUFFER1 = 0x83, 
  AT45_C_FLUSH_BUFFER2 = 0x86, 
  AT45_C_QFLUSH_BUFFER1 = 0x88, 
  AT45_C_QFLUSH_BUFFER2 = 0x89, 
  AT45_C_COMPARE_BUFFER1 = 0x60, 
  AT45_C_COMPARE_BUFFER2 = 0x61, 
  AT45_C_REQ_STATUS = 0xd7, 
  AT45_C_ERASE_PAGE = 0x81
};
# 49 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45db.h"
enum __nesc_unnamed4311 {
  AT45_ERASE, 
  AT45_DONT_ERASE, 
  AT45_PREVIOUSLY_ERASED
};
# 40 "/home/ivan/Desktop/tinyos-main/tos/types/IeeeEui64.h"
enum __nesc_unnamed4312 {
#line 40
  IEEE_EUI64_LENGTH = 8
};


#line 42
typedef struct ieee_eui64 {
  uint8_t data[IEEE_EUI64_LENGTH];
} ieee_eui64_t;
# 47 "/home/ivan/Desktop/tinyos-main/tos/types/Ieee154.h"
typedef uint16_t ieee154_panid_t;
typedef uint16_t ieee154_saddr_t;
typedef ieee_eui64_t ieee154_laddr_t;







#line 51
typedef struct __nesc_unnamed4313 {
  uint8_t ieee_mode : 2;
  union __nesc_unnamed4314 {
    ieee154_saddr_t saddr;
    ieee154_laddr_t laddr;
  } ieee_addr;
} ieee154_addr_t;



enum __nesc_unnamed4315 {
  IEEE154_BROADCAST_ADDR = 0xffff, 
  IEEE154_LINK_MTU = 127
};

struct ieee154_frame_addr {
  ieee154_addr_t ieee_src;
  ieee154_addr_t ieee_dst;
  ieee154_panid_t ieee_dstpan;
};

enum __nesc_unnamed4316 {
  IEEE154_MIN_HDR_SZ = 6
};
#line 86
enum ieee154_fcf_enums {
  IEEE154_FCF_FRAME_TYPE = 0, 
  IEEE154_FCF_SECURITY_ENABLED = 3, 
  IEEE154_FCF_FRAME_PENDING = 4, 
  IEEE154_FCF_ACK_REQ = 5, 
  IEEE154_FCF_INTRAPAN = 6, 
  IEEE154_FCF_DEST_ADDR_MODE = 10, 
  IEEE154_FCF_SRC_ADDR_MODE = 14
};

enum ieee154_fcf_type_enums {
  IEEE154_TYPE_BEACON = 0, 
  IEEE154_TYPE_DATA = 1, 
  IEEE154_TYPE_ACK = 2, 
  IEEE154_TYPE_MAC_CMD = 3, 
  IEEE154_TYPE_MASK = 7
};

enum ieee154_fcf_addr_mode_enums {
  IEEE154_ADDR_NONE = 0, 
  IEEE154_ADDR_SHORT = 2, 
  IEEE154_ADDR_EXT = 3, 
  IEEE154_ADDR_MASK = 3
};
# 41 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/Atm128Spi.h"
enum __nesc_unnamed4317 {
  ATM128_SPI_CLK_DIVIDE_4 = 0, 
  ATM128_SPI_CLK_DIVIDE_16 = 1, 
  ATM128_SPI_CLK_DIVIDE_64 = 2, 
  ATM128_SPI_CLK_DIVIDE_128 = 3
};
#line 58
#line 49
typedef struct __nesc_unnamed4318 {
  uint8_t spie : 1;
  uint8_t spe : 1;
  uint8_t dord : 1;
  uint8_t mstr : 1;
  uint8_t cpol : 1;
  uint8_t cpha : 1;
  uint8_t spr : 2;
} 
Atm128SPIControl_s;



#line 59
typedef union __nesc_unnamed4319 {
  uint8_t flat;
  Atm128SPIControl_s bits;
} Atm128SPIControl_t;

typedef Atm128SPIControl_t Atm128_SPCR_t;








#line 67
typedef struct __nesc_unnamed4320 {
  uint8_t spif : 1;
  uint8_t wcol : 1;
  uint8_t rsvd : 5;
  uint8_t spi2x : 1;
} 
Atm128SPIStatus_s;



#line 74
typedef union __nesc_unnamed4321 {
  uint8_t flat;
  Atm128SPIStatus_s bits;
} Atm128SPIStatus_t;

typedef Atm128SPIStatus_t Atm128_SPSR_t;

typedef uint8_t Atm128_SPDR_t;
# 33 "/home/ivan/Desktop/tinyos-main/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 43 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/CC2420TimeSyncMessage.h"
typedef nx_uint32_t timesync_radio_t;





#line 45
typedef nx_struct timesync_footer_t {

  nx_am_id_t type;
  timesync_radio_t timestamp;
} __attribute__((packed)) timesync_footer_t;
# 50 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/crc.h"
uint16_t crcTable[256] __attribute((__progmem__))  = { 
0x0000, 0x1021, 0x2042, 0x3063, 0x4084, 0x50a5, 0x60c6, 0x70e7, 
0x8108, 0x9129, 0xa14a, 0xb16b, 0xc18c, 0xd1ad, 0xe1ce, 0xf1ef, 
0x1231, 0x0210, 0x3273, 0x2252, 0x52b5, 0x4294, 0x72f7, 0x62d6, 
0x9339, 0x8318, 0xb37b, 0xa35a, 0xd3bd, 0xc39c, 0xf3ff, 0xe3de, 
0x2462, 0x3443, 0x0420, 0x1401, 0x64e6, 0x74c7, 0x44a4, 0x5485, 
0xa56a, 0xb54b, 0x8528, 0x9509, 0xe5ee, 0xf5cf, 0xc5ac, 0xd58d, 
0x3653, 0x2672, 0x1611, 0x0630, 0x76d7, 0x66f6, 0x5695, 0x46b4, 
0xb75b, 0xa77a, 0x9719, 0x8738, 0xf7df, 0xe7fe, 0xd79d, 0xc7bc, 
0x48c4, 0x58e5, 0x6886, 0x78a7, 0x0840, 0x1861, 0x2802, 0x3823, 
0xc9cc, 0xd9ed, 0xe98e, 0xf9af, 0x8948, 0x9969, 0xa90a, 0xb92b, 
0x5af5, 0x4ad4, 0x7ab7, 0x6a96, 0x1a71, 0x0a50, 0x3a33, 0x2a12, 
0xdbfd, 0xcbdc, 0xfbbf, 0xeb9e, 0x9b79, 0x8b58, 0xbb3b, 0xab1a, 
0x6ca6, 0x7c87, 0x4ce4, 0x5cc5, 0x2c22, 0x3c03, 0x0c60, 0x1c41, 
0xedae, 0xfd8f, 0xcdec, 0xddcd, 0xad2a, 0xbd0b, 0x8d68, 0x9d49, 
0x7e97, 0x6eb6, 0x5ed5, 0x4ef4, 0x3e13, 0x2e32, 0x1e51, 0x0e70, 
0xff9f, 0xefbe, 0xdfdd, 0xcffc, 0xbf1b, 0xaf3a, 0x9f59, 0x8f78, 
0x9188, 0x81a9, 0xb1ca, 0xa1eb, 0xd10c, 0xc12d, 0xf14e, 0xe16f, 
0x1080, 0x00a1, 0x30c2, 0x20e3, 0x5004, 0x4025, 0x7046, 0x6067, 
0x83b9, 0x9398, 0xa3fb, 0xb3da, 0xc33d, 0xd31c, 0xe37f, 0xf35e, 
0x02b1, 0x1290, 0x22f3, 0x32d2, 0x4235, 0x5214, 0x6277, 0x7256, 
0xb5ea, 0xa5cb, 0x95a8, 0x8589, 0xf56e, 0xe54f, 0xd52c, 0xc50d, 
0x34e2, 0x24c3, 0x14a0, 0x0481, 0x7466, 0x6447, 0x5424, 0x4405, 
0xa7db, 0xb7fa, 0x8799, 0x97b8, 0xe75f, 0xf77e, 0xc71d, 0xd73c, 
0x26d3, 0x36f2, 0x0691, 0x16b0, 0x6657, 0x7676, 0x4615, 0x5634, 
0xd94c, 0xc96d, 0xf90e, 0xe92f, 0x99c8, 0x89e9, 0xb98a, 0xa9ab, 
0x5844, 0x4865, 0x7806, 0x6827, 0x18c0, 0x08e1, 0x3882, 0x28a3, 
0xcb7d, 0xdb5c, 0xeb3f, 0xfb1e, 0x8bf9, 0x9bd8, 0xabbb, 0xbb9a, 
0x4a75, 0x5a54, 0x6a37, 0x7a16, 0x0af1, 0x1ad0, 0x2ab3, 0x3a92, 
0xfd2e, 0xed0f, 0xdd6c, 0xcd4d, 0xbdaa, 0xad8b, 0x9de8, 0x8dc9, 
0x7c26, 0x6c07, 0x5c64, 0x4c45, 0x3ca2, 0x2c83, 0x1ce0, 0x0cc1, 
0xef1f, 0xff3e, 0xcf5d, 0xdf7c, 0xaf9b, 0xbfba, 0x8fd9, 0x9ff8, 
0x6e17, 0x7e36, 0x4e55, 0x5e74, 0x2e93, 0x3eb2, 0x0ed1, 0x1ef0 };









static uint16_t crcByte(uint16_t oldCrc, uint8_t byte) __attribute((noinline))  ;
typedef TMilli PacketParrotP__Timer0__precision_tag;
enum CC2420ActiveMessageC____nesc_unnamed4322 {
  CC2420ActiveMessageC__CC2420_AM_SEND_ID = 0U
};
typedef T32khz CC2420ControlP__StartupTimer__precision_tag;
typedef uint32_t CC2420ControlP__StartupTimer__size_type;
typedef uint16_t CC2420ControlP__ReadRssi__val_t;
typedef uint8_t HplAtm128Timer0AsyncP__Compare__size_type;
typedef uint8_t HplAtm128Timer0AsyncP__Timer__timer_size;
typedef uint16_t HplAtm128Timer1P__CompareA__size_type;
typedef uint16_t HplAtm128Timer1P__Capture__size_type;
typedef uint16_t HplAtm128Timer1P__CompareB__size_type;
typedef uint16_t HplAtm128Timer1P__CompareC__size_type;
typedef uint16_t HplAtm128Timer1P__Timer__timer_size;
typedef uint16_t /*InitOneP.InitOne*/Atm128TimerInitC__0__timer_size;
typedef /*InitOneP.InitOne*/Atm128TimerInitC__0__timer_size /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__timer_size;
typedef TOne /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__frequency_tag;
typedef uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__frequency_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__timer_size;
enum /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16*/AlarmOne16C__0____nesc_unnamed4323 {
  AlarmOne16C__0__COMPARE_ID = 0U
};
typedef TOne /*CounterOne16C.NCounter*/Atm128CounterC__0__frequency_tag;
typedef uint16_t /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size;
typedef /*CounterOne16C.NCounter*/Atm128CounterC__0__frequency_tag /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__precision_tag;
typedef /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__size_type;
typedef /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__timer_size;
typedef T32khz /*Counter32khz32C.Transform32*/TransformCounterC__0__to_precision_tag;
typedef uint32_t /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type;
typedef TOne /*Counter32khz32C.Transform32*/TransformCounterC__0__from_precision_tag;
typedef uint16_t /*Counter32khz32C.Transform32*/TransformCounterC__0__from_size_type;
typedef counter_one_overflow_t /*Counter32khz32C.Transform32*/TransformCounterC__0__upper_count_type;
typedef /*Counter32khz32C.Transform32*/TransformCounterC__0__from_precision_tag /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__precision_tag;
typedef /*Counter32khz32C.Transform32*/TransformCounterC__0__from_size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__size_type;
typedef /*Counter32khz32C.Transform32*/TransformCounterC__0__to_precision_tag /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__precision_tag;
typedef /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__size_type;
typedef T32khz /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_precision_tag;
typedef uint32_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type;
typedef TOne /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_precision_tag;
typedef uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__size_type;
typedef uint16_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__size_type;
enum /*CC2420ControlC.Spi*/CC2420SpiC__0____nesc_unnamed4324 {
  CC2420SpiC__0__CLIENT_ID = 0U
};
enum /*CC2420ControlC.SyncSpiC*/CC2420SpiC__1____nesc_unnamed4325 {
  CC2420SpiC__1__CLIENT_ID = 1U
};
enum /*CC2420ControlC.RssiResource*/CC2420SpiC__2____nesc_unnamed4326 {
  CC2420SpiC__2__CLIENT_ID = 2U
};
typedef T32khz CC2420TransmitP__PacketTimeStamp__precision_tag;
typedef uint32_t CC2420TransmitP__PacketTimeStamp__size_type;
typedef T32khz CC2420TransmitP__BackoffTimer__precision_tag;
typedef uint32_t CC2420TransmitP__BackoffTimer__size_type;
enum /*CC2420TransmitC.Spi*/CC2420SpiC__3____nesc_unnamed4327 {
  CC2420SpiC__3__CLIENT_ID = 3U
};
typedef T32khz CC2420ReceiveP__PacketTimeStamp__precision_tag;
typedef uint32_t CC2420ReceiveP__PacketTimeStamp__size_type;
typedef T32khz CC2420PacketP__PacketTimeStamp32khz__precision_tag;
typedef uint32_t CC2420PacketP__PacketTimeStamp32khz__size_type;
typedef T32khz CC2420PacketP__LocalTime32khz__precision_tag;
typedef TMilli CC2420PacketP__LocalTimeMilli__precision_tag;
typedef TMilli CC2420PacketP__PacketTimeStampMilli__precision_tag;
typedef uint32_t CC2420PacketP__PacketTimeStampMilli__size_type;
typedef T32khz /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag;
typedef /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__precision_tag;
typedef /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__precision_tag;
typedef uint32_t /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type;
enum HilTimerMilliC____nesc_unnamed4328 {
  HilTimerMilliC__TIMER_COUNT = 2U
};
typedef TMilli /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__timer_size;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__size_type;
enum /*CC2420ReceiveC.Spi*/CC2420SpiC__4____nesc_unnamed4329 {
  CC2420SpiC__4__CLIENT_ID = 4U
};
typedef uint16_t RandomMlcgC__SeedInit__parameter;
enum CC2420TinyosNetworkC____nesc_unnamed4330 {
  CC2420TinyosNetworkC__TINYOS_N_NETWORKS = 1U
};
enum /*PacketParrotC.LogStorageC*/LogStorageC__0____nesc_unnamed4331 {
  LogStorageC__0__LOG_ID = 0U, LogStorageC__0__INTF_ID = (/*PacketParrotC.LogStorageC*/LogStorageC__0__LOG_ID << 1) | 1, LogStorageC__0__RESOURCE_ID = 0U
};
typedef TMicro At45dbP__BusyWait__precision_tag;
typedef uint16_t At45dbP__BusyWait__size_type;
typedef TMicro HplAt45dbIOP__BusyWait__precision_tag;
typedef uint16_t HplAt45dbIOP__BusyWait__size_type;
typedef TMicro BusyWaitMicroC__BusyWait__precision_tag;
typedef uint16_t BusyWaitMicroC__BusyWait__size_type;
# 62 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 62
static error_t MotePlatformP__PlatformInit__init(void );
# 46 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP__3__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP__3__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP__3__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
#line 41
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set(void );
static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput(void );
#line 46
static void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void );
#line 44
static void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void );
#line 43
static bool /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__get(void );
static void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__makeInput(void );
#line 43
static bool /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__get(void );
#line 41
static void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP__27__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP__27__IO__set(void );



static void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput(void );
#line 43
static bool /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__get(void );


static void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__set(void );
static void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput(void );
#line 43
static bool /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__get(void );
#line 43
static bool /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__38__IO__get(void );
# 62 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Init.nc"
static error_t MeasureClockC__Init__init(void );
# 67 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 56 "/home/ivan/Desktop/tinyos-main/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7f27b1cfb020);
# 75 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 56 "/home/ivan/Desktop/tinyos-main/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7f27b1cfb020);
# 57 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 76 "/home/ivan/Desktop/tinyos-main/tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 52 "/home/ivan/Desktop/tinyos-main/tos/interfaces/McuPowerState.nc"
static void McuSleepC__McuPowerState__update(void );
# 62 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 61 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Leds.nc"
static void LedsP__Leds__led0Off(void );










static void LedsP__Leds__led1On(void );




static void LedsP__Leds__led1Off(void );
#line 94
static void LedsP__Leds__led2Off(void );
#line 56
static void LedsP__Leds__led0On(void );
#line 89
static void LedsP__Leds__led2On(void );
# 83 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Timer.nc"
static void PacketParrotP__Timer0__fired(void );
# 113 "/home/ivan/Desktop/tinyos-main/tos/interfaces/SplitControl.nc"
static void PacketParrotP__AMControl__startDone(error_t error);
#line 138
static void PacketParrotP__AMControl__stopDone(error_t error);
# 60 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Boot.nc"
static void PacketParrotP__Boot__booted(void );
# 110 "/home/ivan/Desktop/tinyos-main/tos/interfaces/AMSend.nc"
static void PacketParrotP__AMSend__sendDone(
# 49 "PacketParrotP.nc"
uint8_t arg_0x7f27b1a61020, 
# 103 "/home/ivan/Desktop/tinyos-main/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



PacketParrotP__Snoop__receive(
# 51 "PacketParrotP.nc"
uint8_t arg_0x7f27b1a40a50, 
# 71 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



PacketParrotP__Receive__receive(
# 50 "PacketParrotP.nc"
uint8_t arg_0x7f27b1a3ce30, 
# 71 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 75 "/home/ivan/Desktop/tinyos-main/tos/interfaces/LogRead.nc"
static void PacketParrotP__LogRead__readDone(
#line 70
void * buf, 




storage_len_t len, error_t error);
#line 115
static void PacketParrotP__LogRead__seekDone(error_t error);
# 118 "/home/ivan/Desktop/tinyos-main/tos/interfaces/LogWrite.nc"
static void PacketParrotP__LogWrite__syncDone(error_t error);
#line 100
static void PacketParrotP__LogWrite__eraseDone(error_t error);
#line 68
static void PacketParrotP__LogWrite__appendDone(
#line 61
void * buf, 






storage_len_t len, bool recordsLost, 
error_t error);
# 104 "/home/ivan/Desktop/tinyos-main/tos/interfaces/SplitControl.nc"
static error_t CC2420CsmaP__SplitControl__start(void );
# 81 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420CsmaP__SubBackoff__requestInitialBackoff(message_t * msg);






static void CC2420CsmaP__SubBackoff__requestCongestionBackoff(message_t * msg);
# 73 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static void CC2420CsmaP__CC2420Transmit__sendDone(message_t * p_msg, error_t error);
# 75 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Send.nc"
static error_t CC2420CsmaP__Send__send(
#line 67
message_t * msg, 







uint8_t len);
#line 112
static uint8_t CC2420CsmaP__Send__maxPayloadLength(void );
# 76 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Power.nc"
static void CC2420CsmaP__CC2420Power__startOscillatorDone(void );
#line 56
static void CC2420CsmaP__CC2420Power__startVRegDone(void );
# 102 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static void CC2420CsmaP__Resource__granted(void );
# 75 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
static void CC2420CsmaP__sendDone_task__runTask(void );
#line 75
static void CC2420CsmaP__stopDone_task__runTask(void );
#line 75
static void CC2420CsmaP__startDone_task__runTask(void );
# 93 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Config.nc"
static bool CC2420ControlP__CC2420Config__isAddressRecognitionEnabled(void );
#line 117
static bool CC2420ControlP__CC2420Config__isAutoAckEnabled(void );
#line 112
static bool CC2420ControlP__CC2420Config__isHwAutoAckDefault(void );
#line 66
static ieee_eui64_t CC2420ControlP__CC2420Config__getExtAddr(void );




static uint16_t CC2420ControlP__CC2420Config__getShortAddr(void );
#line 54
static error_t CC2420ControlP__CC2420Config__sync(void );
#line 77
static uint16_t CC2420ControlP__CC2420Config__getPanAddr(void );
# 78 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Alarm.nc"
static void CC2420ControlP__StartupTimer__fired(void );
# 63 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Read.nc"
static void CC2420ControlP__ReadRssi__default__readDone(error_t result, CC2420ControlP__ReadRssi__val_t val);
# 75 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
static void CC2420ControlP__syncDone__runTask(void );
# 62 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Init.nc"
static error_t CC2420ControlP__Init__init(void );
# 102 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static void CC2420ControlP__SpiResource__granted(void );
#line 102
static void CC2420ControlP__SyncResource__granted(void );
# 71 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Power.nc"
static error_t CC2420ControlP__CC2420Power__startOscillator(void );
#line 90
static error_t CC2420ControlP__CC2420Power__rxOn(void );
#line 51
static error_t CC2420ControlP__CC2420Power__startVReg(void );
#line 63
static error_t CC2420ControlP__CC2420Power__stopVReg(void );
# 75 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
static void CC2420ControlP__sync__runTask(void );
# 120 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static error_t CC2420ControlP__Resource__release(void );
#line 88
static error_t CC2420ControlP__Resource__request(void );
# 68 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GpioInterrupt.nc"
static void CC2420ControlP__InterruptCCA__fired(void );
# 102 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static void CC2420ControlP__RssiResource__granted(void );
# 53 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag(void );
#line 46
static void HplAtm128Timer0AsyncP__TimerCtrl__setControl(Atm128TimerControl_t control);
# 62 "/home/ivan/Desktop/tinyos-main/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtm128Timer0AsyncP__McuPowerOverride__lowestState(void );
# 44 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int HplAtm128Timer0AsyncP__TimerAsync__compareBusy(void );
#line 32
static void HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous(void );
# 48 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
static HplAtm128Timer0AsyncP__Compare__size_type HplAtm128Timer0AsyncP__Compare__get(void );





static void HplAtm128Timer0AsyncP__Compare__set(HplAtm128Timer0AsyncP__Compare__size_type t);










static void HplAtm128Timer0AsyncP__Compare__start(void );
# 61 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
static HplAtm128Timer0AsyncP__Timer__timer_size HplAtm128Timer0AsyncP__Timer__get(void );
# 50 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerCtrl16.nc"
static void HplAtm128Timer1P__TimerCtrl__setCtrlCapture(Atm128TimerCtrlCapture_t control);
#line 46
static Atm128TimerCtrlCapture_t HplAtm128Timer1P__TimerCtrl__getCtrlCapture(void );
# 62 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer1P__CompareA__reset(void );
#line 54
static void HplAtm128Timer1P__CompareA__set(HplAtm128Timer1P__CompareA__size_type t);










static void HplAtm128Timer1P__CompareA__start(void );


static void HplAtm128Timer1P__CompareA__stop(void );
# 88 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm128Timer1P__Capture__setEdge(bool up);
#line 47
static HplAtm128Timer1P__Capture__size_type HplAtm128Timer1P__Capture__get(void );
#line 64
static void HplAtm128Timer1P__Capture__reset(void );


static void HplAtm128Timer1P__Capture__start(void );


static void HplAtm128Timer1P__Capture__stop(void );
# 58 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer1P__CompareB__default__fired(void );
#line 58
static void HplAtm128Timer1P__CompareC__default__fired(void );
# 87 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
static bool HplAtm128Timer1P__Timer__test(void );
#line 61
static HplAtm128Timer1P__Timer__timer_size HplAtm128Timer1P__Timer__get(void );
#line 104
static void HplAtm128Timer1P__Timer__setScale(uint8_t scale);
#line 67
static void HplAtm128Timer1P__Timer__set(HplAtm128Timer1P__Timer__timer_size t);










static void HplAtm128Timer1P__Timer__start(void );
# 62 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Init.nc"
static error_t /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init(void );
# 70 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow(void );
# 103 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__size_type dt);
#line 73
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__stop(void );
# 58 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired(void );
# 70 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow(void );
# 64 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Counter.nc"
static /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__size_type /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get(void );






static bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void );
# 70 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow(void );
# 82 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Counter.nc"
static void /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void );
#line 64
static /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__get(void );
# 109 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Alarm.nc"
static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__getNow(void );
#line 103
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__size_type dt);
#line 66
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__size_type dt);






static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__stop(void );




static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__fired(void );
# 82 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Counter.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__overflow(void );
# 62 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Init.nc"
static error_t NoInitC__Init__init(void );
# 54 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GpioCapture.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captureFallingEdge(void );
#line 66
static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__disable(void );
#line 53
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captureRisingEdge(void );
# 60 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__captured(/*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__size_type t);
# 75 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__fired(void );
# 61 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GpioInterrupt.nc"
static error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__disable(void );
#line 54
static error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__enableFallingEdge(void );
# 75 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__default__fired(void );
# 48 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__IrqSignal__fired(void );
# 75 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__default__fired(void );
# 48 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__IrqSignal__fired(void );
# 75 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__default__fired(void );
# 48 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__IrqSignal__fired(void );
# 75 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__default__fired(void );
# 48 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__IrqSignal__fired(void );
# 75 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__Irq__default__fired(void );
# 48 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__IrqSignal__fired(void );
# 75 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__Irq__default__fired(void );
# 48 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__IrqSignal__fired(void );
# 56 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__clear(void );
#line 51
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__disable(void );
#line 70
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__edge(bool low_to_high);
#line 46
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__enable(void );
# 48 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__IrqSignal__fired(void );
# 75 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__Irq__default__fired(void );
# 48 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__IrqSignal__fired(void );
# 61 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GpioInterrupt.nc"
static error_t HplCC2420InterruptsP__CCA__disable(void );
#line 53
static error_t HplCC2420InterruptsP__CCA__enableRisingEdge(void );
# 75 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
static void HplCC2420InterruptsP__CCATask__runTask(void );
# 82 "/home/ivan/Desktop/tinyos-main/tos/interfaces/SpiPacket.nc"
static void CC2420SpiP__SpiPacket__sendDone(
#line 75
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 62 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static error_t CC2420SpiP__Fifo__continueRead(
# 46 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7f27b14bea00, 
# 62 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 91
static void CC2420SpiP__Fifo__default__writeDone(
# 46 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7f27b14bea00, 
# 91 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
#line 82
static cc2420_status_t CC2420SpiP__Fifo__write(
# 46 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7f27b14bea00, 
# 82 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 51
static cc2420_status_t CC2420SpiP__Fifo__beginRead(
# 46 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7f27b14bea00, 
# 51 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 71
static void CC2420SpiP__Fifo__default__readDone(
# 46 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7f27b14bea00, 
# 71 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
# 31 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420SpiP__ChipSpiResource__abortRelease(void );







static error_t CC2420SpiP__ChipSpiResource__attemptRelease(void );
# 102 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static void CC2420SpiP__SpiResource__granted(void );
# 63 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420SpiP__Ram__write(
# 47 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint16_t arg_0x7f27b14bdd10, 
# 63 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Ram.nc"
uint8_t offset, uint8_t * data, uint8_t length);
# 55 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420SpiP__Reg__read(
# 48 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7f27b14bcc00, 
# 55 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Register.nc"
uint16_t *data);







static cc2420_status_t CC2420SpiP__Reg__write(
# 48 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7f27b14bcc00, 
# 63 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Register.nc"
uint16_t data);
# 120 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__Resource__release(
# 45 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7f27b14bf660);
# 97 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__Resource__immediateRequest(
# 45 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7f27b14bf660);
# 88 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__Resource__request(
# 45 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7f27b14bf660);
# 102 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static void CC2420SpiP__Resource__default__granted(
# 45 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7f27b14bf660);
# 128 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static bool CC2420SpiP__Resource__isOwner(
# 45 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7f27b14bf660);
# 75 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
static void CC2420SpiP__grant__runTask(void );
# 53 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420SpiP__Strobe__strobe(
# 49 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7f27b14ba9f0);
# 62 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Init.nc"
static error_t StateImplP__Init__init(void );
# 56 "/home/ivan/Desktop/tinyos-main/tos/interfaces/State.nc"
static void StateImplP__State__toIdle(
# 67 "/home/ivan/Desktop/tinyos-main/tos/system/StateImplP.nc"
uint8_t arg_0x7f27b14459c0);
# 66 "/home/ivan/Desktop/tinyos-main/tos/interfaces/State.nc"
static bool StateImplP__State__isState(
# 67 "/home/ivan/Desktop/tinyos-main/tos/system/StateImplP.nc"
uint8_t arg_0x7f27b14459c0, 
# 66 "/home/ivan/Desktop/tinyos-main/tos/interfaces/State.nc"
uint8_t myState);
#line 61
static bool StateImplP__State__isIdle(
# 67 "/home/ivan/Desktop/tinyos-main/tos/system/StateImplP.nc"
uint8_t arg_0x7f27b14459c0);
# 45 "/home/ivan/Desktop/tinyos-main/tos/interfaces/State.nc"
static error_t StateImplP__State__requestState(
# 67 "/home/ivan/Desktop/tinyos-main/tos/system/StateImplP.nc"
uint8_t arg_0x7f27b14459c0, 
# 45 "/home/ivan/Desktop/tinyos-main/tos/interfaces/State.nc"
uint8_t reqState);





static void StateImplP__State__forceState(
# 67 "/home/ivan/Desktop/tinyos-main/tos/system/StateImplP.nc"
uint8_t arg_0x7f27b14459c0, 
# 51 "/home/ivan/Desktop/tinyos-main/tos/interfaces/State.nc"
uint8_t reqState);
# 75 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
static void Atm128SpiP__zeroTask__runTask(void );
# 70 "/home/ivan/Desktop/tinyos-main/tos/interfaces/SpiPacket.nc"
static error_t Atm128SpiP__SpiPacket__send(
#line 59
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
# 102 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static void Atm128SpiP__ResourceArbiter__granted(
# 99 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7f27b13fca60);
# 45 "/home/ivan/Desktop/tinyos-main/tos/interfaces/SpiByte.nc"
static uint8_t Atm128SpiP__SpiByte__write(uint8_t tx);
# 109 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/Atm128Spi.nc"
static void Atm128SpiP__Spi__dataReady(uint8_t data);
# 120 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__Resource__release(
# 95 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7f27b1419380);
# 97 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__Resource__immediateRequest(
# 95 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7f27b1419380);
# 88 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__Resource__request(
# 95 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7f27b1419380);
# 102 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static void Atm128SpiP__Resource__default__granted(
# 95 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7f27b1419380);
# 128 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static bool Atm128SpiP__Resource__isOwner(
# 95 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7f27b1419380);
# 89 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/Atm128Spi.nc"
static void HplAtm128SpiP__SPI__sleep(void );
#line 83
static void HplAtm128SpiP__SPI__initMaster(void );
#line 122
static void HplAtm128SpiP__SPI__setMasterBit(bool isMaster);
#line 113
static void HplAtm128SpiP__SPI__enableInterrupt(bool enabled);
#line 97
static uint8_t HplAtm128SpiP__SPI__read(void );
#line 141
static void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool on);
#line 131
static void HplAtm128SpiP__SPI__setClock(uint8_t speed);




static bool HplAtm128SpiP__SPI__isInterruptPending(void );
#line 125
static void HplAtm128SpiP__SPI__setClockPolarity(bool highWhenIdle);
#line 103
static void HplAtm128SpiP__SPI__write(uint8_t data);
#line 116
static void HplAtm128SpiP__SPI__enableSpi(bool busOn);
#line 128
static void HplAtm128SpiP__SPI__setClockPhase(bool sampleOnTrailing);
# 62 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Init.nc"
static error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__Init__init(void );
# 79 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void );








static bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void );
# 53 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(
# 52 "/home/ivan/Desktop/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7f27b1324840);
# 61 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(
# 52 "/home/ivan/Desktop/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7f27b1324840);
# 65 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(
# 56 "/home/ivan/Desktop/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7f27b1322020);
# 59 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(
# 56 "/home/ivan/Desktop/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7f27b1322020);
# 120 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(
# 51 "/home/ivan/Desktop/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7f27b13254f0);
# 97 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(
# 51 "/home/ivan/Desktop/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7f27b13254f0);
# 88 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(
# 51 "/home/ivan/Desktop/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7f27b13254f0);
# 128 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__isOwner(
# 51 "/home/ivan/Desktop/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7f27b13254f0);
# 90 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ArbiterInfo.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__inUse(void );
# 75 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );
# 120 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static error_t HplCC2420SpiP__Resource__release(void );
#line 97
static error_t HplCC2420SpiP__Resource__immediateRequest(void );
#line 88
static error_t HplCC2420SpiP__Resource__request(void );
#line 128
static bool HplCC2420SpiP__Resource__isOwner(void );
#line 102
static void HplCC2420SpiP__SubResource__granted(void );
# 55 "/home/ivan/Desktop/tinyos-main/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 50 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );




static am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void );
# 48 "/home/ivan/Desktop/tinyos-main/tos/interfaces/LocalIeeeEui64.nc"
static ieee_eui64_t LocalIeeeEui64C__LocalIeeeEui64__getId(void );
# 66 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420TransmitP__RadioBackoff__setCongestionBackoff(uint16_t backoffTime);
#line 60
static void CC2420TransmitP__RadioBackoff__setInitialBackoff(uint16_t backoffTime);
# 61 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GpioCapture.nc"
static void CC2420TransmitP__CaptureSFD__captured(uint16_t time);
# 78 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Alarm.nc"
static void CC2420TransmitP__BackoffTimer__fired(void );
# 63 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420TransmitP__CC2420Receive__receive(uint8_t type, message_t * message);
# 51 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static error_t CC2420TransmitP__Send__send(message_t * p_msg, bool useCca);
# 24 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420TransmitP__ChipSpiResource__releasing(void );
# 62 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Init.nc"
static error_t CC2420TransmitP__Init__init(void );
# 102 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static void CC2420TransmitP__SpiResource__granted(void );
# 95 "/home/ivan/Desktop/tinyos-main/tos/interfaces/StdControl.nc"
static error_t CC2420TransmitP__StdControl__start(void );









static error_t CC2420TransmitP__StdControl__stop(void );
# 91 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420TransmitP__TXFIFO__writeDone(uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420TransmitP__TXFIFO__readDone(uint8_t * data, uint8_t length, error_t error);
# 55 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void CC2420ReceiveP__CC2420Config__syncDone(error_t error);
# 75 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
static void CC2420ReceiveP__receiveDone_task__runTask(void );
# 55 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420ReceiveP__CC2420Receive__sfd_dropped(void );
#line 49
static void CC2420ReceiveP__CC2420Receive__sfd(uint32_t time);
# 62 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Init.nc"
static error_t CC2420ReceiveP__Init__init(void );
# 102 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static void CC2420ReceiveP__SpiResource__granted(void );
# 91 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420ReceiveP__RXFIFO__writeDone(uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420ReceiveP__RXFIFO__readDone(uint8_t * data, uint8_t length, error_t error);
# 68 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GpioInterrupt.nc"
static void CC2420ReceiveP__InterruptFIFOP__fired(void );
# 95 "/home/ivan/Desktop/tinyos-main/tos/interfaces/StdControl.nc"
static error_t CC2420ReceiveP__StdControl__start(void );









static error_t CC2420ReceiveP__StdControl__stop(void );
# 77 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Packet.nc"
static void CC2420PacketP__CC2420Packet__setNetwork(message_t * p_msg, uint8_t networkId);
#line 75
static uint8_t CC2420PacketP__CC2420Packet__getNetwork(message_t * p_msg);
# 70 "/home/ivan/Desktop/tinyos-main/tos/interfaces/PacketTimeStamp.nc"
static void CC2420PacketP__PacketTimeStamp32khz__clear(
#line 66
message_t * msg);
#line 78
static void CC2420PacketP__PacketTimeStamp32khz__set(
#line 73
message_t * msg, 




CC2420PacketP__PacketTimeStamp32khz__size_type value);
# 42 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420PacketP__CC2420PacketBody__getHeader(message_t * msg);










static cc2420_metadata_t * CC2420PacketP__CC2420PacketBody__getMetadata(message_t * msg);
# 58 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
static uint8_t CC2420PacketP__PacketTimeSyncOffset__get(
#line 53
message_t * msg);
#line 50
static bool CC2420PacketP__PacketTimeSyncOffset__isSet(
#line 46
message_t * msg);
# 82 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Counter.nc"
static void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 109 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Alarm.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow(void );
#line 103
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type t0, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type dt);
#line 116
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm(void );
#line 73
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop(void );
# 62 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Init.nc"
static error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init(void );
# 64 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Counter.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get(void );
# 58 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired(void );
# 70 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow(void );
# 75 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );
# 78 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
# 136 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
#line 129
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );
# 75 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 83 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );
#line 83
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 48 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7f27b0f523f0);
# 73 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(
# 48 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7f27b0f523f0, 
# 73 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Timer.nc"
uint32_t dt);
# 82 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
# 52 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Random.nc"
static uint16_t RandomMlcgC__Random__rand16(void );
#line 46
static uint32_t RandomMlcgC__Random__rand32(void );
# 62 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Init.nc"
static error_t RandomMlcgC__Init__init(void );
# 100 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Send.nc"
static void UniqueSendP__SubSend__sendDone(
#line 96
message_t * msg, 



error_t error);
#line 75
static error_t UniqueSendP__Send__send(
#line 67
message_t * msg, 







uint8_t len);
#line 112
static uint8_t UniqueSendP__Send__maxPayloadLength(void );
# 62 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Init.nc"
static error_t UniqueSendP__Init__init(void );
# 78 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



UniqueReceiveP__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 62 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Init.nc"
static error_t UniqueReceiveP__Init__init(void );
# 78 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



UniqueReceiveP__DuplicateReceive__default__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 100 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Send.nc"
static void CC2420TinyosNetworkP__SubSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 78 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420TinyosNetworkP__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 75 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
static void CC2420TinyosNetworkP__grantTask__runTask(void );
# 75 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Send.nc"
static error_t CC2420TinyosNetworkP__ActiveSend__send(
#line 67
message_t * msg, 







uint8_t len);
#line 112
static uint8_t CC2420TinyosNetworkP__ActiveSend__maxPayloadLength(void );
# 78 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420TinyosNetworkP__BareReceive__default__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 120 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static error_t CC2420TinyosNetworkP__Resource__release(
# 46 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x7f27b0e22600);
# 97 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static error_t CC2420TinyosNetworkP__Resource__immediateRequest(
# 46 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x7f27b0e22600);
# 88 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static error_t CC2420TinyosNetworkP__Resource__request(
# 46 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x7f27b0e22600);
# 102 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static void CC2420TinyosNetworkP__Resource__default__granted(
# 46 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x7f27b0e22600);
# 125 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Send.nc"
static 
#line 123
void * 

CC2420TinyosNetworkP__BareSend__getPayload(
#line 122
message_t * msg, 


uint8_t len);
#line 100
static void CC2420TinyosNetworkP__BareSend__default__sendDone(
#line 96
message_t * msg, 



error_t error);
# 62 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Init.nc"
static error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__Init__init(void );
# 79 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceQueue.nc"
static error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );








static bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
# 78 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420ActiveMessageP__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 100 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Send.nc"
static void CC2420ActiveMessageP__SubSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 55 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void CC2420ActiveMessageP__CC2420Config__syncDone(error_t error);
# 95 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420ActiveMessageP__RadioBackoff__default__requestCca(
# 54 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7f27b0d8a700, 
# 95 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);
#line 81
static void CC2420ActiveMessageP__RadioBackoff__default__requestInitialBackoff(
# 54 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7f27b0d8a700, 
# 81 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);






static void CC2420ActiveMessageP__RadioBackoff__default__requestCongestionBackoff(
# 54 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7f27b0d8a700, 
# 88 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);
# 59 "/home/ivan/Desktop/tinyos-main/tos/interfaces/SendNotifier.nc"
static void CC2420ActiveMessageP__SendNotifier__default__aboutToSend(
# 53 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7f27b0d8bb30, 
# 59 "/home/ivan/Desktop/tinyos-main/tos/interfaces/SendNotifier.nc"
am_addr_t dest, 
#line 57
message_t * msg);
# 95 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420ActiveMessageP__SubBackoff__requestCca(message_t * msg);
#line 81
static void CC2420ActiveMessageP__SubBackoff__requestInitialBackoff(message_t * msg);






static void CC2420ActiveMessageP__SubBackoff__requestCongestionBackoff(message_t * msg);
# 65 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Packet.nc"
static void CC2420ActiveMessageP__Packet__clear(
#line 62
message_t * msg);
#line 106
static uint8_t CC2420ActiveMessageP__Packet__maxPayloadLength(void );
# 80 "/home/ivan/Desktop/tinyos-main/tos/interfaces/AMSend.nc"
static error_t CC2420ActiveMessageP__AMSend__send(
# 48 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7f27b0d93cf0, 
# 80 "/home/ivan/Desktop/tinyos-main/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 68 "/home/ivan/Desktop/tinyos-main/tos/interfaces/AMPacket.nc"
static am_addr_t CC2420ActiveMessageP__AMPacket__address(void );









static am_addr_t CC2420ActiveMessageP__AMPacket__destination(
#line 74
message_t * amsg);
#line 147
static am_id_t CC2420ActiveMessageP__AMPacket__type(
#line 143
message_t * amsg);
#line 136
static bool CC2420ActiveMessageP__AMPacket__isForMe(
#line 133
message_t * amsg);
# 102 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static void CC2420ActiveMessageP__RadioResource__granted(void );
# 96 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45db.nc"
static void LogStorageP__At45db__copyPageDone(error_t error);
#line 136
static void LogStorageP__At45db__syncDone(error_t error);
#line 154
static void LogStorageP__At45db__flushDone(error_t error);
#line 80
static void LogStorageP__At45db__writeDone(error_t error);
#line 116
static void LogStorageP__At45db__eraseDone(error_t error);
#line 194
static void LogStorageP__At45db__computeCrcDone(error_t error, uint16_t crc);
#line 173
static void LogStorageP__At45db__readDone(error_t error);
# 75 "/home/ivan/Desktop/tinyos-main/tos/interfaces/LogRead.nc"
static void LogStorageP__LogRead__default__readDone(
# 54 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
uint8_t arg_0x7f27b0cecb20, 
# 70 "/home/ivan/Desktop/tinyos-main/tos/interfaces/LogRead.nc"
void * buf, 




storage_len_t len, error_t error);
#line 63
static error_t LogStorageP__LogRead__read(
# 54 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
uint8_t arg_0x7f27b0cecb20, 
# 57 "/home/ivan/Desktop/tinyos-main/tos/interfaces/LogRead.nc"
void * buf, 





storage_len_t len);
#line 115
static void LogStorageP__LogRead__default__seekDone(
# 54 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
uint8_t arg_0x7f27b0cecb20, 
# 115 "/home/ivan/Desktop/tinyos-main/tos/interfaces/LogRead.nc"
error_t error);








static storage_len_t LogStorageP__LogRead__getSize(
# 54 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
uint8_t arg_0x7f27b0cecb20);
# 30 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbVolume.nc"
static at45page_t LogStorageP__At45dbVolume__default__volumeSize(
# 59 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
uint8_t arg_0x7f27b0cd0990);
# 24 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbVolume.nc"
static at45page_t LogStorageP__At45dbVolume__default__remap(
# 59 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
uint8_t arg_0x7f27b0cd0990, 
# 24 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbVolume.nc"
at45page_t volumePage);
# 120 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static error_t LogStorageP__Resource__default__release(
# 60 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
uint8_t arg_0x7f27b0cd3810);
# 88 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static error_t LogStorageP__Resource__default__request(
# 60 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
uint8_t arg_0x7f27b0cd3810);
# 102 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static void LogStorageP__Resource__granted(
# 60 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
uint8_t arg_0x7f27b0cd3810);
# 118 "/home/ivan/Desktop/tinyos-main/tos/interfaces/LogWrite.nc"
static void LogStorageP__LogWrite__default__syncDone(
# 55 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
uint8_t arg_0x7f27b0cea020, 
# 118 "/home/ivan/Desktop/tinyos-main/tos/interfaces/LogWrite.nc"
error_t error);
#line 93
static error_t LogStorageP__LogWrite__erase(
# 55 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
uint8_t arg_0x7f27b0cea020);
# 100 "/home/ivan/Desktop/tinyos-main/tos/interfaces/LogWrite.nc"
static void LogStorageP__LogWrite__default__eraseDone(
# 55 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
uint8_t arg_0x7f27b0cea020, 
# 100 "/home/ivan/Desktop/tinyos-main/tos/interfaces/LogWrite.nc"
error_t error);
#line 68
static void LogStorageP__LogWrite__default__appendDone(
# 55 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
uint8_t arg_0x7f27b0cea020, 
# 61 "/home/ivan/Desktop/tinyos-main/tos/interfaces/LogWrite.nc"
void * buf, 






storage_len_t len, bool recordsLost, 
error_t error);
#line 54
static error_t LogStorageP__LogWrite__append(
# 55 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
uint8_t arg_0x7f27b0cea020, 
# 47 "/home/ivan/Desktop/tinyos-main/tos/interfaces/LogWrite.nc"
void * buf, 






storage_len_t len);
# 163 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45db.nc"
static void At45dbP__HplAt45db__crcDone(uint16_t computedCrc);
#line 79
static void At45dbP__HplAt45db__flushDone(void );
#line 185
static void At45dbP__HplAt45db__writeDone(void );
#line 35
static void At45dbP__HplAt45db__waitIdleDone(void );
#line 47
static void At45dbP__HplAt45db__waitCompareDone(bool compareOk);
#line 106
static void At45dbP__HplAt45db__eraseDone(void );
#line 93
static void At45dbP__HplAt45db__compareDone(void );
#line 61
static void At45dbP__HplAt45db__fillDone(void );
#line 141
static void At45dbP__HplAt45db__readDone(void );
# 166 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45db.nc"
static void At45dbP__At45db__read(at45page_t page, at45pageoffset_t offset, 
void * data, at45pageoffset_t n);
#line 111
static void At45dbP__At45db__erase(at45page_t page, uint8_t eraseKind);
#line 144
static void At45dbP__At45db__flush(at45page_t page);
#line 73
static void At45dbP__At45db__write(at45page_t page, at45pageoffset_t offset, 
void * data, at45pageoffset_t n);
#line 125
static void At45dbP__At45db__sync(at45page_t page);
#line 187
static void At45dbP__At45db__computeCrc(at45page_t page, at45pageoffset_t offset, 
at45pageoffset_t n, uint16_t baseCrc);
# 75 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
static void At45dbP__taskSuccess__runTask(void );
#line 75
static void At45dbP__taskFail__runTask(void );
# 62 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Init.nc"
static error_t At45dbP__Init__init(void );
# 41 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45db.nc"
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitCompare(void );
#line 100
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__erase(uint8_t cmd, at45page_t page);
#line 30
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitIdle(void );
#line 73
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__flush(uint8_t cmd, at45page_t page);
#line 178
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__write(uint8_t cmd, at45page_t page, at45pageoffset_t offset, 
uint8_t * data, at45pageoffset_t n);
#line 87
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__compare(uint8_t cmd, at45page_t page);
#line 157
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__crc(uint8_t cmd, at45page_t page, at45pageoffset_t offset, 
at45pageoffset_t n, uint16_t baseCrc);
#line 119
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__readBuffer(uint8_t cmd, at45pageoffset_t offset, 
uint8_t * data, uint16_t n);
#line 55
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__fill(uint8_t cmd, at45page_t page);
# 35 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45dbByte.nc"
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__idle(void );
# 102 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__granted(void );
# 42 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45dbByte.nc"
static bool HplAt45dbIOP__HplAt45dbByte__getCompareStatus(void );
#line 31
static void HplAt45dbIOP__HplAt45dbByte__waitIdle(void );
#line 47
static void HplAt45dbIOP__HplAt45dbByte__select(void );




static void HplAt45dbIOP__HplAt45dbByte__deselect(void );
# 75 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
static void HplAt45dbIOP__avail__runTask(void );
# 62 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Init.nc"
static error_t HplAt45dbIOP__Init__init(void );
# 45 "/home/ivan/Desktop/tinyos-main/tos/interfaces/SpiByte.nc"
static uint8_t HplAt45dbIOP__FlashSpi__write(uint8_t tx);
# 66 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/BusyWait.nc"
static void BusyWaitMicroC__BusyWait__wait(BusyWaitMicroC__BusyWait__size_type dt);
# 65 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__default__unconfigure(void );
#line 59
static void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__default__configure(void );
# 120 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__Resource__release(void );
#line 88
static error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__Resource__request(void );
# 75 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__granted__runTask(void );
# 62 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Init.nc"
static error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__Init__init(void );
# 79 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceQueue.nc"
static error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEmpty(void );








static bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__dequeue(void );
# 53 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceRequested.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(
# 55 "/home/ivan/Desktop/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x7f27b0a36020);
# 65 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(
# 60 "/home/ivan/Desktop/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x7f27b0a34410);
# 59 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(
# 60 "/home/ivan/Desktop/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x7f27b0a34410);
# 56 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
#line 73
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested(void );
#line 46
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void );
# 120 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__release(
# 54 "/home/ivan/Desktop/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x7f27b0a38c70);
# 88 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__request(
# 54 "/home/ivan/Desktop/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x7f27b0a38c70);
# 102 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__default__granted(
# 54 "/home/ivan/Desktop/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x7f27b0a38c70);
# 75 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
# 30 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbVolume.nc"
static at45page_t At45dbStorageManagerC__At45dbVolume__volumeSize(
# 18 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbStorageManagerC.nc"
volume_id_t arg_0x7f27b09e18c0);
# 24 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbVolume.nc"
static at45page_t At45dbStorageManagerC__At45dbVolume__remap(
# 18 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbStorageManagerC.nc"
volume_id_t arg_0x7f27b09e18c0, 
# 24 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbVolume.nc"
at45page_t volumePage);
# 62 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Init.nc"
static error_t PlatformP__MoteInit__init(void );
#line 62
static error_t PlatformP__MeasureClock__init(void );
# 51 "/home/ivan/Desktop/tinyos-main/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP__Init__init(void );
# 62 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Init.nc"
static error_t MotePlatformP__SubInit__init(void );
# 44 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
static void MotePlatformP__SerialIdPin__makeInput(void );
#line 41
static void MotePlatformP__SerialIdPin__clr(void );
# 49 "/home/ivan/Desktop/tinyos-main/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void );
# 55 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP__3__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP__3__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP__3__IO__makeOutput(void );
#line 56
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput(void );
#line 61
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput(void );
#line 61
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void );
#line 59
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void );
#line 54
static __inline bool /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__get(void );
#line 54
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__get(void );

static __inline void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__makeInput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP__27__IO__set(void );





static __inline void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP__27__IO__makeOutput(void );
#line 54
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__get(void );




static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__makeOutput(void );
#line 54
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__get(void );




static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput(void );
#line 54
static __inline bool /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__38__IO__get(void );
# 33 "/home/ivan/Desktop/tinyos-main/tos/platforms/mica/MeasureClockC.nc"
enum MeasureClockC____nesc_unnamed4332 {


  MeasureClockC__MAGIC = 488 / (16 / PLATFORM_MHZ)
};

uint16_t MeasureClockC__cycles;

static inline error_t MeasureClockC__Init__init(void );
# 62 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Init.nc"
static error_t RealMainP__SoftwareInit__init(void );
# 60 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Boot.nc"
static void RealMainP__Boot__booted(void );
# 62 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Init.nc"
static error_t RealMainP__PlatformInit__init(void );
# 57 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__init(void );
#line 72
static void RealMainP__Scheduler__taskLoop(void );
#line 65
static bool RealMainP__Scheduler__runNextTask(void );
# 63 "/home/ivan/Desktop/tinyos-main/tos/system/RealMainP.nc"
int main(void )   ;
# 75 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(
# 56 "/home/ivan/Desktop/tinyos-main/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7f27b1cfb020);
# 76 "/home/ivan/Desktop/tinyos-main/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 61 "/home/ivan/Desktop/tinyos-main/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4333 {

  SchedulerBasicP__NUM_TASKS = 18U, 
  SchedulerBasicP__NO_TASK = 255
};

uint8_t SchedulerBasicP__m_head;
uint8_t SchedulerBasicP__m_tail;
uint8_t SchedulerBasicP__m_next[SchedulerBasicP__NUM_TASKS];








static __inline uint8_t SchedulerBasicP__popTask(void );
#line 97
static inline bool SchedulerBasicP__isWaiting(uint8_t id);




static inline bool SchedulerBasicP__pushTask(uint8_t id);
#line 124
static inline void SchedulerBasicP__Scheduler__init(void );









static bool SchedulerBasicP__Scheduler__runNextTask(void );
#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void );
#line 170
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id);




static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 62 "/home/ivan/Desktop/tinyos-main/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void );
# 66 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/McuSleepC.nc"
const_uint8_t McuSleepC__atm128PowerBits[ATM128_POWER_DOWN + 1] = { 
0, 
1 << 3, ((
1 << 2) | (1 << 4)) | (1 << 3), (
1 << 4) | (1 << 3), (
1 << 2) | (1 << 4), 
1 << 4 };

static inline mcu_power_t McuSleepC__getPowerState(void );
#line 105
static inline void McuSleepC__McuSleep__sleep(void );
#line 120
static inline void McuSleepC__McuPowerState__update(void );
# 46 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__makeOutput(void );
#line 40
static void LedsP__Led0__set(void );
static void LedsP__Led0__clr(void );




static void LedsP__Led1__makeOutput(void );
#line 40
static void LedsP__Led1__set(void );
static void LedsP__Led1__clr(void );




static void LedsP__Led2__makeOutput(void );
#line 40
static void LedsP__Led2__set(void );
static void LedsP__Led2__clr(void );
# 56 "/home/ivan/Desktop/tinyos-main/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 74
static inline void LedsP__Leds__led0On(void );




static inline void LedsP__Leds__led0Off(void );









static inline void LedsP__Leds__led1On(void );




static inline void LedsP__Leds__led1Off(void );









static inline void LedsP__Leds__led2On(void );




static inline void LedsP__Leds__led2Off(void );
# 73 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Timer.nc"
static void PacketParrotP__Timer0__startOneShot(uint32_t dt);
# 104 "/home/ivan/Desktop/tinyos-main/tos/interfaces/SplitControl.nc"
static error_t PacketParrotP__AMControl__start(void );
# 65 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Packet.nc"
static void PacketParrotP__Packet__clear(
#line 62
message_t * msg);
# 80 "/home/ivan/Desktop/tinyos-main/tos/interfaces/AMSend.nc"
static error_t PacketParrotP__AMSend__send(
# 49 "PacketParrotP.nc"
uint8_t arg_0x7f27b1a61020, 
# 80 "/home/ivan/Desktop/tinyos-main/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 61 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Leds.nc"
static void PacketParrotP__Leds__led0Off(void );










static void PacketParrotP__Leds__led1On(void );




static void PacketParrotP__Leds__led1Off(void );
#line 94
static void PacketParrotP__Leds__led2Off(void );
#line 56
static void PacketParrotP__Leds__led0On(void );
#line 89
static void PacketParrotP__Leds__led2On(void );
# 63 "/home/ivan/Desktop/tinyos-main/tos/interfaces/LogRead.nc"
static error_t PacketParrotP__LogRead__read(
#line 57
void * buf, 





storage_len_t len);
# 78 "/home/ivan/Desktop/tinyos-main/tos/interfaces/AMPacket.nc"
static am_addr_t PacketParrotP__AMPacket__destination(
#line 74
message_t * amsg);
#line 147
static am_id_t PacketParrotP__AMPacket__type(
#line 143
message_t * amsg);
# 93 "/home/ivan/Desktop/tinyos-main/tos/interfaces/LogWrite.nc"
static error_t PacketParrotP__LogWrite__erase(void );
#line 54
static error_t PacketParrotP__LogWrite__append(
#line 47
void * buf, 






storage_len_t len);
# 60 "PacketParrotP.nc"
enum PacketParrotP____nesc_unnamed4334 {
  PacketParrotP__INTER_PACKET_INTERVAL = 25
};




#line 64
typedef nx_struct PacketParrotP__logentry_t {
  nx_uint8_t len;
  message_t msg;
} __attribute__((packed)) PacketParrotP__logentry_t;

bool PacketParrotP__m_busy = TRUE;
PacketParrotP__logentry_t PacketParrotP__m_entry;

static inline void PacketParrotP__Boot__booted(void );




static inline void PacketParrotP__AMControl__startDone(error_t err);
#line 89
static inline void PacketParrotP__AMControl__stopDone(error_t err);



static inline void PacketParrotP__LogRead__readDone(void *buf, storage_len_t len, error_t err);
#line 107
static void PacketParrotP__AMSend__sendDone(uint8_t id, message_t *msg, error_t err);
#line 121
static inline void PacketParrotP__Timer0__fired(void );




static inline void PacketParrotP__LogWrite__eraseDone(error_t err);









static message_t *PacketParrotP__Receive__receive(uint8_t id, message_t *msg, void *payload, uint8_t len);
#line 149
static inline message_t *PacketParrotP__Snoop__receive(uint8_t id, message_t *msg, void *payload, uint8_t len);



static inline void PacketParrotP__LogWrite__appendDone(void *buf, storage_len_t len, 
bool recordsLost, error_t err);




static inline void PacketParrotP__LogRead__seekDone(error_t err);


static inline void PacketParrotP__LogWrite__syncDone(error_t err);
# 113 "/home/ivan/Desktop/tinyos-main/tos/interfaces/SplitControl.nc"
static void CC2420CsmaP__SplitControl__startDone(error_t error);
#line 138
static void CC2420CsmaP__SplitControl__stopDone(error_t error);
# 95 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420CsmaP__RadioBackoff__requestCca(message_t * msg);
#line 81
static void CC2420CsmaP__RadioBackoff__requestInitialBackoff(message_t * msg);






static void CC2420CsmaP__RadioBackoff__requestCongestionBackoff(message_t * msg);
#line 66
static void CC2420CsmaP__SubBackoff__setCongestionBackoff(uint16_t backoffTime);
#line 60
static void CC2420CsmaP__SubBackoff__setInitialBackoff(uint16_t backoffTime);
# 51 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static error_t CC2420CsmaP__CC2420Transmit__send(message_t * p_msg, bool useCca);
# 100 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Send.nc"
static void CC2420CsmaP__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 52 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Random.nc"
static uint16_t CC2420CsmaP__Random__rand16(void );
# 95 "/home/ivan/Desktop/tinyos-main/tos/interfaces/StdControl.nc"
static error_t CC2420CsmaP__SubControl__start(void );









static error_t CC2420CsmaP__SubControl__stop(void );
# 42 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420CsmaP__CC2420PacketBody__getHeader(message_t * msg);










static cc2420_metadata_t * CC2420CsmaP__CC2420PacketBody__getMetadata(message_t * msg);
# 71 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Power.nc"
static error_t CC2420CsmaP__CC2420Power__startOscillator(void );
#line 90
static error_t CC2420CsmaP__CC2420Power__rxOn(void );
#line 51
static error_t CC2420CsmaP__CC2420Power__startVReg(void );
#line 63
static error_t CC2420CsmaP__CC2420Power__stopVReg(void );
# 120 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static error_t CC2420CsmaP__Resource__release(void );
#line 88
static error_t CC2420CsmaP__Resource__request(void );
# 66 "/home/ivan/Desktop/tinyos-main/tos/interfaces/State.nc"
static bool CC2420CsmaP__SplitControlState__isState(uint8_t myState);
#line 45
static error_t CC2420CsmaP__SplitControlState__requestState(uint8_t reqState);





static void CC2420CsmaP__SplitControlState__forceState(uint8_t reqState);
# 67 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t CC2420CsmaP__sendDone_task__postTask(void );
#line 67
static error_t CC2420CsmaP__stopDone_task__postTask(void );
#line 67
static error_t CC2420CsmaP__startDone_task__postTask(void );
# 74 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/csma/CC2420CsmaP.nc"
enum CC2420CsmaP____nesc_unnamed4335 {
#line 74
  CC2420CsmaP__startDone_task = 0U
};
#line 74
typedef int CC2420CsmaP____nesc_sillytask_startDone_task[CC2420CsmaP__startDone_task];
enum CC2420CsmaP____nesc_unnamed4336 {
#line 75
  CC2420CsmaP__stopDone_task = 1U
};
#line 75
typedef int CC2420CsmaP____nesc_sillytask_stopDone_task[CC2420CsmaP__stopDone_task];
enum CC2420CsmaP____nesc_unnamed4337 {
#line 76
  CC2420CsmaP__sendDone_task = 2U
};
#line 76
typedef int CC2420CsmaP____nesc_sillytask_sendDone_task[CC2420CsmaP__sendDone_task];
#line 58
enum CC2420CsmaP____nesc_unnamed4338 {
  CC2420CsmaP__S_STOPPED, 
  CC2420CsmaP__S_STARTING, 
  CC2420CsmaP__S_STARTED, 
  CC2420CsmaP__S_STOPPING, 
  CC2420CsmaP__S_TRANSMITTING
};

message_t * CC2420CsmaP__m_msg;

error_t CC2420CsmaP__sendErr = SUCCESS;


bool CC2420CsmaP__ccaOn;






static inline void CC2420CsmaP__shutdown(void );


static error_t CC2420CsmaP__SplitControl__start(void );
#line 122
static inline error_t CC2420CsmaP__Send__send(message_t *p_msg, uint8_t len);
#line 173
static inline uint8_t CC2420CsmaP__Send__maxPayloadLength(void );
#line 205
static inline void CC2420CsmaP__CC2420Transmit__sendDone(message_t *p_msg, error_t err);




static inline void CC2420CsmaP__CC2420Power__startVRegDone(void );



static inline void CC2420CsmaP__Resource__granted(void );



static inline void CC2420CsmaP__CC2420Power__startOscillatorDone(void );




static inline void CC2420CsmaP__SubBackoff__requestInitialBackoff(message_t *msg);






static inline void CC2420CsmaP__SubBackoff__requestCongestionBackoff(message_t *msg);
#line 244
static inline void CC2420CsmaP__sendDone_task__runTask(void );
#line 257
static inline void CC2420CsmaP__startDone_task__runTask(void );







static inline void CC2420CsmaP__stopDone_task__runTask(void );









static inline void CC2420CsmaP__shutdown(void );
# 55 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void CC2420ControlP__CC2420Config__syncDone(error_t error);
# 63 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__RXCTRL1__write(uint16_t data);
# 48 "/home/ivan/Desktop/tinyos-main/tos/interfaces/LocalIeeeEui64.nc"
static ieee_eui64_t CC2420ControlP__LocalIeeeEui64__getId(void );
# 66 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Alarm.nc"
static void CC2420ControlP__StartupTimer__start(CC2420ControlP__StartupTimer__size_type dt);
# 63 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__MDMCTRL0__write(uint16_t data);
# 46 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
static void CC2420ControlP__RSTN__makeOutput(void );
#line 40
static void CC2420ControlP__RSTN__set(void );
static void CC2420ControlP__RSTN__clr(void );
# 63 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Read.nc"
static void CC2420ControlP__ReadRssi__readDone(error_t result, CC2420ControlP__ReadRssi__val_t val);
# 67 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t CC2420ControlP__syncDone__postTask(void );
# 55 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__RSSI__read(uint16_t *data);







static cc2420_status_t CC2420ControlP__TXCTRL__write(uint16_t data);
#line 63
static cc2420_status_t CC2420ControlP__IOCFG0__write(uint16_t data);
# 50 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t CC2420ControlP__ActiveMessageAddress__amAddress(void );




static am_group_t CC2420ControlP__ActiveMessageAddress__amGroup(void );
# 46 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
static void CC2420ControlP__CSN__makeOutput(void );
#line 40
static void CC2420ControlP__CSN__set(void );
static void CC2420ControlP__CSN__clr(void );




static void CC2420ControlP__VREN__makeOutput(void );
#line 40
static void CC2420ControlP__VREN__set(void );
static void CC2420ControlP__VREN__clr(void );
# 53 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SXOSCON__strobe(void );
# 120 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static error_t CC2420ControlP__SpiResource__release(void );
#line 88
static error_t CC2420ControlP__SpiResource__request(void );
#line 120
static error_t CC2420ControlP__SyncResource__release(void );
#line 88
static error_t CC2420ControlP__SyncResource__request(void );
# 76 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Power.nc"
static void CC2420ControlP__CC2420Power__startOscillatorDone(void );
#line 56
static void CC2420ControlP__CC2420Power__startVRegDone(void );
# 63 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__IOCFG1__write(uint16_t data);
#line 63
static cc2420_status_t CC2420ControlP__FSCTRL__write(uint16_t data);
# 53 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SRXON__strobe(void );
# 102 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static void CC2420ControlP__Resource__granted(void );
# 63 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420ControlP__IEEEADR__write(uint8_t offset, uint8_t * data, uint8_t length);
# 61 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GpioInterrupt.nc"
static error_t CC2420ControlP__InterruptCCA__disable(void );
#line 53
static error_t CC2420ControlP__InterruptCCA__enableRisingEdge(void );
# 120 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static error_t CC2420ControlP__RssiResource__release(void );
# 53 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SRFOFF__strobe(void );
# 125 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
enum CC2420ControlP____nesc_unnamed4339 {
#line 125
  CC2420ControlP__sync = 3U
};
#line 125
typedef int CC2420ControlP____nesc_sillytask_sync[CC2420ControlP__sync];
enum CC2420ControlP____nesc_unnamed4340 {
#line 126
  CC2420ControlP__syncDone = 4U
};
#line 126
typedef int CC2420ControlP____nesc_sillytask_syncDone[CC2420ControlP__syncDone];
#line 90
#line 84
typedef enum CC2420ControlP____nesc_unnamed4341 {
  CC2420ControlP__S_VREG_STOPPED, 
  CC2420ControlP__S_VREG_STARTING, 
  CC2420ControlP__S_VREG_STARTED, 
  CC2420ControlP__S_XOSC_STARTING, 
  CC2420ControlP__S_XOSC_STARTED
} CC2420ControlP__cc2420_control_state_t;

uint8_t CC2420ControlP__m_channel;

uint8_t CC2420ControlP__m_tx_power;

uint16_t CC2420ControlP__m_pan;

uint16_t CC2420ControlP__m_short_addr;

ieee_eui64_t CC2420ControlP__m_ext_addr;

bool CC2420ControlP__m_sync_busy;


bool CC2420ControlP__autoAckEnabled;


bool CC2420ControlP__hwAutoAckDefault;


bool CC2420ControlP__addressRecognition;


bool CC2420ControlP__hwAddressRecognition;

CC2420ControlP__cc2420_control_state_t CC2420ControlP__m_state = CC2420ControlP__S_VREG_STOPPED;



static void CC2420ControlP__writeFsctrl(void );
static void CC2420ControlP__writeMdmctrl0(void );
static void CC2420ControlP__writeId(void );
static inline void CC2420ControlP__writeTxctrl(void );





static inline error_t CC2420ControlP__Init__init(void );
#line 188
static inline error_t CC2420ControlP__Resource__request(void );







static inline error_t CC2420ControlP__Resource__release(void );







static inline error_t CC2420ControlP__CC2420Power__startVReg(void );
#line 216
static inline error_t CC2420ControlP__CC2420Power__stopVReg(void );







static inline error_t CC2420ControlP__CC2420Power__startOscillator(void );
#line 268
static inline error_t CC2420ControlP__CC2420Power__rxOn(void );
#line 298
static inline ieee_eui64_t CC2420ControlP__CC2420Config__getExtAddr(void );



static uint16_t CC2420ControlP__CC2420Config__getShortAddr(void );







static inline uint16_t CC2420ControlP__CC2420Config__getPanAddr(void );
#line 323
static inline error_t CC2420ControlP__CC2420Config__sync(void );
#line 355
static inline bool CC2420ControlP__CC2420Config__isAddressRecognitionEnabled(void );
#line 382
static inline bool CC2420ControlP__CC2420Config__isHwAutoAckDefault(void );






static inline bool CC2420ControlP__CC2420Config__isAutoAckEnabled(void );









static inline void CC2420ControlP__SyncResource__granted(void );
#line 413
static inline void CC2420ControlP__SpiResource__granted(void );




static inline void CC2420ControlP__RssiResource__granted(void );
#line 431
static inline void CC2420ControlP__StartupTimer__fired(void );









static inline void CC2420ControlP__InterruptCCA__fired(void );
#line 465
static inline void CC2420ControlP__sync__runTask(void );



static inline void CC2420ControlP__syncDone__runTask(void );









static void CC2420ControlP__writeFsctrl(void );
#line 496
static void CC2420ControlP__writeMdmctrl0(void );
#line 515
static void CC2420ControlP__writeId(void );
#line 533
static inline void CC2420ControlP__writeTxctrl(void );
#line 545
static inline void CC2420ControlP__ReadRssi__default__readDone(error_t error, uint16_t data);
# 58 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer0AsyncP__Compare__fired(void );
# 70 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer0AsyncP__Timer__overflow(void );
# 59 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP__Timer__get(void );
#line 85
static inline void HplAtm128Timer0AsyncP__TimerCtrl__setControl(Atm128TimerControl_t x);
#line 103
static inline Atm128_TIFR_t HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag(void );
#line 131
static inline void HplAtm128Timer0AsyncP__Compare__start(void );









static inline uint8_t HplAtm128Timer0AsyncP__Compare__get(void );


static inline void HplAtm128Timer0AsyncP__Compare__set(uint8_t t);




static __inline void HplAtm128Timer0AsyncP__stabiliseTimer0(void );
#line 164
static inline mcu_power_t HplAtm128Timer0AsyncP__McuPowerOverride__lowestState(void );
#line 187
void __vector_15(void ) __attribute((signal))   ;





void __vector_16(void ) __attribute((signal))   ;
#line 207
static inline void HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous(void );







static inline int HplAtm128Timer0AsyncP__TimerAsync__compareBusy(void );
# 53 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t HplAtm128Timer1P__Timer0Ctrl__getInterruptFlag(void );
# 58 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer1P__CompareA__fired(void );
# 60 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm128Timer1P__Capture__captured(HplAtm128Timer1P__Capture__size_type t);
# 58 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer1P__CompareB__fired(void );
#line 58
static void HplAtm128Timer1P__CompareC__fired(void );
# 70 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer1P__Timer__overflow(void );
# 58 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline uint16_t HplAtm128Timer1P__Timer__get(void );


static inline void HplAtm128Timer1P__Timer__set(uint16_t t);








static inline void HplAtm128Timer1P__Timer__setScale(uint8_t s);









static inline Atm128TimerCtrlCapture_t HplAtm128Timer1P__TimerCtrl__getCtrlCapture(void );









static inline uint16_t HplAtm128Timer1P__TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x);






static inline void HplAtm128Timer1P__TimerCtrl__setCtrlCapture(Atm128_TCCR1B_t x);
#line 131
static inline void HplAtm128Timer1P__Capture__setEdge(bool up);



static inline void HplAtm128Timer1P__Capture__reset(void );
static inline void HplAtm128Timer1P__CompareA__reset(void );



static inline void HplAtm128Timer1P__Timer__start(void );
static inline void HplAtm128Timer1P__Capture__start(void );
static inline void HplAtm128Timer1P__CompareA__start(void );




static inline void HplAtm128Timer1P__Capture__stop(void );
static inline void HplAtm128Timer1P__CompareA__stop(void );




static inline bool HplAtm128Timer1P__Timer__test(void );
#line 192
static inline void HplAtm128Timer1P__CompareA__set(uint16_t t);




static inline uint16_t HplAtm128Timer1P__Capture__get(void );






void __vector_12(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer1P__CompareB__default__fired(void );
void __vector_13(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer1P__CompareC__default__fired(void );
void __vector_24(void ) __attribute((interrupt))   ;



void __vector_11(void ) __attribute((interrupt))   ;



void __vector_14(void ) __attribute((interrupt))   ;
# 104 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__setScale(uint8_t scale);
#line 67
static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__set(/*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__timer_size t);










static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__start(void );
# 51 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init(void );








static inline void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow(void );
# 78 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__fired(void );
# 62 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__reset(void );
#line 54
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__set(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__size_type t);










static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__start(void );


static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop(void );
# 61 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get(void );
# 74 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__stop(void );








static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size dt);
#line 119
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired(void );






static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow(void );
# 82 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Counter.nc"
static void /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__overflow(void );
# 87 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
static bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__test(void );
#line 61
static /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__get(void );
# 50 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get(void );




static inline bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void );









static inline void /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow(void );
# 64 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Counter.nc"
static /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__get(void );






static bool /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__isOverflowPending(void );










static void /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__overflow(void );
# 67 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/TransformCounterC.nc"
/*Counter32khz32C.Transform32*/TransformCounterC__0__upper_count_type /*Counter32khz32C.Transform32*/TransformCounterC__0__m_upper;

enum /*Counter32khz32C.Transform32*/TransformCounterC__0____nesc_unnamed4342 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC__0__from_size_type ) - /*Counter32khz32C.Transform32*/TransformCounterC__0__LOW_SHIFT_RIGHT, 
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type ) - 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC__0__from_size_type ) + 0, 



  TransformCounterC__0__OVERFLOW_MASK = /*Counter32khz32C.Transform32*/TransformCounterC__0__NUM_UPPER_BITS ? ((/*Counter32khz32C.Transform32*/TransformCounterC__0__upper_count_type )2 << (/*Counter32khz32C.Transform32*/TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__get(void );
#line 133
static inline void /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void );
# 78 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__fired(void );
#line 103
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__size_type dt);
#line 73
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__stop(void );
# 64 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Counter.nc"
static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__get(void );
# 77 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/TransformAlarmC.nc"
/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0;
/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt;

enum /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0____nesc_unnamed4343 {

  TransformAlarmC__0__MAX_DELAY_LOG2 = 8 * sizeof(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_size_type ) - 1 - 0, 
  TransformAlarmC__0__MAX_DELAY = (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type )1 << /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__MAX_DELAY_LOG2
};

static inline /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__getNow(void );
#line 102
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__stop(void );




static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__set_alarm(void );
#line 147
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type dt);









static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type dt);




static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__fired(void );
#line 177
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__overflow(void );
# 22 "/home/ivan/Desktop/tinyos-main/tos/system/NoInitC.nc"
static inline error_t NoInitC__Init__init(void );
# 61 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GpioCapture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captured(uint16_t time);
# 88 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__setEdge(bool up);
#line 64
static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__reset(void );


static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__start(void );


static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__stop(void );
# 49 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__enableCapture(uint8_t mode);









static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captureRisingEdge(void );



static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captureFallingEdge(void );



static inline void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__disable(void );



static inline void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__captured(uint16_t time);
# 56 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__clear(void );
#line 51
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__disable(void );
#line 70
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__edge(bool low_to_high);
#line 46
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__enable(void );
# 68 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GpioInterrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__fired(void );
# 15 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__enable(bool rising);
#line 29
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__enableFallingEdge(void );



static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__disable(void );




static inline void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__fired(void );
# 48 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void HplAtm128InterruptSigP__IntSig6__fired(void );
#line 48
static void HplAtm128InterruptSigP__IntSig1__fired(void );
#line 48
static void HplAtm128InterruptSigP__IntSig4__fired(void );
#line 48
static void HplAtm128InterruptSigP__IntSig7__fired(void );
#line 48
static void HplAtm128InterruptSigP__IntSig2__fired(void );
#line 48
static void HplAtm128InterruptSigP__IntSig5__fired(void );
#line 48
static void HplAtm128InterruptSigP__IntSig0__fired(void );
#line 48
static void HplAtm128InterruptSigP__IntSig3__fired(void );
# 55 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptSigP.nc"
void __vector_1(void ) __attribute((signal))   ;




void __vector_2(void ) __attribute((signal))   ;




void __vector_3(void ) __attribute((signal))   ;




void __vector_4(void ) __attribute((signal))   ;




void __vector_5(void ) __attribute((signal))   ;




void __vector_6(void ) __attribute((signal))   ;




void __vector_7(void ) __attribute((signal))   ;




void __vector_8(void ) __attribute((signal))   ;
# 75 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__fired(void );
# 70 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__IrqSignal__fired(void );

static inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__default__fired(void );
# 75 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__fired(void );
# 70 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__IrqSignal__fired(void );

static inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__default__fired(void );
# 75 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__fired(void );
# 70 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__IrqSignal__fired(void );

static inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__default__fired(void );
# 75 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__fired(void );
# 70 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__IrqSignal__fired(void );

static inline void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__default__fired(void );
# 75 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__Irq__fired(void );
# 70 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__IrqSignal__fired(void );

static inline void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__Irq__default__fired(void );
# 75 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__Irq__fired(void );
# 70 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__IrqSignal__fired(void );

static inline void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__Irq__default__fired(void );
# 75 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__fired(void );
# 50 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__clear(void );
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__enable(void );
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__disable(void );



static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__edge(bool low_to_high);
#line 70
static inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__IrqSignal__fired(void );
# 75 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__Irq__fired(void );
# 70 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__IrqSignal__fired(void );

static inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__Irq__default__fired(void );
# 43 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
static bool HplCC2420InterruptsP__CC_CCA__get(void );
# 68 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GpioInterrupt.nc"
static void HplCC2420InterruptsP__CCA__fired(void );
# 67 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t HplCC2420InterruptsP__CCATask__postTask(void );
# 69 "/home/ivan/Desktop/tinyos-main/tos/platforms/micaz/chips/cc2420/HplCC2420InterruptsP.nc"
enum HplCC2420InterruptsP____nesc_unnamed4344 {
#line 69
  HplCC2420InterruptsP__CCATask = 5U
};
#line 69
typedef int HplCC2420InterruptsP____nesc_sillytask_CCATask[HplCC2420InterruptsP__CCATask];
#line 56
uint8_t HplCC2420InterruptsP__ccaWaitForState;

uint8_t HplCC2420InterruptsP__ccaLastState;

bool HplCC2420InterruptsP__ccaCheckDisabled = FALSE;








static inline void HplCC2420InterruptsP__CCATask__runTask(void );
#line 89
static inline error_t HplCC2420InterruptsP__CCA__enableRisingEdge(void );
#line 105
static inline error_t HplCC2420InterruptsP__CCA__disable(void );
# 70 "/home/ivan/Desktop/tinyos-main/tos/interfaces/SpiPacket.nc"
static error_t CC2420SpiP__SpiPacket__send(
#line 59
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
# 91 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420SpiP__Fifo__writeDone(
# 46 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7f27b14bea00, 
# 91 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420SpiP__Fifo__readDone(
# 46 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7f27b14bea00, 
# 71 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
# 24 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420SpiP__ChipSpiResource__releasing(void );
# 45 "/home/ivan/Desktop/tinyos-main/tos/interfaces/SpiByte.nc"
static uint8_t CC2420SpiP__SpiByte__write(uint8_t tx);
# 56 "/home/ivan/Desktop/tinyos-main/tos/interfaces/State.nc"
static void CC2420SpiP__WorkingState__toIdle(void );




static bool CC2420SpiP__WorkingState__isIdle(void );
#line 45
static error_t CC2420SpiP__WorkingState__requestState(uint8_t reqState);
# 120 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__SpiResource__release(void );
#line 97
static error_t CC2420SpiP__SpiResource__immediateRequest(void );
#line 88
static error_t CC2420SpiP__SpiResource__request(void );
#line 128
static bool CC2420SpiP__SpiResource__isOwner(void );
#line 102
static void CC2420SpiP__Resource__granted(
# 45 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7f27b14bf660);
# 67 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t CC2420SpiP__grant__postTask(void );
# 88 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
enum CC2420SpiP____nesc_unnamed4345 {
#line 88
  CC2420SpiP__grant = 6U
};
#line 88
typedef int CC2420SpiP____nesc_sillytask_grant[CC2420SpiP__grant];
#line 63
enum CC2420SpiP____nesc_unnamed4346 {
  CC2420SpiP__RESOURCE_COUNT = 5U, 
  CC2420SpiP__NO_HOLDER = 0xFF
};


enum CC2420SpiP____nesc_unnamed4347 {
  CC2420SpiP__S_IDLE, 
  CC2420SpiP__S_BUSY
};


uint16_t CC2420SpiP__m_addr;


uint8_t CC2420SpiP__m_requests = 0;


uint8_t CC2420SpiP__m_holder = CC2420SpiP__NO_HOLDER;


bool CC2420SpiP__release;


static error_t CC2420SpiP__attemptRelease(void );







static inline void CC2420SpiP__ChipSpiResource__abortRelease(void );






static inline error_t CC2420SpiP__ChipSpiResource__attemptRelease(void );




static error_t CC2420SpiP__Resource__request(uint8_t id);
#line 126
static error_t CC2420SpiP__Resource__immediateRequest(uint8_t id);
#line 149
static error_t CC2420SpiP__Resource__release(uint8_t id);
#line 178
static inline bool CC2420SpiP__Resource__isOwner(uint8_t id);





static inline void CC2420SpiP__SpiResource__granted(void );




static cc2420_status_t CC2420SpiP__Fifo__beginRead(uint8_t addr, uint8_t *data, 
uint8_t len);
#line 209
static inline error_t CC2420SpiP__Fifo__continueRead(uint8_t addr, uint8_t *data, 
uint8_t len);



static inline cc2420_status_t CC2420SpiP__Fifo__write(uint8_t addr, uint8_t *data, 
uint8_t len);
#line 260
static cc2420_status_t CC2420SpiP__Ram__write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len);
#line 287
static inline cc2420_status_t CC2420SpiP__Reg__read(uint8_t addr, uint16_t *data);
#line 305
static cc2420_status_t CC2420SpiP__Reg__write(uint8_t addr, uint16_t data);
#line 318
static cc2420_status_t CC2420SpiP__Strobe__strobe(uint8_t addr);










static void CC2420SpiP__SpiPacket__sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error);








static error_t CC2420SpiP__attemptRelease(void );
#line 358
static inline void CC2420SpiP__grant__runTask(void );








static inline void CC2420SpiP__Resource__default__granted(uint8_t id);


static inline void CC2420SpiP__Fifo__default__readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error);


static inline void CC2420SpiP__Fifo__default__writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error);
# 74 "/home/ivan/Desktop/tinyos-main/tos/system/StateImplP.nc"
uint8_t StateImplP__state[4U];

enum StateImplP____nesc_unnamed4348 {
  StateImplP__S_IDLE = 0
};


static inline error_t StateImplP__Init__init(void );
#line 96
static error_t StateImplP__State__requestState(uint8_t id, uint8_t reqState);
#line 111
static inline void StateImplP__State__forceState(uint8_t id, uint8_t reqState);






static inline void StateImplP__State__toIdle(uint8_t id);







static inline bool StateImplP__State__isIdle(uint8_t id);






static bool StateImplP__State__isState(uint8_t id, uint8_t myState);
# 67 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t Atm128SpiP__zeroTask__postTask(void );
# 82 "/home/ivan/Desktop/tinyos-main/tos/interfaces/SpiPacket.nc"
static void Atm128SpiP__SpiPacket__sendDone(
#line 75
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 120 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__ResourceArbiter__release(
# 99 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7f27b13fca60);
# 97 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__ResourceArbiter__immediateRequest(
# 99 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7f27b13fca60);
# 88 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__ResourceArbiter__request(
# 99 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7f27b13fca60);
# 128 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static bool Atm128SpiP__ResourceArbiter__isOwner(
# 99 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7f27b13fca60);
# 89 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/Atm128Spi.nc"
static void Atm128SpiP__Spi__sleep(void );
#line 83
static void Atm128SpiP__Spi__initMaster(void );
#line 113
static void Atm128SpiP__Spi__enableInterrupt(bool enabled);
#line 97
static uint8_t Atm128SpiP__Spi__read(void );
#line 141
static void Atm128SpiP__Spi__setMasterDoubleSpeed(bool on);
#line 131
static void Atm128SpiP__Spi__setClock(uint8_t speed);




static bool Atm128SpiP__Spi__isInterruptPending(void );
#line 125
static void Atm128SpiP__Spi__setClockPolarity(bool highWhenIdle);
#line 103
static void Atm128SpiP__Spi__write(uint8_t data);
#line 116
static void Atm128SpiP__Spi__enableSpi(bool busOn);
#line 128
static void Atm128SpiP__Spi__setClockPhase(bool sampleOnTrailing);
# 102 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static void Atm128SpiP__Resource__granted(
# 95 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7f27b1419380);
# 90 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ArbiterInfo.nc"
static bool Atm128SpiP__ArbiterInfo__inUse(void );
# 52 "/home/ivan/Desktop/tinyos-main/tos/interfaces/McuPowerState.nc"
static void Atm128SpiP__McuPowerState__update(void );
# 296 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/Atm128SpiP.nc"
enum Atm128SpiP____nesc_unnamed4349 {
#line 296
  Atm128SpiP__zeroTask = 7U
};
#line 296
typedef int Atm128SpiP____nesc_sillytask_zeroTask[Atm128SpiP__zeroTask];
#line 105
uint16_t Atm128SpiP__len;
uint8_t * Atm128SpiP__txBuffer;
uint8_t * Atm128SpiP__rxBuffer;
uint16_t Atm128SpiP__pos;

enum Atm128SpiP____nesc_unnamed4350 {
  Atm128SpiP__SPI_IDLE, 
  Atm128SpiP__SPI_BUSY, 
  Atm128SpiP__SPI_ATOMIC_SIZE = 10
};
#line 126
enum Atm128SpiP____nesc_unnamed4351 {
  Atm128SpiP__PLATFORM_MHZ = 8
};


static void Atm128SpiP__startSpi(void );
#line 167
static inline void Atm128SpiP__stopSpi(void );







static uint8_t Atm128SpiP__SpiByte__write(uint8_t tx);
#line 251
static error_t Atm128SpiP__sendNextPart(void );
#line 296
static inline void Atm128SpiP__zeroTask__runTask(void );
#line 330
static error_t Atm128SpiP__SpiPacket__send(uint8_t *writeBuf, 
uint8_t *readBuf, 
uint16_t bufLen);
#line 354
static inline void Atm128SpiP__Spi__dataReady(uint8_t data);
#line 394
static inline error_t Atm128SpiP__Resource__immediateRequest(uint8_t id);







static inline error_t Atm128SpiP__Resource__request(uint8_t id);








static inline error_t Atm128SpiP__Resource__release(uint8_t id);









static inline bool Atm128SpiP__Resource__isOwner(uint8_t id);



static inline void Atm128SpiP__ResourceArbiter__granted(uint8_t id);



static inline void Atm128SpiP__Resource__default__granted(uint8_t id);
# 44 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
static void HplAtm128SpiP__MISO__makeInput(void );

static void HplAtm128SpiP__SCK__makeOutput(void );
#line 46
static void HplAtm128SpiP__SS__makeOutput(void );
# 52 "/home/ivan/Desktop/tinyos-main/tos/interfaces/McuPowerState.nc"
static void HplAtm128SpiP__Mcu__update(void );
# 109 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/Atm128Spi.nc"
static void HplAtm128SpiP__SPI__dataReady(uint8_t data);
# 46 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
static void HplAtm128SpiP__MOSI__makeOutput(void );
# 96 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__initMaster(void );
#line 112
static inline void HplAtm128SpiP__SPI__sleep(void );


static inline uint8_t HplAtm128SpiP__SPI__read(void );
static inline void HplAtm128SpiP__SPI__write(uint8_t d);


void __vector_17(void ) __attribute((signal))   ;




static inline bool HplAtm128SpiP__SPI__isInterruptPending(void );







static void HplAtm128SpiP__SPI__enableInterrupt(bool enabled);
#line 147
static void HplAtm128SpiP__SPI__enableSpi(bool enabled);
#line 173
static inline void HplAtm128SpiP__SPI__setMasterBit(bool isMaster);
#line 186
static inline void HplAtm128SpiP__SPI__setClockPolarity(bool highWhenIdle);
#line 200
static inline void HplAtm128SpiP__SPI__setClockPhase(bool sampleOnTrailing);
#line 217
static inline void HplAtm128SpiP__SPI__setClock(uint8_t v);
#line 230
static inline void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool on);
# 49 "/home/ivan/Desktop/tinyos-main/tos/system/FcfsResourceQueueC.nc"
enum /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1____nesc_unnamed4352 {
#line 49
  FcfsResourceQueueC__1__NO_ENTRY = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[1U];
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__Init__init(void );




static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void );



static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void );
#line 82
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(resource_client_id_t id);
# 53 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(
# 52 "/home/ivan/Desktop/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7f27b1324840);
# 61 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__immediateRequested(
# 52 "/home/ivan/Desktop/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7f27b1324840);
# 65 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(
# 56 "/home/ivan/Desktop/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7f27b1322020);
# 59 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(
# 56 "/home/ivan/Desktop/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7f27b1322020);
# 79 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void );
# 102 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__granted(
# 51 "/home/ivan/Desktop/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7f27b13254f0);
# 67 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void );
# 69 "/home/ivan/Desktop/tinyos-main/tos/system/SimpleArbiterP.nc"
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_unnamed4353 {
#line 69
  SimpleArbiterP__0__grantedTask = 8U
};
#line 69
typedef int /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_sillytask_grantedTask[/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask];
#line 62
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_unnamed4354 {
#line 62
  SimpleArbiterP__0__RES_IDLE = 0, SimpleArbiterP__0__RES_GRANTING = 1, SimpleArbiterP__0__RES_BUSY = 2
};
#line 63
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_unnamed4355 {
#line 63
  SimpleArbiterP__0__NO_RES = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE;
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__NO_RES;
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__reqResId;



static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(uint8_t id);
#line 84
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(uint8_t id);
#line 97
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id);
#line 124
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__inUse(void );
#line 148
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__isOwner(uint8_t id);






static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );
#line 167
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 46 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
static void HplCC2420SpiP__SS__makeOutput(void );
#line 40
static void HplCC2420SpiP__SS__set(void );
static void HplCC2420SpiP__SS__clr(void );
# 102 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static void HplCC2420SpiP__Resource__granted(void );
#line 120
static error_t HplCC2420SpiP__SubResource__release(void );
#line 97
static error_t HplCC2420SpiP__SubResource__immediateRequest(void );
#line 88
static error_t HplCC2420SpiP__SubResource__request(void );
#line 128
static bool HplCC2420SpiP__SubResource__isOwner(void );
# 51 "/home/ivan/Desktop/tinyos-main/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline error_t HplCC2420SpiP__Resource__request(void );




static inline error_t HplCC2420SpiP__Resource__immediateRequest(void );










static inline void HplCC2420SpiP__SubResource__granted(void );







static inline error_t HplCC2420SpiP__Resource__release(void );







static inline bool HplCC2420SpiP__Resource__isOwner(void );
# 62 "/home/ivan/Desktop/tinyos-main/tos/system/ActiveMessageAddressC.nc"
am_addr_t ActiveMessageAddressC__addr = TOS_AM_ADDRESS;


am_group_t ActiveMessageAddressC__group = TOS_AM_GROUP;






static inline am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );
#line 93
static inline am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void );
#line 106
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 42 "/home/ivan/Desktop/tinyos-main/tos/platforms/micaz/LocalIeeeEui64C.nc"
static ieee_eui64_t LocalIeeeEui64C__LocalIeeeEui64__getId(void );
# 81 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420TransmitP__RadioBackoff__requestInitialBackoff(message_t * msg);






static void CC2420TransmitP__RadioBackoff__requestCongestionBackoff(message_t * msg);
# 70 "/home/ivan/Desktop/tinyos-main/tos/interfaces/PacketTimeStamp.nc"
static void CC2420TransmitP__PacketTimeStamp__clear(
#line 66
message_t * msg);
#line 78
static void CC2420TransmitP__PacketTimeStamp__set(
#line 73
message_t * msg, 




CC2420TransmitP__PacketTimeStamp__size_type value);
# 53 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__STXONCCA__strobe(void );
# 54 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GpioCapture.nc"
static error_t CC2420TransmitP__CaptureSFD__captureFallingEdge(void );
#line 66
static void CC2420TransmitP__CaptureSFD__disable(void );
#line 53
static error_t CC2420TransmitP__CaptureSFD__captureRisingEdge(void );
# 109 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Alarm.nc"
static CC2420TransmitP__BackoffTimer__size_type CC2420TransmitP__BackoffTimer__getNow(void );
#line 66
static void CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__BackoffTimer__size_type dt);






static void CC2420TransmitP__BackoffTimer__stop(void );
# 63 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420TransmitP__TXFIFO_RAM__write(uint8_t offset, uint8_t * data, uint8_t length);
# 63 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420TransmitP__TXCTRL__write(uint16_t data);
# 55 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420TransmitP__CC2420Receive__sfd_dropped(void );
#line 49
static void CC2420TransmitP__CC2420Receive__sfd(uint32_t time);
# 73 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static void CC2420TransmitP__Send__sendDone(message_t * p_msg, error_t error);
# 31 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420TransmitP__ChipSpiResource__abortRelease(void );







static error_t CC2420TransmitP__ChipSpiResource__attemptRelease(void );
# 53 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__SFLUSHTX__strobe(void );
# 46 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP__CSN__makeOutput(void );
#line 40
static void CC2420TransmitP__CSN__set(void );
static void CC2420TransmitP__CSN__clr(void );
# 42 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420TransmitP__CC2420PacketBody__getHeader(message_t * msg);










static cc2420_metadata_t * CC2420TransmitP__CC2420PacketBody__getMetadata(message_t * msg);
# 58 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
static uint8_t CC2420TransmitP__PacketTimeSyncOffset__get(
#line 53
message_t * msg);
#line 50
static bool CC2420TransmitP__PacketTimeSyncOffset__isSet(
#line 46
message_t * msg);
# 120 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static error_t CC2420TransmitP__SpiResource__release(void );
#line 97
static error_t CC2420TransmitP__SpiResource__immediateRequest(void );
#line 88
static error_t CC2420TransmitP__SpiResource__request(void );
# 44 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP__CCA__makeInput(void );
#line 43
static bool CC2420TransmitP__CCA__get(void );
# 53 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__SNOP__strobe(void );
# 44 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP__SFD__makeInput(void );
#line 43
static bool CC2420TransmitP__SFD__get(void );
# 82 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static cc2420_status_t CC2420TransmitP__TXFIFO__write(uint8_t * data, uint8_t length);
# 53 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__STXON__strobe(void );
# 99 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
#line 89
typedef enum CC2420TransmitP____nesc_unnamed4356 {
  CC2420TransmitP__S_STOPPED, 
  CC2420TransmitP__S_STARTED, 
  CC2420TransmitP__S_LOAD, 
  CC2420TransmitP__S_SAMPLE_CCA, 
  CC2420TransmitP__S_BEGIN_TRANSMIT, 
  CC2420TransmitP__S_SFD, 
  CC2420TransmitP__S_EFD, 
  CC2420TransmitP__S_ACK_WAIT, 
  CC2420TransmitP__S_CANCEL
} CC2420TransmitP__cc2420_transmit_state_t;





enum CC2420TransmitP____nesc_unnamed4357 {
  CC2420TransmitP__CC2420_ABORT_PERIOD = 320
};
#line 120
message_t * CC2420TransmitP__m_msg;

bool CC2420TransmitP__m_cca;

uint8_t CC2420TransmitP__m_tx_power;

CC2420TransmitP__cc2420_transmit_state_t CC2420TransmitP__m_state = CC2420TransmitP__S_STOPPED;

bool CC2420TransmitP__m_receiving = FALSE;

uint16_t CC2420TransmitP__m_prev_time;


bool CC2420TransmitP__sfdHigh;


bool CC2420TransmitP__abortSpiRelease;


int8_t CC2420TransmitP__totalCcaChecks;


uint16_t CC2420TransmitP__myInitialBackoff;


uint16_t CC2420TransmitP__myCongestionBackoff;



static inline error_t CC2420TransmitP__send(message_t * p_msg, bool cca);

static void CC2420TransmitP__loadTXFIFO(void );
static void CC2420TransmitP__attemptSend(void );
static void CC2420TransmitP__congestionBackoff(void );
static error_t CC2420TransmitP__acquireSpiResource(void );
static inline error_t CC2420TransmitP__releaseSpiResource(void );
static void CC2420TransmitP__signalDone(error_t err);



static inline error_t CC2420TransmitP__Init__init(void );







static inline error_t CC2420TransmitP__StdControl__start(void );










static inline error_t CC2420TransmitP__StdControl__stop(void );
#line 192
static inline error_t CC2420TransmitP__Send__send(message_t * p_msg, bool useCca);
#line 243
static inline void CC2420TransmitP__RadioBackoff__setInitialBackoff(uint16_t backoffTime);







static inline void CC2420TransmitP__RadioBackoff__setCongestionBackoff(uint16_t backoffTime);







static __inline uint32_t CC2420TransmitP__getTime32(uint16_t captured_time);
#line 280
static inline void CC2420TransmitP__CaptureSFD__captured(uint16_t time);
#line 377
static inline void CC2420TransmitP__ChipSpiResource__releasing(void );
#line 389
static inline void CC2420TransmitP__CC2420Receive__receive(uint8_t type, message_t *ack_msg);
#line 416
static inline void CC2420TransmitP__SpiResource__granted(void );
#line 454
static inline void CC2420TransmitP__TXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error);
#line 486
static inline void CC2420TransmitP__TXFIFO__readDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error);










static inline void CC2420TransmitP__BackoffTimer__fired(void );
#line 547
static inline error_t CC2420TransmitP__send(message_t * p_msg, bool cca);
#line 743
static void CC2420TransmitP__attemptSend(void );
#line 788
static void CC2420TransmitP__congestionBackoff(void );






static error_t CC2420TransmitP__acquireSpiResource(void );







static inline error_t CC2420TransmitP__releaseSpiResource(void );
#line 825
static void CC2420TransmitP__loadTXFIFO(void );
#line 850
static void CC2420TransmitP__signalDone(error_t err);
# 43 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
static bool CC2420ReceiveP__FIFO__get(void );
# 93 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Config.nc"
static bool CC2420ReceiveP__CC2420Config__isAddressRecognitionEnabled(void );
#line 117
static bool CC2420ReceiveP__CC2420Config__isAutoAckEnabled(void );
#line 112
static bool CC2420ReceiveP__CC2420Config__isHwAutoAckDefault(void );
#line 66
static ieee_eui64_t CC2420ReceiveP__CC2420Config__getExtAddr(void );




static uint16_t CC2420ReceiveP__CC2420Config__getShortAddr(void );
# 67 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t CC2420ReceiveP__receiveDone_task__postTask(void );
# 70 "/home/ivan/Desktop/tinyos-main/tos/interfaces/PacketTimeStamp.nc"
static void CC2420ReceiveP__PacketTimeStamp__clear(
#line 66
message_t * msg);
#line 78
static void CC2420ReceiveP__PacketTimeStamp__set(
#line 73
message_t * msg, 




CC2420ReceiveP__PacketTimeStamp__size_type value);
# 43 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
static bool CC2420ReceiveP__FIFOP__get(void );
# 63 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420ReceiveP__CC2420Receive__receive(uint8_t type, message_t * message);
# 53 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ReceiveP__SACK__strobe(void );
# 40 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
static void CC2420ReceiveP__CSN__set(void );
static void CC2420ReceiveP__CSN__clr(void );
# 42 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420ReceiveP__CC2420PacketBody__getHeader(message_t * msg);










static cc2420_metadata_t * CC2420ReceiveP__CC2420PacketBody__getMetadata(message_t * msg);
# 78 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420ReceiveP__Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 120 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static error_t CC2420ReceiveP__SpiResource__release(void );
#line 97
static error_t CC2420ReceiveP__SpiResource__immediateRequest(void );
#line 88
static error_t CC2420ReceiveP__SpiResource__request(void );
#line 128
static bool CC2420ReceiveP__SpiResource__isOwner(void );
# 62 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static error_t CC2420ReceiveP__RXFIFO__continueRead(uint8_t * data, uint8_t length);
#line 51
static cc2420_status_t CC2420ReceiveP__RXFIFO__beginRead(uint8_t * data, uint8_t length);
# 61 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GpioInterrupt.nc"
static error_t CC2420ReceiveP__InterruptFIFOP__disable(void );
#line 54
static error_t CC2420ReceiveP__InterruptFIFOP__enableFallingEdge(void );
# 53 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ReceiveP__SFLUSHRX__strobe(void );
# 148 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
enum CC2420ReceiveP____nesc_unnamed4358 {
#line 148
  CC2420ReceiveP__receiveDone_task = 9U
};
#line 148
typedef int CC2420ReceiveP____nesc_sillytask_receiveDone_task[CC2420ReceiveP__receiveDone_task];
#line 89
#line 81
typedef enum CC2420ReceiveP____nesc_unnamed4359 {
  CC2420ReceiveP__S_STOPPED, 
  CC2420ReceiveP__S_STARTED, 
  CC2420ReceiveP__S_RX_LENGTH, 
  CC2420ReceiveP__S_RX_DEC, 
  CC2420ReceiveP__S_RX_DEC_WAIT, 
  CC2420ReceiveP__S_RX_FCF, 
  CC2420ReceiveP__S_RX_PAYLOAD
} CC2420ReceiveP__cc2420_receive_state_t;

enum CC2420ReceiveP____nesc_unnamed4360 {
  CC2420ReceiveP__RXFIFO_SIZE = 128, 
  CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE = 8, 
  CC2420ReceiveP__SACK_HEADER_LENGTH = 7
};

uint32_t CC2420ReceiveP__m_timestamp_queue[CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE];

uint8_t CC2420ReceiveP__m_timestamp_head;

uint8_t CC2420ReceiveP__m_timestamp_size;





uint8_t CC2420ReceiveP__m_missed_packets;



bool CC2420ReceiveP__receivingPacket;


uint8_t CC2420ReceiveP__rxFrameLength;

uint8_t CC2420ReceiveP__m_bytes_left;

message_t * CC2420ReceiveP__m_p_rx_buf;

message_t CC2420ReceiveP__m_rx_buf;
#line 137
CC2420ReceiveP__cc2420_receive_state_t CC2420ReceiveP__m_state;



static void CC2420ReceiveP__reset_state(void );
static void CC2420ReceiveP__beginReceive(void );
static void CC2420ReceiveP__receive(void );
static void CC2420ReceiveP__waitForNextPacket(void );
static void CC2420ReceiveP__flush(void );
static inline bool CC2420ReceiveP__passesAddressCheck(message_t * msg);




static inline error_t CC2420ReceiveP__Init__init(void );





static inline error_t CC2420ReceiveP__StdControl__start(void );
#line 171
static inline error_t CC2420ReceiveP__StdControl__stop(void );
#line 186
static inline void CC2420ReceiveP__CC2420Receive__sfd(uint32_t time);








static inline void CC2420ReceiveP__CC2420Receive__sfd_dropped(void );
#line 212
static inline void CC2420ReceiveP__InterruptFIFOP__fired(void );
#line 513
static inline void CC2420ReceiveP__SpiResource__granted(void );
#line 530
static inline void CC2420ReceiveP__RXFIFO__readDone(uint8_t *rx_buf, uint8_t rx_len, 
error_t error);
#line 668
static inline void CC2420ReceiveP__RXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error);







static inline void CC2420ReceiveP__receiveDone_task__runTask(void );
#line 709
static inline void CC2420ReceiveP__CC2420Config__syncDone(error_t error);






static void CC2420ReceiveP__beginReceive(void );
#line 733
static void CC2420ReceiveP__flush(void );
#line 759
static void CC2420ReceiveP__receive(void );









static void CC2420ReceiveP__waitForNextPacket(void );
#line 813
static void CC2420ReceiveP__reset_state(void );










static inline bool CC2420ReceiveP__passesAddressCheck(message_t *msg);
# 81 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline int CC2420PacketP__getAddressLength(int type);








static uint8_t * CC2420PacketP__getNetwork(message_t * msg);
#line 119
static inline uint8_t CC2420PacketP__CC2420Packet__getNetwork(message_t * p_msg);








static inline void CC2420PacketP__CC2420Packet__setNetwork(message_t * p_msg, uint8_t networkId);








static inline cc2420_header_t * CC2420PacketP__CC2420PacketBody__getHeader(message_t * msg);
#line 152
static inline cc2420_metadata_t *CC2420PacketP__CC2420PacketBody__getMetadata(message_t *msg);
#line 171
static void CC2420PacketP__PacketTimeStamp32khz__clear(message_t *msg);





static inline void CC2420PacketP__PacketTimeStamp32khz__set(message_t *msg, uint32_t value);
#line 210
static inline bool CC2420PacketP__PacketTimeSyncOffset__isSet(message_t *msg);








static inline uint8_t CC2420PacketP__PacketTimeSyncOffset__get(message_t *msg);
# 58 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 53 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag(void );
#line 46
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__setControl(Atm128TimerControl_t control);
# 78 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__fired(void );
# 82 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Counter.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__overflow(void );
# 44 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__compareBusy(void );
#line 32
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__setTimer0Asynchronous(void );
# 48 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get(void );





static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type t);










static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__start(void );
# 61 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get(void );
# 38 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0;
#line 39
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base;



enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0____nesc_unnamed4361 {
  Atm128AlarmAsyncP__0__MINDT = 2, 
  Atm128AlarmAsyncP__0__MAXT = 230
};



static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt(void );


static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init(void );
#line 74
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setOcr0(uint8_t n);
#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt(void );
#line 149
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired(void );
#line 161
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get(void );
#line 204
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop(void );







static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt);









static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow(void );



static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm(void );



static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow(void );
# 67 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void );
# 109 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt);
#line 116
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void );
# 83 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void );
# 74 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4362 {
#line 74
  AlarmToTimerC__0__fired = 10U
};
#line 74
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired];
#line 55
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt;
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot;

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
#line 71
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
# 67 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 136 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void );
#line 129
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
# 48 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7f27b0f523f0);
#line 71
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4363 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 11U
};
#line 71
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4364 {

  VirtualizeTimerC__0__NUM_TIMERS = 2, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4365 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now);
#line 100
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
#line 139
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);
#line 159
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt);
#line 204
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 58 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
# 52 "/home/ivan/Desktop/tinyos-main/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC__seed;


static inline error_t RandomMlcgC__Init__init(void );
#line 69
static uint32_t RandomMlcgC__Random__rand32(void );
#line 89
static inline uint16_t RandomMlcgC__Random__rand16(void );
# 75 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Send.nc"
static error_t UniqueSendP__SubSend__send(
#line 67
message_t * msg, 







uint8_t len);
#line 112
static uint8_t UniqueSendP__SubSend__maxPayloadLength(void );
#line 100
static void UniqueSendP__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 52 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Random.nc"
static uint16_t UniqueSendP__Random__rand16(void );
# 42 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * UniqueSendP__CC2420PacketBody__getHeader(message_t * msg);
# 56 "/home/ivan/Desktop/tinyos-main/tos/interfaces/State.nc"
static void UniqueSendP__State__toIdle(void );
#line 45
static error_t UniqueSendP__State__requestState(uint8_t reqState);
# 54 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/unique/UniqueSendP.nc"
uint8_t UniqueSendP__localSendId;

enum UniqueSendP____nesc_unnamed4366 {
  UniqueSendP__S_IDLE, 
  UniqueSendP__S_SENDING
};


static inline error_t UniqueSendP__Init__init(void );
#line 75
static inline error_t UniqueSendP__Send__send(message_t *msg, uint8_t len);
#line 95
static inline uint8_t UniqueSendP__Send__maxPayloadLength(void );








static inline void UniqueSendP__SubSend__sendDone(message_t *msg, error_t error);
# 78 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



UniqueReceiveP__Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 42 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * UniqueReceiveP__CC2420PacketBody__getHeader(message_t * msg);
# 78 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



UniqueReceiveP__DuplicateReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 59 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/unique/UniqueReceiveP.nc"
#line 56
struct UniqueReceiveP____nesc_unnamed4367 {
  uint16_t source;
  uint8_t dsn;
} UniqueReceiveP__receivedMessages[4];

uint8_t UniqueReceiveP__writeIndex = 0;


uint8_t UniqueReceiveP__recycleSourceElement;

enum UniqueReceiveP____nesc_unnamed4368 {
  UniqueReceiveP__INVALID_ELEMENT = 0xFF
};


static inline error_t UniqueReceiveP__Init__init(void );









static inline bool UniqueReceiveP__hasSeen(uint16_t msgSource, uint8_t msgDsn);
static inline void UniqueReceiveP__insert(uint16_t msgSource, uint8_t msgDsn);
static inline uint16_t UniqueReceiveP__getSourceKey(message_t  *msg);


static inline message_t *UniqueReceiveP__SubReceive__receive(message_t *msg, void *payload, 
uint8_t len);
#line 112
static inline bool UniqueReceiveP__hasSeen(uint16_t msgSource, uint8_t msgDsn);
#line 138
static inline void UniqueReceiveP__insert(uint16_t msgSource, uint8_t msgDsn);
#line 165
static inline uint16_t UniqueReceiveP__getSourceKey(message_t * msg);
#line 192
static inline message_t *UniqueReceiveP__DuplicateReceive__default__receive(message_t *msg, void *payload, uint8_t len);
# 75 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Send.nc"
static error_t CC2420TinyosNetworkP__SubSend__send(
#line 67
message_t * msg, 







uint8_t len);
#line 112
static uint8_t CC2420TinyosNetworkP__SubSend__maxPayloadLength(void );
# 67 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t CC2420TinyosNetworkP__grantTask__postTask(void );
# 77 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Packet.nc"
static void CC2420TinyosNetworkP__CC2420Packet__setNetwork(message_t * p_msg, uint8_t networkId);
#line 75
static uint8_t CC2420TinyosNetworkP__CC2420Packet__getNetwork(message_t * p_msg);
# 100 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Send.nc"
static void CC2420TinyosNetworkP__ActiveSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 79 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceQueue.nc"
static error_t CC2420TinyosNetworkP__Queue__enqueue(resource_client_id_t id);
#line 53
static bool CC2420TinyosNetworkP__Queue__isEmpty(void );
#line 70
static resource_client_id_t CC2420TinyosNetworkP__Queue__dequeue(void );
# 42 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420TinyosNetworkP__CC2420PacketBody__getHeader(message_t * msg);










static cc2420_metadata_t * CC2420TinyosNetworkP__CC2420PacketBody__getMetadata(message_t * msg);
# 78 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420TinyosNetworkP__BareReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 102 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static void CC2420TinyosNetworkP__Resource__granted(
# 46 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x7f27b0e22600);
# 100 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Send.nc"
static void CC2420TinyosNetworkP__BareSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 78 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420TinyosNetworkP__ActiveReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 180 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
enum CC2420TinyosNetworkP____nesc_unnamed4369 {
#line 180
  CC2420TinyosNetworkP__grantTask = 12U
};
#line 180
typedef int CC2420TinyosNetworkP____nesc_sillytask_grantTask[CC2420TinyosNetworkP__grantTask];
#line 68
enum CC2420TinyosNetworkP____nesc_unnamed4370 {
  CC2420TinyosNetworkP__OWNER_NONE = 0xff, 
  CC2420TinyosNetworkP__TINYOS_N_NETWORKS = 1U
};




#line 73
enum CC2420TinyosNetworkP____nesc_unnamed4371 {
  CC2420TinyosNetworkP__CLIENT_AM, 
  CC2420TinyosNetworkP__CLIENT_BARE
} CC2420TinyosNetworkP__m_busy_client;

uint8_t CC2420TinyosNetworkP__resource_owner = CC2420TinyosNetworkP__OWNER_NONE;
#line 78
uint8_t CC2420TinyosNetworkP__next_owner;

static error_t CC2420TinyosNetworkP__ActiveSend__send(message_t *msg, uint8_t len);









static inline uint8_t CC2420TinyosNetworkP__ActiveSend__maxPayloadLength(void );
#line 138
static inline void *CC2420TinyosNetworkP__BareSend__getPayload(message_t *msg, uint8_t len);









static inline void CC2420TinyosNetworkP__SubSend__sendDone(message_t *msg, error_t error);








static inline message_t *CC2420TinyosNetworkP__SubReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 180
static inline void CC2420TinyosNetworkP__grantTask__runTask(void );
#line 199
static inline error_t CC2420TinyosNetworkP__Resource__request(uint8_t id);
#line 215
static inline error_t CC2420TinyosNetworkP__Resource__immediateRequest(uint8_t id);
#line 229
static inline error_t CC2420TinyosNetworkP__Resource__release(uint8_t id);
#line 241
static inline message_t *CC2420TinyosNetworkP__BareReceive__default__receive(message_t *msg, void *payload, uint8_t len);


static inline void CC2420TinyosNetworkP__BareSend__default__sendDone(message_t *msg, error_t error);








static inline void CC2420TinyosNetworkP__Resource__default__granted(uint8_t client);
# 49 "/home/ivan/Desktop/tinyos-main/tos/system/FcfsResourceQueueC.nc"
enum /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0____nesc_unnamed4372 {
#line 49
  FcfsResourceQueueC__0__NO_ENTRY = 0xFF
};
uint8_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[1];
uint8_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;
uint8_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qTail = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;

static inline error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__Init__init(void );




static bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );



static inline bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
#line 82
static inline error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
# 75 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Send.nc"
static error_t CC2420ActiveMessageP__SubSend__send(
#line 67
message_t * msg, 







uint8_t len);
#line 112
static uint8_t CC2420ActiveMessageP__SubSend__maxPayloadLength(void );
# 77 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Config.nc"
static uint16_t CC2420ActiveMessageP__CC2420Config__getPanAddr(void );
# 95 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420ActiveMessageP__RadioBackoff__requestCca(
# 54 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7f27b0d8a700, 
# 95 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);
#line 81
static void CC2420ActiveMessageP__RadioBackoff__requestInitialBackoff(
# 54 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7f27b0d8a700, 
# 81 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);






static void CC2420ActiveMessageP__RadioBackoff__requestCongestionBackoff(
# 54 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7f27b0d8a700, 
# 88 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);
# 59 "/home/ivan/Desktop/tinyos-main/tos/interfaces/SendNotifier.nc"
static void CC2420ActiveMessageP__SendNotifier__aboutToSend(
# 53 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7f27b0d8bb30, 
# 59 "/home/ivan/Desktop/tinyos-main/tos/interfaces/SendNotifier.nc"
am_addr_t dest, 
#line 57
message_t * msg);
# 110 "/home/ivan/Desktop/tinyos-main/tos/interfaces/AMSend.nc"
static void CC2420ActiveMessageP__AMSend__sendDone(
# 48 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7f27b0d93cf0, 
# 103 "/home/ivan/Desktop/tinyos-main/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420ActiveMessageP__Snoop__receive(
# 50 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7f27b0d8fc40, 
# 71 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 50 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t CC2420ActiveMessageP__ActiveMessageAddress__amAddress(void );
# 42 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420ActiveMessageP__CC2420PacketBody__getHeader(message_t * msg);










static cc2420_metadata_t * CC2420ActiveMessageP__CC2420PacketBody__getMetadata(message_t * msg);
# 78 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420ActiveMessageP__Receive__receive(
# 49 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7f27b0d8f060, 
# 71 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 120 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static error_t CC2420ActiveMessageP__RadioResource__release(void );
#line 97
static error_t CC2420ActiveMessageP__RadioResource__immediateRequest(void );
#line 88
static error_t CC2420ActiveMessageP__RadioResource__request(void );
# 71 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/CC2420ActiveMessageP.nc"
uint16_t CC2420ActiveMessageP__pending_length;
message_t * CC2420ActiveMessageP__pending_message = (void *)0;

static void CC2420ActiveMessageP__RadioResource__granted(void );
#line 87
static error_t CC2420ActiveMessageP__AMSend__send(am_id_t id, am_addr_t addr, 
message_t *msg, 
uint8_t len);
#line 135
static inline am_addr_t CC2420ActiveMessageP__AMPacket__address(void );



static am_addr_t CC2420ActiveMessageP__AMPacket__destination(message_t *amsg);
#line 159
static inline bool CC2420ActiveMessageP__AMPacket__isForMe(message_t *amsg);




static am_id_t CC2420ActiveMessageP__AMPacket__type(message_t *amsg);
#line 189
static inline void CC2420ActiveMessageP__Packet__clear(message_t *msg);
#line 202
static inline uint8_t CC2420ActiveMessageP__Packet__maxPayloadLength(void );









static inline void CC2420ActiveMessageP__SubSend__sendDone(message_t *msg, error_t result);






static inline message_t *CC2420ActiveMessageP__SubReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 235
static inline void CC2420ActiveMessageP__CC2420Config__syncDone(error_t error);





static inline void CC2420ActiveMessageP__SubBackoff__requestInitialBackoff(message_t *msg);




static inline void CC2420ActiveMessageP__SubBackoff__requestCongestionBackoff(message_t *msg);



static inline void CC2420ActiveMessageP__SubBackoff__requestCca(message_t *msg);
#line 291
static inline void CC2420ActiveMessageP__SendNotifier__default__aboutToSend(am_id_t amId, am_addr_t addr, message_t *msg);

static inline void CC2420ActiveMessageP__RadioBackoff__default__requestInitialBackoff(am_id_t id, 
message_t *msg);


static inline void CC2420ActiveMessageP__RadioBackoff__default__requestCongestionBackoff(am_id_t id, 
message_t *msg);


static inline void CC2420ActiveMessageP__RadioBackoff__default__requestCca(am_id_t id, 
message_t *msg);
# 166 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45db.nc"
static void LogStorageP__At45db__read(at45page_t page, at45pageoffset_t offset, 
void * data, at45pageoffset_t n);
#line 111
static void LogStorageP__At45db__erase(at45page_t page, uint8_t eraseKind);
#line 144
static void LogStorageP__At45db__flush(at45page_t page);
#line 73
static void LogStorageP__At45db__write(at45page_t page, at45pageoffset_t offset, 
void * data, at45pageoffset_t n);
#line 125
static void LogStorageP__At45db__sync(at45page_t page);
#line 187
static void LogStorageP__At45db__computeCrc(at45page_t page, at45pageoffset_t offset, 
at45pageoffset_t n, uint16_t baseCrc);
# 75 "/home/ivan/Desktop/tinyos-main/tos/interfaces/LogRead.nc"
static void LogStorageP__LogRead__readDone(
# 54 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
uint8_t arg_0x7f27b0cecb20, 
# 70 "/home/ivan/Desktop/tinyos-main/tos/interfaces/LogRead.nc"
void * buf, 




storage_len_t len, error_t error);
#line 115
static void LogStorageP__LogRead__seekDone(
# 54 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
uint8_t arg_0x7f27b0cecb20, 
# 115 "/home/ivan/Desktop/tinyos-main/tos/interfaces/LogRead.nc"
error_t error);
# 30 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbVolume.nc"
static at45page_t LogStorageP__At45dbVolume__volumeSize(
# 59 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
uint8_t arg_0x7f27b0cd0990);
# 24 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbVolume.nc"
static at45page_t LogStorageP__At45dbVolume__remap(
# 59 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
uint8_t arg_0x7f27b0cd0990, 
# 24 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbVolume.nc"
at45page_t volumePage);
# 120 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static error_t LogStorageP__Resource__release(
# 60 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
uint8_t arg_0x7f27b0cd3810);
# 88 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static error_t LogStorageP__Resource__request(
# 60 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
uint8_t arg_0x7f27b0cd3810);
# 118 "/home/ivan/Desktop/tinyos-main/tos/interfaces/LogWrite.nc"
static void LogStorageP__LogWrite__syncDone(
# 55 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
uint8_t arg_0x7f27b0cea020, 
# 118 "/home/ivan/Desktop/tinyos-main/tos/interfaces/LogWrite.nc"
error_t error);
#line 100
static void LogStorageP__LogWrite__eraseDone(
# 55 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
uint8_t arg_0x7f27b0cea020, 
# 100 "/home/ivan/Desktop/tinyos-main/tos/interfaces/LogWrite.nc"
error_t error);
#line 68
static void LogStorageP__LogWrite__appendDone(
# 55 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
uint8_t arg_0x7f27b0cea020, 
# 61 "/home/ivan/Desktop/tinyos-main/tos/interfaces/LogWrite.nc"
void * buf, 






storage_len_t len, bool recordsLost, 
error_t error);
# 170 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
enum LogStorageP____nesc_unnamed4373 {
  LogStorageP__F_SYNC = 1, 
  LogStorageP__F_CIRCLED = 2, 
  LogStorageP__F_LASTVALID = 4
};

nx_struct LogStorageP__pageinfo {
  nx_uint16_t magic;
  nx_uint32_t pos;
  nx_uint8_t lastRecordOffset;
  nx_uint8_t flags;
  nx_uint16_t crc;
} __attribute__((packed));

enum LogStorageP____nesc_unnamed4374 {
  LogStorageP__N = 1U, 
  LogStorageP__NO_CLIENT = 0xff, 
  LogStorageP__PAGE_SIZE = AT45_PAGE_SIZE - sizeof(nx_struct LogStorageP__pageinfo ), 
  LogStorageP__PERSISTENT_MAGIC = 0x4256
};

enum LogStorageP____nesc_unnamed4375 {
  LogStorageP__R_IDLE, 
  LogStorageP__R_ERASE, 
  LogStorageP__R_APPEND, 
  LogStorageP__R_SYNC, 
  LogStorageP__R_READ, 
  LogStorageP__R_SEEK
};

enum LogStorageP____nesc_unnamed4376 {
  LogStorageP__META_IDLE, 
  LogStorageP__META_LOCATEFIRST, 
  LogStorageP__META_LOCATE, 
  LogStorageP__META_LOCATELAST, 
  LogStorageP__META_SEEK, 
  LogStorageP__META_READ, 
  LogStorageP__META_WRITE
};

uint8_t LogStorageP__client = LogStorageP__NO_CLIENT;
uint8_t LogStorageP__metaState;
bool LogStorageP__recordsLost;
at45page_t LogStorageP__firstPage;
#line 213
at45page_t LogStorageP__lastPage;
storage_len_t LogStorageP__pos;
nx_struct LogStorageP__pageinfo LogStorageP__metadata;
#line 235
#line 217
struct LogStorageP____nesc_unnamed4377 {

  uint8_t request;
  uint8_t * buf;
  storage_len_t len;


  bool positionKnown : 1;
  bool circular : 1;
  bool circled : 1;
  bool rvalid : 1;
  uint32_t wpos;
  at45page_t wpage;
  at45pageoffset_t woffset;
  uint32_t rpos;
  at45page_t rpage;
  at45pageoffset_t roffset;
  at45pageoffset_t rend;
} LogStorageP__s[LogStorageP__N];

static inline at45page_t LogStorageP__firstVolumePage(void );



static inline at45page_t LogStorageP__npages(void );



static at45page_t LogStorageP__lastVolumePage(void );



static void LogStorageP__setWritePage(at45page_t page);









static inline void LogStorageP__invalidateReadPointer(void );



static inline void LogStorageP__crcPage(at45page_t page);




static inline void LogStorageP__readMetadata(at45page_t page);



static inline void LogStorageP__writeMetadata(at45page_t page);



static void LogStorageP__wmetadataStart(void );

static void LogStorageP__sync(void );
#line 291
static inline void LogStorageP__eraseStart(void );
static void LogStorageP__appendStart(void );
static inline void LogStorageP__syncStart(void );
static inline void LogStorageP__readStart(void );
static inline void LogStorageP__locateStart(void );
static void LogStorageP__rmetadataStart(void );
static inline void LogStorageP__seekStart(void );

static void LogStorageP__startRequest(void );
#line 317
static void LogStorageP__endRequest(error_t ok);
#line 339
static error_t LogStorageP__newRequest(uint8_t newRequest, uint8_t id, 
uint8_t * buf, storage_len_t length);
#line 356
static inline void LogStorageP__Resource__granted(uint8_t id);





static inline error_t LogStorageP__LogWrite__append(uint8_t id, void *buf, storage_len_t length);
#line 379
static inline error_t LogStorageP__LogWrite__erase(uint8_t id);







static inline error_t LogStorageP__LogRead__read(uint8_t id, void *buf, storage_len_t length);
#line 400
static inline storage_len_t LogStorageP__LogRead__getSize(uint8_t id);







static inline void LogStorageP__eraseMetadataDone(void );
#line 420
static void LogStorageP__eraseEraseDone(void );
#line 435
static inline void LogStorageP__eraseStart(void );










static void LogStorageP__locateLastRecord(void );

static inline void LogStorageP__locateLastCrcDone(uint16_t crc);
#line 489
static inline void LogStorageP__locateLastReadDone(void );






static void LogStorageP__locateLastRecord(void );
#line 513
static inline void LogStorageP__located(void );







static inline at45page_t LogStorageP__locateCurrentPage(void );



static void LogStorageP__locateBinarySearch(void );






static inline void LogStorageP__locateGreaterThan(void );




static void LogStorageP__locateLessThan(void );




static inline void LogStorageP__locateCrcDone(uint16_t crc);









static inline void LogStorageP__locateReadDone(void );






static inline void LogStorageP__locateFirstCrcDone(uint16_t crc);









static inline void LogStorageP__locateFirstReadDone(void );




static inline void LogStorageP__locateStart(void );










static void LogStorageP__appendContinue(void );
#line 620
static inline void LogStorageP__appendWriteDone(void );






static inline void LogStorageP__appendMetadataDone(void );





static inline void LogStorageP__appendSyncDone(void );




static void LogStorageP__appendStart(void );
#line 668
static inline void LogStorageP__syncStart(void );






static inline void LogStorageP__syncMetadataDone(void );










static void LogStorageP__wmetadataStart(void );
#line 710
static inline void LogStorageP__wmetadataCrcDone(uint16_t crc);
#line 723
static inline void LogStorageP__wmetadataWriteDone(void );
#line 735
static void LogStorageP__readContinue(void );
#line 788
static inline void LogStorageP__readStart(void );







static void LogStorageP__continueReadAt(at45pageoffset_t roffset);
#line 809
static void LogStorageP__rmetadataContinue(void );
#line 828
static inline void LogStorageP__rmetadataReadDone(void );






static inline void LogStorageP__rmetadataCrcDone(uint16_t crc);
#line 848
static void LogStorageP__rmetadataStart(void );









static inline void LogStorageP__seekCrcDone(uint16_t crc);










static inline void LogStorageP__seekReadDone(void );




static inline void LogStorageP__seekStart(void );
#line 920
static inline void LogStorageP__At45db__eraseDone(error_t error);







static inline void LogStorageP__At45db__writeDone(error_t error);
#line 940
static inline void LogStorageP__At45db__syncDone(error_t error);
#line 952
static inline void LogStorageP__At45db__flushDone(error_t error);







static inline void LogStorageP__At45db__readDone(error_t error);
#line 976
static inline void LogStorageP__At45db__computeCrcDone(error_t error, uint16_t crc);
#line 992
static inline void LogStorageP__At45db__copyPageDone(error_t error);

static inline void LogStorageP__LogWrite__default__appendDone(uint8_t logId, void *buf, storage_len_t l, bool rLost, error_t error);
static inline void LogStorageP__LogWrite__default__eraseDone(uint8_t logId, error_t error);
static inline void LogStorageP__LogWrite__default__syncDone(uint8_t logId, error_t error);
static inline void LogStorageP__LogRead__default__readDone(uint8_t logId, void *buf, storage_len_t l, error_t error);
static inline void LogStorageP__LogRead__default__seekDone(uint8_t logId, error_t error);

static inline at45page_t LogStorageP__At45dbVolume__default__remap(uint8_t logId, at45page_t volumePage);
static inline at45page_t LogStorageP__At45dbVolume__default__volumeSize(uint8_t logId);
static inline error_t LogStorageP__Resource__default__request(uint8_t logId);
static inline error_t LogStorageP__Resource__default__release(uint8_t logId);
# 55 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45db.nc"
static void At45dbP__HplAt45db__fill(uint8_t cmd, at45page_t page);
#line 41
static void At45dbP__HplAt45db__waitCompare(void );
#line 100
static void At45dbP__HplAt45db__erase(uint8_t cmd, at45page_t page);
#line 30
static void At45dbP__HplAt45db__waitIdle(void );
#line 73
static void At45dbP__HplAt45db__flush(uint8_t cmd, at45page_t page);
#line 178
static void At45dbP__HplAt45db__write(uint8_t cmd, at45page_t page, at45pageoffset_t offset, 
uint8_t * data, at45pageoffset_t n);
#line 87
static void At45dbP__HplAt45db__compare(uint8_t cmd, at45page_t page);
#line 157
static void At45dbP__HplAt45db__crc(uint8_t cmd, at45page_t page, at45pageoffset_t offset, 
at45pageoffset_t n, uint16_t baseCrc);
#line 119
static void At45dbP__HplAt45db__readBuffer(uint8_t cmd, at45pageoffset_t offset, 
uint8_t * data, uint16_t n);
# 96 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45db.nc"
static void At45dbP__At45db__copyPageDone(error_t error);
#line 136
static void At45dbP__At45db__syncDone(error_t error);
#line 154
static void At45dbP__At45db__flushDone(error_t error);
#line 80
static void At45dbP__At45db__writeDone(error_t error);
#line 116
static void At45dbP__At45db__eraseDone(error_t error);
#line 194
static void At45dbP__At45db__computeCrcDone(error_t error, uint16_t crc);
#line 173
static void At45dbP__At45db__readDone(error_t error);
# 66 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/BusyWait.nc"
static void At45dbP__BusyWait__wait(At45dbP__BusyWait__size_type dt);
# 67 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t At45dbP__taskSuccess__postTask(void );
#line 67
static error_t At45dbP__taskFail__postTask(void );
# 145 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbP.nc"
enum At45dbP____nesc_unnamed4378 {
#line 145
  At45dbP__taskSuccess = 13U
};
#line 145
typedef int At45dbP____nesc_sillytask_taskSuccess[At45dbP__taskSuccess];


enum At45dbP____nesc_unnamed4379 {
#line 148
  At45dbP__taskFail = 14U
};
#line 148
typedef int At45dbP____nesc_sillytask_taskFail[At45dbP__taskFail];
#line 80
enum At45dbP____nesc_unnamed4380 {
  At45dbP__IDLE, 
  At45dbP__R_READ, 
  At45dbP__R_READCRC, 
  At45dbP__R_WRITE, 
  At45dbP__R_ERASE, 
  At45dbP__R_COPY, 
  At45dbP__R_SYNC, 
  At45dbP__R_SYNCALL, 
  At45dbP__R_FLUSH, 
  At45dbP__R_FLUSHALL, 
  At45dbP__BROKEN
};
uint8_t At45dbP__request;
at45pageoffset_t At45dbP__reqOffset;
#line 94
at45pageoffset_t At45dbP__reqBytes;
uint8_t * At45dbP__reqBuf;
at45page_t At45dbP__reqPage;

enum At45dbP____nesc_unnamed4381 {
  At45dbP__P_READ, 
  At45dbP__P_READCRC, 
  At45dbP__P_WRITE, 
  At45dbP__P_FLUSH, 
  At45dbP__P_FILL, 
  At45dbP__P_ERASE, 
  At45dbP__P_COMPARE, 
  At45dbP__P_COMPARE_CHECK
};







#line 109
struct At45dbP____nesc_unnamed4382 {
  at45page_t page;
  bool busy : 1;
  bool clean : 1;
  bool erased : 1;
  uint8_t unchecked : 2;
} At45dbP__buffer[2];
uint8_t At45dbP__selected;
uint8_t At45dbP__checking;
bool At45dbP__flashBusy;





static inline error_t At45dbP__Init__init(void );
#line 138
static void At45dbP__flashIdle(void );



static void At45dbP__requestDone(error_t result, uint16_t computedCrc, uint8_t newState);
static void At45dbP__handleRWRequest(void );

static inline void At45dbP__taskSuccess__runTask(void );


static inline void At45dbP__taskFail__runTask(void );



static void At45dbP__checkBuffer(uint8_t buf);









static void At45dbP__flushBuffer(void );
#line 174
static inline void At45dbP__HplAt45db__waitIdleDone(void );
#line 186
static inline void At45dbP__HplAt45db__waitCompareDone(bool ok);
#line 201
static inline void At45dbP__HplAt45db__readDone(void );



static inline void At45dbP__HplAt45db__writeDone(void );





static inline void At45dbP__HplAt45db__crcDone(uint16_t crc);



static inline void At45dbP__HplAt45db__flushDone(void );







static inline void At45dbP__HplAt45db__compareDone(void );










static inline void At45dbP__HplAt45db__fillDone(void );







static inline void At45dbP__HplAt45db__eraseDone(void );










static inline void At45dbP__syncOrFlushAll(uint8_t newReq);

static void At45dbP__handleRWRequest(void );
#line 361
static void At45dbP__requestDone(error_t result, uint16_t computedCrc, uint8_t newState);
#line 377
static void At45dbP__newRequest(uint8_t req, at45page_t page, at45pageoffset_t offset, 
void * reqdata, at45pageoffset_t n);
#line 407
static inline void At45dbP__At45db__read(at45page_t page, at45pageoffset_t offset, 
void *reqdata, at45pageoffset_t n);



static inline void At45dbP__At45db__computeCrc(at45page_t page, 
at45pageoffset_t offset, 
at45pageoffset_t n, 
uint16_t baseCrc);




static inline void At45dbP__At45db__write(at45page_t page, at45pageoffset_t offset, 
void *reqdata, at45pageoffset_t n);




static inline void At45dbP__At45db__erase(at45page_t page, uint8_t eraseKind);








static void At45dbP__syncOrFlush(at45page_t page, uint8_t newReq);
#line 452
static inline void At45dbP__At45db__sync(at45page_t page);



static inline void At45dbP__At45db__flush(at45page_t page);



static inline void At45dbP__syncOrFlushAll(uint8_t newReq);
# 141 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45db.nc"
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__readDone(void );
#line 163
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__crcDone(uint16_t computedCrc);
#line 79
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__flushDone(void );
#line 185
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__writeDone(void );
#line 35
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitIdleDone(void );
#line 47
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitCompareDone(bool compareOk);
#line 106
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__eraseDone(void );
#line 93
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__compareDone(void );
#line 61
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__fillDone(void );
# 42 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45dbByte.nc"
static bool /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__getCompareStatus(void );
#line 31
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__waitIdle(void );
#line 47
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__select(void );




static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__deselect(void );
# 120 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__release(void );
#line 88
static error_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__request(void );
# 45 "/home/ivan/Desktop/tinyos-main/tos/interfaces/SpiByte.nc"
static uint8_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__FlashSpi__write(uint8_t tx);
# 35 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45dbByteC.nc"
enum /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0____nesc_unnamed4383 {
  HplAt45dbByteC__0__P_IDLE, 
  HplAt45dbByteC__0__P_SEND_CMD, 
  HplAt45dbByteC__0__P_READ, 
  HplAt45dbByteC__0__P_READ_CRC, 
  HplAt45dbByteC__0__P_WRITE, 
  HplAt45dbByteC__0__P_WAIT_IDLE, 
  HplAt45dbByteC__0__P_WAIT_COMPARE, 
  HplAt45dbByteC__0__P_WAIT_COMPARE_OK, 
  HplAt45dbByteC__0__P_FILL, 
  HplAt45dbByteC__0__P_FLUSH, 
  HplAt45dbByteC__0__P_COMPARE, 
  HplAt45dbByteC__0__P_ERASE
};
uint8_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__status = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_IDLE;
uint8_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__flashCmd[9];
at45pageoffset_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__dataCount;
uint8_t * /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__data;
uint8_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__dontCare;

static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__complete(uint16_t crc);
#line 86
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__requestFlashStatus(void );





static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__doCommand(void );
#line 161
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__granted(void );
#line 173
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__execCommand(uint8_t op, uint8_t reqCmd, uint8_t reqDontCare, 
at45page_t reqPage, at45pageoffset_t reqOffset, 
uint8_t * reqData, at45pageoffset_t reqCount);
#line 191
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitIdle(void );




static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitCompare(void );




static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__idle(void );
#line 217
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__fill(uint8_t cmd, at45page_t page);



static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__flush(uint8_t cmd, at45page_t page);



static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__compare(uint8_t cmd, at45page_t page);



static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__erase(uint8_t cmd, at45page_t page);









static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__readBuffer(uint8_t cmd, at45pageoffset_t offset, 
uint8_t *pdata, at45pageoffset_t count);



static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__crc(uint8_t cmd, 
at45page_t page, at45pageoffset_t offset, 
at45pageoffset_t count, 
uint16_t baseCrc);



static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__write(uint8_t cmd, 
at45page_t page, at45pageoffset_t offset, 
uint8_t *pdata, at45pageoffset_t count);
# 44 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
static void HplAt45dbIOP__In__makeInput(void );
#line 43
static bool HplAt45dbIOP__In__get(void );
#line 41
static void HplAt45dbIOP__In__clr(void );
# 66 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/BusyWait.nc"
static void HplAt45dbIOP__BusyWait__wait(HplAt45dbIOP__BusyWait__size_type dt);
# 46 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
static void HplAt45dbIOP__Out__makeOutput(void );
#line 40
static void HplAt45dbIOP__Out__set(void );





static void HplAt45dbIOP__Select__makeOutput(void );
#line 40
static void HplAt45dbIOP__Select__set(void );
static void HplAt45dbIOP__Select__clr(void );
# 35 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45dbByte.nc"
static void HplAt45dbIOP__HplAt45dbByte__idle(void );
# 46 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
static void HplAt45dbIOP__Clk__makeOutput(void );
#line 40
static void HplAt45dbIOP__Clk__set(void );
static void HplAt45dbIOP__Clk__clr(void );
# 67 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t HplAt45dbIOP__avail__postTask(void );
# 163 "/home/ivan/Desktop/tinyos-main/tos/platforms/micaz/chips/at45db/HplAt45dbIOP.nc"
enum HplAt45dbIOP____nesc_unnamed4384 {
#line 163
  HplAt45dbIOP__avail = 15U
};
#line 163
typedef int HplAt45dbIOP____nesc_sillytask_avail[HplAt45dbIOP__avail];
#line 108
static inline error_t HplAt45dbIOP__Init__init(void );
#line 120
static inline void HplAt45dbIOP__HplAt45dbByte__select(void );




static inline void HplAt45dbIOP__HplAt45dbByte__deselect(void );
#line 142
static uint8_t HplAt45dbIOP__FlashSpi__write(uint8_t spiOut);
#line 163
static inline void HplAt45dbIOP__avail__runTask(void );



static inline void HplAt45dbIOP__HplAt45dbByte__waitIdle(void );
#line 183
static inline bool HplAt45dbIOP__HplAt45dbByte__getCompareStatus(void );
# 40 "/home/ivan/Desktop/tinyos-main/tos/platforms/micaz/BusyWaitMicroC.nc"
static __inline void BusyWaitMicroC__BusyWait__wait(uint16_t dt);
# 65 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__unconfigure(void );
#line 59
static void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__configure(void );
# 102 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__Resource__granted(void );
# 67 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__granted__postTask(void );
# 25 "/home/ivan/Desktop/tinyos-main/tos/system/NoArbiterC.nc"
enum /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0____nesc_unnamed4385 {
#line 25
  NoArbiterC__0__granted = 16U
};
#line 25
typedef int /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0____nesc_sillytask_granted[/*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__granted];
#line 25
static inline void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__granted__runTask(void );




static inline error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__Resource__request(void );









static inline error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__Resource__release(void );








static inline void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__default__configure(void );
static inline void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__default__unconfigure(void );
# 49 "/home/ivan/Desktop/tinyos-main/tos/system/FcfsResourceQueueC.nc"
enum /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2____nesc_unnamed4386 {
#line 49
  FcfsResourceQueueC__2__NO_ENTRY = 0xFF
};
uint8_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__resQ[1U];
uint8_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__qHead = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY;
uint8_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__qTail = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY;

static inline error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__Init__init(void );




static inline bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEmpty(void );



static inline bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__dequeue(void );
#line 82
static inline error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__enqueue(resource_client_id_t id);
# 53 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceRequested.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(
# 55 "/home/ivan/Desktop/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x7f27b0a36020);
# 65 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(
# 60 "/home/ivan/Desktop/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x7f27b0a34410);
# 59 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(
# 60 "/home/ivan/Desktop/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x7f27b0a34410);
# 79 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceQueue.nc"
static error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Queue__dequeue(void );
# 73 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceDefaultOwner.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void );
#line 46
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void );
# 102 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__granted(
# 54 "/home/ivan/Desktop/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x7f27b0a38c70);
# 67 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask__postTask(void );
# 75 "/home/ivan/Desktop/tinyos-main/tos/system/ArbiterP.nc"
enum /*At45dbC.Arbiter.Arbiter*/ArbiterP__0____nesc_unnamed4387 {
#line 75
  ArbiterP__0__grantedTask = 17U
};
#line 75
typedef int /*At45dbC.Arbiter.Arbiter*/ArbiterP__0____nesc_sillytask_grantedTask[/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask];
#line 67
enum /*At45dbC.Arbiter.Arbiter*/ArbiterP__0____nesc_unnamed4388 {
#line 67
  ArbiterP__0__RES_CONTROLLED, ArbiterP__0__RES_GRANTING, ArbiterP__0__RES_IMM_GRANTING, ArbiterP__0__RES_BUSY
};
#line 68
enum /*At45dbC.Arbiter.Arbiter*/ArbiterP__0____nesc_unnamed4389 {
#line 68
  ArbiterP__0__default_owner_id = 1U
};
#line 69
enum /*At45dbC.Arbiter.Arbiter*/ArbiterP__0____nesc_unnamed4390 {
#line 69
  ArbiterP__0__NO_RES = 0xFF
};
uint8_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED;
uint8_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__default_owner_id;
uint8_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__reqResId;



static inline error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__request(uint8_t id);
#line 111
static inline error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__release(uint8_t id);
#line 133
static inline error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
#line 190
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
#line 202
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id);

static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id);



static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void );

static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested(void );





static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 21 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbStorageManagerC.nc"
static inline at45page_t At45dbStorageManagerC__At45dbVolume__remap(volume_id_t volid, at45page_t volumePage);








static inline at45page_t At45dbStorageManagerC__At45dbVolume__volumeSize(volume_id_t volid);
# 92 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/atm128hardware.h"
static __inline  void __nesc_disable_interrupt()
#line 92
{
   __asm volatile ("cli");}

#line 109
#line 108
__inline   __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)(0x3F + 0x20);

#line 112
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}



#line 118
__inline   void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
   __asm volatile ("" :  :  : "memory");
  * (volatile uint8_t *)(0x3F + 0x20) = original_SREG;
}

# 124 "/home/ivan/Desktop/tinyos-main/tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__Scheduler__init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}

# 57 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__init(void ){
#line 57
  SchedulerBasicP__Scheduler__init();
#line 57
}
#line 57
# 69 "/home/ivan/Desktop/tinyos-main/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 90 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline uint16_t HplAtm128Timer1P__TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x)
#line 90
{
#line 90
  union __nesc_unnamed4391 {
#line 90
    Atm128TimerCtrlCapture_t f;
#line 90
    uint16_t t;
  } 
#line 90
  c = { .f = x };

#line 90
  return c.t;
}





static inline void HplAtm128Timer1P__TimerCtrl__setCtrlCapture(Atm128_TCCR1B_t x)
#line 97
{
  * (volatile uint8_t *)(0x2E + 0x20) = HplAtm128Timer1P__TimerCtrlCapture2int(x);
}

#line 80
static inline Atm128TimerCtrlCapture_t HplAtm128Timer1P__TimerCtrl__getCtrlCapture(void )
#line 80
{
  return * (Atm128TimerCtrlCapture_t * )& * (volatile uint8_t *)(0x2E + 0x20);
}

#line 70
static inline void HplAtm128Timer1P__Timer__setScale(uint8_t s)
#line 70
{
  Atm128TimerCtrlCapture_t x = HplAtm128Timer1P__TimerCtrl__getCtrlCapture();

#line 72
  x.bits.cs = s;
  HplAtm128Timer1P__TimerCtrl__setCtrlCapture(x);
}

# 104 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__setScale(uint8_t scale){
#line 104
  HplAtm128Timer1P__Timer__setScale(scale);
#line 104
}
#line 104
# 140 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__Timer__start(void )
#line 140
{
#line 140
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 2;
}

# 78 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__start(void ){
#line 78
  HplAtm128Timer1P__Timer__start();
#line 78
}
#line 78
# 61 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__Timer__set(uint16_t t)
#line 61
{
#line 61
  * (volatile uint16_t *)(0x2C + 0x20) = t;
}

# 67 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__set(/*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__timer_size t){
#line 67
  HplAtm128Timer1P__Timer__set(t);
#line 67
}
#line 67
# 51 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init(void )
#line 51
{
  /* atomic removed: atomic calls only */
#line 52
  {
    /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__set(0);
    /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__start();
    /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__setScale(4);
  }
  return SUCCESS;
}

# 59 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )49U &= ~(1 << 2);
}

# 44 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void HplAt45dbIOP__In__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__makeInput();
#line 44
}
#line 44
# 56 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )50U &= ~(1 << 2);
}

# 41 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void HplAt45dbIOP__In__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__clr();
#line 41
}
#line 41
# 61 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP__27__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )49U |= 1 << 3;
}

# 46 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void HplAt45dbIOP__Out__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP__27__IO__makeOutput();
#line 46
}
#line 46
# 55 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP__27__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )50U |= 1 << 3;
}

# 40 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void HplAt45dbIOP__Out__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP__27__IO__set();
#line 40
}
#line 40
# 61 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )49U |= 1 << 5;
}

# 46 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void HplAt45dbIOP__Clk__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__makeOutput();
#line 46
}
#line 46
# 56 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )50U &= ~(1 << 5);
}

# 41 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void HplAt45dbIOP__Clk__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__clr();
#line 41
}
#line 41
# 55 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP__3__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )59U |= 1 << 3;
}

# 40 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void HplAt45dbIOP__Select__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP__3__IO__set();
#line 40
}
#line 40
# 61 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP__3__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )58U |= 1 << 3;
}

# 46 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void HplAt45dbIOP__Select__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP__3__IO__makeOutput();
#line 46
}
#line 46
# 108 "/home/ivan/Desktop/tinyos-main/tos/platforms/micaz/chips/at45db/HplAt45dbIOP.nc"
static inline error_t HplAt45dbIOP__Init__init(void )
#line 108
{
  HplAt45dbIOP__Select__makeOutput();
  HplAt45dbIOP__Select__set();
  HplAt45dbIOP__Clk__clr();
  HplAt45dbIOP__Clk__makeOutput();
  HplAt45dbIOP__Out__set();
  HplAt45dbIOP__Out__makeOutput();
  HplAt45dbIOP__In__clr();
  HplAt45dbIOP__In__makeInput();
  return SUCCESS;
}

# 62 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Init.nc"
inline static error_t MotePlatformP__SubInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = HplAt45dbIOP__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 56 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )59U &= ~(1 << 4);
}

# 41 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr();
#line 41
}
#line 41
# 59 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )58U &= ~(1 << 4);
}

# 44 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput();
#line 44
}
#line 44
# 49 "/home/ivan/Desktop/tinyos-main/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void )
#line 49
{

  * (volatile uint8_t *)(0x15 + 0x20) = 0;
  * (volatile uint8_t *)(0x14 + 0x20) = 0xff;


  MotePlatformP__SerialIdPin__makeInput();
  MotePlatformP__SerialIdPin__clr();

  return MotePlatformP__SubInit__init();
}

# 55 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )59U |= 1 << 0;
}

# 40 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set();
#line 40
}
#line 40
# 55 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )59U |= 1 << 1;
}

# 40 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set();
#line 40
}
#line 40
# 55 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )59U |= 1 << 2;
}

# 40 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set();
#line 40
}
#line 40
# 61 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )58U |= 1 << 0;
}

# 46 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput();
#line 46
}
#line 46
# 61 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )58U |= 1 << 1;
}

# 46 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput();
#line 46
}
#line 46
# 61 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )58U |= 1 << 2;
}

# 46 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput();
#line 46
}
#line 46
# 56 "/home/ivan/Desktop/tinyos-main/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 57
  {
    ;
    LedsP__Led0__makeOutput();
    LedsP__Led1__makeOutput();
    LedsP__Led2__makeOutput();
    LedsP__Led0__set();
    LedsP__Led1__set();
    LedsP__Led2__set();
  }
  return SUCCESS;
}

# 62 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Init.nc"
inline static error_t PlatformP__MoteInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = LedsP__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, MotePlatformP__PlatformInit__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 41 "/home/ivan/Desktop/tinyos-main/tos/platforms/mica/MeasureClockC.nc"
static inline error_t MeasureClockC__Init__init(void )
#line 41
{
  /* atomic removed: atomic calls only */



  {
    uint8_t now;
#line 47
    uint8_t wraps;
    uint16_t start;


    * (volatile uint8_t *)(0x2E + 0x20) = 1 << 0;
    * (volatile uint8_t *)(0x30 + 0x20) = 1 << 3;
    * (volatile uint8_t *)(0x33 + 0x20) = (1 << 1) | (1 << 0);




    start = * (volatile uint16_t *)(0x2C + 0x20);
    for (wraps = MeasureClockC__MAGIC / 2; wraps; ) 
      {
        uint16_t next = * (volatile uint16_t *)(0x2C + 0x20);

        if (next < start) {
          wraps--;
          }
#line 65
        start = next;
      }


    now = * (volatile uint8_t *)(0x32 + 0x20);
    while (* (volatile uint8_t *)(0x32 + 0x20) == now) ;


    start = * (volatile uint16_t *)(0x2C + 0x20);
    now = * (volatile uint8_t *)(0x32 + 0x20);
    while (* (volatile uint8_t *)(0x32 + 0x20) == now) ;
    MeasureClockC__cycles = * (volatile uint16_t *)(0x2C + 0x20);

    MeasureClockC__cycles = (MeasureClockC__cycles - start + 16) >> 5;


    * (volatile uint8_t *)(0x30 + 0x20) = * (volatile uint8_t *)(0x2E + 0x20) = * (volatile uint8_t *)(0x33 + 0x20) = 0;
    * (volatile uint8_t *)(0x32 + 0x20) = 0;
    * (volatile uint16_t *)(0x2C + 0x20) = 0;
    * (volatile uint8_t *)0x7C = * (volatile uint8_t *)(0x36 + 0x20) = 0xff;
    while (* (volatile uint8_t *)(0x30 + 0x20) & (((1 << 2) | (1 << 1)) | (1 << 0))) 
      ;
  }
  return SUCCESS;
}

# 62 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Init.nc"
inline static error_t PlatformP__MeasureClock__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MeasureClockC__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 51 "/home/ivan/Desktop/tinyos-main/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
{
  error_t ok;


  ok = PlatformP__MeasureClock__init();
  ok = ecombine(ok, PlatformP__MoteInit__init());

  return ok;
}

# 62 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Init.nc"
inline static error_t RealMainP__PlatformInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = PlatformP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 65 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Scheduler.nc"
inline static bool RealMainP__Scheduler__runNextTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SchedulerBasicP__Scheduler__runNextTask();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 356 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
static inline void LogStorageP__Resource__granted(uint8_t id)
#line 356
{
  LogStorageP__client = id;
  LogStorageP__pos = 0;
  LogStorageP__startRequest();
}

# 202 "/home/ivan/Desktop/tinyos-main/tos/system/ArbiterP.nc"
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id)
#line 202
{
}

# 102 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
inline static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__granted(uint8_t arg_0x7f27b0a38c70){
#line 102
  switch (arg_0x7f27b0a38c70) {
#line 102
    case /*PacketParrotC.LogStorageC*/LogStorageC__0__RESOURCE_ID:
#line 102
      LogStorageP__Resource__granted(/*PacketParrotC.LogStorageC*/LogStorageC__0__LOG_ID);
#line 102
      break;
#line 102
    default:
#line 102
      /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__default__granted(arg_0x7f27b0a38c70);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 216 "/home/ivan/Desktop/tinyos-main/tos/system/ArbiterP.nc"
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 216
{
}

# 59 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceConfigure.nc"
inline static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x7f27b0a34410){
#line 59
    /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(arg_0x7f27b0a34410);
#line 59
}
#line 59
# 190 "/home/ivan/Desktop/tinyos-main/tos/system/ArbiterP.nc"
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void )
#line 190
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 191
    {
      /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__reqResId;
      /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__RES_BUSY;
    }
#line 194
    __nesc_atomic_end(__nesc_atomic); }
  /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId);
  /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__granted(/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId);
}

# 407 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__At45db__read(at45page_t page, at45pageoffset_t offset, 
void *reqdata, at45pageoffset_t n)
#line 408
{
  At45dbP__newRequest(At45dbP__R_READ, page, offset, reqdata, n);
}

# 166 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45db.nc"
inline static void LogStorageP__At45db__read(at45page_t page, at45pageoffset_t offset, void * data, at45pageoffset_t n){
#line 166
  At45dbP__At45db__read(page, offset, data, n);
#line 166
}
#line 166
# 268 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
static inline void LogStorageP__readMetadata(at45page_t page)
#line 268
{
  LogStorageP__At45db__read(page, LogStorageP__PAGE_SIZE, &LogStorageP__metadata, sizeof LogStorageP__metadata);
}

# 21 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbStorageManagerC.nc"
static inline at45page_t At45dbStorageManagerC__At45dbVolume__remap(volume_id_t volid, at45page_t volumePage)
#line 21
{
  switch (volid) 
    {
# 16 "build/micaz/StorageVolumes.h"
      case VOLUME_CONFIGTEST: return volumePage + 0;
      case VOLUME_LOGTEST: return volumePage + 18;
# 26 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbStorageManagerC.nc"
      default: return AT45_MAX_PAGES;
    }
}

# 1000 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
static inline at45page_t LogStorageP__At45dbVolume__default__remap(uint8_t logId, at45page_t volumePage)
#line 1000
{
#line 1000
  return 0;
}

# 24 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbVolume.nc"
inline static at45page_t LogStorageP__At45dbVolume__remap(uint8_t arg_0x7f27b0cd0990, at45page_t volumePage){
#line 24
  unsigned short __nesc_result;
#line 24

#line 24
  switch (arg_0x7f27b0cd0990) {
#line 24
    case /*PacketParrotC.LogStorageC*/LogStorageC__0__LOG_ID:
#line 24
      __nesc_result = At45dbStorageManagerC__At45dbVolume__remap(1, volumePage);
#line 24
      break;
#line 24
    default:
#line 24
      __nesc_result = LogStorageP__At45dbVolume__default__remap(arg_0x7f27b0cd0990, volumePage);
#line 24
      break;
#line 24
    }
#line 24

#line 24
  return __nesc_result;
#line 24
}
#line 24
# 237 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
static inline at45page_t LogStorageP__firstVolumePage(void )
#line 237
{
  return LogStorageP__At45dbVolume__remap(LogStorageP__client, 0);
}

#line 574
static inline void LogStorageP__locateStart(void )
#line 574
{
  LogStorageP__metaState = LogStorageP__META_LOCATEFIRST;
  LogStorageP__firstPage = LogStorageP__firstVolumePage();
  LogStorageP__lastPage = LogStorageP__lastVolumePage() - 1;
  LogStorageP__readMetadata(LogStorageP__lastPage);
}

# 67 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t At45dbP__taskFail__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(At45dbP__taskFail);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 97 "/home/ivan/Desktop/tinyos-main/tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP__isWaiting(uint8_t id)
{
  return SchedulerBasicP__m_next[id] != SchedulerBasicP__NO_TASK || SchedulerBasicP__m_tail == id;
}

static inline bool SchedulerBasicP__pushTask(uint8_t id)
{
  if (!SchedulerBasicP__isWaiting(id)) 
    {
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_head = id;
          SchedulerBasicP__m_tail = id;
        }
      else 
        {
          SchedulerBasicP__m_next[SchedulerBasicP__m_tail] = id;
          SchedulerBasicP__m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

# 67 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__granted__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__granted);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 30 "/home/ivan/Desktop/tinyos-main/tos/system/NoArbiterC.nc"
static inline error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__Resource__request(void )
#line 30
{
  /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__granted__postTask();
  return SUCCESS;
}

# 88 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__Resource__request();
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 191 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitIdle(void )
#line 191
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__status = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_WAIT_IDLE;
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__request();
}

# 30 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45db.nc"
inline static void At45dbP__HplAt45db__waitIdle(void ){
#line 30
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitIdle();
#line 30
}
#line 30
# 229 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__erase(uint8_t cmd, at45page_t page)
#line 229
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__execCommand(/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_ERASE, cmd, 0, page, 0, (void *)0, 1);
}

# 100 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45db.nc"
inline static void At45dbP__HplAt45db__erase(uint8_t cmd, at45page_t page){
#line 100
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__erase(cmd, page);
#line 100
}
#line 100
# 310 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 310
{
  const uint8_t *base = source;

#line 312
  return ((uint16_t )base[0] << 8) | base[1];
}

# 412 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__At45db__computeCrc(at45page_t page, 
at45pageoffset_t offset, 
at45pageoffset_t n, 
uint16_t baseCrc)
#line 415
{

  At45dbP__newRequest(At45dbP__R_READCRC, page, offset, (uint8_t * )baseCrc, n);
}

# 187 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45db.nc"
inline static void LogStorageP__At45db__computeCrc(at45page_t page, at45pageoffset_t offset, at45pageoffset_t n, uint16_t baseCrc){
#line 187
  At45dbP__At45db__computeCrc(page, offset, n, baseCrc);
#line 187
}
#line 187
# 263 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
static inline void LogStorageP__crcPage(at45page_t page)
#line 263
{
  LogStorageP__At45db__computeCrc(page, 0, 
  LogStorageP__PAGE_SIZE + (unsigned short )& ((nx_struct LogStorageP__pageinfo *)0)->crc, 0);
}

#line 828
static inline void LogStorageP__rmetadataReadDone(void )
#line 828
{
  if (__nesc_ntoh_uint16(LogStorageP__metadata.magic.nxdata) == LogStorageP__PERSISTENT_MAGIC) {
    LogStorageP__crcPage(LogStorageP__firstPage);
    }
  else {
#line 832
    LogStorageP__endRequest(SUCCESS);
    }
}

#line 869
static inline void LogStorageP__seekReadDone(void )
#line 869
{
  LogStorageP__crcPage(LogStorageP__s[LogStorageP__client].rpage);
}

# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
}

# 489 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
static inline void LogStorageP__locateLastReadDone(void )
#line 489
{
  if (__nesc_ntoh_uint16(LogStorageP__metadata.magic.nxdata) == LogStorageP__PERSISTENT_MAGIC && __nesc_ntoh_uint8(LogStorageP__metadata.flags.nxdata) & LogStorageP__F_LASTVALID) {
    LogStorageP__crcPage(LogStorageP__firstPage);
    }
  else {
#line 493
    LogStorageP__locateLastRecord();
    }
}

# 340 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_ntoh_uint32(const void * source)
#line 340
{
  const uint8_t *base = source;

#line 342
  return ((((uint32_t )base[0] << 24) | (
  (uint32_t )base[1] << 16)) | (
  (uint32_t )base[2] << 8)) | base[3];
}

# 521 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
static inline at45page_t LogStorageP__locateCurrentPage(void )
#line 521
{
  return LogStorageP__firstPage + ((LogStorageP__lastPage - LogStorageP__firstPage) >> 1);
}

#line 552
static inline void LogStorageP__locateReadDone(void )
#line 552
{
  if (__nesc_ntoh_uint16(LogStorageP__metadata.magic.nxdata) == LogStorageP__PERSISTENT_MAGIC && LogStorageP__s[LogStorageP__client].wpos < __nesc_ntoh_uint32(LogStorageP__metadata.pos.nxdata)) {
    LogStorageP__crcPage(LogStorageP__locateCurrentPage());
    }
  else {
#line 556
    LogStorageP__locateLessThan();
    }
}










static inline void LogStorageP__locateFirstReadDone(void )
#line 569
{
  LogStorageP__crcPage(LogStorageP__lastPage);
}

#line 960
static inline void LogStorageP__At45db__readDone(error_t error)
#line 960
{
  if (LogStorageP__client != LogStorageP__NO_CLIENT) {
    if (error != SUCCESS) {
      LogStorageP__endRequest(FAIL);
      }
    else {
#line 965
      switch (LogStorageP__metaState) 
        {
          case LogStorageP__META_LOCATEFIRST: LogStorageP__locateFirstReadDone();
#line 967
          break;
          case LogStorageP__META_LOCATE: LogStorageP__locateReadDone();
#line 968
          break;
          case LogStorageP__META_LOCATELAST: LogStorageP__locateLastReadDone();
#line 969
          break;
          case LogStorageP__META_SEEK: LogStorageP__seekReadDone();
#line 970
          break;
          case LogStorageP__META_READ: LogStorageP__rmetadataReadDone();
#line 971
          break;
          case LogStorageP__META_IDLE: LogStorageP__readContinue();
#line 972
          break;
        }
      }
    }
}

# 173 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45db.nc"
inline static void At45dbP__At45db__readDone(error_t error){
#line 173
  LogStorageP__At45db__readDone(error);
#line 173
}
#line 173
# 208 "/home/ivan/Desktop/tinyos-main/tos/system/ArbiterP.nc"
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void )
#line 208
{
}

# 46 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void ){
#line 46
  /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted();
#line 46
}
#line 46
# 218 "/home/ivan/Desktop/tinyos-main/tos/system/ArbiterP.nc"
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 218
{
}

# 65 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceConfigure.nc"
inline static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x7f27b0a34410){
#line 65
    /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x7f27b0a34410);
#line 65
}
#line 65
# 67 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 68 "/home/ivan/Desktop/tinyos-main/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__qHead != /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY) {
        uint8_t id = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__qHead;

#line 72
        /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__qHead = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__resQ[/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__qHead];
        if (/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__qHead == /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY) {
          /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__qTail = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY;
          }
#line 75
        /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__resQ[id] = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 76
          id;

#line 76
          return __nesc_temp;
        }
      }
#line 78
    {
      unsigned char __nesc_temp = 
#line 78
      /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 60 "/home/ivan/Desktop/tinyos-main/tos/system/FcfsResourceQueueC.nc"
static inline bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__qHead == /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceQueue.nc"
inline static bool /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 111 "/home/ivan/Desktop/tinyos-main/tos/system/ArbiterP.nc"
static inline error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__release(uint8_t id)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    {
      if (/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state == /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__RES_BUSY && /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId == id) {
          if (/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Queue__isEmpty() == FALSE) {
              /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__reqResId = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Queue__dequeue();
              /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__NO_RES;
              /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__RES_GRANTING;
              /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask__postTask();
              /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
            }
          else {
              /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__default_owner_id;
              /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED;
              /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
              /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted();
            }
          {
            unsigned char __nesc_temp = 
#line 127
            SUCCESS;

            {
#line 127
              __nesc_atomic_end(__nesc_atomic); 
#line 127
              return __nesc_temp;
            }
          }
        }
    }
#line 131
    __nesc_atomic_end(__nesc_atomic); }
#line 130
  return FAIL;
}

# 1003 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
static inline error_t LogStorageP__Resource__default__release(uint8_t logId)
#line 1003
{
#line 1003
  return FAIL;
}

# 120 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t LogStorageP__Resource__release(uint8_t arg_0x7f27b0cd3810){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  switch (arg_0x7f27b0cd3810) {
#line 120
    case /*PacketParrotC.LogStorageC*/LogStorageC__0__LOG_ID:
#line 120
      __nesc_result = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__release(/*PacketParrotC.LogStorageC*/LogStorageC__0__RESOURCE_ID);
#line 120
      break;
#line 120
    default:
#line 120
      __nesc_result = LogStorageP__Resource__default__release(arg_0x7f27b0cd3810);
#line 120
      break;
#line 120
    }
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 79 "/home/ivan/Desktop/tinyos-main/tos/system/LedsP.nc"
static inline void LedsP__Leds__led0Off(void )
#line 79
{
  LedsP__Led0__set();
  ;
#line 81
  ;
}

# 61 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Leds.nc"
inline static void PacketParrotP__Leds__led0Off(void ){
#line 61
  LedsP__Leds__led0Off();
#line 61
}
#line 61
# 126 "PacketParrotP.nc"
static inline void PacketParrotP__LogWrite__eraseDone(error_t err)
#line 126
{
  if (err == SUCCESS) {
      PacketParrotP__m_busy = FALSE;
    }
  else {
    }

  PacketParrotP__Leds__led0Off();
}

# 995 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
static inline void LogStorageP__LogWrite__default__eraseDone(uint8_t logId, error_t error)
#line 995
{
}

# 100 "/home/ivan/Desktop/tinyos-main/tos/interfaces/LogWrite.nc"
inline static void LogStorageP__LogWrite__eraseDone(uint8_t arg_0x7f27b0cea020, error_t error){
#line 100
  switch (arg_0x7f27b0cea020) {
#line 100
    case /*PacketParrotC.LogStorageC*/LogStorageC__0__INTF_ID:
#line 100
      PacketParrotP__LogWrite__eraseDone(error);
#line 100
      break;
#line 100
    default:
#line 100
      LogStorageP__LogWrite__default__eraseDone(arg_0x7f27b0cea020, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 109 "/home/ivan/Desktop/tinyos-main/tos/system/LedsP.nc"
static inline void LedsP__Leds__led2Off(void )
#line 109
{
  LedsP__Led2__set();
  ;
#line 111
  ;
}

# 94 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Leds.nc"
inline static void PacketParrotP__Leds__led2Off(void ){
#line 94
  LedsP__Leds__led2Off();
#line 94
}
#line 94
# 153 "PacketParrotP.nc"
static inline void PacketParrotP__LogWrite__appendDone(void *buf, storage_len_t len, 
bool recordsLost, error_t err)
#line 154
{
  PacketParrotP__m_busy = FALSE;
  PacketParrotP__Leds__led2Off();
}

# 994 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
static inline void LogStorageP__LogWrite__default__appendDone(uint8_t logId, void *buf, storage_len_t l, bool rLost, error_t error)
#line 994
{
}

# 68 "/home/ivan/Desktop/tinyos-main/tos/interfaces/LogWrite.nc"
inline static void LogStorageP__LogWrite__appendDone(uint8_t arg_0x7f27b0cea020, void * buf, storage_len_t len, bool recordsLost, error_t error){
#line 68
  switch (arg_0x7f27b0cea020) {
#line 68
    case /*PacketParrotC.LogStorageC*/LogStorageC__0__INTF_ID:
#line 68
      PacketParrotP__LogWrite__appendDone(buf, len, recordsLost, error);
#line 68
      break;
#line 68
    default:
#line 68
      LogStorageP__LogWrite__default__appendDone(arg_0x7f27b0cea020, buf, len, recordsLost, error);
#line 68
      break;
#line 68
    }
#line 68
}
#line 68
# 162 "PacketParrotP.nc"
static inline void PacketParrotP__LogWrite__syncDone(error_t err)
#line 162
{
}

# 996 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
static inline void LogStorageP__LogWrite__default__syncDone(uint8_t logId, error_t error)
#line 996
{
}

# 118 "/home/ivan/Desktop/tinyos-main/tos/interfaces/LogWrite.nc"
inline static void LogStorageP__LogWrite__syncDone(uint8_t arg_0x7f27b0cea020, error_t error){
#line 118
  switch (arg_0x7f27b0cea020) {
#line 118
    case /*PacketParrotC.LogStorageC*/LogStorageC__0__INTF_ID:
#line 118
      PacketParrotP__LogWrite__syncDone(error);
#line 118
      break;
#line 118
    default:
#line 118
      LogStorageP__LogWrite__default__syncDone(arg_0x7f27b0cea020, error);
#line 118
      break;
#line 118
    }
#line 118
}
#line 118
# 56 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )59U &= ~(1 << 2);
}

# 41 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr();
#line 41
}
#line 41
# 74 "/home/ivan/Desktop/tinyos-main/tos/system/LedsP.nc"
static inline void LedsP__Leds__led0On(void )
#line 74
{
  LedsP__Led0__clr();
  ;
#line 76
  ;
}

# 56 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Leds.nc"
inline static void PacketParrotP__Leds__led0On(void ){
#line 56
  LedsP__Leds__led0On();
#line 56
}
#line 56
# 379 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
static inline error_t LogStorageP__LogWrite__erase(uint8_t id)
#line 379
{
  return LogStorageP__newRequest(LogStorageP__R_ERASE, id, (void *)0, 0);
}

# 93 "/home/ivan/Desktop/tinyos-main/tos/interfaces/LogWrite.nc"
inline static error_t PacketParrotP__LogWrite__erase(void ){
#line 93
  unsigned char __nesc_result;
#line 93

#line 93
  __nesc_result = LogStorageP__LogWrite__erase(/*PacketParrotC.LogStorageC*/LogStorageC__0__INTF_ID);
#line 93

#line 93
  return __nesc_result;
#line 93
}
#line 93
# 56 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )59U &= ~(1 << 1);
}

# 41 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__clr();
#line 41
}
#line 41
# 89 "/home/ivan/Desktop/tinyos-main/tos/system/LedsP.nc"
static inline void LedsP__Leds__led1On(void )
#line 89
{
  LedsP__Led1__clr();
  ;
#line 91
  ;
}

# 72 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Leds.nc"
inline static void PacketParrotP__Leds__led1On(void ){
#line 72
  LedsP__Leds__led1On();
#line 72
}
#line 72
# 78 "/home/ivan/Desktop/tinyos-main/tos/interfaces/AMPacket.nc"
inline static am_addr_t PacketParrotP__AMPacket__destination(message_t * amsg){
#line 78
  unsigned short __nesc_result;
#line 78

#line 78
  __nesc_result = CC2420ActiveMessageP__AMPacket__destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
#line 147
inline static am_id_t PacketParrotP__AMPacket__type(message_t * amsg){
#line 147
  unsigned char __nesc_result;
#line 147

#line 147
  __nesc_result = CC2420ActiveMessageP__AMPacket__type(amsg);
#line 147

#line 147
  return __nesc_result;
#line 147
}
#line 147
# 80 "/home/ivan/Desktop/tinyos-main/tos/interfaces/AMSend.nc"
inline static error_t PacketParrotP__AMSend__send(uint8_t arg_0x7f27b1a61020, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = CC2420ActiveMessageP__AMSend__send(arg_0x7f27b1a61020, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 93 "PacketParrotP.nc"
static inline void PacketParrotP__LogRead__readDone(void *buf, storage_len_t len, error_t err)
#line 93
{
  if (len == sizeof(PacketParrotP__logentry_t ) && buf == &PacketParrotP__m_entry) {
      PacketParrotP__AMSend__send(PacketParrotP__AMPacket__type(& PacketParrotP__m_entry.msg), PacketParrotP__AMPacket__destination(& PacketParrotP__m_entry.msg), & PacketParrotP__m_entry.msg, __nesc_ntoh_uint8(PacketParrotP__m_entry.len.nxdata));
      PacketParrotP__Leds__led1On();
    }
  else {
      if (PacketParrotP__LogWrite__erase() != SUCCESS) {
        }

      PacketParrotP__Leds__led0On();
    }
}

# 997 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
static inline void LogStorageP__LogRead__default__readDone(uint8_t logId, void *buf, storage_len_t l, error_t error)
#line 997
{
}

# 75 "/home/ivan/Desktop/tinyos-main/tos/interfaces/LogRead.nc"
inline static void LogStorageP__LogRead__readDone(uint8_t arg_0x7f27b0cecb20, void * buf, storage_len_t len, error_t error){
#line 75
  switch (arg_0x7f27b0cecb20) {
#line 75
    case /*PacketParrotC.LogStorageC*/LogStorageC__0__INTF_ID:
#line 75
      PacketParrotP__LogRead__readDone(buf, len, error);
#line 75
      break;
#line 75
    default:
#line 75
      LogStorageP__LogRead__default__readDone(arg_0x7f27b0cecb20, buf, len, error);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 173 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline uint8_t CC2420CsmaP__Send__maxPayloadLength(void )
#line 173
{
  return 28;
}

# 112 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Send.nc"
inline static uint8_t UniqueSendP__SubSend__maxPayloadLength(void ){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  __nesc_result = CC2420CsmaP__Send__maxPayloadLength();
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
# 95 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline uint8_t UniqueSendP__Send__maxPayloadLength(void )
#line 95
{
  return UniqueSendP__SubSend__maxPayloadLength();
}

# 112 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Send.nc"
inline static uint8_t CC2420TinyosNetworkP__SubSend__maxPayloadLength(void ){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  __nesc_result = UniqueSendP__Send__maxPayloadLength();
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
# 90 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline uint8_t CC2420TinyosNetworkP__ActiveSend__maxPayloadLength(void )
#line 90
{
  return CC2420TinyosNetworkP__SubSend__maxPayloadLength();
}

# 112 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Send.nc"
inline static uint8_t CC2420ActiveMessageP__SubSend__maxPayloadLength(void ){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  __nesc_result = CC2420TinyosNetworkP__ActiveSend__maxPayloadLength();
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
# 202 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline uint8_t CC2420ActiveMessageP__Packet__maxPayloadLength(void )
#line 202
{
  return CC2420ActiveMessageP__SubSend__maxPayloadLength();
}

# 310 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline uint16_t CC2420ControlP__CC2420Config__getPanAddr(void )
#line 310
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 311
    {
      unsigned short __nesc_temp = 
#line 311
      CC2420ControlP__m_pan;

      {
#line 311
        __nesc_atomic_end(__nesc_atomic); 
#line 311
        return __nesc_temp;
      }
    }
#line 313
    __nesc_atomic_end(__nesc_atomic); }
}

# 77 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static uint16_t CC2420ActiveMessageP__CC2420Config__getPanAddr(void ){
#line 77
  unsigned short __nesc_result;
#line 77

#line 77
  __nesc_result = CC2420ControlP__CC2420Config__getPanAddr();
#line 77

#line 77
  return __nesc_result;
#line 77
}
#line 77
# 53 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceQueue.nc"
inline static bool CC2420TinyosNetworkP__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 215 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline error_t CC2420TinyosNetworkP__Resource__immediateRequest(uint8_t id)
#line 215
{
  if (CC2420TinyosNetworkP__resource_owner == id) {
#line 216
    return EALREADY;
    }
  if (CC2420TinyosNetworkP__TINYOS_N_NETWORKS > 1) {
      if (CC2420TinyosNetworkP__resource_owner == CC2420TinyosNetworkP__OWNER_NONE && CC2420TinyosNetworkP__Queue__isEmpty()) {
          CC2420TinyosNetworkP__resource_owner = id;
          return SUCCESS;
        }
      return FAIL;
    }
  else 
#line 224
    {
      CC2420TinyosNetworkP__resource_owner = id;
      return SUCCESS;
    }
}

# 97 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t CC2420ActiveMessageP__RadioResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = CC2420TinyosNetworkP__Resource__immediateRequest(CC2420ActiveMessageC__CC2420_AM_SEND_ID);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 291 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__SendNotifier__default__aboutToSend(am_id_t amId, am_addr_t addr, message_t *msg)
#line 291
{
}

# 59 "/home/ivan/Desktop/tinyos-main/tos/interfaces/SendNotifier.nc"
inline static void CC2420ActiveMessageP__SendNotifier__aboutToSend(am_id_t arg_0x7f27b0d8bb30, am_addr_t dest, message_t * msg){
#line 59
    CC2420ActiveMessageP__SendNotifier__default__aboutToSend(arg_0x7f27b0d8bb30, dest, msg);
#line 59
}
#line 59
# 75 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Send.nc"
inline static error_t CC2420ActiveMessageP__SubSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = CC2420TinyosNetworkP__ActiveSend__send(msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 128 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline void CC2420PacketP__CC2420Packet__setNetwork(message_t * p_msg, uint8_t networkId)
#line 128
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    *CC2420PacketP__getNetwork(p_msg) = networkId;
#line 131
    __nesc_atomic_end(__nesc_atomic); }
}

# 77 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Packet.nc"
inline static void CC2420TinyosNetworkP__CC2420Packet__setNetwork(message_t * p_msg, uint8_t networkId){
#line 77
  CC2420PacketP__CC2420Packet__setNetwork(p_msg, networkId);
#line 77
}
#line 77
# 81 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline int CC2420PacketP__getAddressLength(int type)
#line 81
{
  switch (type) {
      case IEEE154_ADDR_SHORT: return 2;
      case IEEE154_ADDR_EXT: return 8;
      case IEEE154_ADDR_NONE: return 0;
      default: return -100;
    }
}

# 297 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_leuint8(void * target, uint8_t value)
#line 297
{
  uint8_t *base = target;

#line 299
  base[0] = value;
  return value;
}

#line 347
static __inline  uint32_t __nesc_hton_uint32(void * target, uint32_t value)
#line 347
{
  uint8_t *base = target;

#line 349
  base[3] = value;
  base[2] = value >> 8;
  base[1] = value >> 16;
  base[0] = value >> 24;
  return value;
}

#line 286
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

#line 303
static __inline  int8_t __nesc_hton_int8(void * target, int8_t value)
#line 303
{
#line 303
  __nesc_hton_uint8(target, value);
#line 303
  return value;
}

#line 327
static __inline  uint16_t __nesc_hton_leuint16(void * target, uint16_t value)
#line 327
{
  uint8_t *base = target;

#line 329
  base[0] = value;
  base[1] = value >> 8;
  return value;
}

#line 322
static __inline  uint16_t __nesc_ntoh_leuint16(const void * source)
#line 322
{
  const uint8_t *base = source;

#line 324
  return ((uint16_t )base[1] << 8) | base[0];
}

# 547 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__send(message_t * p_msg, bool cca)
#line 547
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 548
    {
      if (CC2420TransmitP__m_state == CC2420TransmitP__S_CANCEL) {
          {
            unsigned char __nesc_temp = 
#line 550
            ECANCEL;

            {
#line 550
              __nesc_atomic_end(__nesc_atomic); 
#line 550
              return __nesc_temp;
            }
          }
        }
#line 553
      if (CC2420TransmitP__m_state != CC2420TransmitP__S_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 554
            FAIL;

            {
#line 554
              __nesc_atomic_end(__nesc_atomic); 
#line 554
              return __nesc_temp;
            }
          }
        }


      CC2420TransmitP__m_state = CC2420TransmitP__S_LOAD;
      CC2420TransmitP__m_cca = cca;
      CC2420TransmitP__m_msg = p_msg;
      CC2420TransmitP__totalCcaChecks = 0;
    }
#line 564
    __nesc_atomic_end(__nesc_atomic); }

  if (CC2420TransmitP__acquireSpiResource() == SUCCESS) {
      CC2420TransmitP__loadTXFIFO();
    }

  return SUCCESS;
}

#line 192
static inline error_t CC2420TransmitP__Send__send(message_t * p_msg, bool useCca)
#line 192
{
  return CC2420TransmitP__send(p_msg, useCca);
}

# 51 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
inline static error_t CC2420CsmaP__CC2420Transmit__send(message_t * p_msg, bool useCca){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = CC2420TransmitP__Send__send(p_msg, useCca);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 292 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_leuint8(const void * source)
#line 292
{
  const uint8_t *base = source;

#line 294
  return base[0];
}

# 301 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__RadioBackoff__default__requestCca(am_id_t id, 
message_t *msg)
#line 302
{
}

# 95 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420ActiveMessageP__RadioBackoff__requestCca(am_id_t arg_0x7f27b0d8a700, message_t * msg){
#line 95
    CC2420ActiveMessageP__RadioBackoff__default__requestCca(arg_0x7f27b0d8a700, msg);
#line 95
}
#line 95
# 250 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__SubBackoff__requestCca(message_t *msg)
#line 250
{

  CC2420ActiveMessageP__RadioBackoff__requestCca(__nesc_ntoh_leuint8(((cc2420_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t )))->type.nxdata), msg);
}

# 95 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP__RadioBackoff__requestCca(message_t * msg){
#line 95
  CC2420ActiveMessageP__SubBackoff__requestCca(msg);
#line 95
}
#line 95
# 111 "/home/ivan/Desktop/tinyos-main/tos/system/StateImplP.nc"
static inline void StateImplP__State__forceState(uint8_t id, uint8_t reqState)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    StateImplP__state[id] = reqState;
#line 112
    __nesc_atomic_end(__nesc_atomic); }
}

# 51 "/home/ivan/Desktop/tinyos-main/tos/interfaces/State.nc"
inline static void CC2420CsmaP__SplitControlState__forceState(uint8_t reqState){
#line 51
  StateImplP__State__forceState(1U, reqState);
#line 51
}
#line 51
#line 66
inline static bool CC2420CsmaP__SplitControlState__isState(uint8_t myState){
#line 66
  unsigned char __nesc_result;
#line 66

#line 66
  __nesc_result = StateImplP__State__isState(1U, myState);
#line 66

#line 66
  return __nesc_result;
#line 66
}
#line 66
# 152 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline cc2420_metadata_t *CC2420PacketP__CC2420PacketBody__getMetadata(message_t *msg)
#line 152
{
  return (cc2420_metadata_t *)msg->metadata;
}

# 53 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420CsmaP__CC2420PacketBody__getMetadata(message_t * msg){
#line 53
  nx_struct cc2420_metadata_t *__nesc_result;
#line 53

#line 53
  __nesc_result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 137 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline cc2420_header_t * CC2420PacketP__CC2420PacketBody__getHeader(message_t * msg)
#line 137
{
  return (cc2420_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
}

# 42 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420CsmaP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 122 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline error_t CC2420CsmaP__Send__send(message_t *p_msg, uint8_t len)
#line 122
{
  unsigned char *__nesc_temp43;
  unsigned char *__nesc_temp42;
#line 124
  cc2420_header_t *header = CC2420CsmaP__CC2420PacketBody__getHeader(p_msg);
  cc2420_metadata_t *metadata = CC2420CsmaP__CC2420PacketBody__getMetadata(p_msg);

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 127
    {
      if (!CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STARTED)) {
          {
            unsigned char __nesc_temp = 
#line 129
            FAIL;

            {
#line 129
              __nesc_atomic_end(__nesc_atomic); 
#line 129
              return __nesc_temp;
            }
          }
        }
#line 132
      CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_TRANSMITTING);
      CC2420CsmaP__m_msg = p_msg;
    }
#line 134
    __nesc_atomic_end(__nesc_atomic); }








  (__nesc_temp42 = header->fcf.nxdata, __nesc_hton_leuint16(__nesc_temp42, __nesc_ntoh_leuint16(__nesc_temp42) & (((1 << IEEE154_FCF_ACK_REQ) | (
  0x3 << IEEE154_FCF_SRC_ADDR_MODE)) | (
  0x3 << IEEE154_FCF_DEST_ADDR_MODE))));

  (__nesc_temp43 = header->fcf.nxdata, __nesc_hton_leuint16(__nesc_temp43, __nesc_ntoh_leuint16(__nesc_temp43) | ((IEEE154_TYPE_DATA << IEEE154_FCF_FRAME_TYPE) | (
  1 << IEEE154_FCF_INTRAPAN))));

  __nesc_hton_int8(metadata->ack.nxdata, FALSE);
  __nesc_hton_uint8(metadata->rssi.nxdata, 0);
  __nesc_hton_uint8(metadata->lqi.nxdata, 0);

  __nesc_hton_uint32(metadata->timestamp.nxdata, CC2420_INVALID_TIMESTAMP);

  CC2420CsmaP__ccaOn = TRUE;
  CC2420CsmaP__RadioBackoff__requestCca(CC2420CsmaP__m_msg);

  CC2420CsmaP__CC2420Transmit__send(CC2420CsmaP__m_msg, CC2420CsmaP__ccaOn);
  return SUCCESS;
}

# 75 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Send.nc"
inline static error_t UniqueSendP__SubSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = CC2420CsmaP__Send__send(msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 42 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * UniqueSendP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 45 "/home/ivan/Desktop/tinyos-main/tos/interfaces/State.nc"
inline static error_t UniqueSendP__State__requestState(uint8_t reqState){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = StateImplP__State__requestState(2U, reqState);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 75 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline error_t UniqueSendP__Send__send(message_t *msg, uint8_t len)
#line 75
{
  error_t error;

#line 77
  if (UniqueSendP__State__requestState(UniqueSendP__S_SENDING) == SUCCESS) {
      __nesc_hton_leuint8(UniqueSendP__CC2420PacketBody__getHeader(msg)->dsn.nxdata, UniqueSendP__localSendId++);

      if ((error = UniqueSendP__SubSend__send(msg, len)) != SUCCESS) {
          UniqueSendP__State__toIdle();
        }

      return error;
    }

  return EBUSY;
}

# 75 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Send.nc"
inline static error_t CC2420TinyosNetworkP__SubSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = UniqueSendP__Send__send(msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 97 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t CC2420TransmitP__SpiResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = CC2420SpiP__Resource__immediateRequest(/*CC2420TransmitC.Spi*/CC2420SpiC__3__CLIENT_ID);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 45 "/home/ivan/Desktop/tinyos-main/tos/interfaces/State.nc"
inline static error_t CC2420SpiP__WorkingState__requestState(uint8_t reqState){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = StateImplP__State__requestState(0U, reqState);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 128 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
inline static bool Atm128SpiP__ResourceArbiter__isOwner(uint8_t arg_0x7f27b13fca60){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__isOwner(arg_0x7f27b13fca60);
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 421 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline bool Atm128SpiP__Resource__isOwner(uint8_t id)
#line 421
{
  return Atm128SpiP__ResourceArbiter__isOwner(id);
}

# 128 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
inline static bool HplCC2420SpiP__SubResource__isOwner(void ){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = Atm128SpiP__Resource__isOwner(0U);
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 83 "/home/ivan/Desktop/tinyos-main/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline bool HplCC2420SpiP__Resource__isOwner(void )
{
  return HplCC2420SpiP__SubResource__isOwner();
}

# 128 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
inline static bool CC2420SpiP__SpiResource__isOwner(void ){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = HplCC2420SpiP__Resource__isOwner();
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 56 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )56U &= ~(1 << 0);
}

# 41 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void HplCC2420SpiP__SS__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr();
#line 41
}
#line 41
# 61 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )55U |= 1 << 0;
}

# 46 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void HplCC2420SpiP__SS__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput();
#line 46
}
#line 46
# 171 "/home/ivan/Desktop/tinyos-main/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 171
{
}

# 59 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x7f27b1322020){
#line 59
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(arg_0x7f27b1322020);
#line 59
}
#line 59
# 169 "/home/ivan/Desktop/tinyos-main/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id)
#line 169
{
}

# 61 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__immediateRequested(uint8_t arg_0x7f27b1324840){
#line 61
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(arg_0x7f27b1324840);
#line 61
}
#line 61
# 84 "/home/ivan/Desktop/tinyos-main/tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(uint8_t id)
#line 84
{
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__immediateRequested(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
  /* atomic removed: atomic calls only */
#line 86
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE) {
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_BUSY;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId = id;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
        {
          unsigned char __nesc_temp = 
#line 91
          SUCCESS;

#line 91
          return __nesc_temp;
        }
      }
#line 93
    {
      unsigned char __nesc_temp = 
#line 93
      FAIL;

#line 93
      return __nesc_temp;
    }
  }
}

# 97 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t Atm128SpiP__ResourceArbiter__immediateRequest(uint8_t arg_0x7f27b13fca60){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(arg_0x7f27b13fca60);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 394 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline error_t Atm128SpiP__Resource__immediateRequest(uint8_t id)
#line 394
{
  error_t result = Atm128SpiP__ResourceArbiter__immediateRequest(id);

#line 396
  if (result == SUCCESS) {
      Atm128SpiP__startSpi();
    }
  return result;
}

# 97 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t HplCC2420SpiP__SubResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = Atm128SpiP__Resource__immediateRequest(0U);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 56 "/home/ivan/Desktop/tinyos-main/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline error_t HplCC2420SpiP__Resource__immediateRequest(void )
{
  error_t error = HplCC2420SpiP__SubResource__immediateRequest();

#line 59
  if (error == SUCCESS) 
    {
      HplCC2420SpiP__SS__makeOutput();
      HplCC2420SpiP__SS__clr();
    }
  return error;
}

# 97 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP__SpiResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = HplCC2420SpiP__Resource__immediateRequest();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 120 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/McuSleepC.nc"
static inline void McuSleepC__McuPowerState__update(void )
#line 120
{
}

# 52 "/home/ivan/Desktop/tinyos-main/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128SpiP__Mcu__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 173 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setMasterBit(bool isMaster)
#line 173
{
  if (isMaster) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 4;
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 4);
    }
}

# 46 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__SS__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput();
#line 46
}
#line 46
# 61 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )55U |= 1 << 1;
}

# 46 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__SCK__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput();
#line 46
}
#line 46
# 59 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )55U &= ~(1 << 3);
}

# 44 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__MISO__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput();
#line 44
}
#line 44
# 61 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )55U |= 1 << 2;
}

# 46 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__MOSI__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput();
#line 46
}
#line 46
# 96 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__initMaster(void )
#line 96
{
  HplAtm128SpiP__MOSI__makeOutput();
  HplAtm128SpiP__MISO__makeInput();
  HplAtm128SpiP__SCK__makeOutput();
  HplAtm128SpiP__SS__makeOutput();
  HplAtm128SpiP__SPI__setMasterBit(TRUE);
}

# 83 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__initMaster(void ){
#line 83
  HplAtm128SpiP__SPI__initMaster();
#line 83
}
#line 83
# 186 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setClockPolarity(bool highWhenIdle)
#line 186
{
  if (highWhenIdle) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 3;
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 3);
    }
}

# 125 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setClockPolarity(bool highWhenIdle){
#line 125
  HplAtm128SpiP__SPI__setClockPolarity(highWhenIdle);
#line 125
}
#line 125
# 200 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setClockPhase(bool sampleOnTrailing)
#line 200
{
  if (sampleOnTrailing) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 2;
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 2);
    }
}

# 128 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setClockPhase(bool sampleOnTrailing){
#line 128
  HplAtm128SpiP__SPI__setClockPhase(sampleOnTrailing);
#line 128
}
#line 128
# 230 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool on)
#line 230
{
  if (on) {
      * (volatile uint8_t *)(0x0E + 0x20) |= 1 << 0;
    }
  else {
      * (volatile uint8_t *)(0x0E + 0x20) &= ~(1 << 0);
    }
}

# 141 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setMasterDoubleSpeed(bool on){
#line 141
  HplAtm128SpiP__SPI__setMasterDoubleSpeed(on);
#line 141
}
#line 141
# 217 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setClock(uint8_t v)
#line 217
{
  v &= (1 << 1) | (1 << 0);
  * (volatile uint8_t *)(0x0D + 0x20) = (* (volatile uint8_t *)(0x0D + 0x20) & ~((1 << 1) | (1 << 0))) | v;
}

# 131 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setClock(uint8_t speed){
#line 131
  HplAtm128SpiP__SPI__setClock(speed);
#line 131
}
#line 131
# 118 "/home/ivan/Desktop/tinyos-main/tos/system/StateImplP.nc"
static inline void StateImplP__State__toIdle(uint8_t id)
#line 118
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 119
    StateImplP__state[id] = StateImplP__S_IDLE;
#line 119
    __nesc_atomic_end(__nesc_atomic); }
}

# 56 "/home/ivan/Desktop/tinyos-main/tos/interfaces/State.nc"
inline static void CC2420SpiP__WorkingState__toIdle(void ){
#line 56
  StateImplP__State__toIdle(0U);
#line 56
}
#line 56
# 88 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t CC2420TransmitP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420TransmitC.Spi*/CC2420SpiC__3__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 64 "/home/ivan/Desktop/tinyos-main/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 64
{
  /* atomic removed: atomic calls only */
#line 65
  {
    unsigned char __nesc_temp = 
#line 65
    /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[id] != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY || /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail == id;

#line 65
    return __nesc_temp;
  }
}

#line 82
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(resource_client_id_t id)
#line 82
{
  /* atomic removed: atomic calls only */
#line 83
  {
    if (!/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(id)) {
        if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead = id;
          }
        else {
#line 88
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail] = id;
          }
#line 89
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail = id;
        {
          unsigned char __nesc_temp = 
#line 90
          SUCCESS;

#line 90
          return __nesc_temp;
        }
      }
#line 92
    {
      unsigned char __nesc_temp = 
#line 92
      EBUSY;

#line 92
      return __nesc_temp;
    }
  }
}

# 79 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceQueue.nc"
inline static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 67 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 167 "/home/ivan/Desktop/tinyos-main/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 167
{
}

# 53 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(uint8_t arg_0x7f27b1324840){
#line 53
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(arg_0x7f27b1324840);
#line 53
}
#line 53
# 71 "/home/ivan/Desktop/tinyos-main/tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(uint8_t id)
#line 71
{
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
  /* atomic removed: atomic calls only */
#line 73
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE) {
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__reqResId = id;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
        {
          unsigned char __nesc_temp = 
#line 78
          SUCCESS;

#line 78
          return __nesc_temp;
        }
      }
#line 80
    {
      unsigned char __nesc_temp = 
#line 80
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__enqueue(id);

#line 80
      return __nesc_temp;
    }
  }
}

# 88 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t Atm128SpiP__ResourceArbiter__request(uint8_t arg_0x7f27b13fca60){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(arg_0x7f27b13fca60);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 90 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ArbiterInfo.nc"
inline static bool Atm128SpiP__ArbiterInfo__inUse(void ){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__inUse();
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 402 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline error_t Atm128SpiP__Resource__request(uint8_t id)
#line 402
{
  /* atomic removed: atomic calls only */
#line 403
  {
    if (!Atm128SpiP__ArbiterInfo__inUse()) {
        Atm128SpiP__startSpi();
      }
  }
  return Atm128SpiP__ResourceArbiter__request(id);
}

# 88 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t HplCC2420SpiP__SubResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = Atm128SpiP__Resource__request(0U);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 51 "/home/ivan/Desktop/tinyos-main/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline error_t HplCC2420SpiP__Resource__request(void )
{
  return HplCC2420SpiP__SubResource__request();
}

# 88 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = HplCC2420SpiP__Resource__request();
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 63 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420TransmitP__TXCTRL__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_TXCTRL, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 116 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__write(uint8_t d)
#line 116
{
#line 116
  * (volatile uint8_t *)(0x0F + 0x20) = d;
}

# 103 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__write(uint8_t data){
#line 103
  HplAtm128SpiP__SPI__write(data);
#line 103
}
#line 103
# 124 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline bool HplAtm128SpiP__SPI__isInterruptPending(void )
#line 124
{
  return (* (volatile uint8_t *)(0x0E + 0x20) & (1 << 7)) != 0;
}

# 136 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/Atm128Spi.nc"
inline static bool Atm128SpiP__Spi__isInterruptPending(void ){
#line 136
  unsigned char __nesc_result;
#line 136

#line 136
  __nesc_result = HplAtm128SpiP__SPI__isInterruptPending();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 70 "/home/ivan/Desktop/tinyos-main/tos/interfaces/SpiPacket.nc"
inline static error_t CC2420SpiP__SpiPacket__send(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = Atm128SpiP__SpiPacket__send(txBuf, rxBuf, len);
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 45 "/home/ivan/Desktop/tinyos-main/tos/interfaces/SpiByte.nc"
inline static uint8_t CC2420SpiP__SpiByte__write(uint8_t tx){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = Atm128SpiP__SpiByte__write(tx);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 126 "/home/ivan/Desktop/tinyos-main/tos/system/StateImplP.nc"
static inline bool StateImplP__State__isIdle(uint8_t id)
#line 126
{
  return StateImplP__State__isState(id, StateImplP__S_IDLE);
}

# 61 "/home/ivan/Desktop/tinyos-main/tos/interfaces/State.nc"
inline static bool CC2420SpiP__WorkingState__isIdle(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = StateImplP__State__isIdle(0U);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 214 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline cc2420_status_t CC2420SpiP__Fifo__write(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 215
{

  uint8_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 219
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 221
            status;

            {
#line 221
              __nesc_atomic_end(__nesc_atomic); 
#line 221
              return __nesc_temp;
            }
          }
        }
    }
#line 225
    __nesc_atomic_end(__nesc_atomic); }
#line 225
  CC2420SpiP__m_addr = addr;

  status = CC2420SpiP__SpiByte__write(CC2420SpiP__m_addr);
  CC2420SpiP__SpiPacket__send(data, (void *)0, len);

  return status;
}

# 82 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static cc2420_status_t CC2420TransmitP__TXFIFO__write(uint8_t * data, uint8_t length){
#line 82
  unsigned char __nesc_result;
#line 82

#line 82
  __nesc_result = CC2420SpiP__Fifo__write(CC2420_TXFIFO, data, length);
#line 82

#line 82
  return __nesc_result;
#line 82
}
#line 82
# 67 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t Atm128SpiP__zeroTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(Atm128SpiP__zeroTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 64 "/home/ivan/Desktop/tinyos-main/tos/system/FcfsResourceQueueC.nc"
static inline bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 64
{
  /* atomic removed: atomic calls only */
#line 65
  {
    unsigned char __nesc_temp = 
#line 65
    /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[id] != /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY || /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qTail == id;

#line 65
    return __nesc_temp;
  }
}

#line 82
static inline error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id)
#line 82
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 83
    {
      if (!/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(id)) {
          if (/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead == /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY) {
            /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead = id;
            }
          else {
#line 88
            /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qTail] = id;
            }
#line 89
          /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qTail = id;
          {
            unsigned char __nesc_temp = 
#line 90
            SUCCESS;

            {
#line 90
              __nesc_atomic_end(__nesc_atomic); 
#line 90
              return __nesc_temp;
            }
          }
        }
#line 92
      {
        unsigned char __nesc_temp = 
#line 92
        EBUSY;

        {
#line 92
          __nesc_atomic_end(__nesc_atomic); 
#line 92
          return __nesc_temp;
        }
      }
    }
#line 95
    __nesc_atomic_end(__nesc_atomic); }
}

# 79 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceQueue.nc"
inline static error_t CC2420TinyosNetworkP__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 67 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420TinyosNetworkP__grantTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420TinyosNetworkP__grantTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 199 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline error_t CC2420TinyosNetworkP__Resource__request(uint8_t id)
#line 199
{

  CC2420TinyosNetworkP__grantTask__postTask();

  if (CC2420TinyosNetworkP__TINYOS_N_NETWORKS > 1) {
      return CC2420TinyosNetworkP__Queue__enqueue(id);
    }
  else 
#line 205
    {
      if (id == CC2420TinyosNetworkP__resource_owner) {
          return EALREADY;
        }
      else 
#line 208
        {
          CC2420TinyosNetworkP__next_owner = id;
          return SUCCESS;
        }
    }
}

# 88 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t CC2420ActiveMessageP__RadioResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420TinyosNetworkP__Resource__request(CC2420ActiveMessageC__CC2420_AM_SEND_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 133 "/home/ivan/Desktop/tinyos-main/tos/system/ArbiterP.nc"
static inline error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void )
#line 133
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 134
    {
      if (/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId == /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__default_owner_id) {
          if (/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state == /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__RES_GRANTING) {
              /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask__postTask();
              {
                unsigned char __nesc_temp = 
#line 138
                SUCCESS;

                {
#line 138
                  __nesc_atomic_end(__nesc_atomic); 
#line 138
                  return __nesc_temp;
                }
              }
            }
          else {
#line 140
            if (/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state == /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__RES_IMM_GRANTING) {
                /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__reqResId;
                /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__RES_BUSY;
                {
                  unsigned char __nesc_temp = 
#line 143
                  SUCCESS;

                  {
#line 143
                    __nesc_atomic_end(__nesc_atomic); 
#line 143
                    return __nesc_temp;
                  }
                }
              }
            }
        }
    }
#line 149
    __nesc_atomic_end(__nesc_atomic); }
#line 147
  return FAIL;
}

#line 210
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested(void )
#line 210
{
  /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release();
}

# 73 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void ){
#line 73
  /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested();
#line 73
}
#line 73
# 64 "/home/ivan/Desktop/tinyos-main/tos/system/FcfsResourceQueueC.nc"
static inline bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 64
{
  /* atomic removed: atomic calls only */
#line 65
  {
    unsigned char __nesc_temp = 
#line 65
    /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__resQ[id] != /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY || /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__qTail == id;

#line 65
    return __nesc_temp;
  }
}

#line 82
static inline error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__enqueue(resource_client_id_t id)
#line 82
{
  /* atomic removed: atomic calls only */
#line 83
  {
    if (!/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEnqueued(id)) {
        if (/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__qHead == /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY) {
          /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__qHead = id;
          }
        else {
#line 88
          /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__resQ[/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__qTail] = id;
          }
#line 89
        /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__qTail = id;
        {
          unsigned char __nesc_temp = 
#line 90
          SUCCESS;

#line 90
          return __nesc_temp;
        }
      }
#line 92
    {
      unsigned char __nesc_temp = 
#line 92
      EBUSY;

#line 92
      return __nesc_temp;
    }
  }
}

# 79 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceQueue.nc"
inline static error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 204 "/home/ivan/Desktop/tinyos-main/tos/system/ArbiterP.nc"
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 204
{
}

# 53 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceRequested.nc"
inline static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(uint8_t arg_0x7f27b0a36020){
#line 53
    /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(arg_0x7f27b0a36020);
#line 53
}
#line 53
# 77 "/home/ivan/Desktop/tinyos-main/tos/system/ArbiterP.nc"
static inline error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__request(uint8_t id)
#line 77
{
  /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 79
    {
      if (/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state == /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED) {
          /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__RES_GRANTING;
          /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__reqResId = id;
        }
      else {
#line 84
        if (/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__reqResId == id) {
            {
              unsigned char __nesc_temp = 
#line 85
              SUCCESS;

              {
#line 85
                __nesc_atomic_end(__nesc_atomic); 
#line 85
                return __nesc_temp;
              }
            }
          }
        else 
#line 87
          {
            unsigned char __nesc_temp = 
#line 87
            /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Queue__enqueue(id);

            {
#line 87
              __nesc_atomic_end(__nesc_atomic); 
#line 87
              return __nesc_temp;
            }
          }
        }
    }
#line 91
    __nesc_atomic_end(__nesc_atomic); }
#line 89
  /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested();
  return SUCCESS;
}

# 1002 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
static inline error_t LogStorageP__Resource__default__request(uint8_t logId)
#line 1002
{
#line 1002
  return SUCCESS;
}

# 88 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t LogStorageP__Resource__request(uint8_t arg_0x7f27b0cd3810){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  switch (arg_0x7f27b0cd3810) {
#line 88
    case /*PacketParrotC.LogStorageC*/LogStorageC__0__LOG_ID:
#line 88
      __nesc_result = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__request(/*PacketParrotC.LogStorageC*/LogStorageC__0__RESOURCE_ID);
#line 88
      break;
#line 88
    default:
#line 88
      __nesc_result = LogStorageP__Resource__default__request(arg_0x7f27b0cd3810);
#line 88
      break;
#line 88
    }
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 159 "PacketParrotP.nc"
static inline void PacketParrotP__LogRead__seekDone(error_t err)
#line 159
{
}

# 998 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
static inline void LogStorageP__LogRead__default__seekDone(uint8_t logId, error_t error)
#line 998
{
}

# 115 "/home/ivan/Desktop/tinyos-main/tos/interfaces/LogRead.nc"
inline static void LogStorageP__LogRead__seekDone(uint8_t arg_0x7f27b0cecb20, error_t error){
#line 115
  switch (arg_0x7f27b0cecb20) {
#line 115
    case /*PacketParrotC.LogStorageC*/LogStorageC__0__INTF_ID:
#line 115
      PacketParrotP__LogRead__seekDone(error);
#line 115
      break;
#line 115
    default:
#line 115
      LogStorageP__LogRead__default__seekDone(arg_0x7f27b0cecb20, error);
#line 115
      break;
#line 115
    }
#line 115
}
#line 115
# 513 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
static inline void LogStorageP__located(void )
#line 513
{
  LogStorageP__metaState = LogStorageP__META_LOCATELAST;


  LogStorageP__lastPage = LogStorageP__lastVolumePage() - 1;
  LogStorageP__locateLastRecord();
}

#line 835
static inline void LogStorageP__rmetadataCrcDone(uint16_t crc)
#line 835
{
  if (! LogStorageP__s[LogStorageP__client].rvalid) {
    if (crc == __nesc_ntoh_uint16(LogStorageP__metadata.crc.nxdata) && __nesc_ntoh_uint8(LogStorageP__metadata.flags.nxdata) & LogStorageP__F_LASTVALID) {
      LogStorageP__continueReadAt(__nesc_ntoh_uint8(LogStorageP__metadata.lastRecordOffset.nxdata));
      }
    else {
#line 840
      LogStorageP__rmetadataContinue();
      }
    }
  else {
#line 842
    if (crc == __nesc_ntoh_uint16(LogStorageP__metadata.crc.nxdata)) {
      LogStorageP__continueReadAt(0);
      }
    else {
#line 845
      LogStorageP__endRequest(SUCCESS);
      }
    }
}

# 315 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 315
{
  uint8_t *base = target;

#line 317
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

# 420 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__At45db__write(at45page_t page, at45pageoffset_t offset, 
void *reqdata, at45pageoffset_t n)
#line 421
{
  At45dbP__newRequest(At45dbP__R_WRITE, page, offset, reqdata, n);
}

# 73 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45db.nc"
inline static void LogStorageP__At45db__write(at45page_t page, at45pageoffset_t offset, void * data, at45pageoffset_t n){
#line 73
  At45dbP__At45db__write(page, offset, data, n);
#line 73
}
#line 73
# 272 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
static inline void LogStorageP__writeMetadata(at45page_t page)
#line 272
{
  LogStorageP__At45db__write(page, LogStorageP__PAGE_SIZE, &LogStorageP__metadata, sizeof LogStorageP__metadata);
}

#line 710
static inline void LogStorageP__wmetadataCrcDone(uint16_t crc)
#line 710
{
  uint8_t i;
#line 711
  uint8_t *md;


  md = (uint8_t *)&LogStorageP__metadata;
  for (i = 0; i < (unsigned short )& ((nx_struct LogStorageP__pageinfo *)0)->crc; i++) 
    crc = crcByte(crc, md[i]);
  __nesc_hton_uint16(LogStorageP__metadata.crc.nxdata, crc);


  LogStorageP__writeMetadata(LogStorageP__firstPage);
}

#line 858
static inline void LogStorageP__seekCrcDone(uint16_t crc)
#line 858
{
  if (__nesc_ntoh_uint16(LogStorageP__metadata.magic.nxdata) == LogStorageP__PERSISTENT_MAGIC && crc == __nesc_ntoh_uint16(LogStorageP__metadata.crc.nxdata) && __nesc_ntoh_uint32(
  LogStorageP__metadata.pos.nxdata) == LogStorageP__s[LogStorageP__client].rpos - LogStorageP__s[LogStorageP__client].roffset) 
    {
      LogStorageP__s[LogStorageP__client].rvalid = TRUE;
      if (__nesc_ntoh_uint8(LogStorageP__metadata.flags.nxdata) & LogStorageP__F_SYNC) {
        LogStorageP__s[LogStorageP__client].rend = __nesc_ntoh_uint8(LogStorageP__metadata.lastRecordOffset.nxdata);
        }
    }
#line 866
  LogStorageP__endRequest(SUCCESS);
}

#line 259
static inline void LogStorageP__invalidateReadPointer(void )
#line 259
{
  LogStorageP__s[LogStorageP__client].rvalid = FALSE;
}

#line 448
static inline void LogStorageP__locateLastCrcDone(uint16_t crc)
#line 448
{
  if (crc != __nesc_ntoh_uint16(LogStorageP__metadata.crc.nxdata)) 
    {
      LogStorageP__locateLastRecord();
      return;
    }



  LogStorageP__invalidateReadPointer();

  if (__nesc_ntoh_uint8(LogStorageP__metadata.flags.nxdata) & LogStorageP__F_SYNC) 
    {



      if (LogStorageP__firstPage == LogStorageP__lastPage && ! __nesc_ntoh_uint32(LogStorageP__metadata.pos.nxdata)) {
        LogStorageP__setWritePage(LogStorageP__firstVolumePage());
        }
      else {
#line 467
        LogStorageP__setWritePage(LogStorageP__firstPage + 1);
        }
#line 468
      LogStorageP__s[LogStorageP__client].wpos = __nesc_ntoh_uint32(LogStorageP__metadata.pos.nxdata) + LogStorageP__PAGE_SIZE;
    }
  else 
    {
      LogStorageP__s[LogStorageP__client].wpage = LogStorageP__firstPage;
      LogStorageP__s[LogStorageP__client].woffset = __nesc_ntoh_uint8(LogStorageP__metadata.lastRecordOffset.nxdata);
      LogStorageP__s[LogStorageP__client].wpos = __nesc_ntoh_uint32(LogStorageP__metadata.pos.nxdata) + __nesc_ntoh_uint8(LogStorageP__metadata.lastRecordOffset.nxdata);
    }

  LogStorageP__s[LogStorageP__client].circled = (__nesc_ntoh_uint8(LogStorageP__metadata.flags.nxdata) & LogStorageP__F_CIRCLED) != 0;
  if (LogStorageP__s[LogStorageP__client].circled && ! LogStorageP__s[LogStorageP__client].circular) 
    {
      LogStorageP__endRequest(FAIL);
      return;
    }


  LogStorageP__s[LogStorageP__client].positionKnown = TRUE;
  LogStorageP__startRequest();
}

#line 532
static inline void LogStorageP__locateGreaterThan(void )
#line 532
{
  LogStorageP__firstPage = LogStorageP__locateCurrentPage() + 1;
  LogStorageP__locateBinarySearch();
}






static inline void LogStorageP__locateCrcDone(uint16_t crc)
#line 542
{
  if (crc == __nesc_ntoh_uint16(LogStorageP__metadata.crc.nxdata)) 
    {
      LogStorageP__s[LogStorageP__client].wpos = __nesc_ntoh_uint32(LogStorageP__metadata.pos.nxdata);
      LogStorageP__locateGreaterThan();
    }
  else {
    LogStorageP__locateLessThan();
    }
}







static inline void LogStorageP__locateFirstCrcDone(uint16_t crc)
#line 559
{
  if (__nesc_ntoh_uint16(LogStorageP__metadata.magic.nxdata) == LogStorageP__PERSISTENT_MAGIC && crc == __nesc_ntoh_uint16(LogStorageP__metadata.crc.nxdata)) {
    LogStorageP__s[LogStorageP__client].wpos = __nesc_ntoh_uint32(LogStorageP__metadata.pos.nxdata);
    }
  else {
#line 563
    LogStorageP__s[LogStorageP__client].wpos = 0;
    }
  LogStorageP__metaState = LogStorageP__META_LOCATE;
  LogStorageP__locateBinarySearch();
}

#line 976
static inline void LogStorageP__At45db__computeCrcDone(error_t error, uint16_t crc)
#line 976
{
  if (LogStorageP__client != LogStorageP__NO_CLIENT) {
    if (error != SUCCESS) {
      LogStorageP__endRequest(FAIL);
      }
    else {
#line 981
      switch (LogStorageP__metaState) 
        {
          case LogStorageP__META_LOCATEFIRST: LogStorageP__locateFirstCrcDone(crc);
#line 983
          break;
          case LogStorageP__META_LOCATE: LogStorageP__locateCrcDone(crc);
#line 984
          break;
          case LogStorageP__META_LOCATELAST: LogStorageP__locateLastCrcDone(crc);
#line 985
          break;
          case LogStorageP__META_SEEK: LogStorageP__seekCrcDone(crc);
#line 986
          break;
          case LogStorageP__META_WRITE: LogStorageP__wmetadataCrcDone(crc);
#line 987
          break;
          case LogStorageP__META_READ: LogStorageP__rmetadataCrcDone(crc);
#line 988
          break;
        }
      }
    }
}

# 194 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45db.nc"
inline static void At45dbP__At45db__computeCrcDone(error_t error, uint16_t crc){
#line 194
  LogStorageP__At45db__computeCrcDone(error, crc);
#line 194
}
#line 194
# 620 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
static inline void LogStorageP__appendWriteDone(void )
#line 620
{
  if (LogStorageP__s[LogStorageP__client].woffset == LogStorageP__PAGE_SIZE) {
    LogStorageP__wmetadataStart();
    }
  else {
#line 624
    LogStorageP__endRequest(SUCCESS);
    }
}

# 456 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__At45db__flush(at45page_t page)
#line 456
{
  At45dbP__syncOrFlush(page, At45dbP__R_FLUSH);
}

# 144 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45db.nc"
inline static void LogStorageP__At45db__flush(at45page_t page){
#line 144
  At45dbP__At45db__flush(page);
#line 144
}
#line 144
# 452 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__At45db__sync(at45page_t page)
#line 452
{
  At45dbP__syncOrFlush(page, At45dbP__R_SYNC);
}

# 125 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45db.nc"
inline static void LogStorageP__At45db__sync(at45page_t page){
#line 125
  At45dbP__At45db__sync(page);
#line 125
}
#line 125
# 723 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
static inline void LogStorageP__wmetadataWriteDone(void )
#line 723
{
  LogStorageP__metaState = LogStorageP__META_IDLE;
  if (__nesc_ntoh_uint8(LogStorageP__metadata.flags.nxdata) & LogStorageP__F_SYNC) {
    LogStorageP__At45db__sync(LogStorageP__firstPage);
    }
  else {
#line 728
    LogStorageP__At45db__flush(LogStorageP__firstPage);
    }
}

#line 928
static inline void LogStorageP__At45db__writeDone(error_t error)
#line 928
{
  if (LogStorageP__client != LogStorageP__NO_CLIENT) {
    if (error != SUCCESS) {
      LogStorageP__endRequest(FAIL);
      }
    else {
#line 933
      switch (LogStorageP__metaState) 
        {
          case LogStorageP__META_WRITE: LogStorageP__wmetadataWriteDone();
#line 935
          break;
          case LogStorageP__META_IDLE: LogStorageP__appendWriteDone();
#line 936
          break;
        }
      }
    }
}

# 80 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45db.nc"
inline static void At45dbP__At45db__writeDone(error_t error){
#line 80
  LogStorageP__At45db__writeDone(error);
#line 80
}
#line 80
# 675 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
static inline void LogStorageP__syncMetadataDone(void )
#line 675
{


  LogStorageP__s[LogStorageP__client].wpos = __nesc_ntoh_uint32(LogStorageP__metadata.pos.nxdata) + LogStorageP__PAGE_SIZE;
  LogStorageP__endRequest(SUCCESS);
}

#line 633
static inline void LogStorageP__appendSyncDone(void )
#line 633
{
  LogStorageP__s[LogStorageP__client].wpos = __nesc_ntoh_uint32(LogStorageP__metadata.pos.nxdata) + LogStorageP__PAGE_SIZE;
  LogStorageP__appendStart();
}

#line 408
static inline void LogStorageP__eraseMetadataDone(void )
#line 408
{

  LogStorageP__s[LogStorageP__client].wpos = LogStorageP__PAGE_SIZE;
  LogStorageP__s[LogStorageP__client].circled = FALSE;
  LogStorageP__setWritePage(LogStorageP__firstVolumePage());

  LogStorageP__invalidateReadPointer();

  LogStorageP__s[LogStorageP__client].positionKnown = TRUE;
  LogStorageP__endRequest(SUCCESS);
}

#line 940
static inline void LogStorageP__At45db__syncDone(error_t error)
#line 940
{
  if (LogStorageP__client != LogStorageP__NO_CLIENT) {
    if (error != SUCCESS) {
      LogStorageP__endRequest(FAIL);
      }
    else {
#line 944
      switch (LogStorageP__s[LogStorageP__client].request) 
        {
          case LogStorageP__R_ERASE: LogStorageP__eraseMetadataDone();
#line 946
          break;
          case LogStorageP__R_APPEND: LogStorageP__appendSyncDone();
#line 947
          break;
          case LogStorageP__R_SYNC: LogStorageP__syncMetadataDone();
#line 948
          break;
        }
      }
    }
}

# 136 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45db.nc"
inline static void At45dbP__At45db__syncDone(error_t error){
#line 136
  LogStorageP__At45db__syncDone(error);
#line 136
}
#line 136
# 627 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
static inline void LogStorageP__appendMetadataDone(void )
#line 627
{

  __nesc_hton_uint8(LogStorageP__metadata.flags.nxdata, 0);
  LogStorageP__appendContinue();
}

#line 952
static inline void LogStorageP__At45db__flushDone(error_t error)
#line 952
{
  if (LogStorageP__client != LogStorageP__NO_CLIENT) {
    if (error != SUCCESS) {
      LogStorageP__endRequest(FAIL);
      }
    else {
#line 957
      LogStorageP__appendMetadataDone();
      }
    }
}

# 154 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45db.nc"
inline static void At45dbP__At45db__flushDone(error_t error){
#line 154
  LogStorageP__At45db__flushDone(error);
#line 154
}
#line 154
# 920 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
static inline void LogStorageP__At45db__eraseDone(error_t error)
#line 920
{
  if (LogStorageP__client != LogStorageP__NO_CLIENT) {
    if (error != SUCCESS) {
      LogStorageP__endRequest(FAIL);
      }
    else {
#line 925
      LogStorageP__eraseEraseDone();
      }
    }
}

# 116 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45db.nc"
inline static void At45dbP__At45db__eraseDone(error_t error){
#line 116
  LogStorageP__At45db__eraseDone(error);
#line 116
}
#line 116
# 426 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__At45db__erase(at45page_t page, uint8_t eraseKind)
#line 426
{
  At45dbP__newRequest(At45dbP__R_ERASE, page, eraseKind, (void *)0, 0);
}

# 111 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45db.nc"
inline static void LogStorageP__At45db__erase(at45page_t page, uint8_t eraseKind){
#line 111
  At45dbP__At45db__erase(page, eraseKind);
#line 111
}
#line 111
# 992 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
static inline void LogStorageP__At45db__copyPageDone(error_t error)
#line 992
{
}

# 96 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45db.nc"
inline static void At45dbP__At45db__copyPageDone(error_t error){
#line 96
  LogStorageP__At45db__copyPageDone(error);
#line 96
}
#line 96
# 221 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__flush(uint8_t cmd, at45page_t page)
#line 221
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__execCommand(/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_FLUSH, cmd, 0, page, 0, (void *)0, 1);
}

# 73 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45db.nc"
inline static void At45dbP__HplAt45db__flush(uint8_t cmd, at45page_t page){
#line 73
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__flush(cmd, page);
#line 73
}
#line 73
# 225 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__compare(uint8_t cmd, at45page_t page)
#line 225
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__execCommand(/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_COMPARE, cmd, 0, page, 0, (void *)0, 1);
}

# 87 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45db.nc"
inline static void At45dbP__HplAt45db__compare(uint8_t cmd, at45page_t page){
#line 87
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__compare(cmd, page);
#line 87
}
#line 87
# 67 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t At45dbP__taskSuccess__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(At45dbP__taskSuccess);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 460 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__syncOrFlushAll(uint8_t newReq)
#line 460
{
  At45dbP__request = newReq;

  if (! At45dbP__buffer[0].clean) {
    At45dbP__selected = 0;
    }
  else {
#line 465
    if (! At45dbP__buffer[1].clean) {
      At45dbP__selected = 1;
      }
    else {
        At45dbP__taskSuccess__postTask();
        return;
      }
    }
  At45dbP__buffer[At45dbP__selected].unchecked = 0;
  At45dbP__handleRWRequest();
}

# 239 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__readBuffer(uint8_t cmd, at45pageoffset_t offset, 
uint8_t *pdata, at45pageoffset_t count)
#line 240
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__execCommand(/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_READ, cmd, 2, 0, offset, pdata, count);
}

# 119 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45db.nc"
inline static void At45dbP__HplAt45db__readBuffer(uint8_t cmd, at45pageoffset_t offset, uint8_t * data, uint16_t n){
#line 119
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__readBuffer(cmd, offset, data, n);
#line 119
}
#line 119
# 244 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__crc(uint8_t cmd, 
at45page_t page, at45pageoffset_t offset, 
at45pageoffset_t count, 
uint16_t baseCrc)
#line 247
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__execCommand(/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_READ_CRC, cmd, 2, page, offset, (uint8_t * )baseCrc, count);
}

# 157 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45db.nc"
inline static void At45dbP__HplAt45db__crc(uint8_t cmd, at45page_t page, at45pageoffset_t offset, at45pageoffset_t n, uint16_t baseCrc){
#line 157
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__crc(cmd, page, offset, n, baseCrc);
#line 157
}
#line 157
# 251 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__write(uint8_t cmd, 
at45page_t page, at45pageoffset_t offset, 
uint8_t *pdata, at45pageoffset_t count)
#line 253
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__execCommand(/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_WRITE, cmd, 0, page, offset, pdata, count);
}

# 178 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45db.nc"
inline static void At45dbP__HplAt45db__write(uint8_t cmd, at45page_t page, at45pageoffset_t offset, uint8_t * data, at45pageoffset_t n){
#line 178
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__write(cmd, page, offset, data, n);
#line 178
}
#line 178
# 217 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__fill(uint8_t cmd, at45page_t page)
#line 217
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__execCommand(/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_FILL, cmd, 0, page, 0, (void *)0, 1);
}

# 55 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45db.nc"
inline static void At45dbP__HplAt45db__fill(uint8_t cmd, at45page_t page){
#line 55
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__fill(cmd, page);
#line 55
}
#line 55
# 435 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
static inline void LogStorageP__eraseStart(void )
#line 435
{
  LogStorageP__s[LogStorageP__client].positionKnown = FALSE;
  LogStorageP__firstPage = LogStorageP__firstVolumePage();
  LogStorageP__lastPage = LogStorageP__lastVolumePage();
  LogStorageP__eraseEraseDone();
}

#line 668
static inline void LogStorageP__syncStart(void )
#line 668
{
  if (LogStorageP__s[LogStorageP__client].woffset == 0) {
    LogStorageP__endRequest(SUCCESS);
    }
  else {
#line 672
    LogStorageP__sync();
    }
}

#line 788
static inline void LogStorageP__readStart(void )
#line 788
{
  LogStorageP__readContinue();
}

# 30 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbStorageManagerC.nc"
static inline at45page_t At45dbStorageManagerC__At45dbVolume__volumeSize(volume_id_t volid)
#line 30
{
  switch (volid) 
    {
# 11 "build/micaz/StorageVolumes.h"
      case VOLUME_CONFIGTEST: return 18;
      case VOLUME_LOGTEST: return 1024;
# 35 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbStorageManagerC.nc"
      default: return 0;
    }
}

# 1001 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
static inline at45page_t LogStorageP__At45dbVolume__default__volumeSize(uint8_t logId)
#line 1001
{
#line 1001
  return 0;
}

# 30 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbVolume.nc"
inline static at45page_t LogStorageP__At45dbVolume__volumeSize(uint8_t arg_0x7f27b0cd0990){
#line 30
  unsigned short __nesc_result;
#line 30

#line 30
  switch (arg_0x7f27b0cd0990) {
#line 30
    case /*PacketParrotC.LogStorageC*/LogStorageC__0__LOG_ID:
#line 30
      __nesc_result = At45dbStorageManagerC__At45dbVolume__volumeSize(1);
#line 30
      break;
#line 30
    default:
#line 30
      __nesc_result = LogStorageP__At45dbVolume__default__volumeSize(arg_0x7f27b0cd0990);
#line 30
      break;
#line 30
    }
#line 30

#line 30
  return __nesc_result;
#line 30
}
#line 30
# 241 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
static inline at45page_t LogStorageP__npages(void )
#line 241
{
  return LogStorageP__At45dbVolume__volumeSize(LogStorageP__client);
}

#line 874
static inline void LogStorageP__seekStart(void )
#line 874
{
  uint32_t offset = ((uint32_t )(uint16_t )LogStorageP__s[LogStorageP__client].buf << 16) | LogStorageP__s[LogStorageP__client].len;

  LogStorageP__invalidateReadPointer();



  if (offset == SEEK_BEGINNING) {
    offset = LogStorageP__PAGE_SIZE;
    }
  if (offset > LogStorageP__s[LogStorageP__client].wpos || offset < LogStorageP__PAGE_SIZE) 
    {
      LogStorageP__endRequest(EINVAL);
      return;
    }




  LogStorageP__s[LogStorageP__client].rpos = offset;
  LogStorageP__s[LogStorageP__client].roffset = (offset - LogStorageP__PAGE_SIZE) % LogStorageP__PAGE_SIZE;
  LogStorageP__s[LogStorageP__client].rpage = LogStorageP__firstVolumePage() + (offset - LogStorageP__PAGE_SIZE) / LogStorageP__PAGE_SIZE % LogStorageP__npages();
  LogStorageP__s[LogStorageP__client].rend = LogStorageP__PAGE_SIZE;


  if (LogStorageP__s[LogStorageP__client].rpage == LogStorageP__s[LogStorageP__client].wpage) 
    {




      if (offset >= LogStorageP__s[LogStorageP__client].wpos - LogStorageP__s[LogStorageP__client].woffset) {
        LogStorageP__s[LogStorageP__client].rvalid = TRUE;
        }
#line 907
      LogStorageP__endRequest(SUCCESS);
    }
  else 
    {
      LogStorageP__metaState = LogStorageP__META_SEEK;
      LogStorageP__readMetadata(LogStorageP__s[LogStorageP__client].rpage);
    }
}

# 205 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__HplAt45db__writeDone(void )
#line 205
{
  At45dbP__buffer[At45dbP__selected].clean = FALSE;
  At45dbP__buffer[At45dbP__selected].unchecked = 0;
  At45dbP__requestDone(SUCCESS, 0, At45dbP__IDLE);
}

# 185 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45db.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__writeDone(void ){
#line 185
  At45dbP__HplAt45db__writeDone();
#line 185
}
#line 185
# 201 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__HplAt45db__readDone(void )
#line 201
{
  At45dbP__requestDone(SUCCESS, 0, At45dbP__IDLE);
}

# 141 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45db.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__readDone(void ){
#line 141
  At45dbP__HplAt45db__readDone();
#line 141
}
#line 141
# 242 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__HplAt45db__eraseDone(void )
#line 242
{
  At45dbP__flashBusy = TRUE;



  At45dbP__buffer[At45dbP__selected].page = At45dbP__reqPage;
  At45dbP__buffer[At45dbP__selected].clean = TRUE;
  At45dbP__buffer[At45dbP__selected].erased = TRUE;
  At45dbP__requestDone(SUCCESS, 0, At45dbP__IDLE);
}

# 106 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45db.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__eraseDone(void ){
#line 106
  At45dbP__HplAt45db__eraseDone();
#line 106
}
#line 106
# 196 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitCompare(void )
#line 196
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__status = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_WAIT_COMPARE;
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__request();
}

# 41 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45db.nc"
inline static void At45dbP__HplAt45db__waitCompare(void ){
#line 41
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitCompare();
#line 41
}
#line 41
# 40 "/home/ivan/Desktop/tinyos-main/tos/platforms/micaz/BusyWaitMicroC.nc"
static __inline void BusyWaitMicroC__BusyWait__wait(uint16_t dt)
#line 40
{

  if (dt) {


     __asm volatile (
    "1:	sbiw	%0,1\n"
    "	adiw	%0,1\n"
    "	sbiw	%0,1\n"
    "	brne	1b" : "+w"(dt));
    }
}

# 66 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/BusyWait.nc"
inline static void At45dbP__BusyWait__wait(At45dbP__BusyWait__size_type dt){
#line 66
  BusyWaitMicroC__BusyWait__wait(dt);
#line 66
}
#line 66
# 223 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__HplAt45db__compareDone(void )
#line 223
{
  At45dbP__flashBusy = TRUE;
  At45dbP__buffer[At45dbP__checking].busy = TRUE;




  At45dbP__BusyWait__wait(10);
  At45dbP__HplAt45db__waitCompare();
}

# 93 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45db.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__compareDone(void ){
#line 93
  At45dbP__HplAt45db__compareDone();
#line 93
}
#line 93
# 215 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__HplAt45db__flushDone(void )
#line 215
{
  At45dbP__flashBusy = TRUE;
  At45dbP__buffer[At45dbP__selected].clean = At45dbP__buffer[At45dbP__selected].busy = TRUE;
  At45dbP__buffer[At45dbP__selected].unchecked++;
  At45dbP__buffer[At45dbP__selected].erased = FALSE;
  At45dbP__handleRWRequest();
}

# 79 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45db.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__flushDone(void ){
#line 79
  At45dbP__HplAt45db__flushDone();
#line 79
}
#line 79
# 234 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__HplAt45db__fillDone(void )
#line 234
{
  At45dbP__flashBusy = TRUE;
  At45dbP__buffer[At45dbP__selected].page = At45dbP__reqPage;
  At45dbP__buffer[At45dbP__selected].clean = At45dbP__buffer[At45dbP__selected].busy = TRUE;
  At45dbP__buffer[At45dbP__selected].erased = FALSE;
  At45dbP__handleRWRequest();
}

# 61 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45db.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__fillDone(void ){
#line 61
  At45dbP__HplAt45db__fillDone();
#line 61
}
#line 61
# 211 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__HplAt45db__crcDone(uint16_t crc)
#line 211
{
  At45dbP__requestDone(SUCCESS, crc, At45dbP__IDLE);
}

# 163 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45db.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__crcDone(uint16_t computedCrc){
#line 163
  At45dbP__HplAt45db__crcDone(computedCrc);
#line 163
}
#line 163
# 55 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__complete(uint16_t crc)
#line 55
{
  uint8_t s = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__status;

  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__status = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_IDLE;
  switch (s) 
    {
      default: break;
      case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_READ_CRC: 
        /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__crcDone(crc);
      break;
      case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_FILL: 
        /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__fillDone();
      break;
      case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_FLUSH: 
        /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__flushDone();
      break;
      case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_COMPARE: 
        /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__compareDone();
      break;
      case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_ERASE: 
        /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__eraseDone();
      break;
      case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_READ: 
        /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__readDone();
      break;
      case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_WRITE: 
        /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__writeDone();
      break;
    }
}

# 50 "/home/ivan/Desktop/tinyos-main/tos/system/NoArbiterC.nc"
static inline void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__default__unconfigure(void )
#line 50
{
}

# 65 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceConfigure.nc"
inline static void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__unconfigure(void ){
#line 65
  /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__default__unconfigure();
#line 65
}
#line 65
# 40 "/home/ivan/Desktop/tinyos-main/tos/system/NoArbiterC.nc"
static inline error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__Resource__release(void )
#line 40
{
  /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__unconfigure();
  return SUCCESS;
}

# 120 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__Resource__release();
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 125 "/home/ivan/Desktop/tinyos-main/tos/platforms/micaz/chips/at45db/HplAt45dbIOP.nc"
static inline void HplAt45dbIOP__HplAt45dbByte__deselect(void )
#line 125
{
  HplAt45dbIOP__Select__set();
}

# 52 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45dbByte.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__deselect(void ){
#line 52
  HplAt45dbIOP__HplAt45dbByte__deselect();
#line 52
}
#line 52
# 45 "/home/ivan/Desktop/tinyos-main/tos/interfaces/SpiByte.nc"
inline static uint8_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__FlashSpi__write(uint8_t tx){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = HplAt45dbIOP__FlashSpi__write(tx);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 56 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP__3__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )59U &= ~(1 << 3);
}

# 41 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void HplAt45dbIOP__Select__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP__3__IO__clr();
#line 41
}
#line 41
# 120 "/home/ivan/Desktop/tinyos-main/tos/platforms/micaz/chips/at45db/HplAt45dbIOP.nc"
static inline void HplAt45dbIOP__HplAt45dbByte__select(void )
#line 120
{
  HplAt45dbIOP__Clk__clr();
  HplAt45dbIOP__Select__clr();
}

# 47 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45dbByte.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__select(void ){
#line 47
  HplAt45dbIOP__HplAt45dbByte__select();
#line 47
}
#line 47
# 92 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__doCommand(void )
#line 92
{
  uint8_t in = 0;
#line 93
  uint8_t out = 0;
  uint8_t *ptr;
  at45pageoffset_t count;
  uint8_t lphase;
  uint16_t crc = (uint16_t )/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__data;

  if (/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__dataCount) 
    {






      ptr = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__flashCmd;
      lphase = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_SEND_CMD;
      count = 4 + /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__dontCare;

      /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__select();
      for (; ; ) 
        {
          if (lphase == /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_READ_CRC) 
            {
              crc = crcByte(crc, in);

              --count;
              if (!count) {
                break;
                }
            }
          else {
#line 122
            if (lphase == /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_SEND_CMD) 
              {

                out = * ptr++;
                count--;
                if (!count) 
                  {
                    lphase = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__status;
                    ptr = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__data;
                    count = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__dataCount;
                  }
              }
            else {
#line 134
              if (lphase == /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_READ) 
                {
                  * ptr++ = in;
                  --count;
                  if (!count) {
                    break;
                    }
                }
              else {
#line 141
                if (lphase == /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_WRITE) 
                  {
                    if (!count) {
                      break;
                      }
                    out = * ptr++;
                    --count;
                  }
                else {
                  break;
                  }
                }
              }
            }
#line 152
          in = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__FlashSpi__write(out);
        }
      /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__deselect();
    }

  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__release();
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__complete(crc);
}

# 67 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t HplAt45dbIOP__avail__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(HplAt45dbIOP__avail);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 66 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/BusyWait.nc"
inline static void HplAt45dbIOP__BusyWait__wait(HplAt45dbIOP__BusyWait__size_type dt){
#line 66
  BusyWaitMicroC__BusyWait__wait(dt);
#line 66
}
#line 66
# 55 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )50U |= 1 << 5;
}

# 40 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void HplAt45dbIOP__Clk__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__set();
#line 40
}
#line 40
# 54 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__get(void )
#line 54
{
#line 54
  return (* (volatile uint8_t * )48U & (1 << 2)) != 0;
}

# 43 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static bool HplAt45dbIOP__In__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 167 "/home/ivan/Desktop/tinyos-main/tos/platforms/micaz/chips/at45db/HplAt45dbIOP.nc"
static inline void HplAt45dbIOP__HplAt45dbByte__waitIdle(void )
#line 167
{


  int i;

#line 171
  HplAt45dbIOP__Clk__clr();
  HplAt45dbIOP__BusyWait__wait(2);
  while (!HplAt45dbIOP__In__get()) {
      for (i = 0; i < 8; i++) {
          HplAt45dbIOP__Clk__set();
          HplAt45dbIOP__Clk__clr();
          HplAt45dbIOP__BusyWait__wait(2);
        }
    }
  HplAt45dbIOP__avail__postTask();
}

# 31 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45dbByte.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__waitIdle(void ){
#line 31
  HplAt45dbIOP__HplAt45dbByte__waitIdle();
#line 31
}
#line 31
# 86 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__requestFlashStatus(void )
#line 86
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__select();
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__FlashSpi__write(AT45_C_REQ_STATUS);
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__waitIdle();
}

#line 161
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__granted(void )
#line 161
{
  switch (/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__status) 
    {
      case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_WAIT_COMPARE: case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_WAIT_IDLE: 
          /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__requestFlashStatus();
      break;
      default: 
        /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__doCommand();
      break;
    }
}

# 102 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
inline static void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__Resource__granted(void ){
#line 102
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__granted();
#line 102
}
#line 102
# 49 "/home/ivan/Desktop/tinyos-main/tos/system/NoArbiterC.nc"
static inline void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__default__configure(void )
#line 49
{
}

# 59 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceConfigure.nc"
inline static void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__configure(void ){
#line 59
  /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__default__configure();
#line 59
}
#line 59
# 25 "/home/ivan/Desktop/tinyos-main/tos/system/NoArbiterC.nc"
static inline void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__granted__runTask(void )
#line 25
{
  /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__configure();
  /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__Resource__granted();
}

# 174 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__HplAt45db__waitIdleDone(void )
#line 174
{
  At45dbP__flashIdle();







  At45dbP__handleRWRequest();
}

# 35 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45db.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitIdleDone(void ){
#line 35
  At45dbP__HplAt45db__waitIdleDone();
#line 35
}
#line 35
# 186 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__HplAt45db__waitCompareDone(bool ok)
#line 186
{
  At45dbP__flashIdle();

  if (ok) {
    At45dbP__buffer[At45dbP__checking].unchecked = 0;
    }
  else {
#line 191
    if (At45dbP__buffer[At45dbP__checking].unchecked < 2) {
      At45dbP__buffer[At45dbP__checking].clean = FALSE;
      }
    else {
        At45dbP__requestDone(FAIL, 0, At45dbP__BROKEN);
        return;
      }
    }
#line 198
  At45dbP__handleRWRequest();
}

# 47 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45db.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitCompareDone(bool compareOk){
#line 47
  At45dbP__HplAt45db__waitCompareDone(compareOk);
#line 47
}
#line 47
# 183 "/home/ivan/Desktop/tinyos-main/tos/platforms/micaz/chips/at45db/HplAt45dbIOP.nc"
static inline bool HplAt45dbIOP__HplAt45dbByte__getCompareStatus(void )
#line 183
{
  HplAt45dbIOP__Clk__set();
  HplAt45dbIOP__Clk__clr();

   __asm volatile ("nop");
   __asm volatile ("nop");
  return !HplAt45dbIOP__In__get();
}

# 42 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45dbByte.nc"
inline static bool /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__getCompareStatus(void ){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = HplAt45dbIOP__HplAt45dbByte__getCompareStatus();
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 201 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__idle(void )
#line 201
{
  if (/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__status == /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_WAIT_COMPARE) 
    {
      bool cstatus = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__getCompareStatus();

#line 205
      /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__deselect();
      /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__release();
      /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitCompareDone(cstatus);
    }
  else 
    {
      /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__deselect();
      /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__release();
      /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitIdleDone();
    }
}

# 35 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45dbByte.nc"
inline static void HplAt45dbIOP__HplAt45dbByte__idle(void ){
#line 35
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__idle();
#line 35
}
#line 35
# 163 "/home/ivan/Desktop/tinyos-main/tos/platforms/micaz/chips/at45db/HplAt45dbIOP.nc"
static inline void HplAt45dbIOP__avail__runTask(void )
#line 163
{
  HplAt45dbIOP__HplAt45dbByte__idle();
}

# 148 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__taskFail__runTask(void )
#line 148
{
  At45dbP__requestDone(FAIL, 0, At45dbP__IDLE);
}

#line 145
static inline void At45dbP__taskSuccess__runTask(void )
#line 145
{
  At45dbP__requestDone(SUCCESS, 0, At45dbP__IDLE);
}

# 229 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline error_t CC2420TinyosNetworkP__Resource__release(uint8_t id)
#line 229
{
  if (CC2420TinyosNetworkP__TINYOS_N_NETWORKS > 1) {
      CC2420TinyosNetworkP__grantTask__postTask();
    }
  CC2420TinyosNetworkP__resource_owner = CC2420TinyosNetworkP__OWNER_NONE;
  return SUCCESS;
}

#line 253
static inline void CC2420TinyosNetworkP__Resource__default__granted(uint8_t client)
#line 253
{
  CC2420TinyosNetworkP__Resource__release(client);
}

# 102 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
inline static void CC2420TinyosNetworkP__Resource__granted(uint8_t arg_0x7f27b0e22600){
#line 102
  switch (arg_0x7f27b0e22600) {
#line 102
    case CC2420ActiveMessageC__CC2420_AM_SEND_ID:
#line 102
      CC2420ActiveMessageP__RadioResource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      CC2420TinyosNetworkP__Resource__default__granted(arg_0x7f27b0e22600);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 68 "/home/ivan/Desktop/tinyos-main/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void )
#line 68
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 69
    {
      if (/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead != /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY) {
          uint8_t id = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead;

#line 72
          /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead];
          if (/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead == /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY) {
            /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qTail = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;
            }
#line 75
          /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[id] = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;
          {
            unsigned char __nesc_temp = 
#line 76
            id;

            {
#line 76
              __nesc_atomic_end(__nesc_atomic); 
#line 76
              return __nesc_temp;
            }
          }
        }
#line 78
      {
        unsigned char __nesc_temp = 
#line 78
        /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;

        {
#line 78
          __nesc_atomic_end(__nesc_atomic); 
#line 78
          return __nesc_temp;
        }
      }
    }
#line 81
    __nesc_atomic_end(__nesc_atomic); }
}

# 70 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t CC2420TinyosNetworkP__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 180 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline void CC2420TinyosNetworkP__grantTask__runTask(void )
#line 180
{


  if (CC2420TinyosNetworkP__TINYOS_N_NETWORKS > 1) {
      if (CC2420TinyosNetworkP__resource_owner == CC2420TinyosNetworkP__OWNER_NONE && !CC2420TinyosNetworkP__Queue__isEmpty()) {
          CC2420TinyosNetworkP__resource_owner = CC2420TinyosNetworkP__Queue__dequeue();

          if (CC2420TinyosNetworkP__resource_owner != CC2420TinyosNetworkP__OWNER_NONE) {
              CC2420TinyosNetworkP__Resource__granted(CC2420TinyosNetworkP__resource_owner);
            }
        }
    }
  else 
#line 191
    {
      if (CC2420TinyosNetworkP__next_owner != CC2420TinyosNetworkP__resource_owner) {
          CC2420TinyosNetworkP__resource_owner = CC2420TinyosNetworkP__next_owner;
          CC2420TinyosNetworkP__Resource__granted(CC2420TinyosNetworkP__resource_owner);
        }
    }
}

# 94 "/home/ivan/Desktop/tinyos-main/tos/system/LedsP.nc"
static inline void LedsP__Leds__led1Off(void )
#line 94
{
  LedsP__Led1__set();
  ;
#line 96
  ;
}

# 77 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Leds.nc"
inline static void PacketParrotP__Leds__led1Off(void ){
#line 77
  LedsP__Leds__led1Off();
#line 77
}
#line 77
# 53 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420ActiveMessageP__CC2420PacketBody__getMetadata(message_t * msg){
#line 53
  nx_struct cc2420_metadata_t *__nesc_result;
#line 53

#line 53
  __nesc_result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
#line 42
inline static cc2420_header_t * CC2420ActiveMessageP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 189 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__Packet__clear(message_t *msg)
#line 189
{
  memset(CC2420ActiveMessageP__CC2420PacketBody__getHeader(msg), 0x0, sizeof(cc2420_header_t ));
  memset(CC2420ActiveMessageP__CC2420PacketBody__getMetadata(msg), 0x0, sizeof(cc2420_metadata_t ));
}

# 65 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Packet.nc"
inline static void PacketParrotP__Packet__clear(message_t * msg){
#line 65
  CC2420ActiveMessageP__Packet__clear(msg);
#line 65
}
#line 65
# 222 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow(void )
#line 222
{
  return /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get();
}

# 109 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 96 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void )
{
#line 97
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow();
}

# 136 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void ){
#line 136
  unsigned long __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 67 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 144 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

#line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}






static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, TRUE);
}

# 73 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Timer.nc"
inline static void PacketParrotP__Timer0__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(1U, dt);
#line 73
}
#line 73
# 103 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline Atm128_TIFR_t HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag(void )
#line 103
{
  return * (Atm128_TIFR_t *)& * (volatile uint8_t *)(0x36 + 0x20);
}

# 53 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag(void ){
#line 53
  union __nesc_unnamed4274 __nesc_result;
#line 53

#line 53
  __nesc_result = HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 103 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt){
#line 103
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 58 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(t0, dt);
}

#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 94
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(t0, dt, TRUE);
}

# 129 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
#line 129
}
#line 129
# 204 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop(void )
#line 204
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 205
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set = FALSE;
#line 205
    __nesc_atomic_end(__nesc_atomic); }
}

# 73 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ){
#line 73
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop();
#line 73
}
#line 73
# 71 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void )
{
#line 72
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop();
}

# 78 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop();
#line 78
}
#line 78
# 100 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint16_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(now);
        }
      else {
#line 135
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}

# 121 "PacketParrotP.nc"
static inline void PacketParrotP__Timer0__fired(void )
#line 121
{
  PacketParrotP__AMSend__send(PacketParrotP__AMPacket__type(& PacketParrotP__m_entry.msg), PacketParrotP__AMPacket__destination(& PacketParrotP__m_entry.msg), & PacketParrotP__m_entry.msg, __nesc_ntoh_uint8(PacketParrotP__m_entry.len.nxdata));
}

# 204 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x7f27b0f523f0){
#line 83
  switch (arg_0x7f27b0f523f0) {
#line 83
    case 1U:
#line 83
      PacketParrotP__Timer0__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x7f27b0f523f0);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 144 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__Compare__set(uint8_t t)
#line 144
{
  * (volatile uint8_t *)(0x31 + 0x20) = t;
}

# 54 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type t){
#line 54
  HplAtm128Timer0AsyncP__Compare__set(t);
#line 54
}
#line 54
# 59 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP__Timer__get(void )
#line 59
{
#line 59
  return * (volatile uint8_t *)(0x32 + 0x20);
}

# 61 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = HplAtm128Timer0AsyncP__Timer__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 215 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline int HplAtm128Timer0AsyncP__TimerAsync__compareBusy(void )
#line 215
{
  return (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 1)) != 0;
}

# 44 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__compareBusy(void ){
#line 44
  int __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm128Timer0AsyncP__TimerAsync__compareBusy();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 74 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setOcr0(uint8_t n)
#line 74
{
  while (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__compareBusy()) 
    ;
  if (n == /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get()) {
    n++;
    }


  if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base + n + 1 < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base) {
    n = -/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base - 1;
    }
#line 84
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(n);
}

# 67 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 81 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void )
{
#line 82
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask();
}

# 78 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__fired(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired();
#line 78
}
#line 78
# 139 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

# 83 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void ){
#line 83
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
#line 83
}
#line 83
# 226 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm(void )
#line 226
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 227
    {
      unsigned long __nesc_temp = 
#line 227
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt;

      {
#line 227
        __nesc_atomic_end(__nesc_atomic); 
#line 227
        return __nesc_temp;
      }
    }
#line 229
    __nesc_atomic_end(__nesc_atomic); }
}

# 116 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void ){
#line 116
  unsigned long __nesc_result;
#line 116

#line 116
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm();
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
# 74 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt, FALSE);
    }
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

# 303 "/usr/lib/ncc/nesc_nx.h"
static __inline  int8_t __nesc_ntoh_int8(const void * source)
#line 303
{
#line 303
  return __nesc_ntoh_uint8(source);
}

# 42 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420TinyosNetworkP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 138 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline void *CC2420TinyosNetworkP__BareSend__getPayload(message_t *msg, uint8_t len)
#line 138
{

  cc2420_header_t *hdr = CC2420TinyosNetworkP__CC2420PacketBody__getHeader(msg);

#line 141
  return hdr;
}

#line 241
static inline message_t *CC2420TinyosNetworkP__BareReceive__default__receive(message_t *msg, void *payload, uint8_t len)
#line 241
{
  return msg;
}

# 78 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Receive.nc"
inline static message_t * CC2420TinyosNetworkP__BareReceive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = CC2420TinyosNetworkP__BareReceive__default__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 149 "PacketParrotP.nc"
static inline message_t *PacketParrotP__Snoop__receive(uint8_t id, message_t *msg, void *payload, uint8_t len)
#line 149
{
  return PacketParrotP__Receive__receive(id, msg, payload, len);
}

# 78 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Receive.nc"
inline static message_t * CC2420ActiveMessageP__Snoop__receive(am_id_t arg_0x7f27b0d8fc40, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = PacketParrotP__Snoop__receive(arg_0x7f27b0d8fc40, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
inline static message_t * CC2420ActiveMessageP__Receive__receive(am_id_t arg_0x7f27b0d8f060, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = PacketParrotP__Receive__receive(arg_0x7f27b0d8f060, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 72 "/home/ivan/Desktop/tinyos-main/tos/system/ActiveMessageAddressC.nc"
static inline am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void )
#line 72
{
  return ActiveMessageAddressC__amAddress();
}

# 50 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ActiveMessageAddress.nc"
inline static am_addr_t CC2420ActiveMessageP__ActiveMessageAddress__amAddress(void ){
#line 50
  unsigned short __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 135 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline am_addr_t CC2420ActiveMessageP__AMPacket__address(void )
#line 135
{
  return CC2420ActiveMessageP__ActiveMessageAddress__amAddress();
}

#line 159
static inline bool CC2420ActiveMessageP__AMPacket__isForMe(message_t *amsg)
#line 159
{
  return CC2420ActiveMessageP__AMPacket__destination(amsg) == CC2420ActiveMessageP__AMPacket__address() || 
  CC2420ActiveMessageP__AMPacket__destination(amsg) == AM_BROADCAST_ADDR;
}

#line 219
static inline message_t *CC2420ActiveMessageP__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 219
{

  if (CC2420ActiveMessageP__AMPacket__isForMe(msg)) {
      return CC2420ActiveMessageP__Receive__receive(CC2420ActiveMessageP__AMPacket__type(msg), msg, payload, len);
    }
  else {
      return CC2420ActiveMessageP__Snoop__receive(CC2420ActiveMessageP__AMPacket__type(msg), msg, payload, len);
    }
}

# 78 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Receive.nc"
inline static message_t * CC2420TinyosNetworkP__ActiveReceive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = CC2420ActiveMessageP__SubReceive__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 53 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420TinyosNetworkP__CC2420PacketBody__getMetadata(message_t * msg){
#line 53
  nx_struct cc2420_metadata_t *__nesc_result;
#line 53

#line 53
  __nesc_result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 119 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline uint8_t CC2420PacketP__CC2420Packet__getNetwork(message_t * p_msg)
#line 119
{



  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      unsigned char __nesc_temp = 
#line 124
      *CC2420PacketP__getNetwork(p_msg);

      {
#line 124
        __nesc_atomic_end(__nesc_atomic); 
#line 124
        return __nesc_temp;
      }
    }
#line 126
    __nesc_atomic_end(__nesc_atomic); }
}

# 75 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Packet.nc"
inline static uint8_t CC2420TinyosNetworkP__CC2420Packet__getNetwork(message_t * p_msg){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = CC2420PacketP__CC2420Packet__getNetwork(p_msg);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 157 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline message_t *CC2420TinyosNetworkP__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 157
{
  uint8_t network = CC2420TinyosNetworkP__CC2420Packet__getNetwork(msg);

  if (! __nesc_ntoh_int8(CC2420TinyosNetworkP__CC2420PacketBody__getMetadata(msg)->crc.nxdata)) {
      return msg;
    }

  if (network == 0x3f) {
      return CC2420TinyosNetworkP__ActiveReceive__receive(msg, payload, len);
    }
  else 
#line 166
    {
      return CC2420TinyosNetworkP__BareReceive__receive(msg, 
      CC2420TinyosNetworkP__BareSend__getPayload(msg, len), 
      len + sizeof(cc2420_header_t ));
    }
}

# 78 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Receive.nc"
inline static message_t * UniqueReceiveP__Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = CC2420TinyosNetworkP__SubReceive__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 138 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline void UniqueReceiveP__insert(uint16_t msgSource, uint8_t msgDsn)
#line 138
{
  uint8_t element = UniqueReceiveP__recycleSourceElement;
  bool increment = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 142
    {
      if (element == UniqueReceiveP__INVALID_ELEMENT || UniqueReceiveP__writeIndex == element) {

          element = UniqueReceiveP__writeIndex;
          increment = TRUE;
        }

      UniqueReceiveP__receivedMessages[element].source = msgSource;
      UniqueReceiveP__receivedMessages[element].dsn = msgDsn;
      if (increment) {
          UniqueReceiveP__writeIndex++;
          UniqueReceiveP__writeIndex %= 4;
        }
    }
#line 155
    __nesc_atomic_end(__nesc_atomic); }
}

#line 192
static inline message_t *UniqueReceiveP__DuplicateReceive__default__receive(message_t *msg, void *payload, uint8_t len)
#line 192
{
  return msg;
}

# 78 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Receive.nc"
inline static message_t * UniqueReceiveP__DuplicateReceive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = UniqueReceiveP__DuplicateReceive__default__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 112 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline bool UniqueReceiveP__hasSeen(uint16_t msgSource, uint8_t msgDsn)
#line 112
{
  int i;

#line 114
  UniqueReceiveP__recycleSourceElement = UniqueReceiveP__INVALID_ELEMENT;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 116
    {
      for (i = 0; i < 4; i++) {
          if (UniqueReceiveP__receivedMessages[i].source == msgSource) {
              if (UniqueReceiveP__receivedMessages[i].dsn == msgDsn) {

                  {
                    unsigned char __nesc_temp = 
#line 121
                    TRUE;

                    {
#line 121
                      __nesc_atomic_end(__nesc_atomic); 
#line 121
                      return __nesc_temp;
                    }
                  }
                }
#line 124
              UniqueReceiveP__recycleSourceElement = i;
            }
        }
    }
#line 127
    __nesc_atomic_end(__nesc_atomic); }

  return FALSE;
}

# 42 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * UniqueReceiveP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 165 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline uint16_t UniqueReceiveP__getSourceKey(message_t * msg)
#line 165
{
  cc2420_header_t *hdr = UniqueReceiveP__CC2420PacketBody__getHeader(msg);
  int s_mode = (__nesc_ntoh_leuint16(hdr->fcf.nxdata) >> IEEE154_FCF_SRC_ADDR_MODE) & 0x3;
  int d_mode = (__nesc_ntoh_leuint16(hdr->fcf.nxdata) >> IEEE154_FCF_DEST_ADDR_MODE) & 0x3;
  int s_offset = 2;
#line 169
  int s_len = 2;
  uint16_t key = 0;
  uint8_t *current = (uint8_t *)& hdr->dest;
  int i;

  if (s_mode == IEEE154_ADDR_EXT) {
      s_len = 8;
    }
  if (d_mode == IEEE154_ADDR_EXT) {
      s_offset = 8;
    }

  current += s_offset;

  for (i = 0; i < s_len; i++) {
      key += current[i];
    }
  return key;
}

#line 86
static inline message_t *UniqueReceiveP__SubReceive__receive(message_t *msg, void *payload, 
uint8_t len)
#line 87
{

  uint16_t msgSource = UniqueReceiveP__getSourceKey(msg);
  uint8_t msgDsn = __nesc_ntoh_leuint8(UniqueReceiveP__CC2420PacketBody__getHeader(msg)->dsn.nxdata);

  if (UniqueReceiveP__hasSeen(msgSource, msgDsn)) {
      return UniqueReceiveP__DuplicateReceive__receive(msg, payload, len);
    }
  else 
#line 94
    {
      UniqueReceiveP__insert(msgSource, msgDsn);
      return UniqueReceiveP__Receive__receive(msg, payload, len);
    }
}

# 78 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Receive.nc"
inline static message_t * CC2420ReceiveP__Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = UniqueReceiveP__SubReceive__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 298 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline ieee_eui64_t CC2420ControlP__CC2420Config__getExtAddr(void )
#line 298
{
  return CC2420ControlP__m_ext_addr;
}

# 66 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static ieee_eui64_t CC2420ReceiveP__CC2420Config__getExtAddr(void ){
#line 66
  struct ieee_eui64 __nesc_result;
#line 66

#line 66
  __nesc_result = CC2420ControlP__CC2420Config__getExtAddr();
#line 66

#line 66
  return __nesc_result;
#line 66
}
#line 66





inline static uint16_t CC2420ReceiveP__CC2420Config__getShortAddr(void ){
#line 71
  unsigned short __nesc_result;
#line 71

#line 71
  __nesc_result = CC2420ControlP__CC2420Config__getShortAddr();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 355 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline bool CC2420ControlP__CC2420Config__isAddressRecognitionEnabled(void )
#line 355
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 356
    {
      unsigned char __nesc_temp = 
#line 356
      CC2420ControlP__addressRecognition;

      {
#line 356
        __nesc_atomic_end(__nesc_atomic); 
#line 356
        return __nesc_temp;
      }
    }
#line 358
    __nesc_atomic_end(__nesc_atomic); }
}

# 93 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static bool CC2420ReceiveP__CC2420Config__isAddressRecognitionEnabled(void ){
#line 93
  unsigned char __nesc_result;
#line 93

#line 93
  __nesc_result = CC2420ControlP__CC2420Config__isAddressRecognitionEnabled();
#line 93

#line 93
  return __nesc_result;
#line 93
}
#line 93
# 42 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420ReceiveP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 824 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline bool CC2420ReceiveP__passesAddressCheck(message_t *msg)
#line 824
{
  cc2420_header_t *header = CC2420ReceiveP__CC2420PacketBody__getHeader(msg);
  int mode = (__nesc_ntoh_leuint16(header->fcf.nxdata) >> IEEE154_FCF_DEST_ADDR_MODE) & 3;
  ieee_eui64_t *ext_addr;

  if (!CC2420ReceiveP__CC2420Config__isAddressRecognitionEnabled()) {
      return TRUE;
    }

  if (mode == IEEE154_ADDR_SHORT) {
      return __nesc_ntoh_leuint16(header->dest.nxdata) == CC2420ReceiveP__CC2420Config__getShortAddr()
       || __nesc_ntoh_leuint16(header->dest.nxdata) == IEEE154_BROADCAST_ADDR;
    }
  else {
#line 836
    if (mode == IEEE154_ADDR_EXT) {
        ieee_eui64_t local_addr = CC2420ReceiveP__CC2420Config__getExtAddr();

#line 838
        ext_addr = (ieee_eui64_t * )& header->dest;
        return memcmp(ext_addr->data, local_addr.data, IEEE_EUI64_LENGTH) == 0;
      }
    else 
#line 840
      {

        return FALSE;
      }
    }
}

# 53 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420ReceiveP__CC2420PacketBody__getMetadata(message_t * msg){
#line 53
  nx_struct cc2420_metadata_t *__nesc_result;
#line 53

#line 53
  __nesc_result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 676 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__receiveDone_task__runTask(void )
#line 676
{
  cc2420_metadata_t *metadata = CC2420ReceiveP__CC2420PacketBody__getMetadata(CC2420ReceiveP__m_p_rx_buf);
  cc2420_header_t *header = CC2420ReceiveP__CC2420PacketBody__getHeader(CC2420ReceiveP__m_p_rx_buf);
  uint8_t length = __nesc_ntoh_leuint8(header->length.nxdata);
  uint8_t tmpLen __attribute((unused))  = sizeof(message_t ) - ((unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
  uint8_t * buf = (uint8_t * )header;

  __nesc_hton_int8(metadata->crc.nxdata, buf[length] >> 7);
  __nesc_hton_uint8(metadata->lqi.nxdata, buf[length] & 0x7f);
  __nesc_hton_uint8(metadata->rssi.nxdata, buf[length - 1]);

  if (CC2420ReceiveP__passesAddressCheck(CC2420ReceiveP__m_p_rx_buf) && length >= CC2420_SIZE) {
#line 701
      CC2420ReceiveP__m_p_rx_buf = CC2420ReceiveP__Receive__receive(CC2420ReceiveP__m_p_rx_buf, CC2420ReceiveP__m_p_rx_buf->data, 
      length - CC2420_SIZE);
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 704
    CC2420ReceiveP__receivingPacket = FALSE;
#line 704
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ReceiveP__waitForNextPacket();
}

# 56 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )59U &= ~(1 << 0);
}

# 41 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__clr();
#line 41
}
#line 41
# 104 "/home/ivan/Desktop/tinyos-main/tos/system/LedsP.nc"
static inline void LedsP__Leds__led2On(void )
#line 104
{
  LedsP__Led2__clr();
  ;
#line 106
  ;
}

# 89 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Leds.nc"
inline static void PacketParrotP__Leds__led2On(void ){
#line 89
  LedsP__Leds__led2On();
#line 89
}
#line 89
# 400 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
static inline storage_len_t LogStorageP__LogRead__getSize(uint8_t id)
#line 400
{
  return LogStorageP__At45dbVolume__volumeSize(id >> 1) * (storage_len_t )LogStorageP__PAGE_SIZE;
}

#line 362
static inline error_t LogStorageP__LogWrite__append(uint8_t id, void *buf, storage_len_t length)
#line 362
{
  if (length > LogStorageP__LogRead__getSize(id) - LogStorageP__PAGE_SIZE) {






    return EINVAL;
    }
  else {
#line 372
    return LogStorageP__newRequest(LogStorageP__R_APPEND, id, buf, length);
    }
}

# 54 "/home/ivan/Desktop/tinyos-main/tos/interfaces/LogWrite.nc"
inline static error_t PacketParrotP__LogWrite__append(void * buf, storage_len_t len){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = LogStorageP__LogWrite__append(/*PacketParrotC.LogStorageC*/LogStorageC__0__INTF_ID, buf, len);
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 95 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__ChipSpiResource__abortRelease(void )
#line 95
{
  /* atomic removed: atomic calls only */
#line 96
  CC2420SpiP__release = FALSE;
}

# 31 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static void CC2420TransmitP__ChipSpiResource__abortRelease(void ){
#line 31
  CC2420SpiP__ChipSpiResource__abortRelease();
#line 31
}
#line 31
# 377 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__ChipSpiResource__releasing(void )
#line 377
{
  if (CC2420TransmitP__abortSpiRelease) {
      CC2420TransmitP__ChipSpiResource__abortRelease();
    }
}

# 24 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static void CC2420SpiP__ChipSpiResource__releasing(void ){
#line 24
  CC2420TransmitP__ChipSpiResource__releasing();
#line 24
}
#line 24
# 52 "/home/ivan/Desktop/tinyos-main/tos/interfaces/McuPowerState.nc"
inline static void Atm128SpiP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 112 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__sleep(void )
#line 112
{
}

# 89 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__sleep(void ){
#line 89
  HplAtm128SpiP__SPI__sleep();
#line 89
}
#line 89
#line 116
inline static void Atm128SpiP__Spi__enableSpi(bool busOn){
#line 116
  HplAtm128SpiP__SPI__enableSpi(busOn);
#line 116
}
#line 116
# 167 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__stopSpi(void )
#line 167
{
  Atm128SpiP__Spi__enableSpi(FALSE);
  /* atomic removed: atomic calls only */
#line 169
  {
    Atm128SpiP__Spi__sleep();
  }
  Atm128SpiP__McuPowerState__update();
}

# 173 "/home/ivan/Desktop/tinyos-main/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 173
{
}

# 65 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x7f27b1322020){
#line 65
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x7f27b1322020);
#line 65
}
#line 65
# 68 "/home/ivan/Desktop/tinyos-main/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
        uint8_t id = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead;

#line 72
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead];
        if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
          }
#line 75
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[id] = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 76
          id;

#line 76
          return __nesc_temp;
        }
      }
#line 78
    {
      unsigned char __nesc_temp = 
#line 78
      /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 60 "/home/ivan/Desktop/tinyos-main/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ResourceQueue.nc"
inline static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 97 "/home/ivan/Desktop/tinyos-main/tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id)
#line 97
{
  bool released = FALSE;

  /* atomic removed: atomic calls only */
#line 99
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_BUSY && /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId == id) {
        if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__isEmpty() == FALSE) {
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__NO_RES;
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__reqResId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__dequeue();
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
          }
        else {
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__NO_RES;
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE;
          }
        released = TRUE;
      }
  }
  if (released == TRUE) {
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(id);
      return SUCCESS;
    }
  return FAIL;
}

# 120 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t Atm128SpiP__ResourceArbiter__release(uint8_t arg_0x7f27b13fca60){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(arg_0x7f27b13fca60);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 411 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline error_t Atm128SpiP__Resource__release(uint8_t id)
#line 411
{
  error_t error = Atm128SpiP__ResourceArbiter__release(id);

  /* atomic removed: atomic calls only */
#line 413
  {
    if (!Atm128SpiP__ArbiterInfo__inUse()) {
        Atm128SpiP__stopSpi();
      }
  }
  return error;
}

# 120 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t HplCC2420SpiP__SubResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = Atm128SpiP__Resource__release(0U);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 55 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )56U |= 1 << 0;
}

# 40 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void HplCC2420SpiP__SS__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set();
#line 40
}
#line 40
# 75 "/home/ivan/Desktop/tinyos-main/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline error_t HplCC2420SpiP__Resource__release(void )
{
  if (HplCC2420SpiP__SubResource__isOwner()) {
    HplCC2420SpiP__SS__set();
    }
  return HplCC2420SpiP__SubResource__release();
}

# 120 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = HplCC2420SpiP__Resource__release();
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 178 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline bool CC2420SpiP__Resource__isOwner(uint8_t id)
#line 178
{
  /* atomic removed: atomic calls only */
#line 179
  {
    unsigned char __nesc_temp = 
#line 179
    CC2420SpiP__m_holder == id;

#line 179
    return __nesc_temp;
  }
}

# 128 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
inline static bool CC2420ReceiveP__SpiResource__isOwner(void ){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = CC2420SpiP__Resource__isOwner(/*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID);
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
#line 97
inline static error_t CC2420ReceiveP__SpiResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = CC2420SpiP__Resource__immediateRequest(/*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
#line 88
inline static error_t CC2420ReceiveP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 67 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420SpiP__grant__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420SpiP__grant);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 184 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__SpiResource__granted(void )
#line 184
{
  CC2420SpiP__grant__postTask();
}

# 102 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
inline static void HplCC2420SpiP__Resource__granted(void ){
#line 102
  CC2420SpiP__SpiResource__granted();
#line 102
}
#line 102
# 67 "/home/ivan/Desktop/tinyos-main/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline void HplCC2420SpiP__SubResource__granted(void )
{
  HplCC2420SpiP__SS__makeOutput();
  HplCC2420SpiP__SS__clr();

  HplCC2420SpiP__Resource__granted();
}

# 429 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__Resource__default__granted(uint8_t id)
#line 429
{
}

# 102 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
inline static void Atm128SpiP__Resource__granted(uint8_t arg_0x7f27b1419380){
#line 102
  switch (arg_0x7f27b1419380) {
#line 102
    case 0U:
#line 102
      HplCC2420SpiP__SubResource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      Atm128SpiP__Resource__default__granted(arg_0x7f27b1419380);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 425 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__ResourceArbiter__granted(uint8_t id)
#line 425
{
  Atm128SpiP__Resource__granted(id);
}

# 102 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__granted(uint8_t arg_0x7f27b13254f0){
#line 102
  Atm128SpiP__ResourceArbiter__granted(arg_0x7f27b13254f0);
#line 102
}
#line 102
# 155 "/home/ivan/Desktop/tinyos-main/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void )
#line 155
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 156
    {
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__reqResId;
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_BUSY;
    }
#line 159
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__granted(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
}

# 82 "/home/ivan/Desktop/tinyos-main/tos/interfaces/SpiPacket.nc"
inline static void Atm128SpiP__SpiPacket__sendDone(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len, error_t error){
#line 82
  CC2420SpiP__SpiPacket__sendDone(txBuf, rxBuf, len, error);
#line 82
}
#line 82
# 296 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__zeroTask__runTask(void )
#line 296
{
  uint16_t myLen;
  uint8_t * rx;
  uint8_t * tx;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 301
    {
      myLen = Atm128SpiP__len;
      rx = Atm128SpiP__rxBuffer;
      tx = Atm128SpiP__txBuffer;
      Atm128SpiP__rxBuffer = (void *)0;
      Atm128SpiP__txBuffer = (void *)0;
      Atm128SpiP__len = 0;
      Atm128SpiP__pos = 0;
      Atm128SpiP__SpiPacket__sendDone(tx, rx, myLen, SUCCESS);
    }
#line 310
    __nesc_atomic_end(__nesc_atomic); }
}

# 486 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__TXFIFO__readDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error)
#line 487
{
}

# 120 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t CC2420ReceiveP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 40 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void CC2420ReceiveP__CSN__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set();
#line 40
}
#line 40
# 67 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420ReceiveP__receiveDone_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420ReceiveP__receiveDone_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 53 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420TransmitP__CC2420PacketBody__getMetadata(message_t * msg){
#line 53
  nx_struct cc2420_metadata_t *__nesc_result;
#line 53

#line 53
  __nesc_result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 148 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareA__stop(void )
#line 148
{
#line 148
  * (volatile uint8_t *)(0x37 + 0x20) &= ~(1 << 4);
}

# 68 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop(void ){
#line 68
  HplAtm128Timer1P__CompareA__stop();
#line 68
}
#line 68
# 74 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__stop(void )
#line 74
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop();
}

# 73 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__stop(void ){
#line 73
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__stop();
#line 73
}
#line 73
# 102 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/TransformAlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__stop(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__stop();
}

# 73 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void CC2420TransmitP__BackoffTimer__stop(void ){
#line 73
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__stop();
#line 73
}
#line 73
# 42 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420TransmitP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 389 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__CC2420Receive__receive(uint8_t type, message_t *ack_msg)
#line 389
{
  cc2420_header_t *ack_header;
  cc2420_header_t *msg_header;
  cc2420_metadata_t *msg_metadata;
  uint8_t *ack_buf;
  uint8_t length;

  if (type == IEEE154_TYPE_ACK && CC2420TransmitP__m_msg) {
      ack_header = CC2420TransmitP__CC2420PacketBody__getHeader(ack_msg);
      msg_header = CC2420TransmitP__CC2420PacketBody__getHeader(CC2420TransmitP__m_msg);

      if (CC2420TransmitP__m_state == CC2420TransmitP__S_ACK_WAIT && __nesc_ntoh_leuint8(msg_header->dsn.nxdata) == __nesc_ntoh_leuint8(ack_header->dsn.nxdata)) {
          CC2420TransmitP__BackoffTimer__stop();

          msg_metadata = CC2420TransmitP__CC2420PacketBody__getMetadata(CC2420TransmitP__m_msg);
          ack_buf = (uint8_t *)ack_header;
          length = __nesc_ntoh_leuint8(ack_header->length.nxdata);

          __nesc_hton_int8(msg_metadata->ack.nxdata, TRUE);
          __nesc_hton_uint8(msg_metadata->rssi.nxdata, ack_buf[length - 1]);
          __nesc_hton_uint8(msg_metadata->lqi.nxdata, ack_buf[length] & 0x7f);
          CC2420TransmitP__signalDone(SUCCESS);
        }
    }
}

# 63 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420ReceiveP__CC2420Receive__receive(uint8_t type, message_t * message){
#line 63
  CC2420TransmitP__CC2420Receive__receive(type, message);
#line 63
}
#line 63
# 70 "/home/ivan/Desktop/tinyos-main/tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420ReceiveP__PacketTimeStamp__clear(message_t * msg){
#line 70
  CC2420PacketP__PacketTimeStamp32khz__clear(msg);
#line 70
}
#line 70
# 177 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline void CC2420PacketP__PacketTimeStamp32khz__set(message_t *msg, uint32_t value)
{
  __nesc_hton_uint32(CC2420PacketP__CC2420PacketBody__getMetadata(msg)->timestamp.nxdata, value);
}

# 78 "/home/ivan/Desktop/tinyos-main/tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420ReceiveP__PacketTimeStamp__set(message_t * msg, CC2420ReceiveP__PacketTimeStamp__size_type value){
#line 78
  CC2420PacketP__PacketTimeStamp32khz__set(msg, value);
#line 78
}
#line 78
# 54 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__38__IO__get(void )
#line 54
{
#line 54
  return (* (volatile uint8_t * )33U & (1 << 6)) != 0;
}

# 43 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static bool CC2420ReceiveP__FIFOP__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__38__IO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 54 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__get(void )
#line 54
{
#line 54
  return (* (volatile uint8_t * )54U & (1 << 7)) != 0;
}

# 43 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static bool CC2420ReceiveP__FIFO__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 209 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline error_t CC2420SpiP__Fifo__continueRead(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 210
{
  return CC2420SpiP__SpiPacket__send((void *)0, data, len);
}

# 62 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static error_t CC2420ReceiveP__RXFIFO__continueRead(uint8_t * data, uint8_t length){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = CC2420SpiP__Fifo__continueRead(CC2420_RXFIFO, data, length);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
#line 51
inline static cc2420_status_t CC2420ReceiveP__RXFIFO__beginRead(uint8_t * data, uint8_t length){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = CC2420SpiP__Fifo__beginRead(CC2420_RXFIFO, data, length);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 41 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void CC2420ReceiveP__CSN__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr();
#line 41
}
#line 41
# 53 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ReceiveP__SACK__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SACK);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 382 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline bool CC2420ControlP__CC2420Config__isHwAutoAckDefault(void )
#line 382
{
  /* atomic removed: atomic calls only */
#line 383
  {
    unsigned char __nesc_temp = 
#line 383
    CC2420ControlP__hwAutoAckDefault;

#line 383
    return __nesc_temp;
  }
}

# 112 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static bool CC2420ReceiveP__CC2420Config__isHwAutoAckDefault(void ){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  __nesc_result = CC2420ControlP__CC2420Config__isHwAutoAckDefault();
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
# 389 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline bool CC2420ControlP__CC2420Config__isAutoAckEnabled(void )
#line 389
{
  /* atomic removed: atomic calls only */
#line 390
  {
    unsigned char __nesc_temp = 
#line 390
    CC2420ControlP__autoAckEnabled;

#line 390
    return __nesc_temp;
  }
}

# 117 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static bool CC2420ReceiveP__CC2420Config__isAutoAckEnabled(void ){
#line 117
  unsigned char __nesc_result;
#line 117

#line 117
  __nesc_result = CC2420ControlP__CC2420Config__isAutoAckEnabled();
#line 117

#line 117
  return __nesc_result;
#line 117
}
#line 117
# 530 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__RXFIFO__readDone(uint8_t *rx_buf, uint8_t rx_len, 
error_t error)
#line 531
{
  cc2420_header_t *header = CC2420ReceiveP__CC2420PacketBody__getHeader(CC2420ReceiveP__m_p_rx_buf);
  uint8_t tmpLen __attribute((unused))  = sizeof(message_t ) - ((unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
  uint8_t * buf = (uint8_t * )header;

#line 535
  CC2420ReceiveP__rxFrameLength = buf[0];

  switch (CC2420ReceiveP__m_state) {

      case CC2420ReceiveP__S_RX_LENGTH: 
        CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_FCF;



      if (CC2420ReceiveP__rxFrameLength + 1 > CC2420ReceiveP__m_bytes_left) 



        {

          CC2420ReceiveP__flush();
        }
      else {
          if (!CC2420ReceiveP__FIFO__get() && !CC2420ReceiveP__FIFOP__get()) {
              CC2420ReceiveP__m_bytes_left -= CC2420ReceiveP__rxFrameLength + 1;
            }

          if (CC2420ReceiveP__rxFrameLength <= MAC_PACKET_SIZE) {
              if (CC2420ReceiveP__rxFrameLength > 0) {
                  if (CC2420ReceiveP__rxFrameLength > CC2420ReceiveP__SACK_HEADER_LENGTH) {

                      CC2420ReceiveP__RXFIFO__continueRead(buf + 1, CC2420ReceiveP__SACK_HEADER_LENGTH);
                    }
                  else {

                      CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_PAYLOAD;
                      CC2420ReceiveP__RXFIFO__continueRead(buf + 1, CC2420ReceiveP__rxFrameLength);
                    }
                }
              else {
                  /* atomic removed: atomic calls only */
                  CC2420ReceiveP__receivingPacket = FALSE;
                  CC2420ReceiveP__CSN__set();
                  CC2420ReceiveP__SpiResource__release();
                  CC2420ReceiveP__waitForNextPacket();
                }
            }
          else {

              CC2420ReceiveP__flush();
            }
        }
      break;

      case CC2420ReceiveP__S_RX_FCF: 
        CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_PAYLOAD;










      if (CC2420ReceiveP__CC2420Config__isAutoAckEnabled() && !CC2420ReceiveP__CC2420Config__isHwAutoAckDefault()) {



          if (((__nesc_ntoh_leuint16(
#line 597
          header->fcf.nxdata) >> IEEE154_FCF_ACK_REQ) & 0x01) == 1
           && (__nesc_ntoh_leuint16(header->dest.nxdata) == CC2420ReceiveP__CC2420Config__getShortAddr()
           || __nesc_ntoh_leuint16(header->dest.nxdata) == AM_BROADCAST_ADDR)
           && ((__nesc_ntoh_leuint16(header->fcf.nxdata) >> IEEE154_FCF_FRAME_TYPE) & 7) == IEEE154_TYPE_DATA) {

              CC2420ReceiveP__CSN__set();
              CC2420ReceiveP__CSN__clr();
              CC2420ReceiveP__SACK__strobe();
              CC2420ReceiveP__CSN__set();
              CC2420ReceiveP__CSN__clr();
              CC2420ReceiveP__RXFIFO__beginRead(buf + 1 + CC2420ReceiveP__SACK_HEADER_LENGTH, 
              CC2420ReceiveP__rxFrameLength - CC2420ReceiveP__SACK_HEADER_LENGTH);
              return;
            }
        }

      CC2420ReceiveP__RXFIFO__continueRead(buf + 1 + CC2420ReceiveP__SACK_HEADER_LENGTH, 
      CC2420ReceiveP__rxFrameLength - CC2420ReceiveP__SACK_HEADER_LENGTH);
      break;

      case CC2420ReceiveP__S_RX_PAYLOAD: 

        CC2420ReceiveP__CSN__set();
      if (!CC2420ReceiveP__m_missed_packets) {

          CC2420ReceiveP__SpiResource__release();
        }




      if ((((
#line 626
      CC2420ReceiveP__m_missed_packets && CC2420ReceiveP__FIFO__get()) || !CC2420ReceiveP__FIFOP__get())
       || !CC2420ReceiveP__m_timestamp_size)
       || CC2420ReceiveP__rxFrameLength <= 10) {
          CC2420ReceiveP__PacketTimeStamp__clear(CC2420ReceiveP__m_p_rx_buf);
        }
      else {
          if (CC2420ReceiveP__m_timestamp_size == 1) {
            CC2420ReceiveP__PacketTimeStamp__set(CC2420ReceiveP__m_p_rx_buf, CC2420ReceiveP__m_timestamp_queue[CC2420ReceiveP__m_timestamp_head]);
            }
#line 634
          CC2420ReceiveP__m_timestamp_head = (CC2420ReceiveP__m_timestamp_head + 1) % CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE;
          CC2420ReceiveP__m_timestamp_size--;

          if (CC2420ReceiveP__m_timestamp_size > 0) {
              CC2420ReceiveP__PacketTimeStamp__clear(CC2420ReceiveP__m_p_rx_buf);
              CC2420ReceiveP__m_timestamp_head = 0;
              CC2420ReceiveP__m_timestamp_size = 0;
            }
        }



      if (buf[CC2420ReceiveP__rxFrameLength] >> 7 && rx_buf) {
          uint8_t type = (__nesc_ntoh_leuint16(header->fcf.nxdata) >> IEEE154_FCF_FRAME_TYPE) & 7;

#line 648
          CC2420ReceiveP__CC2420Receive__receive(type, CC2420ReceiveP__m_p_rx_buf);
          if (type == IEEE154_TYPE_DATA) {
              CC2420ReceiveP__receiveDone_task__postTask();
              return;
            }
        }

      CC2420ReceiveP__waitForNextPacket();
      break;

      default: /* atomic removed: atomic calls only */
        CC2420ReceiveP__receivingPacket = FALSE;
      CC2420ReceiveP__CSN__set();
      CC2420ReceiveP__SpiResource__release();
      break;
    }
}

# 370 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__Fifo__default__readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error)
#line 370
{
}

# 71 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static void CC2420SpiP__Fifo__readDone(uint8_t arg_0x7f27b14bea00, uint8_t * data, uint8_t length, error_t error){
#line 71
  switch (arg_0x7f27b14bea00) {
#line 71
    case CC2420_TXFIFO:
#line 71
      CC2420TransmitP__TXFIFO__readDone(data, length, error);
#line 71
      break;
#line 71
    case CC2420_RXFIFO:
#line 71
      CC2420ReceiveP__RXFIFO__readDone(data, length, error);
#line 71
      break;
#line 71
    default:
#line 71
      CC2420SpiP__Fifo__default__readDone(arg_0x7f27b14bea00, data, length, error);
#line 71
      break;
#line 71
    }
#line 71
}
#line 71
# 53 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ReceiveP__SFLUSHRX__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SFLUSHRX);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 102 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline error_t CC2420SpiP__ChipSpiResource__attemptRelease(void )
#line 102
{
  return CC2420SpiP__attemptRelease();
}

# 39 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static error_t CC2420TransmitP__ChipSpiResource__attemptRelease(void ){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = CC2420SpiP__ChipSpiResource__attemptRelease();
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 64 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Counter.nc"
inline static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 86 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/TransformAlarmC.nc"
static inline /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__getNow(void )
{
  return /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__get();
}

#line 157
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type dt)
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__getNow(), dt);
}

# 66 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__BackoffTimer__size_type dt){
#line 66
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__start(dt);
#line 66
}
#line 66
# 293 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__RadioBackoff__default__requestInitialBackoff(am_id_t id, 
message_t *msg)
#line 294
{
}

# 81 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420ActiveMessageP__RadioBackoff__requestInitialBackoff(am_id_t arg_0x7f27b0d8a700, message_t * msg){
#line 81
    CC2420ActiveMessageP__RadioBackoff__default__requestInitialBackoff(arg_0x7f27b0d8a700, msg);
#line 81
}
#line 81
# 241 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__SubBackoff__requestInitialBackoff(message_t *msg)
#line 241
{
  CC2420ActiveMessageP__RadioBackoff__requestInitialBackoff(__nesc_ntoh_leuint8(((cc2420_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t )))->type.nxdata), msg);
}

# 81 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP__RadioBackoff__requestInitialBackoff(message_t * msg){
#line 81
  CC2420ActiveMessageP__SubBackoff__requestInitialBackoff(msg);
#line 81
}
#line 81
# 89 "/home/ivan/Desktop/tinyos-main/tos/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC__Random__rand16(void )
#line 89
{
  return (uint16_t )RandomMlcgC__Random__rand32();
}

# 52 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Random.nc"
inline static uint16_t CC2420CsmaP__Random__rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 243 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__RadioBackoff__setInitialBackoff(uint16_t backoffTime)
#line 243
{
  CC2420TransmitP__myInitialBackoff = backoffTime + 1;
}

# 60 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP__SubBackoff__setInitialBackoff(uint16_t backoffTime){
#line 60
  CC2420TransmitP__RadioBackoff__setInitialBackoff(backoffTime);
#line 60
}
#line 60
# 223 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__SubBackoff__requestInitialBackoff(message_t *msg)
#line 223
{
  CC2420CsmaP__SubBackoff__setInitialBackoff(CC2420CsmaP__Random__rand16()
   % (0x1F * CC2420_BACKOFF_PERIOD) + CC2420_MIN_BACKOFF);

  CC2420CsmaP__RadioBackoff__requestInitialBackoff(msg);
}

# 81 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420TransmitP__RadioBackoff__requestInitialBackoff(message_t * msg){
#line 81
  CC2420CsmaP__SubBackoff__requestInitialBackoff(msg);
#line 81
}
#line 81
# 120 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t CC2420TransmitP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420TransmitC.Spi*/CC2420SpiC__3__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 803 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__releaseSpiResource(void )
#line 803
{
  CC2420TransmitP__SpiResource__release();
  return SUCCESS;
}

# 67 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420CsmaP__sendDone_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420CsmaP__sendDone_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 205 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__CC2420Transmit__sendDone(message_t *p_msg, error_t err)
#line 205
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 206
    CC2420CsmaP__sendErr = err;
#line 206
    __nesc_atomic_end(__nesc_atomic); }
  CC2420CsmaP__sendDone_task__postTask();
}

# 73 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
inline static void CC2420TransmitP__Send__sendDone(message_t * p_msg, error_t error){
#line 73
  CC2420CsmaP__CC2420Transmit__sendDone(p_msg, error);
#line 73
}
#line 73
# 40 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__CSN__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set();
#line 40
}
#line 40
# 53 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420TransmitP__SFLUSHTX__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SFLUSHTX);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 41 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__CSN__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr();
#line 41
}
#line 41
# 454 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__TXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error)
#line 455
{

  CC2420TransmitP__CSN__set();
  if (CC2420TransmitP__m_state == CC2420TransmitP__S_CANCEL) {
      /* atomic removed: atomic calls only */
#line 459
      {
        CC2420TransmitP__CSN__clr();
        CC2420TransmitP__SFLUSHTX__strobe();
        CC2420TransmitP__CSN__set();
      }
      CC2420TransmitP__releaseSpiResource();
      CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
      CC2420TransmitP__Send__sendDone(CC2420TransmitP__m_msg, ECANCEL);
    }
  else {
#line 468
    if (!CC2420TransmitP__m_cca) {
        /* atomic removed: atomic calls only */
#line 469
        {
          CC2420TransmitP__m_state = CC2420TransmitP__S_BEGIN_TRANSMIT;
        }
        CC2420TransmitP__attemptSend();
      }
    else {
        CC2420TransmitP__releaseSpiResource();
        /* atomic removed: atomic calls only */
#line 476
        {
          CC2420TransmitP__m_state = CC2420TransmitP__S_SAMPLE_CCA;
        }

        CC2420TransmitP__RadioBackoff__requestInitialBackoff(CC2420TransmitP__m_msg);
        CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__myInitialBackoff);
      }
    }
}

# 668 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__RXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 668
{
}

# 373 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__Fifo__default__writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 373
{
}

# 91 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static void CC2420SpiP__Fifo__writeDone(uint8_t arg_0x7f27b14bea00, uint8_t * data, uint8_t length, error_t error){
#line 91
  switch (arg_0x7f27b14bea00) {
#line 91
    case CC2420_TXFIFO:
#line 91
      CC2420TransmitP__TXFIFO__writeDone(data, length, error);
#line 91
      break;
#line 91
    case CC2420_RXFIFO:
#line 91
      CC2420ReceiveP__RXFIFO__writeDone(data, length, error);
#line 91
      break;
#line 91
    default:
#line 91
      CC2420SpiP__Fifo__default__writeDone(arg_0x7f27b14bea00, data, length, error);
#line 91
      break;
#line 91
    }
#line 91
}
#line 91
# 53 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420TransmitP__STXONCCA__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_STXONCCA);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
inline static cc2420_status_t CC2420TransmitP__STXON__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_STXON);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
inline static cc2420_status_t CC2420TransmitP__SNOP__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SNOP);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 297 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__RadioBackoff__default__requestCongestionBackoff(am_id_t id, 
message_t *msg)
#line 298
{
}

# 88 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420ActiveMessageP__RadioBackoff__requestCongestionBackoff(am_id_t arg_0x7f27b0d8a700, message_t * msg){
#line 88
    CC2420ActiveMessageP__RadioBackoff__default__requestCongestionBackoff(arg_0x7f27b0d8a700, msg);
#line 88
}
#line 88
# 246 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__SubBackoff__requestCongestionBackoff(message_t *msg)
#line 246
{
  CC2420ActiveMessageP__RadioBackoff__requestCongestionBackoff(__nesc_ntoh_leuint8(((cc2420_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t )))->type.nxdata), msg);
}

# 88 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP__RadioBackoff__requestCongestionBackoff(message_t * msg){
#line 88
  CC2420ActiveMessageP__SubBackoff__requestCongestionBackoff(msg);
#line 88
}
#line 88
# 251 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__RadioBackoff__setCongestionBackoff(uint16_t backoffTime)
#line 251
{
  CC2420TransmitP__myCongestionBackoff = backoffTime + 1;
}

# 66 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP__SubBackoff__setCongestionBackoff(uint16_t backoffTime){
#line 66
  CC2420TransmitP__RadioBackoff__setCongestionBackoff(backoffTime);
#line 66
}
#line 66
# 230 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__SubBackoff__requestCongestionBackoff(message_t *msg)
#line 230
{
  CC2420CsmaP__SubBackoff__setCongestionBackoff(CC2420CsmaP__Random__rand16()
   % (0x7 * CC2420_BACKOFF_PERIOD) + CC2420_MIN_BACKOFF);

  CC2420CsmaP__RadioBackoff__requestCongestionBackoff(msg);
}

# 88 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420TransmitP__RadioBackoff__requestCongestionBackoff(message_t * msg){
#line 88
  CC2420CsmaP__SubBackoff__requestCongestionBackoff(msg);
#line 88
}
#line 88
# 58 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline uint16_t HplAtm128Timer1P__Timer__get(void )
#line 58
{
#line 58
  return * (volatile uint16_t *)(0x2C + 0x20);
}

# 61 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__get(void ){
#line 61
  unsigned short __nesc_result;
#line 61

#line 61
  __nesc_result = HplAtm128Timer1P__Timer__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 50 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get(void )
{
  return /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__get();
}

# 64 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Counter.nc"
inline static /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__get(void ){
#line 64
  unsigned short __nesc_result;
#line 64

#line 64
  __nesc_result = /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 53 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static Atm128_TIFR_t HplAtm128Timer1P__Timer0Ctrl__getInterruptFlag(void ){
#line 53
  union __nesc_unnamed4274 __nesc_result;
#line 53

#line 53
  __nesc_result = HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 153 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline bool HplAtm128Timer1P__Timer__test(void )
#line 153
{
  return HplAtm128Timer1P__Timer0Ctrl__getInterruptFlag().bits.tov1;
}

# 87 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__test(void ){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = HplAtm128Timer1P__Timer__test();
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 55 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void )
{
  return /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__test();
}

# 71 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Counter.nc"
inline static bool /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__isOverflowPending(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 142 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareA__start(void )
#line 142
{
#line 142
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 4;
}

# 65 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__start(void ){
#line 65
  HplAtm128Timer1P__CompareA__start();
#line 65
}
#line 65
# 136 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareA__reset(void )
#line 136
{
#line 136
  * (volatile uint8_t *)(0x36 + 0x20) = 1 << 4;
}

# 62 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__reset(void ){
#line 62
  HplAtm128Timer1P__CompareA__reset();
#line 62
}
#line 62
# 192 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareA__set(uint16_t t)
#line 192
{
#line 192
  * (volatile uint16_t *)(0x2A + 0x20) = t;
}

# 54 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__set(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__size_type t){
#line 54
  HplAtm128Timer1P__CompareA__set(t);
#line 54
}
#line 54
# 61 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get(void ){
#line 61
  unsigned short __nesc_result;
#line 61

#line 61
  __nesc_result = HplAtm128Timer1P__Timer__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 83 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size dt)
#line 83
{
  /* atomic removed: atomic calls only */






  {
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size now;
#line 92
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size elapsed;
#line 92
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size expires;

    ;


    now = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get();
    elapsed = now + 3 - t0;
    if (elapsed >= dt) {
      expires = now + 3;
      }
    else {
#line 102
      expires = t0 + dt;
      }



    if (expires == 0) {
      expires = 1;
      }



    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__set(expires - 1);
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__reset();
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__start();
  }
}

# 103 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__size_type dt){
#line 103
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 63 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__TXCTRL__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_TXCTRL, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 533 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__writeTxctrl(void )
#line 533
{
  /* atomic removed: atomic calls only */
#line 534
  {
    CC2420ControlP__TXCTRL__write((((2 << CC2420_TXCTRL_TXMIXBUF_CUR) | (
    3 << CC2420_TXCTRL_PA_CURRENT)) | (
    1 << CC2420_TXCTRL_RESERVED)) | ((
    17 & 0x1F) << CC2420_TXCTRL_PA_LEVEL));
  }
}

# 63 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__RXCTRL1__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_RXCTRL1, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
inline static cc2420_status_t CC2420ControlP__IOCFG0__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_IOCFG0, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 53 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP__SXOSCON__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SXOSCON);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 67 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t HplCC2420InterruptsP__CCATask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(HplCC2420InterruptsP__CCATask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 54 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__get(void )
#line 54
{
#line 54
  return (* (volatile uint8_t * )48U & (1 << 6)) != 0;
}

# 43 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static bool HplCC2420InterruptsP__CC_CCA__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 89 "/home/ivan/Desktop/tinyos-main/tos/platforms/micaz/chips/cc2420/HplCC2420InterruptsP.nc"
static inline error_t HplCC2420InterruptsP__CCA__enableRisingEdge(void )
#line 89
{
  /* atomic removed: atomic calls only */
#line 90
  HplCC2420InterruptsP__ccaWaitForState = TRUE;
  /* atomic removed: atomic calls only */
#line 91
  HplCC2420InterruptsP__ccaCheckDisabled = FALSE;
  HplCC2420InterruptsP__ccaLastState = HplCC2420InterruptsP__CC_CCA__get();
  HplCC2420InterruptsP__CCATask__postTask();
  return SUCCESS;
}

# 53 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ControlP__InterruptCCA__enableRisingEdge(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = HplCC2420InterruptsP__CCA__enableRisingEdge();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 63 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__IOCFG1__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_IOCFG1, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 224 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__startOscillator(void )
#line 224
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 225
    {
      if (CC2420ControlP__m_state != CC2420ControlP__S_VREG_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 227
            FAIL;

            {
#line 227
              __nesc_atomic_end(__nesc_atomic); 
#line 227
              return __nesc_temp;
            }
          }
        }
#line 230
      CC2420ControlP__m_state = CC2420ControlP__S_XOSC_STARTING;
      CC2420ControlP__IOCFG1__write(CC2420_SFDMUX_XOSC16M_STABLE << 
      CC2420_IOCFG1_CCAMUX);

      CC2420ControlP__InterruptCCA__enableRisingEdge();
      CC2420ControlP__SXOSCON__strobe();

      CC2420ControlP__IOCFG0__write((1 << CC2420_IOCFG0_FIFOP_POLARITY) | (
      127 << CC2420_IOCFG0_FIFOP_THR));

      CC2420ControlP__writeFsctrl();
      CC2420ControlP__writeMdmctrl0();

      CC2420ControlP__RXCTRL1__write(((((((1 << CC2420_RXCTRL1_RXBPF_LOCUR) | (
      1 << CC2420_RXCTRL1_LOW_LOWGAIN)) | (
      1 << CC2420_RXCTRL1_HIGH_HGM)) | (
      1 << CC2420_RXCTRL1_LNA_CAP_ARRAY)) | (
      1 << CC2420_RXCTRL1_RXMIX_TAIL)) | (
      1 << CC2420_RXCTRL1_RXMIX_VCM)) | (
      2 << CC2420_RXCTRL1_RXMIX_CURRENT));

      CC2420ControlP__writeTxctrl();
    }
#line 252
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 71 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP__CC2420Power__startOscillator(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = CC2420ControlP__CC2420Power__startOscillator();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 214 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__Resource__granted(void )
#line 214
{
  CC2420CsmaP__CC2420Power__startOscillator();
}

# 102 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
inline static void CC2420ControlP__Resource__granted(void ){
#line 102
  CC2420CsmaP__Resource__granted();
#line 102
}
#line 102
# 41 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__CSN__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr();
#line 41
}
#line 41
# 413 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__SpiResource__granted(void )
#line 413
{
  CC2420ControlP__CSN__clr();
  CC2420ControlP__Resource__granted();
}

# 67 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420ControlP__syncDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420ControlP__syncDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 120 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SyncResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ControlC.SyncSpiC*/CC2420SpiC__1__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 40 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__CSN__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set();
#line 40
}
#line 40
# 53 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP__SRXON__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SRXON);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
inline static cc2420_status_t CC2420ControlP__SRFOFF__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SRFOFF);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 399 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__SyncResource__granted(void )
#line 399
{
  CC2420ControlP__CSN__clr();
  CC2420ControlP__SRFOFF__strobe();
  CC2420ControlP__writeFsctrl();
  CC2420ControlP__writeMdmctrl0();
  CC2420ControlP__writeId();
  CC2420ControlP__CSN__set();
  CC2420ControlP__CSN__clr();
  CC2420ControlP__SRXON__strobe();
  CC2420ControlP__CSN__set();
  CC2420ControlP__SyncResource__release();
  CC2420ControlP__syncDone__postTask();
}

#line 545
static inline void CC2420ControlP__ReadRssi__default__readDone(error_t error, uint16_t data)
#line 545
{
}

# 63 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Read.nc"
inline static void CC2420ControlP__ReadRssi__readDone(error_t result, CC2420ControlP__ReadRssi__val_t val){
#line 63
  CC2420ControlP__ReadRssi__default__readDone(result, val);
#line 63
}
#line 63
# 120 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__RssiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ControlC.RssiResource*/CC2420SpiC__2__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 287 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline cc2420_status_t CC2420SpiP__Reg__read(uint8_t addr, uint16_t *data)
#line 287
{

  cc2420_status_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 291
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 293
            status;

            {
#line 293
              __nesc_atomic_end(__nesc_atomic); 
#line 293
              return __nesc_temp;
            }
          }
        }
    }
#line 297
    __nesc_atomic_end(__nesc_atomic); }
#line 297
  status = CC2420SpiP__SpiByte__write(addr | 0x40);
  *data = (uint16_t )CC2420SpiP__SpiByte__write(0) << 8;
  *data |= CC2420SpiP__SpiByte__write(0);

  return status;
}

# 55 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__RSSI__read(uint16_t *data){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = CC2420SpiP__Reg__read(CC2420_RSSI, data);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 418 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__RssiResource__granted(void )
#line 418
{
  uint16_t data = 0;

#line 420
  CC2420ControlP__CSN__clr();
  CC2420ControlP__RSSI__read(&data);
  CC2420ControlP__CSN__set();

  CC2420ControlP__RssiResource__release();
  data += 0x7f;
  data &= 0x00ff;
  CC2420ControlP__ReadRssi__readDone(SUCCESS, data);
}

# 416 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__SpiResource__granted(void )
#line 416
{
  uint8_t cur_state;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 419
    {
      cur_state = CC2420TransmitP__m_state;
    }
#line 421
    __nesc_atomic_end(__nesc_atomic); }

  switch (cur_state) {
      case CC2420TransmitP__S_LOAD: 
        CC2420TransmitP__loadTXFIFO();
      break;

      case CC2420TransmitP__S_BEGIN_TRANSMIT: 
        CC2420TransmitP__attemptSend();
      break;

      case CC2420TransmitP__S_CANCEL: 
        CC2420TransmitP__CSN__clr();
      CC2420TransmitP__SFLUSHTX__strobe();
      CC2420TransmitP__CSN__set();
      CC2420TransmitP__releaseSpiResource();
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 437
        {
          CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
        }
#line 439
        __nesc_atomic_end(__nesc_atomic); }
      CC2420TransmitP__Send__sendDone(CC2420TransmitP__m_msg, ECANCEL);
      break;

      default: 
        CC2420TransmitP__releaseSpiResource();
      break;
    }
}

# 513 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__SpiResource__granted(void )
#line 513
{







  CC2420ReceiveP__receive();
}

# 367 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__Resource__default__granted(uint8_t id)
#line 367
{
}

# 102 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
inline static void CC2420SpiP__Resource__granted(uint8_t arg_0x7f27b14bf660){
#line 102
  switch (arg_0x7f27b14bf660) {
#line 102
    case /*CC2420ControlC.Spi*/CC2420SpiC__0__CLIENT_ID:
#line 102
      CC2420ControlP__SpiResource__granted();
#line 102
      break;
#line 102
    case /*CC2420ControlC.SyncSpiC*/CC2420SpiC__1__CLIENT_ID:
#line 102
      CC2420ControlP__SyncResource__granted();
#line 102
      break;
#line 102
    case /*CC2420ControlC.RssiResource*/CC2420SpiC__2__CLIENT_ID:
#line 102
      CC2420ControlP__RssiResource__granted();
#line 102
      break;
#line 102
    case /*CC2420TransmitC.Spi*/CC2420SpiC__3__CLIENT_ID:
#line 102
      CC2420TransmitP__SpiResource__granted();
#line 102
      break;
#line 102
    case /*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID:
#line 102
      CC2420ReceiveP__SpiResource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      CC2420SpiP__Resource__default__granted(arg_0x7f27b14bf660);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 358 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__grant__runTask(void )
#line 358
{
  uint8_t holder;

#line 360
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 360
    {
      holder = CC2420SpiP__m_holder;
    }
#line 362
    __nesc_atomic_end(__nesc_atomic); }
  CC2420SpiP__Resource__granted(holder);
}

# 63 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__FSCTRL__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_FSCTRL, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
inline static cc2420_status_t CC2420ControlP__MDMCTRL0__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_MDMCTRL0, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 63 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static cc2420_status_t CC2420ControlP__IEEEADR__write(uint8_t offset, uint8_t * data, uint8_t length){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Ram__write(CC2420_RAM_IEEEADR, offset, data, length);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 67 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420CsmaP__startDone_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420CsmaP__startDone_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 218 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__CC2420Power__startOscillatorDone(void )
#line 218
{
  CC2420CsmaP__startDone_task__postTask();
}

# 76 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static void CC2420ControlP__CC2420Power__startOscillatorDone(void ){
#line 76
  CC2420CsmaP__CC2420Power__startOscillatorDone();
#line 76
}
#line 76
# 105 "/home/ivan/Desktop/tinyos-main/tos/platforms/micaz/chips/cc2420/HplCC2420InterruptsP.nc"
static inline error_t HplCC2420InterruptsP__CCA__disable(void )
#line 105
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 106
    HplCC2420InterruptsP__ccaCheckDisabled = TRUE;
#line 106
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 61 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ControlP__InterruptCCA__disable(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = HplCC2420InterruptsP__CCA__disable();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 441 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__InterruptCCA__fired(void )
#line 441
{
  CC2420ControlP__m_state = CC2420ControlP__S_XOSC_STARTED;
  CC2420ControlP__InterruptCCA__disable();
  CC2420ControlP__IOCFG1__write(0);
  CC2420ControlP__writeId();
  CC2420ControlP__CSN__set();
  CC2420ControlP__CSN__clr();
  CC2420ControlP__CC2420Power__startOscillatorDone();
}

# 68 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GpioInterrupt.nc"
inline static void HplCC2420InterruptsP__CCA__fired(void ){
#line 68
  CC2420ControlP__InterruptCCA__fired();
#line 68
}
#line 68
# 69 "/home/ivan/Desktop/tinyos-main/tos/platforms/micaz/chips/cc2420/HplCC2420InterruptsP.nc"
static inline void HplCC2420InterruptsP__CCATask__runTask(void )
#line 69
{
  uint8_t CCAState;

#line 71
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 71
    {
      if (HplCC2420InterruptsP__ccaCheckDisabled) {
          {
#line 73
            __nesc_atomic_end(__nesc_atomic); 
#line 73
            return;
          }
        }
    }
#line 76
    __nesc_atomic_end(__nesc_atomic); }

  CCAState = HplCC2420InterruptsP__CC_CCA__get();
  if (HplCC2420InterruptsP__ccaLastState != HplCC2420InterruptsP__ccaWaitForState && CCAState == HplCC2420InterruptsP__ccaWaitForState) {
      HplCC2420InterruptsP__CCA__fired();
    }



  HplCC2420InterruptsP__ccaLastState = CCAState;
  HplCC2420InterruptsP__CCATask__postTask();
}

# 235 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__CC2420Config__syncDone(error_t error)
#line 235
{
}

# 709 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__CC2420Config__syncDone(error_t error)
#line 709
{
}

# 55 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static void CC2420ControlP__CC2420Config__syncDone(error_t error){
#line 55
  CC2420ReceiveP__CC2420Config__syncDone(error);
#line 55
  CC2420ActiveMessageP__CC2420Config__syncDone(error);
#line 55
}
#line 55
# 469 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__syncDone__runTask(void )
#line 469
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 470
    CC2420ControlP__m_sync_busy = FALSE;
#line 470
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ControlP__CC2420Config__syncDone(SUCCESS);
}

# 88 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SyncResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420ControlC.SyncSpiC*/CC2420SpiC__1__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 323 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Config__sync(void )
#line 323
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 324
    {
      if (CC2420ControlP__m_sync_busy) {
          {
            unsigned char __nesc_temp = 
#line 326
            FAIL;

            {
#line 326
              __nesc_atomic_end(__nesc_atomic); 
#line 326
              return __nesc_temp;
            }
          }
        }
#line 329
      CC2420ControlP__m_sync_busy = TRUE;
      if (CC2420ControlP__m_state == CC2420ControlP__S_XOSC_STARTED) {
          CC2420ControlP__SyncResource__request();
        }
      else 
#line 332
        {
          CC2420ControlP__syncDone__postTask();
        }
    }
#line 335
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

#line 465
static inline void CC2420ControlP__sync__runTask(void )
#line 465
{
  CC2420ControlP__CC2420Config__sync();
}

# 244 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline void CC2420TinyosNetworkP__BareSend__default__sendDone(message_t *msg, error_t error)
#line 244
{
}

# 100 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Send.nc"
inline static void CC2420TinyosNetworkP__BareSend__sendDone(message_t * msg, error_t error){
#line 100
  CC2420TinyosNetworkP__BareSend__default__sendDone(msg, error);
#line 100
}
#line 100
# 110 "/home/ivan/Desktop/tinyos-main/tos/interfaces/AMSend.nc"
inline static void CC2420ActiveMessageP__AMSend__sendDone(am_id_t arg_0x7f27b0d93cf0, message_t * msg, error_t error){
#line 110
  PacketParrotP__AMSend__sendDone(arg_0x7f27b0d93cf0, msg, error);
#line 110
}
#line 110
# 120 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t CC2420ActiveMessageP__RadioResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420TinyosNetworkP__Resource__release(CC2420ActiveMessageC__CC2420_AM_SEND_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 212 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__SubSend__sendDone(message_t *msg, error_t result)
#line 212
{
  CC2420ActiveMessageP__RadioResource__release();
  CC2420ActiveMessageP__AMSend__sendDone(CC2420ActiveMessageP__AMPacket__type(msg), msg, result);
}

# 100 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Send.nc"
inline static void CC2420TinyosNetworkP__ActiveSend__sendDone(message_t * msg, error_t error){
#line 100
  CC2420ActiveMessageP__SubSend__sendDone(msg, error);
#line 100
}
#line 100
# 148 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline void CC2420TinyosNetworkP__SubSend__sendDone(message_t *msg, error_t error)
#line 148
{
  if (CC2420TinyosNetworkP__m_busy_client == CC2420TinyosNetworkP__CLIENT_AM) {
      CC2420TinyosNetworkP__ActiveSend__sendDone(msg, error);
    }
  else 
#line 151
    {
      CC2420TinyosNetworkP__BareSend__sendDone(msg, error);
    }
}

# 100 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Send.nc"
inline static void UniqueSendP__Send__sendDone(message_t * msg, error_t error){
#line 100
  CC2420TinyosNetworkP__SubSend__sendDone(msg, error);
#line 100
}
#line 100
# 104 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline void UniqueSendP__SubSend__sendDone(message_t *msg, error_t error)
#line 104
{
  UniqueSendP__State__toIdle();
  UniqueSendP__Send__sendDone(msg, error);
}

# 100 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Send.nc"
inline static void CC2420CsmaP__Send__sendDone(message_t * msg, error_t error){
#line 100
  UniqueSendP__SubSend__sendDone(msg, error);
#line 100
}
#line 100
# 67 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420CsmaP__stopDone_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420CsmaP__stopDone_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 55 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )59U |= 1 << 6;
}

# 40 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__RSTN__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set();
#line 40
}
#line 40
# 56 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )59U &= ~(1 << 5);
}

# 41 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__VREN__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__clr();
#line 41
}
#line 41
# 56 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )59U &= ~(1 << 6);
}

# 41 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__RSTN__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr();
#line 41
}
#line 41
# 216 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__stopVReg(void )
#line 216
{
  CC2420ControlP__m_state = CC2420ControlP__S_VREG_STOPPED;
  CC2420ControlP__RSTN__clr();
  CC2420ControlP__VREN__clr();
  CC2420ControlP__RSTN__set();
  return SUCCESS;
}

# 63 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP__CC2420Power__stopVReg(void ){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420ControlP__CC2420Power__stopVReg();
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 52 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__disable(void )
#line 52
{
#line 52
  * (volatile uint8_t *)(0x39 + 0x20) &= ~(1 << 6);
}

# 51 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__disable(void ){
#line 51
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__disable();
#line 51
}
#line 51
# 33 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__disable(void )
#line 33
{
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__disable();
  return SUCCESS;
}

# 61 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ReceiveP__InterruptFIFOP__disable(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__disable();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 171 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline error_t CC2420ReceiveP__StdControl__stop(void )
#line 171
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 172
    {
      CC2420ReceiveP__m_state = CC2420ReceiveP__S_STOPPED;
      CC2420ReceiveP__reset_state();
      CC2420ReceiveP__CSN__set();
      CC2420ReceiveP__InterruptFIFOP__disable();
    }
#line 177
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 147 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__Capture__stop(void )
#line 147
{
#line 147
  * (volatile uint8_t *)(0x37 + 0x20) &= ~(1 << 5);
}

# 70 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__stop(void ){
#line 70
  HplAtm128Timer1P__Capture__stop();
#line 70
}
#line 70
# 67 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__disable(void )
#line 67
{
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__stop();
}

# 66 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GpioCapture.nc"
inline static void CC2420TransmitP__CaptureSFD__disable(void ){
#line 66
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__disable();
#line 66
}
#line 66
# 179 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__StdControl__stop(void )
#line 179
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 180
    {
      CC2420TransmitP__m_state = CC2420TransmitP__S_STOPPED;
      CC2420TransmitP__BackoffTimer__stop();
      CC2420TransmitP__CaptureSFD__disable();
      CC2420TransmitP__SpiResource__release();
      CC2420TransmitP__CSN__set();
    }
#line 186
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 105 "/home/ivan/Desktop/tinyos-main/tos/interfaces/StdControl.nc"
inline static error_t CC2420CsmaP__SubControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = CC2420TransmitP__StdControl__stop();
#line 105
  __nesc_result = ecombine(__nesc_result, CC2420ReceiveP__StdControl__stop());
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 275 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__shutdown(void )
#line 275
{
  CC2420CsmaP__SubControl__stop();
  CC2420CsmaP__CC2420Power__stopVReg();
  CC2420CsmaP__stopDone_task__postTask();
}

#line 244
static inline void CC2420CsmaP__sendDone_task__runTask(void )
#line 244
{
  error_t packetErr;

#line 246
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 246
    packetErr = CC2420CsmaP__sendErr;
#line 246
    __nesc_atomic_end(__nesc_atomic); }
  if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STOPPING)) {
      CC2420CsmaP__shutdown();
    }
  else {
      CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_STARTED);
    }

  CC2420CsmaP__Send__sendDone(CC2420CsmaP__m_msg, packetErr);
}

# 89 "PacketParrotP.nc"
static inline void PacketParrotP__AMControl__stopDone(error_t err)
#line 89
{
}

# 138 "/home/ivan/Desktop/tinyos-main/tos/interfaces/SplitControl.nc"
inline static void CC2420CsmaP__SplitControl__stopDone(error_t error){
#line 138
  PacketParrotP__AMControl__stopDone(error);
#line 138
}
#line 138
# 265 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__stopDone_task__runTask(void )
#line 265
{
  CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_STOPPED);
  CC2420CsmaP__SplitControl__stopDone(SUCCESS);
}

# 104 "/home/ivan/Desktop/tinyos-main/tos/interfaces/SplitControl.nc"
inline static error_t PacketParrotP__AMControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = CC2420CsmaP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 387 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
static inline error_t LogStorageP__LogRead__read(uint8_t id, void *buf, storage_len_t length)
#line 387
{
  return LogStorageP__newRequest(LogStorageP__R_READ, id, buf, length);
}

# 63 "/home/ivan/Desktop/tinyos-main/tos/interfaces/LogRead.nc"
inline static error_t PacketParrotP__LogRead__read(void * buf, storage_len_t len){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = LogStorageP__LogRead__read(/*PacketParrotC.LogStorageC*/LogStorageC__0__INTF_ID, buf, len);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 77 "PacketParrotP.nc"
static inline void PacketParrotP__AMControl__startDone(error_t err)
#line 77
{
  if (err == SUCCESS) {
      if (PacketParrotP__LogRead__read(&PacketParrotP__m_entry, sizeof(PacketParrotP__logentry_t )) != SUCCESS) {
        }
    }
  else 
    {
      PacketParrotP__AMControl__start();
    }
}

# 113 "/home/ivan/Desktop/tinyos-main/tos/interfaces/SplitControl.nc"
inline static void CC2420CsmaP__SplitControl__startDone(error_t error){
#line 113
  PacketParrotP__AMControl__startDone(error);
#line 113
}
#line 113
# 120 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ControlC.Spi*/CC2420SpiC__0__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 196 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__Resource__release(void )
#line 196
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 197
    {
      CC2420ControlP__CSN__set();
      {
        unsigned char __nesc_temp = 
#line 199
        CC2420ControlP__SpiResource__release();

        {
#line 199
          __nesc_atomic_end(__nesc_atomic); 
#line 199
          return __nesc_temp;
        }
      }
    }
#line 202
    __nesc_atomic_end(__nesc_atomic); }
}

# 120 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t CC2420CsmaP__Resource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420ControlP__Resource__release();
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 268 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__rxOn(void )
#line 268
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 269
    {
      if (CC2420ControlP__m_state != CC2420ControlP__S_XOSC_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 271
            FAIL;

            {
#line 271
              __nesc_atomic_end(__nesc_atomic); 
#line 271
              return __nesc_temp;
            }
          }
        }
#line 273
      CC2420ControlP__SRXON__strobe();
    }
#line 274
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 90 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP__CC2420Power__rxOn(void ){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = CC2420ControlP__CC2420Power__rxOn();
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 51 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__enable(void )
#line 51
{
#line 51
  * (volatile uint8_t *)(0x39 + 0x20) |= 1 << 6;
}

# 46 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__enable(void ){
#line 46
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__enable();
#line 46
}
#line 46
# 56 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__edge(bool low_to_high)
#line 56
{
  * (volatile uint8_t * )90U |= 1 << 5;

  if (low_to_high) {
    * (volatile uint8_t * )90U |= 1 << 4;
    }
  else {
#line 62
    * (volatile uint8_t * )90U &= ~(1 << 4);
    }
}

# 70 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__edge(bool low_to_high){
#line 70
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__edge(low_to_high);
#line 70
}
#line 70
# 50 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__clear(void )
#line 50
{
#line 50
  * (volatile uint8_t *)(0x38 + 0x20) = 1 << 6;
}

# 56 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__clear(void ){
#line 56
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__clear();
#line 56
}
#line 56
# 15 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__enable(bool rising)
#line 15
{
  /* atomic removed: atomic calls only */
#line 16
  {
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__disable();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__clear();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__edge(rising);
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__enable();
  }
  return SUCCESS;
}





static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__enableFallingEdge(void )
#line 29
{
  return /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__enable(FALSE);
}

# 54 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ReceiveP__InterruptFIFOP__enableFallingEdge(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__enableFallingEdge();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 157 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline error_t CC2420ReceiveP__StdControl__start(void )
#line 157
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 158
    {
      CC2420ReceiveP__reset_state();
      CC2420ReceiveP__m_state = CC2420ReceiveP__S_STARTED;
      CC2420ReceiveP__receivingPacket = FALSE;




      CC2420ReceiveP__InterruptFIFOP__enableFallingEdge();
    }
#line 167
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 59 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captureRisingEdge(void )
#line 59
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__enableCapture(TRUE);
}

# 53 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GpioCapture.nc"
inline static error_t CC2420TransmitP__CaptureSFD__captureRisingEdge(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captureRisingEdge();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 168 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__StdControl__start(void )
#line 168
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 169
    {
      CC2420TransmitP__CaptureSFD__captureRisingEdge();
      CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
      CC2420TransmitP__m_receiving = FALSE;
      CC2420TransmitP__abortSpiRelease = FALSE;
      CC2420TransmitP__m_tx_power = 0;
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 95 "/home/ivan/Desktop/tinyos-main/tos/interfaces/StdControl.nc"
inline static error_t CC2420CsmaP__SubControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = CC2420TransmitP__StdControl__start();
#line 95
  __nesc_result = ecombine(__nesc_result, CC2420ReceiveP__StdControl__start());
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 257 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__startDone_task__runTask(void )
#line 257
{
  CC2420CsmaP__SubControl__start();
  CC2420CsmaP__CC2420Power__rxOn();
  CC2420CsmaP__Resource__release();
  CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_STARTED);
  CC2420CsmaP__SplitControl__startDone(SUCCESS);
}

# 135 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__Capture__reset(void )
#line 135
{
#line 135
  * (volatile uint8_t *)(0x36 + 0x20) = 1 << 5;
}

# 64 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__reset(void ){
#line 64
  HplAtm128Timer1P__Capture__reset();
#line 64
}
#line 64
# 131 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__Capture__setEdge(bool up)
#line 131
{
#line 131
  if (up) {
#line 131
    * (volatile uint8_t *)(0x2E + 0x20) |= 1 << 6;
    }
  else {
#line 131
    * (volatile uint8_t *)(0x2E + 0x20) &= ~(1 << 6);
    }
}

# 88 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__setEdge(bool up){
#line 88
  HplAtm128Timer1P__Capture__setEdge(up);
#line 88
}
#line 88
# 141 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__Capture__start(void )
#line 141
{
#line 141
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 5;
}

# 67 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__start(void ){
#line 67
  HplAtm128Timer1P__Capture__start();
#line 67
}
#line 67
# 45 "/home/ivan/Desktop/tinyos-main/tos/interfaces/State.nc"
inline static error_t CC2420CsmaP__SplitControlState__requestState(uint8_t reqState){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = StateImplP__State__requestState(1U, reqState);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 66 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void CC2420ControlP__StartupTimer__start(CC2420ControlP__StartupTimer__size_type dt){
#line 66
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__start(dt);
#line 66
}
#line 66
# 55 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )59U |= 1 << 5;
}

# 40 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__VREN__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__set();
#line 40
}
#line 40
# 204 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__startVReg(void )
#line 204
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 205
    {
      if (CC2420ControlP__m_state != CC2420ControlP__S_VREG_STOPPED) {
          {
            unsigned char __nesc_temp = 
#line 207
            FAIL;

            {
#line 207
              __nesc_atomic_end(__nesc_atomic); 
#line 207
              return __nesc_temp;
            }
          }
        }
#line 209
      CC2420ControlP__m_state = CC2420ControlP__S_VREG_STARTING;
    }
#line 210
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ControlP__VREN__set();
  CC2420ControlP__StartupTimer__start(CC2420_TIME_VREN);
  return SUCCESS;
}

# 51 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP__CC2420Power__startVReg(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = CC2420ControlP__CC2420Power__startVReg();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 48 "/home/ivan/Desktop/tinyos-main/tos/interfaces/LocalIeeeEui64.nc"
inline static ieee_eui64_t CC2420ControlP__LocalIeeeEui64__getId(void ){
#line 48
  struct ieee_eui64 __nesc_result;
#line 48

#line 48
  __nesc_result = LocalIeeeEui64C__LocalIeeeEui64__getId();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 93 "/home/ivan/Desktop/tinyos-main/tos/system/ActiveMessageAddressC.nc"
static inline am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void )
#line 93
{
  am_group_t myGroup;

  /* atomic removed: atomic calls only */
#line 95
  myGroup = ActiveMessageAddressC__group;
  return myGroup;
}

# 55 "/home/ivan/Desktop/tinyos-main/tos/interfaces/ActiveMessageAddress.nc"
inline static am_group_t CC2420ControlP__ActiveMessageAddress__amGroup(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amGroup();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
#line 50
inline static am_addr_t CC2420ControlP__ActiveMessageAddress__amAddress(void ){
#line 50
  unsigned short __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 61 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )58U |= 1 << 5;
}

# 46 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__VREN__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__makeOutput();
#line 46
}
#line 46
# 61 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )58U |= 1 << 6;
}

# 46 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__RSTN__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput();
#line 46
}
#line 46
inline static void CC2420ControlP__CSN__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput();
#line 46
}
#line 46
# 129 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__Init__init(void )
#line 129
{
  int i;
#line 130
  int t;

#line 131
  CC2420ControlP__CSN__makeOutput();
  CC2420ControlP__RSTN__makeOutput();
  CC2420ControlP__VREN__makeOutput();

  CC2420ControlP__m_short_addr = CC2420ControlP__ActiveMessageAddress__amAddress();
  CC2420ControlP__m_ext_addr = CC2420ControlP__LocalIeeeEui64__getId();
  CC2420ControlP__m_pan = CC2420ControlP__ActiveMessageAddress__amGroup();
  CC2420ControlP__m_tx_power = 17;
  CC2420ControlP__m_channel = 15;

  CC2420ControlP__m_ext_addr = CC2420ControlP__LocalIeeeEui64__getId();
  for (i = 0; i < 4; i++) {
      t = CC2420ControlP__m_ext_addr.data[i];
      CC2420ControlP__m_ext_addr.data[i] = CC2420ControlP__m_ext_addr.data[7 - i];
      CC2420ControlP__m_ext_addr.data[7 - i] = t;
    }





  CC2420ControlP__addressRecognition = TRUE;





  CC2420ControlP__hwAddressRecognition = FALSE;






  CC2420ControlP__autoAckEnabled = TRUE;






  CC2420ControlP__hwAutoAckDefault = FALSE;



  return SUCCESS;
}

# 81 "/home/ivan/Desktop/tinyos-main/tos/system/StateImplP.nc"
static inline error_t StateImplP__Init__init(void )
#line 81
{
  int i;

#line 83
  for (i = 0; i < 4U; i++) {
      StateImplP__state[i] = StateImplP__S_IDLE;
    }
  return SUCCESS;
}

# 55 "/home/ivan/Desktop/tinyos-main/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__Init__init(void )
#line 55
{
  memset(/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY, sizeof /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ);
  return SUCCESS;
}

# 22 "/home/ivan/Desktop/tinyos-main/tos/system/NoInitC.nc"
static inline error_t NoInitC__Init__init(void )
#line 22
{
  return SUCCESS;
}

# 59 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )49U &= ~(1 << 4);
}

# 44 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__SFD__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput();
#line 44
}
#line 44


inline static void CC2420TransmitP__CSN__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput();
#line 46
}
#line 46
# 59 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )49U &= ~(1 << 6);
}

# 44 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__CCA__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput();
#line 44
}
#line 44
# 160 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__Init__init(void )
#line 160
{
  CC2420TransmitP__CCA__makeInput();
  CC2420TransmitP__CSN__makeOutput();
  CC2420TransmitP__SFD__makeInput();
  return SUCCESS;
}

# 151 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline error_t CC2420ReceiveP__Init__init(void )
#line 151
{
  CC2420ReceiveP__m_p_rx_buf = &CC2420ReceiveP__m_rx_buf;
  return SUCCESS;
}

# 131 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__Compare__start(void )
#line 131
{
#line 131
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 1;
}

# 65 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__start(void ){
#line 65
  HplAtm128Timer0AsyncP__Compare__start();
#line 65
}
#line 65
# 85 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__TimerCtrl__setControl(Atm128TimerControl_t x)
#line 85
{
  * (volatile uint8_t *)(0x33 + 0x20) = x.flat;
}

# 46 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__setControl(Atm128TimerControl_t control){
#line 46
  HplAtm128Timer0AsyncP__TimerCtrl__setControl(control);
#line 46
}
#line 46
# 207 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous(void )
#line 207
{
  * (volatile uint8_t *)(0x30 + 0x20) |= 1 << 3;
}

# 32 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__setTimer0Asynchronous(void ){
#line 32
  HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous();
#line 32
}
#line 32
# 54 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init(void )
#line 54
{
  /* atomic removed: atomic calls only */
  {
    Atm128TimerControl_t x;

    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__setTimer0Asynchronous();
    x.flat = 0;
    x.bits.cs = 3;
    x.bits.wgm1 = 1;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__setControl(x);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__start();
  }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt();
  return SUCCESS;
}

# 55 "/home/ivan/Desktop/tinyos-main/tos/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC__Init__init(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 56
  RandomMlcgC__seed = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 52 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Random.nc"
inline static uint16_t UniqueSendP__Random__rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 62 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline error_t UniqueSendP__Init__init(void )
#line 62
{
  UniqueSendP__localSendId = UniqueSendP__Random__rand16();
  return SUCCESS;
}

# 71 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline error_t UniqueReceiveP__Init__init(void )
#line 71
{
  int i;

#line 73
  for (i = 0; i < 4; i++) {
      UniqueReceiveP__receivedMessages[i].source = (am_addr_t )0xFFFF;
      UniqueReceiveP__receivedMessages[i].dsn = 0;
    }
  return SUCCESS;
}

# 55 "/home/ivan/Desktop/tinyos-main/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__Init__init(void )
#line 55
{
  memset(/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ, /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY, sizeof /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ);
  return SUCCESS;
}

# 124 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbP.nc"
static inline error_t At45dbP__Init__init(void )
#line 124
{
  At45dbP__request = At45dbP__IDLE;
  At45dbP__flashBusy = TRUE;


  At45dbP__buffer[0].page = At45dbP__buffer[1].page = AT45_MAX_PAGES;
  At45dbP__buffer[0].busy = At45dbP__buffer[1].busy = FALSE;
  At45dbP__buffer[0].clean = At45dbP__buffer[1].clean = TRUE;
  At45dbP__buffer[0].unchecked = At45dbP__buffer[1].unchecked = 0;
  At45dbP__buffer[0].erased = At45dbP__buffer[1].erased = FALSE;

  return SUCCESS;
}

# 55 "/home/ivan/Desktop/tinyos-main/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__Init__init(void )
#line 55
{
  memset(/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__resQ, /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY, sizeof /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__resQ);
  return SUCCESS;
}

# 62 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, At45dbP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, UniqueReceiveP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, UniqueSendP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, RandomMlcgC__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, CC2420ReceiveP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, CC2420TransmitP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, NoInitC__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, StateImplP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, CC2420ControlP__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 72 "PacketParrotP.nc"
static inline void PacketParrotP__Boot__booted(void )
#line 72
{
  PacketParrotP__AMControl__start();
}

# 60 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 60
  PacketParrotP__Boot__booted();
#line 60
}
#line 60
# 164 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline mcu_power_t HplAtm128Timer0AsyncP__McuPowerOverride__lowestState(void )
#line 164
{
  uint8_t diff;


  if (* (volatile uint8_t *)(0x37 + 0x20) & ((1 << 1) | (1 << 0))) {




      while (* (volatile uint8_t *)(0x30 + 0x20) & (((1 << 2) | (1 << 1)) | (1 << 0))) 
        ;
      diff = * (volatile uint8_t *)(0x31 + 0x20) - * (volatile uint8_t *)(0x32 + 0x20);
      if (diff < EXT_STANDBY_T0_THRESHOLD || 
      * (volatile uint8_t *)(0x32 + 0x20) > 256 - EXT_STANDBY_T0_THRESHOLD) {
        return ATM128_POWER_EXT_STANDBY;
        }
#line 179
      return ATM128_POWER_SAVE;
    }
  else {
      return ATM128_POWER_DOWN;
    }
}

# 62 "/home/ivan/Desktop/tinyos-main/tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = HplAtm128Timer0AsyncP__McuPowerOverride__lowestState();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 74 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/McuSleepC.nc"
static inline mcu_power_t McuSleepC__getPowerState(void )
#line 74
{





  if (* (volatile uint8_t *)(0x37 + 0x20) & ~((((1 << 1) | (1 << 0)) | (1 << 2)) | (1 << 6)) || 
  * (volatile uint8_t *)0x7D & ~(1 << 2)) {
      return ATM128_POWER_IDLE;
    }
  else {
    if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x0D + 0x20) & (1 << 6)) {
        return ATM128_POWER_IDLE;
      }
    else {
      if ((* (volatile uint8_t *)(0x0A + 0x20) | * (volatile uint8_t *)0x9A) & ((1 << 3) | (1 << 4))) {
          return ATM128_POWER_IDLE;
        }
      else {
        if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)0x74 & (1 << 2)) {
            return ATM128_POWER_IDLE;
          }
        else {
          if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x06 + 0x20) & (1 << 7)) {
              return ATM128_POWER_ADC_NR;
            }
          else {
              return ATM128_POWER_DOWN;
            }
          }
        }
      }
    }
}

# 140 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/atm128hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 140
{
  return m1 < m2 ? m1 : m2;
}

# 105 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/McuSleepC.nc"
static inline void McuSleepC__McuSleep__sleep(void )
#line 105
{
  uint8_t powerState;

  powerState = mcombine(McuSleepC__getPowerState(), McuSleepC__McuPowerOverride__lowestState());
  * (volatile uint8_t *)(0x35 + 0x20) = ((
  * (volatile uint8_t *)(0x35 + 0x20) & 0xe3) | (1 << 5)) | __extension__ ({
#line 110
    uint16_t __addr16 = (uint16_t )(uint16_t )&McuSleepC__atm128PowerBits[powerState];
#line 110
    uint8_t __result;

#line 110
     __asm ("lpm %0, Z""\n\t" : "=r"(__result) : "z"(__addr16));__result;
  }
  );
#line 112
   __asm volatile ("sei");

   __asm volatile ("sleep" :  :  : "memory");
   __asm volatile ("cli");

  * (volatile uint8_t *)(0x35 + 0x20) &= ~(1 << 5);
}

# 76 "/home/ivan/Desktop/tinyos-main/tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP__McuSleep__sleep(void ){
#line 76
  McuSleepC__McuSleep__sleep();
#line 76
}
#line 76
# 78 "/home/ivan/Desktop/tinyos-main/tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP__popTask(void )
{
  if (SchedulerBasicP__m_head != SchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SchedulerBasicP__m_head;

#line 83
      SchedulerBasicP__m_head = SchedulerBasicP__m_next[SchedulerBasicP__m_head];
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
        }
      SchedulerBasicP__m_next[id] = SchedulerBasicP__NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP__NO_TASK;
    }
}

#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void )
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP__popTask()) == SchedulerBasicP__NO_TASK) 
            {
              SchedulerBasicP__McuSleep__sleep();
            }
        }
#line 161
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP__TaskBasic__runTask(nextTask);
    }
}

# 72 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__taskLoop(void ){
#line 72
  SchedulerBasicP__Scheduler__taskLoop();
#line 72
}
#line 72
# 149 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static __inline void HplAtm128Timer0AsyncP__stabiliseTimer0(void )
#line 149
{
  * (volatile uint8_t *)(0x33 + 0x20) = * (volatile uint8_t *)(0x33 + 0x20);
  while (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 0)) 
    ;
}

# 58 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void )
{
}

# 82 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Counter.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__overflow(void ){
#line 82
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow();
#line 82
}
#line 82
# 88 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/atm128hardware.h"
static __inline  void __nesc_enable_interrupt()
#line 88
{
   __asm volatile ("sei");}

# 141 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP__Compare__get(void )
#line 141
{
#line 141
  return * (volatile uint8_t *)(0x31 + 0x20);
}

# 48 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get(void ){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = HplAtm128Timer0AsyncP__Compare__get();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 149 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired(void )
#line 149
{
  int overflowed;


  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base += /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get() + 1U;
  overflowed = !/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base;
  __nesc_enable_interrupt();
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt();
  if (overflowed) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__overflow();
    }
}

# 58 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer0AsyncP__Compare__fired(void ){
#line 58
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired();
#line 58
}
#line 58
# 230 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow(void )
#line 230
{
}

# 70 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer0AsyncP__Timer__overflow(void ){
#line 70
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow();
#line 70
}
#line 70
# 88 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420ControlC.Spi*/CC2420SpiC__0__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 188 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__Resource__request(void )
#line 188
{
  return CC2420ControlP__SpiResource__request();
}

# 88 "/home/ivan/Desktop/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t CC2420CsmaP__Resource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420ControlP__Resource__request();
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 210 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__CC2420Power__startVRegDone(void )
#line 210
{
  CC2420CsmaP__Resource__request();
}

# 56 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static void CC2420ControlP__CC2420Power__startVRegDone(void ){
#line 56
  CC2420CsmaP__CC2420Power__startVRegDone();
#line 56
}
#line 56
# 431 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__StartupTimer__fired(void )
#line 431
{
  if (CC2420ControlP__m_state == CC2420ControlP__S_VREG_STARTING) {
      CC2420ControlP__m_state = CC2420ControlP__S_VREG_STARTED;
      CC2420ControlP__RSTN__clr();
      CC2420ControlP__RSTN__set();
      CC2420ControlP__CC2420Power__startVRegDone();
    }
}

# 43 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static bool CC2420TransmitP__CCA__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 498 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__BackoffTimer__fired(void )
#line 498
{
  /* atomic removed: atomic calls only */
#line 499
  {
    switch (CC2420TransmitP__m_state) {

        case CC2420TransmitP__S_SAMPLE_CCA: 


          if (CC2420TransmitP__CCA__get()) {
              CC2420TransmitP__m_state = CC2420TransmitP__S_BEGIN_TRANSMIT;
              CC2420TransmitP__BackoffTimer__start(CC2420_TIME_ACK_TURNAROUND);
            }
          else {
              CC2420TransmitP__congestionBackoff();
            }
        break;

        case CC2420TransmitP__S_BEGIN_TRANSMIT: 
          case CC2420TransmitP__S_CANCEL: 
            if (CC2420TransmitP__acquireSpiResource() == SUCCESS) {
                CC2420TransmitP__attemptSend();
              }
        break;

        case CC2420TransmitP__S_ACK_WAIT: 
          CC2420TransmitP__signalDone(SUCCESS);
        break;

        case CC2420TransmitP__S_SFD: 


          CC2420TransmitP__SFLUSHTX__strobe();
        CC2420TransmitP__CaptureSFD__captureRisingEdge();
        CC2420TransmitP__releaseSpiResource();
        CC2420TransmitP__signalDone(ERETRY);
        break;

        default: 
          break;
      }
  }
}

# 78 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__fired(void ){
#line 78
  CC2420TransmitP__BackoffTimer__fired();
#line 78
  CC2420ControlP__StartupTimer__fired();
#line 78
}
#line 78
# 162 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/TransformAlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__fired(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt == 0) 
        {
          /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__fired();
        }
      else 
        {
          /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__set_alarm();
        }
    }
#line 174
    __nesc_atomic_end(__nesc_atomic); }
}

# 78 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__fired(void ){
#line 78
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__fired();
#line 78
}
#line 78
# 119 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired(void )
#line 119
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop();
  ;
  __nesc_enable_interrupt();
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__fired();
}

# 58 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer1P__CompareA__fired(void ){
#line 58
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired();
#line 58
}
#line 58
# 207 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareB__default__fired(void )
#line 207
{
}

# 58 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer1P__CompareB__fired(void ){
#line 58
  HplAtm128Timer1P__CompareB__default__fired();
#line 58
}
#line 58
# 211 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareC__default__fired(void )
#line 211
{
}

# 58 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer1P__CompareC__fired(void ){
#line 58
  HplAtm128Timer1P__CompareC__default__fired();
#line 58
}
#line 58
# 70 "/home/ivan/Desktop/tinyos-main/tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420TransmitP__PacketTimeStamp__clear(message_t * msg){
#line 70
  CC2420PacketP__PacketTimeStamp32khz__clear(msg);
#line 70
}
#line 70
# 195 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__CC2420Receive__sfd_dropped(void )
#line 195
{
  if (CC2420ReceiveP__m_timestamp_size) {
      CC2420ReceiveP__m_timestamp_size--;
    }
}

# 55 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420TransmitP__CC2420Receive__sfd_dropped(void ){
#line 55
  CC2420ReceiveP__CC2420Receive__sfd_dropped();
#line 55
}
#line 55
# 54 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__get(void )
#line 54
{
#line 54
  return (* (volatile uint8_t * )48U & (1 << 4)) != 0;
}

# 43 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static bool CC2420TransmitP__SFD__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 186 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__CC2420Receive__sfd(uint32_t time)
#line 186
{
  if (CC2420ReceiveP__m_timestamp_size < CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE) {
      uint8_t tail = (CC2420ReceiveP__m_timestamp_head + CC2420ReceiveP__m_timestamp_size) % 
      CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE;

#line 190
      CC2420ReceiveP__m_timestamp_queue[tail] = time;
      CC2420ReceiveP__m_timestamp_size++;
    }
}

# 49 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420TransmitP__CC2420Receive__sfd(uint32_t time){
#line 49
  CC2420ReceiveP__CC2420Receive__sfd(time);
#line 49
}
#line 49
# 63 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captureFallingEdge(void )
#line 63
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__enableCapture(FALSE);
}

# 54 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GpioCapture.nc"
inline static error_t CC2420TransmitP__CaptureSFD__captureFallingEdge(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captureFallingEdge();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 63 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static cc2420_status_t CC2420TransmitP__TXFIFO_RAM__write(uint8_t offset, uint8_t * data, uint8_t length){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Ram__write(CC2420_RAM_TXFIFO, offset, data, length);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 219 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline uint8_t CC2420PacketP__PacketTimeSyncOffset__get(message_t *msg)
{
  return __nesc_ntoh_leuint8(CC2420PacketP__CC2420PacketBody__getHeader(msg)->length.nxdata)
   + (sizeof(cc2420_header_t ) - MAC_HEADER_SIZE)
   - MAC_FOOTER_SIZE
   - sizeof(timesync_radio_t );
}

# 58 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
inline static uint8_t CC2420TransmitP__PacketTimeSyncOffset__get(message_t * msg){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = CC2420PacketP__PacketTimeSyncOffset__get(msg);
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 210 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline bool CC2420PacketP__PacketTimeSyncOffset__isSet(message_t *msg)
{
  return __nesc_ntoh_int8(CC2420PacketP__CC2420PacketBody__getMetadata(msg)->timesync.nxdata);
}

# 50 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
inline static bool CC2420TransmitP__PacketTimeSyncOffset__isSet(message_t * msg){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = CC2420PacketP__PacketTimeSyncOffset__isSet(msg);
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 78 "/home/ivan/Desktop/tinyos-main/tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420TransmitP__PacketTimeStamp__set(message_t * msg, CC2420TransmitP__PacketTimeStamp__size_type value){
#line 78
  CC2420PacketP__PacketTimeStamp32khz__set(msg, value);
#line 78
}
#line 78
# 109 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Alarm.nc"
inline static CC2420TransmitP__BackoffTimer__size_type CC2420TransmitP__BackoffTimer__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 259 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static __inline uint32_t CC2420TransmitP__getTime32(uint16_t captured_time)
{
  uint32_t now = CC2420TransmitP__BackoffTimer__getNow();


  return now - (uint16_t )(now - captured_time);
}

#line 280
static inline void CC2420TransmitP__CaptureSFD__captured(uint16_t time)
#line 280
{
  unsigned char *__nesc_temp45;
  unsigned char *__nesc_temp44;
#line 281
  uint32_t time32;
  uint8_t sfd_state = 0;

#line 283
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 283
    {
      time32 = CC2420TransmitP__getTime32(time);
      switch (CC2420TransmitP__m_state) {

          case CC2420TransmitP__S_SFD: 
            CC2420TransmitP__m_state = CC2420TransmitP__S_EFD;
          CC2420TransmitP__sfdHigh = TRUE;


          CC2420TransmitP__m_receiving = FALSE;
          CC2420TransmitP__CaptureSFD__captureFallingEdge();
          CC2420TransmitP__PacketTimeStamp__set(CC2420TransmitP__m_msg, time32);
          if (CC2420TransmitP__PacketTimeSyncOffset__isSet(CC2420TransmitP__m_msg)) {
              uint8_t absOffset = sizeof(message_header_t ) - sizeof(cc2420_header_t ) + CC2420TransmitP__PacketTimeSyncOffset__get(CC2420TransmitP__m_msg);
              timesync_radio_t *timesync = (timesync_radio_t *)((nx_uint8_t *)CC2420TransmitP__m_msg + absOffset);

              (__nesc_temp44 = (*timesync).nxdata, __nesc_hton_uint32(__nesc_temp44, __nesc_ntoh_uint32(__nesc_temp44) - time32));
              CC2420TransmitP__CSN__clr();
              CC2420TransmitP__TXFIFO_RAM__write(absOffset, (uint8_t *)timesync, sizeof(timesync_radio_t ));
              CC2420TransmitP__CSN__set();

              (__nesc_temp45 = (*timesync).nxdata, __nesc_hton_uint32(__nesc_temp45, __nesc_ntoh_uint32(__nesc_temp45) + time32));
            }

          if (__nesc_ntoh_leuint16(CC2420TransmitP__CC2420PacketBody__getHeader(CC2420TransmitP__m_msg)->fcf.nxdata) & (1 << IEEE154_FCF_ACK_REQ)) {

              CC2420TransmitP__abortSpiRelease = TRUE;
            }
          CC2420TransmitP__releaseSpiResource();
          CC2420TransmitP__BackoffTimer__stop();

          if (CC2420TransmitP__SFD__get()) {
              break;
            }


          case CC2420TransmitP__S_EFD: 
            CC2420TransmitP__sfdHigh = FALSE;
          CC2420TransmitP__CaptureSFD__captureRisingEdge();

          if (__nesc_ntoh_leuint16(CC2420TransmitP__CC2420PacketBody__getHeader(CC2420TransmitP__m_msg)->fcf.nxdata) & (1 << IEEE154_FCF_ACK_REQ)) {
              CC2420TransmitP__m_state = CC2420TransmitP__S_ACK_WAIT;
              CC2420TransmitP__BackoffTimer__start(CC2420_ACK_WAIT_DELAY);
            }
          else 
#line 326
            {
              CC2420TransmitP__signalDone(SUCCESS);
            }

          if (!CC2420TransmitP__SFD__get()) {
              break;
            }


          default: 

            if (!CC2420TransmitP__m_receiving && CC2420TransmitP__sfdHigh == FALSE) {
                CC2420TransmitP__sfdHigh = TRUE;
                CC2420TransmitP__CaptureSFD__captureFallingEdge();

                sfd_state = CC2420TransmitP__SFD__get();
                CC2420TransmitP__CC2420Receive__sfd(time32);
                CC2420TransmitP__m_receiving = TRUE;
                CC2420TransmitP__m_prev_time = time;
                if (CC2420TransmitP__SFD__get()) {
                    {
                      __nesc_atomic_end(__nesc_atomic); 
#line 347
                      return;
                    }
                  }
              }


          if (CC2420TransmitP__sfdHigh == TRUE) {
              CC2420TransmitP__sfdHigh = FALSE;
              CC2420TransmitP__CaptureSFD__captureRisingEdge();
              CC2420TransmitP__m_receiving = FALSE;








              if (sfd_state == 0 && time - CC2420TransmitP__m_prev_time < 10) {
                  CC2420TransmitP__CC2420Receive__sfd_dropped();
                  if (CC2420TransmitP__m_msg) {
                    CC2420TransmitP__PacketTimeStamp__clear(CC2420TransmitP__m_msg);
                    }
                }
#line 370
              break;
            }
        }
    }
#line 373
    __nesc_atomic_end(__nesc_atomic); }
}

# 61 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GpioCapture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captured(uint16_t time){
#line 61
  CC2420TransmitP__CaptureSFD__captured(time);
#line 61
}
#line 61
# 71 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__captured(uint16_t time)
#line 71
{


  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captured(time);
}

# 60 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplAtm128Timer1P__Capture__captured(HplAtm128Timer1P__Capture__size_type t){
#line 60
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__captured(t);
#line 60
}
#line 60
# 197 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline uint16_t HplAtm128Timer1P__Capture__get(void )
#line 197
{
#line 197
  return * (volatile uint16_t *)(0x26 + 0x20);
}

# 126 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow(void )
#line 126
{
}

# 60 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow(void )
#line 60
{
}

# 177 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/TransformAlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__overflow(void )
{
}

# 58 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void )
{
}

# 82 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Counter.nc"
inline static void /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__overflow(void ){
#line 82
  /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow();
#line 82
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__overflow();
#line 82
}
#line 82
# 133 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/TransformCounterC.nc"
static inline void /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*Counter32khz32C.Transform32*/TransformCounterC__0__m_upper++;
      if ((/*Counter32khz32C.Transform32*/TransformCounterC__0__m_upper & /*Counter32khz32C.Transform32*/TransformCounterC__0__OVERFLOW_MASK) == 0) {
        /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__overflow();
        }
    }
#line 141
    __nesc_atomic_end(__nesc_atomic); }
}

# 82 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/Counter.nc"
inline static void /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__overflow(void ){
#line 82
  /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__overflow();
#line 82
}
#line 82
# 65 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow(void )
{
  /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__overflow();
}

# 70 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer1P__Timer__overflow(void ){
#line 70
  /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow();
#line 70
  /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow();
#line 70
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow();
#line 70
}
#line 70
# 72 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__default__fired(void )
#line 72
{
}

# 75 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__fired(void ){
#line 75
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__default__fired();
#line 75
}
#line 75
# 70 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__IrqSignal__fired(void )
#line 70
{
#line 70
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__fired();
}

# 48 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig0__fired(void ){
#line 48
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__IrqSignal__fired();
#line 48
}
#line 48
# 72 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__default__fired(void )
#line 72
{
}

# 75 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__fired(void ){
#line 75
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__default__fired();
#line 75
}
#line 75
# 70 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__IrqSignal__fired(void )
#line 70
{
#line 70
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__fired();
}

# 48 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig1__fired(void ){
#line 48
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__IrqSignal__fired();
#line 48
}
#line 48
# 72 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__default__fired(void )
#line 72
{
}

# 75 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__fired(void ){
#line 75
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__default__fired();
#line 75
}
#line 75
# 70 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__IrqSignal__fired(void )
#line 70
{
#line 70
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__fired();
}

# 48 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig2__fired(void ){
#line 48
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__IrqSignal__fired();
#line 48
}
#line 48
# 72 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__default__fired(void )
#line 72
{
}

# 75 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__fired(void ){
#line 75
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__default__fired();
#line 75
}
#line 75
# 70 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__IrqSignal__fired(void )
#line 70
{
#line 70
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__fired();
}

# 48 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig3__fired(void ){
#line 48
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__IrqSignal__fired();
#line 48
}
#line 48
# 72 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__Irq__default__fired(void )
#line 72
{
}

# 75 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__Irq__fired(void ){
#line 75
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__Irq__default__fired();
#line 75
}
#line 75
# 70 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__IrqSignal__fired(void )
#line 70
{
#line 70
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__Irq__fired();
}

# 48 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig4__fired(void ){
#line 48
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__IrqSignal__fired();
#line 48
}
#line 48
# 72 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__Irq__default__fired(void )
#line 72
{
}

# 75 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__Irq__fired(void ){
#line 75
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__Irq__default__fired();
#line 75
}
#line 75
# 70 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__IrqSignal__fired(void )
#line 70
{
#line 70
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__Irq__fired();
}

# 48 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig5__fired(void ){
#line 48
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__IrqSignal__fired();
#line 48
}
#line 48
# 212 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__InterruptFIFOP__fired(void )
#line 212
{
  if (CC2420ReceiveP__m_state == CC2420ReceiveP__S_STARTED) {

      CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_LENGTH;
      CC2420ReceiveP__beginReceive();
    }
  else 



    {
      CC2420ReceiveP__m_missed_packets++;
    }
}

# 68 "/home/ivan/Desktop/tinyos-main/tos/interfaces/GpioInterrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__fired(void ){
#line 68
  CC2420ReceiveP__InterruptFIFOP__fired();
#line 68
}
#line 68
# 38 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__fired(void )
#line 38
{
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__fired();
}

# 75 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__fired(void ){
#line 75
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__fired();
#line 75
}
#line 75
# 70 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__IrqSignal__fired(void )
#line 70
{
#line 70
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__fired();
}

# 48 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig6__fired(void ){
#line 48
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__IrqSignal__fired();
#line 48
}
#line 48
# 72 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__Irq__default__fired(void )
#line 72
{
}

# 75 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__Irq__fired(void ){
#line 75
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__Irq__default__fired();
#line 75
}
#line 75
# 70 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__IrqSignal__fired(void )
#line 70
{
#line 70
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__Irq__fired();
}

# 48 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig7__fired(void ){
#line 48
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__IrqSignal__fired();
#line 48
}
#line 48
# 115 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline uint8_t HplAtm128SpiP__SPI__read(void )
#line 115
{
#line 115
  return * (volatile uint8_t *)(0x0F + 0x20);
}

# 97 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/Atm128Spi.nc"
inline static uint8_t Atm128SpiP__Spi__read(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = HplAtm128SpiP__SPI__read();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
#line 113
inline static void Atm128SpiP__Spi__enableInterrupt(bool enabled){
#line 113
  HplAtm128SpiP__SPI__enableInterrupt(enabled);
#line 113
}
#line 113
# 354 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__Spi__dataReady(uint8_t data)
#line 354
{
  bool again;

  /* atomic removed: atomic calls only */
#line 357
  {
    if (Atm128SpiP__rxBuffer != (void *)0) {
        Atm128SpiP__rxBuffer[Atm128SpiP__pos] = data;
      }

    Atm128SpiP__pos++;
  }
  Atm128SpiP__Spi__enableInterrupt(FALSE);
  /* atomic removed: atomic calls only */
  {
    again = Atm128SpiP__pos < Atm128SpiP__len;
  }

  if (again) {
      Atm128SpiP__sendNextPart();
    }
  else {
      uint8_t discard;
      uint16_t myLen;
      uint8_t * rx;
      uint8_t * tx;

      /* atomic removed: atomic calls only */
#line 379
      {
        myLen = Atm128SpiP__len;
        rx = Atm128SpiP__rxBuffer;
        tx = Atm128SpiP__txBuffer;
        Atm128SpiP__rxBuffer = (void *)0;
        Atm128SpiP__txBuffer = (void *)0;
        Atm128SpiP__len = 0;
        Atm128SpiP__pos = 0;
      }
      discard = Atm128SpiP__Spi__read();

      Atm128SpiP__SpiPacket__sendDone(tx, rx, myLen, SUCCESS);
    }
}

# 109 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void HplAtm128SpiP__SPI__dataReady(uint8_t data){
#line 109
  Atm128SpiP__Spi__dataReady(data);
#line 109
}
#line 109
# 63 "/home/ivan/Desktop/tinyos-main/tos/system/RealMainP.nc"
  int main(void )
#line 63
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
      }
#line 71
      ;

      RealMainP__Scheduler__init();





      RealMainP__PlatformInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;





      RealMainP__SoftwareInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;
    }
#line 88
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP__Boot__booted();


  RealMainP__Scheduler__taskLoop();




  return -1;
}

# 134 "/home/ivan/Desktop/tinyos-main/tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP__Scheduler__runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 138
  {
    nextTask = SchedulerBasicP__popTask();
    if (nextTask == SchedulerBasicP__NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 142
          FALSE;

#line 142
          return __nesc_temp;
        }
      }
  }
#line 145
  SchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

#line 175
static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 75 "/home/ivan/Desktop/tinyos-main/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x7f27b1cfb020){
#line 75
  switch (arg_0x7f27b1cfb020) {
#line 75
    case CC2420CsmaP__startDone_task:
#line 75
      CC2420CsmaP__startDone_task__runTask();
#line 75
      break;
#line 75
    case CC2420CsmaP__stopDone_task:
#line 75
      CC2420CsmaP__stopDone_task__runTask();
#line 75
      break;
#line 75
    case CC2420CsmaP__sendDone_task:
#line 75
      CC2420CsmaP__sendDone_task__runTask();
#line 75
      break;
#line 75
    case CC2420ControlP__sync:
#line 75
      CC2420ControlP__sync__runTask();
#line 75
      break;
#line 75
    case CC2420ControlP__syncDone:
#line 75
      CC2420ControlP__syncDone__runTask();
#line 75
      break;
#line 75
    case HplCC2420InterruptsP__CCATask:
#line 75
      HplCC2420InterruptsP__CCATask__runTask();
#line 75
      break;
#line 75
    case CC2420SpiP__grant:
#line 75
      CC2420SpiP__grant__runTask();
#line 75
      break;
#line 75
    case Atm128SpiP__zeroTask:
#line 75
      Atm128SpiP__zeroTask__runTask();
#line 75
      break;
#line 75
    case /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask:
#line 75
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    case CC2420ReceiveP__receiveDone_task:
#line 75
      CC2420ReceiveP__receiveDone_task__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired:
#line 75
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer:
#line 75
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask();
#line 75
      break;
#line 75
    case CC2420TinyosNetworkP__grantTask:
#line 75
      CC2420TinyosNetworkP__grantTask__runTask();
#line 75
      break;
#line 75
    case At45dbP__taskSuccess:
#line 75
      At45dbP__taskSuccess__runTask();
#line 75
      break;
#line 75
    case At45dbP__taskFail:
#line 75
      At45dbP__taskFail__runTask();
#line 75
      break;
#line 75
    case HplAt45dbIOP__avail:
#line 75
      HplAt45dbIOP__avail__runTask();
#line 75
      break;
#line 75
    case /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__granted:
#line 75
      /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__granted__runTask();
#line 75
      break;
#line 75
    case /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask:
#line 75
      /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x7f27b1cfb020);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 299 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
static void LogStorageP__startRequest(void )
#line 299
{
  if (! LogStorageP__s[LogStorageP__client].positionKnown && LogStorageP__s[LogStorageP__client].request != LogStorageP__R_ERASE) 
    {
      LogStorageP__locateStart();
      return;
    }

  LogStorageP__metaState = LogStorageP__META_IDLE;
  switch (LogStorageP__s[LogStorageP__client].request) 
    {
      case LogStorageP__R_ERASE: LogStorageP__eraseStart();
#line 309
      break;
      case LogStorageP__R_APPEND: LogStorageP__appendStart();
#line 310
      break;
      case LogStorageP__R_SYNC: LogStorageP__syncStart();
#line 311
      break;
      case LogStorageP__R_READ: LogStorageP__readStart();
#line 312
      break;
      case LogStorageP__R_SEEK: LogStorageP__seekStart();
#line 313
      break;
    }
}

#line 245
static at45page_t LogStorageP__lastVolumePage(void )
#line 245
{
  return LogStorageP__At45dbVolume__remap(LogStorageP__client, LogStorageP__npages());
}

# 377 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbP.nc"
static void At45dbP__newRequest(uint8_t req, at45page_t page, at45pageoffset_t offset, 
void * reqdata, at45pageoffset_t n)
#line 378
{
  At45dbP__request = req;

  At45dbP__reqBuf = (void *)0;
  At45dbP__reqBytes = n;
  At45dbP__reqBuf = reqdata;
  At45dbP__reqPage = page;
  At45dbP__reqOffset = offset;

  if (page == At45dbP__buffer[0].page) {
    At45dbP__selected = 0;
    }
  else {
#line 389
    if (page == At45dbP__buffer[1].page) {
      At45dbP__selected = 1;
      }
    else {
#line 392
      At45dbP__selected = !At45dbP__selected;
      }
    }



  if ((((
#line 395
  page >= AT45_MAX_PAGES || 
  n > AT45_PAGE_SIZE) || (
  req != At45dbP__R_COPY && offset >= AT45_PAGE_SIZE)) || (
  req != At45dbP__R_COPY && offset + n > AT45_PAGE_SIZE)) || (
  req == At45dbP__R_COPY && offset >= AT45_MAX_PAGES)) {
      At45dbP__taskFail__postTask();
    }
  else {

    At45dbP__handleRWRequest();
    }
}

# 170 "/home/ivan/Desktop/tinyos-main/tos/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 172
    {
#line 172
      {
        unsigned char __nesc_temp = 
#line 172
        SchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;

        {
#line 172
          __nesc_atomic_end(__nesc_atomic); 
#line 172
          return __nesc_temp;
        }
      }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
}

# 255 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbP.nc"
static void At45dbP__handleRWRequest(void )
#line 255
{
  if (At45dbP__reqPage == At45dbP__buffer[At45dbP__selected].page) {
    switch (At45dbP__request) 
      {
        case At45dbP__R_ERASE: 
          switch (At45dbP__reqOffset) 
            {
              case AT45_ERASE: 
                if (At45dbP__flashBusy) {
                  At45dbP__HplAt45db__waitIdle();
                  }
                else {
#line 266
                  At45dbP__HplAt45db__erase(AT45_C_ERASE_PAGE, At45dbP__reqPage);
                  }
#line 267
              break;
              case AT45_PREVIOUSLY_ERASED: 

                At45dbP__buffer[At45dbP__selected].erased = TRUE;

              case AT45_DONT_ERASE: 



                At45dbP__buffer[At45dbP__selected].clean = TRUE;
              At45dbP__requestDone(SUCCESS, 0, At45dbP__IDLE);
              break;
            }
        break;

        case At45dbP__R_COPY: 
          if (! At45dbP__buffer[At45dbP__selected].clean) {
            At45dbP__flushBuffer();
            }
          else {


              At45dbP__buffer[At45dbP__selected].page = At45dbP__reqOffset;
              At45dbP__buffer[At45dbP__selected].clean = FALSE;
              At45dbP__taskSuccess__postTask();
            }
        break;

        case At45dbP__R_SYNC: case At45dbP__R_SYNCALL: 
            if (At45dbP__buffer[At45dbP__selected].clean && At45dbP__buffer[At45dbP__selected].unchecked) 
              {
                At45dbP__checkBuffer(At45dbP__selected);
                return;
              }

        case At45dbP__R_FLUSH: case At45dbP__R_FLUSHALL: 
            if (! At45dbP__buffer[At45dbP__selected].clean) {
              At45dbP__flushBuffer();
              }
            else {
#line 305
              if (At45dbP__request == At45dbP__R_FLUSH || At45dbP__request == At45dbP__R_SYNC) {
                At45dbP__taskSuccess__postTask();
                }
              else {

                  uint8_t oreq = At45dbP__request;

                  At45dbP__request = At45dbP__IDLE;
                  At45dbP__syncOrFlushAll(oreq);
                }
              }
#line 315
        break;

        case At45dbP__R_READ: 
          if (At45dbP__buffer[At45dbP__selected].busy) {
            At45dbP__HplAt45db__waitIdle();
            }
          else {
#line 321
            At45dbP__HplAt45db__readBuffer(At45dbP__selected ? AT45_C_READ_BUFFER1 : AT45_C_READ_BUFFER2, At45dbP__reqOffset, 
            At45dbP__reqBuf, At45dbP__reqBytes);
            }
#line 323
        break;

        case At45dbP__R_READCRC: 
          if (At45dbP__buffer[At45dbP__selected].busy) {
            At45dbP__HplAt45db__waitIdle();
            }
          else {
            At45dbP__HplAt45db__crc(At45dbP__selected ? AT45_C_READ_BUFFER1 : AT45_C_READ_BUFFER2, 0, At45dbP__reqOffset, At45dbP__reqBytes, 
            (uint16_t )At45dbP__reqBuf);
            }
#line 332
        break;

        case At45dbP__R_WRITE: 
          if (At45dbP__buffer[At45dbP__selected].busy) {
            At45dbP__HplAt45db__waitIdle();
            }
          else {
#line 338
            At45dbP__HplAt45db__write(At45dbP__selected ? AT45_C_WRITE_BUFFER1 : AT45_C_WRITE_BUFFER2, 0, At45dbP__reqOffset, 
            At45dbP__reqBuf, At45dbP__reqBytes);
            }
#line 340
        break;
      }
    }
  else {
#line 342
    if (! At45dbP__buffer[At45dbP__selected].clean) {
      At45dbP__flushBuffer();
      }
    else {
#line 344
      if (At45dbP__buffer[At45dbP__selected].unchecked) {
        At45dbP__checkBuffer(At45dbP__selected);
        }
      else {

          if (At45dbP__request == At45dbP__R_ERASE) 
            {
              At45dbP__buffer[At45dbP__selected].page = At45dbP__reqPage;
              At45dbP__handleRWRequest();
            }
          else {
#line 354
            if (At45dbP__flashBusy) {
              At45dbP__HplAt45db__waitIdle();
              }
            else {
#line 357
              At45dbP__HplAt45db__fill(At45dbP__selected ? AT45_C_FILL_BUFFER1 : AT45_C_FILL_BUFFER2, At45dbP__reqPage);
              }
            }
        }
      }
    }
}

# 173 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/HplAt45dbByteC.nc"
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__execCommand(uint8_t op, uint8_t reqCmd, uint8_t reqDontCare, 
at45page_t reqPage, at45pageoffset_t reqOffset, 
uint8_t * reqData, at45pageoffset_t reqCount)
#line 175
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__status = op;


  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__flashCmd[0] = reqCmd;
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__flashCmd[1] = reqPage >> (16 - 9);
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__flashCmd[2] = (reqPage << (9 - 8)) | (reqOffset >> 8);
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__flashCmd[3] = reqOffset;
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__data = (void *)0;
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__dataCount = reqCount;
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__data = reqData;
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__dontCare = reqDontCare;

  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__request();
}

# 361 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbP.nc"
static void At45dbP__requestDone(error_t result, uint16_t computedCrc, uint8_t newState)
#line 361
{
  uint8_t orequest = At45dbP__request;

  At45dbP__request = newState;
  switch (orequest) 
    {
      case At45dbP__R_READ: At45dbP__At45db__readDone(result);
#line 367
      break;
      case At45dbP__R_READCRC: At45dbP__At45db__computeCrcDone(result, computedCrc);
#line 368
      break;
      case At45dbP__R_WRITE: At45dbP__At45db__writeDone(result);
#line 369
      break;
      case At45dbP__R_SYNC: case At45dbP__R_SYNCALL: At45dbP__At45db__syncDone(result);
#line 370
      break;
      case At45dbP__R_FLUSH: case At45dbP__R_FLUSHALL: At45dbP__At45db__flushDone(result);
#line 371
      break;
      case At45dbP__R_ERASE: At45dbP__At45db__eraseDone(result);
#line 372
      break;
      case At45dbP__R_COPY: At45dbP__At45db__copyPageDone(result);
#line 373
      break;
    }
}

# 317 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
static void LogStorageP__endRequest(error_t ok)
#line 317
{
  uint8_t c = LogStorageP__client;
  uint8_t request = LogStorageP__s[c].request;
  storage_len_t actualLen = LogStorageP__pos;
  void *ptr = LogStorageP__s[c].buf;

  LogStorageP__client = LogStorageP__NO_CLIENT;
  LogStorageP__s[c].request = LogStorageP__R_IDLE;
  LogStorageP__Resource__release(c);

  c = (c << 1) | LogStorageP__s[c].circular;
  switch (request) 
    {
      case LogStorageP__R_ERASE: LogStorageP__LogWrite__eraseDone(c, ok);
#line 330
      break;
      case LogStorageP__R_APPEND: LogStorageP__LogWrite__appendDone(c, ptr, actualLen, LogStorageP__recordsLost, ok);
#line 331
      break;
      case LogStorageP__R_SYNC: LogStorageP__LogWrite__syncDone(c, ok);
#line 332
      break;
      case LogStorageP__R_READ: LogStorageP__LogRead__readDone(c, ptr, actualLen, ok);
#line 333
      break;
      case LogStorageP__R_SEEK: LogStorageP__LogRead__seekDone(c, ok);
#line 334
      break;
    }
}

# 87 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static error_t CC2420ActiveMessageP__AMSend__send(am_id_t id, am_addr_t addr, 
message_t *msg, 
uint8_t len)
#line 89
{
  unsigned char *__nesc_temp48;
#line 90
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(msg);

  if (len > CC2420ActiveMessageP__Packet__maxPayloadLength()) {
      return ESIZE;
    }

  __nesc_hton_leuint8(header->type.nxdata, id);
  __nesc_hton_leuint16(header->dest.nxdata, addr);
  __nesc_hton_leuint16(header->destpan.nxdata, CC2420ActiveMessageP__CC2420Config__getPanAddr());
  __nesc_hton_leuint16(header->src.nxdata, CC2420ActiveMessageP__AMPacket__address());
  (__nesc_temp48 = header->fcf.nxdata, __nesc_hton_leuint16(__nesc_temp48, __nesc_ntoh_leuint16(__nesc_temp48) | (((1 << IEEE154_FCF_INTRAPAN) | (
  IEEE154_ADDR_SHORT << IEEE154_FCF_DEST_ADDR_MODE)) | (
  IEEE154_ADDR_SHORT << IEEE154_FCF_SRC_ADDR_MODE))));
  __nesc_hton_leuint8(header->length.nxdata, len + CC2420_SIZE);

  if (CC2420ActiveMessageP__RadioResource__immediateRequest() == SUCCESS) {
      error_t rc;

#line 107
      CC2420ActiveMessageP__SendNotifier__aboutToSend(id, addr, msg);

      rc = CC2420ActiveMessageP__SubSend__send(msg, len);
      if (rc != SUCCESS) {
          CC2420ActiveMessageP__RadioResource__release();
        }

      return rc;
    }
  else 
#line 115
    {
      CC2420ActiveMessageP__pending_length = len;
      CC2420ActiveMessageP__pending_message = msg;
      return CC2420ActiveMessageP__RadioResource__request();
    }
}

# 106 "/home/ivan/Desktop/tinyos-main/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void )
#line 106
{
  am_addr_t myAddr;

#line 108
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 108
    myAddr = ActiveMessageAddressC__addr;
#line 108
    __nesc_atomic_end(__nesc_atomic); }
  return myAddr;
}

# 60 "/home/ivan/Desktop/tinyos-main/tos/system/FcfsResourceQueueC.nc"
static bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void )
#line 60
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 61
    {
      unsigned char __nesc_temp = 
#line 61
      /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead == /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;

      {
#line 61
        __nesc_atomic_end(__nesc_atomic); 
#line 61
        return __nesc_temp;
      }
    }
#line 63
    __nesc_atomic_end(__nesc_atomic); }
}

# 80 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static error_t CC2420TinyosNetworkP__ActiveSend__send(message_t *msg, uint8_t len)
#line 80
{
  CC2420TinyosNetworkP__CC2420Packet__setNetwork(msg, 0x3f);
  CC2420TinyosNetworkP__m_busy_client = CC2420TinyosNetworkP__CLIENT_AM;
  return CC2420TinyosNetworkP__SubSend__send(msg, len);
}

# 90 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/packet/CC2420PacketP.nc"
static uint8_t * CC2420PacketP__getNetwork(message_t * msg)
#line 90
{
  cc2420_header_t *hdr = CC2420PacketP__CC2420PacketBody__getHeader(msg);
  int offset;

  offset = CC2420PacketP__getAddressLength((__nesc_ntoh_leuint16(hdr->fcf.nxdata) >> IEEE154_FCF_DEST_ADDR_MODE) & 0x3) + 
  CC2420PacketP__getAddressLength((__nesc_ntoh_leuint16(hdr->fcf.nxdata) >> IEEE154_FCF_SRC_ADDR_MODE) & 0x3) + 
  (unsigned short )& ((cc2420_header_t *)0)->dest;

  return (uint8_t *)hdr + offset;
}

# 96 "/home/ivan/Desktop/tinyos-main/tos/system/StateImplP.nc"
static error_t StateImplP__State__requestState(uint8_t id, uint8_t reqState)
#line 96
{
  error_t returnVal = FAIL;

#line 98
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 98
    {
      if (reqState == StateImplP__S_IDLE || StateImplP__state[id] == StateImplP__S_IDLE) {
          StateImplP__state[id] = reqState;
          returnVal = SUCCESS;
        }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return returnVal;
}

#line 133
static bool StateImplP__State__isState(uint8_t id, uint8_t myState)
#line 133
{
  bool isState;

#line 135
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 135
    isState = StateImplP__state[id] == myState;
#line 135
    __nesc_atomic_end(__nesc_atomic); }
  return isState;
}

# 795 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static error_t CC2420TransmitP__acquireSpiResource(void )
#line 795
{
  error_t error = CC2420TransmitP__SpiResource__immediateRequest();

#line 797
  if (error != SUCCESS) {
      CC2420TransmitP__SpiResource__request();
    }
  return error;
}

# 126 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP__Resource__immediateRequest(uint8_t id)
#line 126
{
  error_t error;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 129
    {
      if (CC2420SpiP__WorkingState__requestState(CC2420SpiP__S_BUSY) != SUCCESS) {
          {
            unsigned char __nesc_temp = 
#line 131
            EBUSY;

            {
#line 131
              __nesc_atomic_end(__nesc_atomic); 
#line 131
              return __nesc_temp;
            }
          }
        }
      if (CC2420SpiP__SpiResource__isOwner()) {
          CC2420SpiP__m_holder = id;
          error = SUCCESS;
        }
      else {
#line 139
        if ((error = CC2420SpiP__SpiResource__immediateRequest()) == SUCCESS) {
            CC2420SpiP__m_holder = id;
          }
        else {
            CC2420SpiP__WorkingState__toIdle();
          }
        }
    }
#line 146
    __nesc_atomic_end(__nesc_atomic); }
#line 146
  return error;
}

# 148 "/home/ivan/Desktop/tinyos-main/tos/system/SimpleArbiterP.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__isOwner(uint8_t id)
#line 148
{
  /* atomic removed: atomic calls only */
#line 149
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId == id && /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_BUSY) {
        unsigned char __nesc_temp = 
#line 150
        TRUE;

#line 150
        return __nesc_temp;
      }
    else 
#line 151
      {
        unsigned char __nesc_temp = 
#line 151
        FALSE;

#line 151
        return __nesc_temp;
      }
  }
}

# 131 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/Atm128SpiP.nc"
static void Atm128SpiP__startSpi(void )
#line 131
{
  Atm128SpiP__Spi__enableSpi(FALSE);
  /* atomic removed: atomic calls only */
#line 133
  {
    Atm128SpiP__Spi__initMaster();
    Atm128SpiP__Spi__enableInterrupt(FALSE);
    Atm128SpiP__Spi__setClockPolarity(FALSE);
    Atm128SpiP__Spi__setClockPhase(FALSE);
    Atm128SpiP__Spi__enableSpi(TRUE);
#line 160
    Atm128SpiP__Spi__setMasterDoubleSpeed(TRUE);
    Atm128SpiP__Spi__setClock(0);
  }

  Atm128SpiP__McuPowerState__update();
}

# 147 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static void HplAtm128SpiP__SPI__enableSpi(bool enabled)
#line 147
{
  if (enabled) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 6;
      HplAtm128SpiP__Mcu__update();
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 6);
      HplAtm128SpiP__Mcu__update();
    }
}

#line 132
static void HplAtm128SpiP__SPI__enableInterrupt(bool enabled)
#line 132
{
  if (enabled) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 7;
      HplAtm128SpiP__Mcu__update();
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 7);
      HplAtm128SpiP__Mcu__update();
    }
}

# 107 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP__Resource__request(uint8_t id)
#line 107
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 109
    {
      if (CC2420SpiP__WorkingState__requestState(CC2420SpiP__S_BUSY) == SUCCESS) {
          CC2420SpiP__m_holder = id;
          if (CC2420SpiP__SpiResource__isOwner()) {
              CC2420SpiP__grant__postTask();
            }
          else {
              CC2420SpiP__SpiResource__request();
            }
        }
      else {
          CC2420SpiP__m_requests |= 1 << id;
        }
    }
#line 122
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 124 "/home/ivan/Desktop/tinyos-main/tos/system/SimpleArbiterP.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__inUse(void )
#line 124
{
  /* atomic removed: atomic calls only */
#line 125
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE) 
      {
        unsigned char __nesc_temp = 
#line 127
        FALSE;

#line 127
        return __nesc_temp;
      }
  }
#line 129
  return TRUE;
}

# 825 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP__loadTXFIFO(void )
#line 825
{
  cc2420_header_t *header = CC2420TransmitP__CC2420PacketBody__getHeader(CC2420TransmitP__m_msg);
  uint8_t tx_power = __nesc_ntoh_uint8(CC2420TransmitP__CC2420PacketBody__getMetadata(CC2420TransmitP__m_msg)->tx_power.nxdata);

  if (!tx_power) {
      tx_power = 17;
    }

  CC2420TransmitP__CSN__clr();

  if (CC2420TransmitP__m_tx_power != tx_power) {
      CC2420TransmitP__TXCTRL__write((((2 << CC2420_TXCTRL_TXMIXBUF_CUR) | (
      3 << CC2420_TXCTRL_PA_CURRENT)) | (
      1 << CC2420_TXCTRL_RESERVED)) | ((
      tx_power & 0x1F) << CC2420_TXCTRL_PA_LEVEL));
    }

  CC2420TransmitP__m_tx_power = tx_power;

  {
    uint8_t tmpLen __attribute((unused))  = __nesc_ntoh_leuint8(header->length.nxdata) - 1;

#line 846
    CC2420TransmitP__TXFIFO__write((uint8_t * )header, __nesc_ntoh_leuint8(header->length.nxdata) - 1);
  }
}

# 305 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Reg__write(uint8_t addr, uint16_t data)
#line 305
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 306
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 308
            0;

            {
#line 308
              __nesc_atomic_end(__nesc_atomic); 
#line 308
              return __nesc_temp;
            }
          }
        }
    }
#line 312
    __nesc_atomic_end(__nesc_atomic); }
#line 311
  CC2420SpiP__SpiByte__write(addr);
  CC2420SpiP__SpiByte__write(data >> 8);
  return CC2420SpiP__SpiByte__write(data & 0xff);
}

# 175 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/Atm128SpiP.nc"
static uint8_t Atm128SpiP__SpiByte__write(uint8_t tx)
#line 175
{






  Atm128SpiP__Spi__enableSpi(TRUE);
  Atm128SpiP__McuPowerState__update();


  Atm128SpiP__Spi__write(tx);

  while (!Atm128SpiP__Spi__isInterruptPending()) 
    ;

  return Atm128SpiP__Spi__read();
}

#line 330
static error_t Atm128SpiP__SpiPacket__send(uint8_t *writeBuf, 
uint8_t *readBuf, 
uint16_t bufLen)
#line 332
{
  uint8_t discard;

#line 334
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 334
    {
      Atm128SpiP__len = bufLen;
      Atm128SpiP__txBuffer = writeBuf;
      Atm128SpiP__rxBuffer = readBuf;
      Atm128SpiP__pos = 0;
    }
#line 339
    __nesc_atomic_end(__nesc_atomic); }
  if (bufLen > 0) {
      discard = Atm128SpiP__Spi__read();
      return Atm128SpiP__sendNextPart();
    }
  else {
      Atm128SpiP__zeroTask__postTask();
      return SUCCESS;
    }
}

#line 251
static error_t Atm128SpiP__sendNextPart(void )
#line 251
{
  uint16_t end;
  uint16_t tmpPos;
  uint16_t myLen;
  uint8_t * tx;
  uint8_t * rx;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 258
    {
      myLen = Atm128SpiP__len;
      tx = Atm128SpiP__txBuffer;
      rx = Atm128SpiP__rxBuffer;
      tmpPos = Atm128SpiP__pos;
      end = Atm128SpiP__pos + Atm128SpiP__SPI_ATOMIC_SIZE;
      end = end > Atm128SpiP__len ? Atm128SpiP__len : end;
    }
#line 265
    __nesc_atomic_end(__nesc_atomic); }

  for (; tmpPos < end - 1; tmpPos++) {
      uint8_t val;

#line 269
      if (tx != (void *)0) {
        val = Atm128SpiP__SpiByte__write(tx[tmpPos]);
        }
      else {
#line 272
        val = Atm128SpiP__SpiByte__write(0);
        }
      if (rx != (void *)0) {
          rx[tmpPos] = val;
        }
    }



  Atm128SpiP__Spi__enableInterrupt(TRUE);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 282
    {
      if (tx != (void *)0) {
        Atm128SpiP__Spi__write(tx[tmpPos]);
        }
      else {
#line 286
        Atm128SpiP__Spi__write(0);
        }
      Atm128SpiP__pos = tmpPos;
    }
#line 289
    __nesc_atomic_end(__nesc_atomic); }


  return SUCCESS;
}

# 56 "/home/ivan/Desktop/tinyos-main/tos/interfaces/State.nc"
static void UniqueSendP__State__toIdle(void ){
#line 56
  StateImplP__State__toIdle(2U);
#line 56
}
#line 56
# 164 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static am_id_t CC2420ActiveMessageP__AMPacket__type(message_t *amsg)
#line 164
{
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(amsg);

#line 166
  return __nesc_ntoh_leuint8(header->type.nxdata);
}

#line 139
static am_addr_t CC2420ActiveMessageP__AMPacket__destination(message_t *amsg)
#line 139
{
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(amsg);

#line 141
  return __nesc_ntoh_leuint16(header->dest.nxdata);
}

# 339 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
static error_t LogStorageP__newRequest(uint8_t newRequest, uint8_t id, 
uint8_t * buf, storage_len_t length)
#line 340
{
  LogStorageP__s[id >> 1].circular = id & 1;
  id >>= 1;

  if (LogStorageP__s[id].request != LogStorageP__R_IDLE) {
    return EBUSY;
    }
  LogStorageP__s[id].request = newRequest;
  LogStorageP__s[id].buf = (void *)0;
  LogStorageP__s[id].len = length;
  LogStorageP__s[id].buf = buf;
  LogStorageP__Resource__request(id);

  return SUCCESS;
}

#line 537
static void LogStorageP__locateLessThan(void )
#line 537
{
  LogStorageP__lastPage = LogStorageP__locateCurrentPage();
  LogStorageP__locateBinarySearch();
}

#line 525
static void LogStorageP__locateBinarySearch(void )
#line 525
{
  if (LogStorageP__lastPage <= LogStorageP__firstPage) {
    LogStorageP__located();
    }
  else {
#line 529
    LogStorageP__readMetadata(LogStorageP__locateCurrentPage());
    }
}

#line 496
static void LogStorageP__locateLastRecord(void )
#line 496
{
  if (LogStorageP__firstPage == LogStorageP__lastPage) 
    {


      LogStorageP__endRequest(FAIL);
      return;
    }

  if (LogStorageP__firstPage == LogStorageP__firstVolumePage()) {
    LogStorageP__firstPage = LogStorageP__lastPage;
    }
  else {
#line 508
    LogStorageP__firstPage--;
    }
  LogStorageP__readMetadata(LogStorageP__firstPage);
}

#line 735
static void LogStorageP__readContinue(void )
#line 735
{
  uint8_t *buf = LogStorageP__s[LogStorageP__client].buf + LogStorageP__pos;
  at45pageoffset_t offset = LogStorageP__s[LogStorageP__client].roffset;
#line 737
  at45pageoffset_t count;
  at45pageoffset_t end = LogStorageP__s[LogStorageP__client].rend;
  storage_len_t len = LogStorageP__s[LogStorageP__client].len - LogStorageP__pos;

  if (len == 0) 
    {
      LogStorageP__endRequest(SUCCESS);
      return;
    }

  if (! LogStorageP__s[LogStorageP__client].rvalid) 
    {
      if (LogStorageP__s[LogStorageP__client].circled) {

        LogStorageP__s[LogStorageP__client].rpage = LogStorageP__s[LogStorageP__client].wpage;
        }
      else {

          LogStorageP__s[LogStorageP__client].rvalid = TRUE;
          LogStorageP__s[LogStorageP__client].rpage = LogStorageP__lastVolumePage() - 1;
        }

      LogStorageP__rmetadataStart();
      return;
    }

  if (LogStorageP__s[LogStorageP__client].rpage == LogStorageP__s[LogStorageP__client].wpage) {
    end = LogStorageP__s[LogStorageP__client].woffset;
    }
  if (offset == end) 
    {
      if ((LogStorageP__s[LogStorageP__client].rpage + 1 == LogStorageP__lastVolumePage() && ! LogStorageP__s[LogStorageP__client].circular) || 
      LogStorageP__s[LogStorageP__client].rpage == LogStorageP__s[LogStorageP__client].wpage) {
        LogStorageP__endRequest(SUCCESS);
        }
      else {
#line 772
        LogStorageP__rmetadataStart();
        }
#line 773
      return;
    }

  if (offset + len <= end) {
    count = len;
    }
  else {
#line 779
    count = end - offset;
    }
  LogStorageP__pos += count;
  LogStorageP__s[LogStorageP__client].rpos += count;
  LogStorageP__s[LogStorageP__client].roffset = offset + count;

  LogStorageP__At45db__read(LogStorageP__s[LogStorageP__client].rpage, offset, buf, count);
}

#line 848
static void LogStorageP__rmetadataStart(void )
#line 848
{
  LogStorageP__metaState = LogStorageP__META_READ;
  LogStorageP__firstPage = LogStorageP__s[LogStorageP__client].rpage;
  LogStorageP__rmetadataContinue();
}

#line 809
static void LogStorageP__rmetadataContinue(void )
#line 809
{
  if (++LogStorageP__firstPage == LogStorageP__lastVolumePage()) {
    LogStorageP__firstPage = LogStorageP__firstVolumePage();
    }
#line 812
  if (LogStorageP__firstPage == LogStorageP__s[LogStorageP__client].wpage) {
    if (! LogStorageP__s[LogStorageP__client].rvalid) {


      LogStorageP__endRequest(SUCCESS);
      }
    else {

        __nesc_hton_uint8(LogStorageP__metadata.flags.nxdata, 0);
        __nesc_hton_uint32(LogStorageP__metadata.pos.nxdata, LogStorageP__s[LogStorageP__client].wpos - LogStorageP__s[LogStorageP__client].woffset);
        LogStorageP__continueReadAt(0);
      }
    }
  else {
#line 825
    LogStorageP__readMetadata(LogStorageP__firstPage);
    }
}

#line 796
static void LogStorageP__continueReadAt(at45pageoffset_t roffset)
#line 796
{


  LogStorageP__metaState = LogStorageP__META_IDLE;
  LogStorageP__s[LogStorageP__client].rpos = __nesc_ntoh_uint32(LogStorageP__metadata.pos.nxdata) + roffset;
  LogStorageP__s[LogStorageP__client].rpage = LogStorageP__firstPage;
  LogStorageP__s[LogStorageP__client].roffset = roffset;
  LogStorageP__s[LogStorageP__client].rend = __nesc_ntoh_uint8(
  LogStorageP__metadata.flags.nxdata) & LogStorageP__F_SYNC ? __nesc_ntoh_uint8(LogStorageP__metadata.lastRecordOffset.nxdata) : LogStorageP__PAGE_SIZE;
  LogStorageP__s[LogStorageP__client].rvalid = TRUE;
  LogStorageP__readContinue();
}

#line 249
static void LogStorageP__setWritePage(at45page_t page)
#line 249
{
  if (LogStorageP__s[LogStorageP__client].circular && page == LogStorageP__lastVolumePage()) 
    {
      LogStorageP__s[LogStorageP__client].circled = TRUE;
      page = LogStorageP__firstVolumePage();
    }
  LogStorageP__s[LogStorageP__client].wpage = page;
  LogStorageP__s[LogStorageP__client].woffset = 0;
}

# 92 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/crc.h"
static __attribute((noinline))  uint16_t crcByte(uint16_t oldCrc, uint8_t byte)
{

  uint16_t *table = crcTable;
  uint16_t newCrc;

   __asm ("eor %1,%B3\n"
  "\tlsl %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tadd %A2, %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tlpm\n"
  "\tmov %B0, %A3\n"
  "\tmov %A0, r0\n"
  "\tadiw r30,1\n"
  "\tlpm\n"
  "\teor %B0, r0" : 
  "=r"(newCrc), "+r"(byte), "+z"(table) : "r"(oldCrc));
  return newCrc;
}

# 435 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbP.nc"
static void At45dbP__syncOrFlush(at45page_t page, uint8_t newReq)
#line 435
{
  At45dbP__request = newReq;

  if (At45dbP__buffer[0].page == page) {
    At45dbP__selected = 0;
    }
  else {
#line 440
    if (At45dbP__buffer[1].page == page) {
      At45dbP__selected = 1;
      }
    else {
        At45dbP__taskSuccess__postTask();
        return;
      }
    }
  At45dbP__buffer[At45dbP__selected].unchecked = 0;
  At45dbP__handleRWRequest();
}

# 686 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/LogStorageP.nc"
static void LogStorageP__wmetadataStart(void )
#line 686
{
  unsigned char *__nesc_temp49;

  LogStorageP__metaState = LogStorageP__META_WRITE;
  LogStorageP__firstPage = LogStorageP__s[LogStorageP__client].wpage;
  __nesc_hton_uint32(LogStorageP__metadata.pos.nxdata, LogStorageP__s[LogStorageP__client].wpos - LogStorageP__s[LogStorageP__client].woffset);
  __nesc_hton_uint16(LogStorageP__metadata.magic.nxdata, LogStorageP__PERSISTENT_MAGIC);
  if (LogStorageP__s[LogStorageP__client].circled) {
    (__nesc_temp49 = LogStorageP__metadata.flags.nxdata, __nesc_hton_uint8(__nesc_temp49, __nesc_ntoh_uint8(__nesc_temp49) | LogStorageP__F_CIRCLED));
    }
  LogStorageP__At45db__computeCrc(LogStorageP__firstPage, 0, LogStorageP__PAGE_SIZE, 0);






  LogStorageP__setWritePage(LogStorageP__s[LogStorageP__client].wpage + 1);


  if (LogStorageP__s[LogStorageP__client].wpage == LogStorageP__s[LogStorageP__client].rpage) {
    LogStorageP__invalidateReadPointer();
    }
}

#line 638
static void LogStorageP__appendStart(void )
#line 638
{
  storage_len_t len = LogStorageP__s[LogStorageP__client].len - LogStorageP__pos;
  storage_len_t vlen = (storage_len_t )LogStorageP__npages() * LogStorageP__PAGE_SIZE;

  LogStorageP__recordsLost = FALSE;









  if ((LogStorageP__s[LogStorageP__client].wpos - LogStorageP__PAGE_SIZE) % vlen >= vlen - len) {
    LogStorageP__sync();
    }
  else {


      __nesc_hton_uint8(LogStorageP__metadata.lastRecordOffset.nxdata, LogStorageP__s[LogStorageP__client].woffset);
      __nesc_hton_uint8(LogStorageP__metadata.flags.nxdata, LogStorageP__F_LASTVALID);
      LogStorageP__appendContinue();
    }
}

#line 278
static void LogStorageP__sync(void )
#line 278
{
  __nesc_hton_uint8(LogStorageP__metadata.flags.nxdata, LogStorageP__F_SYNC | LogStorageP__F_LASTVALID);
  __nesc_hton_uint8(LogStorageP__metadata.lastRecordOffset.nxdata, LogStorageP__s[LogStorageP__client].woffset);

  if (LogStorageP__s[LogStorageP__client].rpage == LogStorageP__s[LogStorageP__client].wpage) {
    LogStorageP__s[LogStorageP__client].rend = LogStorageP__s[LogStorageP__client].woffset;
    }
#line 284
  LogStorageP__wmetadataStart();
}

#line 585
static void LogStorageP__appendContinue(void )
#line 585
{
  uint8_t *buf = LogStorageP__s[LogStorageP__client].buf + LogStorageP__pos;
  at45pageoffset_t offset = LogStorageP__s[LogStorageP__client].woffset;
#line 587
  at45pageoffset_t count;
  storage_len_t len = LogStorageP__s[LogStorageP__client].len - LogStorageP__pos;

  if (len == 0) 
    {
      LogStorageP__endRequest(SUCCESS);
      return;
    }

  if (LogStorageP__s[LogStorageP__client].wpage == LogStorageP__lastVolumePage()) 
    {

      LogStorageP__endRequest(ESIZE);
      return;
    }

  if (offset + len <= LogStorageP__PAGE_SIZE) {
    count = len;
    }
  else {
#line 606
    count = LogStorageP__PAGE_SIZE - offset;
    }
  LogStorageP__s[LogStorageP__client].wpos += count;
  LogStorageP__s[LogStorageP__client].woffset += count;
  LogStorageP__pos += count;



  if (offset == 0 && LogStorageP__s[LogStorageP__client].circled) {
    LogStorageP__recordsLost = TRUE;
    }
  LogStorageP__At45db__write(LogStorageP__s[LogStorageP__client].wpage, offset, buf, count);
}

#line 420
static void LogStorageP__eraseEraseDone(void )
#line 420
{
  if (LogStorageP__firstPage == LogStorageP__lastPage - 1) 
    {

      __nesc_hton_uint8(LogStorageP__metadata.flags.nxdata, LogStorageP__F_SYNC | LogStorageP__F_LASTVALID);
      __nesc_hton_uint8(LogStorageP__metadata.lastRecordOffset.nxdata, 0);
      LogStorageP__setWritePage(LogStorageP__firstPage);
      LogStorageP__s[LogStorageP__client].circled = FALSE;
      LogStorageP__s[LogStorageP__client].wpos = 0;
      LogStorageP__wmetadataStart();
    }
  else {
    LogStorageP__At45db__erase(LogStorageP__firstPage++, AT45_ERASE);
    }
}

# 162 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbP.nc"
static void At45dbP__flushBuffer(void )
#line 162
{
  if (At45dbP__flashBusy) 
    {
      At45dbP__HplAt45db__waitIdle();
      return;
    }
  At45dbP__HplAt45db__flush(At45dbP__buffer[At45dbP__selected].erased ? 
  At45dbP__selected ? AT45_C_QFLUSH_BUFFER1 : AT45_C_QFLUSH_BUFFER2 : 
  At45dbP__selected ? AT45_C_FLUSH_BUFFER1 : AT45_C_FLUSH_BUFFER2, 
  At45dbP__buffer[At45dbP__selected].page);
}

#line 152
static void At45dbP__checkBuffer(uint8_t buf)
#line 152
{
  if (At45dbP__flashBusy) 
    {
      At45dbP__HplAt45db__waitIdle();
      return;
    }
  At45dbP__HplAt45db__compare(buf ? AT45_C_COMPARE_BUFFER1 : AT45_C_COMPARE_BUFFER2, At45dbP__buffer[buf].page);
  At45dbP__checking = buf;
}

# 142 "/home/ivan/Desktop/tinyos-main/tos/platforms/micaz/chips/at45db/HplAt45dbIOP.nc"
static uint8_t HplAt45dbIOP__FlashSpi__write(uint8_t spiOut)
#line 142
{
  uint8_t spiIn = 0;


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      uint8_t clrClkAndData = * (volatile uint8_t *)(0x12 + 0x20) & ~0x28;

      * (volatile uint8_t *)(0x12 + 0x20) = clrClkAndData;
#line 150
       __asm volatile ("sbrc %2,""7""\n""\tsbi 18,3\n""\tsbi 18,5\n""\tsbic 16,2\n""\tori %0,1<<""7""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x12 + 0x20) = clrClkAndData;
#line 151
       __asm volatile ("sbrc %2,""6""\n""\tsbi 18,3\n""\tsbi 18,5\n""\tsbic 16,2\n""\tori %0,1<<""6""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x12 + 0x20) = clrClkAndData;
#line 152
       __asm volatile ("sbrc %2,""5""\n""\tsbi 18,3\n""\tsbi 18,5\n""\tsbic 16,2\n""\tori %0,1<<""5""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x12 + 0x20) = clrClkAndData;
#line 153
       __asm volatile ("sbrc %2,""4""\n""\tsbi 18,3\n""\tsbi 18,5\n""\tsbic 16,2\n""\tori %0,1<<""4""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x12 + 0x20) = clrClkAndData;
#line 154
       __asm volatile ("sbrc %2,""3""\n""\tsbi 18,3\n""\tsbi 18,5\n""\tsbic 16,2\n""\tori %0,1<<""3""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x12 + 0x20) = clrClkAndData;
#line 155
       __asm volatile ("sbrc %2,""2""\n""\tsbi 18,3\n""\tsbi 18,5\n""\tsbic 16,2\n""\tori %0,1<<""2""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x12 + 0x20) = clrClkAndData;
#line 156
       __asm volatile ("sbrc %2,""1""\n""\tsbi 18,3\n""\tsbi 18,5\n""\tsbic 16,2\n""\tori %0,1<<""1""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x12 + 0x20) = clrClkAndData;
#line 157
       __asm volatile ("sbrc %2,""0""\n""\tsbi 18,3\n""\tsbi 18,5\n""\tsbic 16,2\n""\tori %0,1<<""0""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));}
#line 157
    __nesc_atomic_end(__nesc_atomic); }


  return spiIn;
}

# 138 "/home/ivan/Desktop/tinyos-main/tos/chips/at45db/At45dbP.nc"
static void At45dbP__flashIdle(void )
#line 138
{
  At45dbP__flashBusy = At45dbP__buffer[0].busy = At45dbP__buffer[1].busy = FALSE;
}

# 74 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static void CC2420ActiveMessageP__RadioResource__granted(void )
#line 74
{
  uint8_t rc;
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(CC2420ActiveMessageP__pending_message);

  CC2420ActiveMessageP__SendNotifier__aboutToSend(__nesc_ntoh_leuint8(header->type.nxdata), __nesc_ntoh_leuint16(header->dest.nxdata), CC2420ActiveMessageP__pending_message);
  rc = CC2420ActiveMessageP__SubSend__send(CC2420ActiveMessageP__pending_message, CC2420ActiveMessageP__pending_length);
  if (rc != SUCCESS) {
      CC2420ActiveMessageP__RadioResource__release();
      CC2420ActiveMessageP__AMSend__sendDone(__nesc_ntoh_leuint8(header->type.nxdata), CC2420ActiveMessageP__pending_message, rc);
    }
}

# 107 "PacketParrotP.nc"
static void PacketParrotP__AMSend__sendDone(uint8_t id, message_t *msg, error_t err)
#line 107
{
  PacketParrotP__Leds__led1Off();
  if (err == SUCCESS && msg == & PacketParrotP__m_entry.msg) {
      PacketParrotP__Packet__clear(& PacketParrotP__m_entry.msg);
      if (PacketParrotP__LogRead__read(&PacketParrotP__m_entry, sizeof(PacketParrotP__logentry_t )) != SUCCESS) {
        }
    }
  else 
    {
      PacketParrotP__Timer0__startOneShot(PacketParrotP__INTER_PACKET_INTERVAL);
    }
}

# 161 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get(void )
#line 161
{
  uint32_t now;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {


      uint8_t now8 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get();

      if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag().bits.ocf0) {


        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get() + 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get();
        }
      else {

        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base + now8;
        }
    }
#line 179
    __nesc_atomic_end(__nesc_atomic); }
#line 179
  return now;
}

# 73 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now)
{
  uint16_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 90
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 212 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt)
#line 212
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set = TRUE;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0 = nt0;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt = ndt;
    }
#line 218
    __nesc_atomic_end(__nesc_atomic); }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt();
}

#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt(void )
#line 90
{
  bool fired = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {



      uint8_t interrupt_in = 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get() - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get();
      uint8_t newOcr0;
      uint8_t tifr = (uint8_t )/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag().flat;

#line 101
      ;
      if ((interrupt_in != 0 && interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT) || tifr & (1 << 1)) {
          if (interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT) {
              ;
            }
          else {
              ;
            }
          {
#line 109
            __nesc_atomic_end(__nesc_atomic); 
#line 109
            return;
          }
        }

      if (!/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set) {
          newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT;
          ;
        }
      else 
        {
          uint32_t now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get();

#line 120
          ;

          if ((uint32_t )(now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0) >= /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt) 
            {
              /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set = FALSE;
              fired = TRUE;
              newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT;
            }
          else 
            {


              uint32_t alarm_in = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base;

              if (alarm_in > /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT) {
                newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT;
                }
              else {
#line 136
                if ((uint8_t )alarm_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT) {
                  newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT;
                  }
                else {
#line 139
                  newOcr0 = alarm_in;
                  }
                }
            }
        }
#line 142
      newOcr0--;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setOcr0(newOcr0);
    }
#line 144
    __nesc_atomic_end(__nesc_atomic); }
  if (fired) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__fired();
    }
}

# 302 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static uint16_t CC2420ControlP__CC2420Config__getShortAddr(void )
#line 302
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 303
    {
      unsigned short __nesc_temp = 
#line 303
      CC2420ControlP__m_short_addr;

      {
#line 303
        __nesc_atomic_end(__nesc_atomic); 
#line 303
        return __nesc_temp;
      }
    }
#line 305
    __nesc_atomic_end(__nesc_atomic); }
}

# 136 "PacketParrotP.nc"
static message_t *PacketParrotP__Receive__receive(uint8_t id, message_t *msg, void *payload, uint8_t len)
#line 136
{
  PacketParrotP__Leds__led2On();
  if (!PacketParrotP__m_busy) {
      PacketParrotP__m_busy = TRUE;
      __nesc_hton_uint8(PacketParrotP__m_entry.len.nxdata, len);
      PacketParrotP__m_entry.msg = *msg;
      if (PacketParrotP__LogWrite__append(&PacketParrotP__m_entry, sizeof(PacketParrotP__logentry_t )) != SUCCESS) {
          PacketParrotP__m_busy = FALSE;
        }
    }
  return msg;
}

# 769 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP__waitForNextPacket(void )
#line 769
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 770
    {
      if (CC2420ReceiveP__m_state == CC2420ReceiveP__S_STOPPED) {
          CC2420ReceiveP__SpiResource__release();
          {
#line 773
            __nesc_atomic_end(__nesc_atomic); 
#line 773
            return;
          }
        }
      CC2420ReceiveP__receivingPacket = FALSE;
#line 788
      if ((CC2420ReceiveP__m_missed_packets && CC2420ReceiveP__FIFO__get()) || !CC2420ReceiveP__FIFOP__get()) {

          if (CC2420ReceiveP__m_missed_packets) {
              CC2420ReceiveP__m_missed_packets--;
            }





          CC2420ReceiveP__beginReceive();
        }
      else 
        {

          CC2420ReceiveP__m_state = CC2420ReceiveP__S_STARTED;
          CC2420ReceiveP__m_missed_packets = 0;
          CC2420ReceiveP__SpiResource__release();
        }
    }
#line 807
    __nesc_atomic_end(__nesc_atomic); }
}

# 149 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP__Resource__release(uint8_t id)
#line 149
{
  uint8_t i;

#line 151
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 151
    {
      if (CC2420SpiP__m_holder != id) {
          {
            unsigned char __nesc_temp = 
#line 153
            FAIL;

            {
#line 153
              __nesc_atomic_end(__nesc_atomic); 
#line 153
              return __nesc_temp;
            }
          }
        }
#line 156
      CC2420SpiP__m_holder = CC2420SpiP__NO_HOLDER;
      if (!CC2420SpiP__m_requests) {
          CC2420SpiP__WorkingState__toIdle();
          CC2420SpiP__attemptRelease();
        }
      else {
          for (i = CC2420SpiP__m_holder + 1; ; i++) {
              i %= CC2420SpiP__RESOURCE_COUNT;

              if (CC2420SpiP__m_requests & (1 << i)) {
                  CC2420SpiP__m_holder = i;
                  CC2420SpiP__m_requests &= ~(1 << i);
                  CC2420SpiP__grant__postTask();
                  {
                    unsigned char __nesc_temp = 
#line 169
                    SUCCESS;

                    {
#line 169
                      __nesc_atomic_end(__nesc_atomic); 
#line 169
                      return __nesc_temp;
                    }
                  }
                }
            }
        }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
#line 175
  return SUCCESS;
}

#line 339
static error_t CC2420SpiP__attemptRelease(void )
#line 339
{


  if ((
#line 340
  CC2420SpiP__m_requests > 0
   || CC2420SpiP__m_holder != CC2420SpiP__NO_HOLDER)
   || !CC2420SpiP__WorkingState__isIdle()) {
      return FAIL;
    }
  /* atomic removed: atomic calls only */
  CC2420SpiP__release = TRUE;
  CC2420SpiP__ChipSpiResource__releasing();
  /* atomic removed: atomic calls only */
#line 348
  {
    if (CC2420SpiP__release) {
        CC2420SpiP__SpiResource__release();
        {
          unsigned char __nesc_temp = 
#line 351
          SUCCESS;

#line 351
          return __nesc_temp;
        }
      }
  }
  return EBUSY;
}

# 716 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP__beginReceive(void )
#line 716
{
  CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_LENGTH;
  /* atomic removed: atomic calls only */
#line 718
  CC2420ReceiveP__receivingPacket = TRUE;
  if (CC2420ReceiveP__SpiResource__isOwner()) {
      CC2420ReceiveP__receive();
    }
  else {
#line 722
    if (CC2420ReceiveP__SpiResource__immediateRequest() == SUCCESS) {
        CC2420ReceiveP__receive();
      }
    else {
        CC2420ReceiveP__SpiResource__request();
      }
    }
}

#line 759
static void CC2420ReceiveP__receive(void )
#line 759
{
  CC2420ReceiveP__CSN__clr();
  CC2420ReceiveP__RXFIFO__beginRead((uint8_t *)CC2420ReceiveP__CC2420PacketBody__getHeader(CC2420ReceiveP__m_p_rx_buf), 1);
}

# 189 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Fifo__beginRead(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 190
{

  cc2420_status_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 194
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 196
            status;

            {
#line 196
              __nesc_atomic_end(__nesc_atomic); 
#line 196
              return __nesc_temp;
            }
          }
        }
    }
#line 200
    __nesc_atomic_end(__nesc_atomic); }
#line 200
  CC2420SpiP__m_addr = addr | 0x40;

  status = CC2420SpiP__SpiByte__write(CC2420SpiP__m_addr);
  CC2420SpiP__Fifo__continueRead(addr, data, len);

  return status;
}

#line 329
static void CC2420SpiP__SpiPacket__sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error)
#line 330
{
  if (CC2420SpiP__m_addr & 0x40) {
      CC2420SpiP__Fifo__readDone(CC2420SpiP__m_addr & ~0x40, rx_buf, len, error);
    }
  else 
#line 333
    {
      CC2420SpiP__Fifo__writeDone(CC2420SpiP__m_addr, tx_buf, len, error);
    }
}

# 733 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP__flush(void )
#line 733
{








  CC2420ReceiveP__reset_state();

  CC2420ReceiveP__CSN__set();
  CC2420ReceiveP__CSN__clr();
  CC2420ReceiveP__SFLUSHRX__strobe();
  CC2420ReceiveP__SFLUSHRX__strobe();
  CC2420ReceiveP__CSN__set();
  CC2420ReceiveP__SpiResource__release();
  CC2420ReceiveP__waitForNextPacket();
}

#line 813
static void CC2420ReceiveP__reset_state(void )
#line 813
{
  CC2420ReceiveP__m_bytes_left = CC2420ReceiveP__RXFIFO_SIZE;
  /* atomic removed: atomic calls only */
#line 815
  CC2420ReceiveP__receivingPacket = FALSE;
  CC2420ReceiveP__m_timestamp_head = 0;
  CC2420ReceiveP__m_timestamp_size = 0;
  CC2420ReceiveP__m_missed_packets = 0;
}

# 318 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Strobe__strobe(uint8_t addr)
#line 318
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 319
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 321
            0;

            {
#line 321
              __nesc_atomic_end(__nesc_atomic); 
#line 321
              return __nesc_temp;
            }
          }
        }
    }
#line 325
    __nesc_atomic_end(__nesc_atomic); }
#line 325
  return CC2420SpiP__SpiByte__write(addr);
}

# 171 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/packet/CC2420PacketP.nc"
static void CC2420PacketP__PacketTimeStamp32khz__clear(message_t *msg)
{
  __nesc_hton_int8(CC2420PacketP__CC2420PacketBody__getMetadata(msg)->timesync.nxdata, FALSE);
  __nesc_hton_uint32(CC2420PacketP__CC2420PacketBody__getMetadata(msg)->timestamp.nxdata, CC2420_INVALID_TIMESTAMP);
}

# 850 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP__signalDone(error_t err)
#line 850
{
  /* atomic removed: atomic calls only */
#line 851
  CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
  CC2420TransmitP__abortSpiRelease = FALSE;
  CC2420TransmitP__ChipSpiResource__attemptRelease();
  CC2420TransmitP__Send__sendDone(CC2420TransmitP__m_msg, err);
}

#line 743
static void CC2420TransmitP__attemptSend(void )
#line 743
{
  uint8_t status;
  bool congestion = TRUE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 747
    {
      if (CC2420TransmitP__m_state == CC2420TransmitP__S_CANCEL) {
          CC2420TransmitP__SFLUSHTX__strobe();
          CC2420TransmitP__releaseSpiResource();
          CC2420TransmitP__CSN__set();
          CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
          CC2420TransmitP__Send__sendDone(CC2420TransmitP__m_msg, ECANCEL);
          {
#line 754
            __nesc_atomic_end(__nesc_atomic); 
#line 754
            return;
          }
        }





      CC2420TransmitP__CSN__clr();
      status = CC2420TransmitP__m_cca ? CC2420TransmitP__STXONCCA__strobe() : CC2420TransmitP__STXON__strobe();
      if (!(status & CC2420_STATUS_TX_ACTIVE)) {
          status = CC2420TransmitP__SNOP__strobe();
          if (status & CC2420_STATUS_TX_ACTIVE) {
              congestion = FALSE;
            }
        }

      CC2420TransmitP__m_state = congestion ? CC2420TransmitP__S_SAMPLE_CCA : CC2420TransmitP__S_SFD;
      CC2420TransmitP__CSN__set();
    }
#line 773
    __nesc_atomic_end(__nesc_atomic); }

  if (congestion) {
      CC2420TransmitP__totalCcaChecks = 0;
      CC2420TransmitP__releaseSpiResource();
      CC2420TransmitP__congestionBackoff();
    }
  else 
#line 779
    {
      CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__CC2420_ABORT_PERIOD);
    }
}





static void CC2420TransmitP__congestionBackoff(void )
#line 788
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 789
    {
      CC2420TransmitP__RadioBackoff__requestCongestionBackoff(CC2420TransmitP__m_msg);
      CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__myCongestionBackoff);
    }
#line 792
    __nesc_atomic_end(__nesc_atomic); }
}

# 69 "/home/ivan/Desktop/tinyos-main/tos/system/RandomMlcgC.nc"
static uint32_t RandomMlcgC__Random__rand32(void )
#line 69
{
  uint32_t mlcg;
#line 70
  uint32_t p;
#line 70
  uint32_t q;
  uint64_t tmpseed;

  /* atomic removed: atomic calls only */
#line 73
  {
    tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgC__seed;
    q = tmpseed;
    q = q >> 1;
    p = tmpseed >> 32;
    mlcg = p + q;
    if (mlcg & 0x80000000) {
        mlcg = mlcg & 0x7FFFFFFF;
        mlcg++;
      }
    RandomMlcgC__seed = mlcg;
  }
  return mlcg;
}

# 147 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/TransformAlarmC.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 = t0;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt = dt;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__set_alarm();
    }
#line 154
    __nesc_atomic_end(__nesc_atomic); }
}

#line 107
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__set_alarm(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type now = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__get();
#line 109
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type expires;
#line 109
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type remaining;




  expires = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 + /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt;


  remaining = (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type )(expires - now);


  if (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 <= now) 
    {
      if (expires >= /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 132
  if (remaining > /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__MAX_DELAY) 
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 = now + /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__MAX_DELAY;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt = remaining - /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__MAX_DELAY;
      remaining = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__MAX_DELAY;
    }
  else 
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 += /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt = 0;
    }
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__startAt((/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_size_type )now << 0, 
  (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_size_type )remaining << 0);
}

# 80 "/home/ivan/Desktop/tinyos-main/tos/lib/timer/TransformCounterC.nc"
static /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__get(void )
{
  /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type rv = 0;

#line 83
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*Counter32khz32C.Transform32*/TransformCounterC__0__upper_count_type high = /*Counter32khz32C.Transform32*/TransformCounterC__0__m_upper;
      /*Counter32khz32C.Transform32*/TransformCounterC__0__from_size_type low = /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__get();

#line 87
      if (/*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__isOverflowPending()) 
        {






          high++;
          low = /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__get();
        }
      {
        /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type high_to = high;
        /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type low_to = low >> /*Counter32khz32C.Transform32*/TransformCounterC__0__LOW_SHIFT_RIGHT;

#line 101
        rv = (high_to << /*Counter32khz32C.Transform32*/TransformCounterC__0__HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 479 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static void CC2420ControlP__writeFsctrl(void )
#line 479
{
  uint8_t channel;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 482
    {
      channel = CC2420ControlP__m_channel;
    }
#line 484
    __nesc_atomic_end(__nesc_atomic); }

  CC2420ControlP__FSCTRL__write((1 << CC2420_FSCTRL_LOCK_THR) | (((
  channel - 11) * 5 + 357) << CC2420_FSCTRL_FREQ));
}







static void CC2420ControlP__writeMdmctrl0(void )
#line 496
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 497
    {
      CC2420ControlP__MDMCTRL0__write((((((((1 << CC2420_MDMCTRL0_RESERVED_FRAME_MODE) | ((
      CC2420ControlP__addressRecognition && CC2420ControlP__hwAddressRecognition ? 1 : 0) << CC2420_MDMCTRL0_ADR_DECODE)) | (
      2 << CC2420_MDMCTRL0_CCA_HYST)) | (
      3 << CC2420_MDMCTRL0_CCA_MOD)) | (
      1 << CC2420_MDMCTRL0_AUTOCRC)) | ((
      CC2420ControlP__autoAckEnabled && CC2420ControlP__hwAutoAckDefault) << CC2420_MDMCTRL0_AUTOACK)) | (
      0 << CC2420_MDMCTRL0_AUTOACK)) | (
      2 << CC2420_MDMCTRL0_PREAMBLE_LENGTH));
    }
#line 506
    __nesc_atomic_end(__nesc_atomic); }
}







static void CC2420ControlP__writeId(void )
#line 515
{
  nxle_uint16_t id[6];

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 518
    {

      memcpy((uint8_t *)id, CC2420ControlP__m_ext_addr.data, 8);
      __nesc_hton_leuint16(id[4].nxdata, CC2420ControlP__m_pan);
      __nesc_hton_leuint16(id[5].nxdata, CC2420ControlP__m_short_addr);
    }
#line 523
    __nesc_atomic_end(__nesc_atomic); }

  CC2420ControlP__IEEEADR__write(0, (uint8_t *)&id, 12);
}

# 260 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Ram__write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len)
#line 262
{

  cc2420_status_t status = 0;
  uint8_t tmpLen = len;
  uint8_t * tmpData = (uint8_t * )data;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 268
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 270
            status;

            {
#line 270
              __nesc_atomic_end(__nesc_atomic); 
#line 270
              return __nesc_temp;
            }
          }
        }
    }
#line 274
    __nesc_atomic_end(__nesc_atomic); }
#line 274
  addr += offset;

  status = CC2420SpiP__SpiByte__write(addr | 0x80);
  CC2420SpiP__SpiByte__write((addr >> 1) & 0xc0);
  for (; len; len--) {
      CC2420SpiP__SpiByte__write(tmpData[tmpLen - len]);
    }

  return status;
}

# 49 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__enableCapture(uint8_t mode)
#line 49
{
  /* atomic removed: atomic calls only */
#line 50
  {
    /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__stop();
    /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__reset();
    /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__setEdge(mode);
    /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__start();
  }
  return SUCCESS;
}

# 81 "/home/ivan/Desktop/tinyos-main/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static error_t CC2420CsmaP__SplitControl__start(void )
#line 81
{
  if (CC2420CsmaP__SplitControlState__requestState(CC2420CsmaP__S_STARTING) == SUCCESS) {
      CC2420CsmaP__CC2420Power__startVReg();
      return SUCCESS;
    }
  else {
#line 86
    if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STARTED)) {
        return EALREADY;
      }
    else {
#line 89
      if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STARTING)) {
          return SUCCESS;
        }
      }
    }
#line 93
  return EBUSY;
}

# 42 "/home/ivan/Desktop/tinyos-main/tos/platforms/micaz/LocalIeeeEui64C.nc"
static ieee_eui64_t LocalIeeeEui64C__LocalIeeeEui64__getId(void )
#line 42
{
  ieee_eui64_t id;

  id.data[0] = 0x00;
  id.data[1] = 0x12;
  id.data[2] = 0x6d;




  id.data[3] = 'L';
  id.data[4] = 'O';

  id.data[5] = 0;
  id.data[6] = TOS_NODE_ID >> 8;
  id.data[7] = TOS_NODE_ID & 0xff;
  return id;
}

# 187 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
__attribute((signal))   void __vector_15(void )
#line 187
{
  HplAtm128Timer0AsyncP__stabiliseTimer0();
  HplAtm128Timer0AsyncP__Compare__fired();
}


__attribute((signal))   void __vector_16(void )
#line 193
{
  HplAtm128Timer0AsyncP__stabiliseTimer0();
  HplAtm128Timer0AsyncP__Timer__overflow();
}

# 204 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
__attribute((interrupt))   void __vector_12(void )
#line 204
{
  HplAtm128Timer1P__CompareA__fired();
}

__attribute((interrupt))   void __vector_13(void )
#line 208
{
  HplAtm128Timer1P__CompareB__fired();
}

__attribute((interrupt))   void __vector_24(void )
#line 212
{
  HplAtm128Timer1P__CompareC__fired();
}

__attribute((interrupt))   void __vector_11(void )
#line 216
{
  HplAtm128Timer1P__Capture__captured(HplAtm128Timer1P__Capture__get());
}

__attribute((interrupt))   void __vector_14(void )
#line 220
{
  HplAtm128Timer1P__Timer__overflow();
}

# 55 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/pins/HplAtm128InterruptSigP.nc"
__attribute((signal))   void __vector_1(void )
#line 55
{
  HplAtm128InterruptSigP__IntSig0__fired();
}


__attribute((signal))   void __vector_2(void )
#line 60
{
  HplAtm128InterruptSigP__IntSig1__fired();
}


__attribute((signal))   void __vector_3(void )
#line 65
{
  HplAtm128InterruptSigP__IntSig2__fired();
}


__attribute((signal))   void __vector_4(void )
#line 70
{
  HplAtm128InterruptSigP__IntSig3__fired();
}


__attribute((signal))   void __vector_5(void )
#line 75
{
  HplAtm128InterruptSigP__IntSig4__fired();
}


__attribute((signal))   void __vector_6(void )
#line 80
{
  HplAtm128InterruptSigP__IntSig5__fired();
}


__attribute((signal))   void __vector_7(void )
#line 85
{
  HplAtm128InterruptSigP__IntSig6__fired();
}


__attribute((signal))   void __vector_8(void )
#line 90
{
  HplAtm128InterruptSigP__IntSig7__fired();
}

# 119 "/home/ivan/Desktop/tinyos-main/tos/chips/atm128/spi/HplAtm128SpiP.nc"
__attribute((signal))   void __vector_17(void )
#line 119
{
  HplAtm128SpiP__SPI__dataReady(HplAtm128SpiP__SPI__read());
}

