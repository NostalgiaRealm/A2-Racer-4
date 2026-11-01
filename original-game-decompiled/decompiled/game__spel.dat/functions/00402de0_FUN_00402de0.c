
/* ==== FUN_00402de0 @ 00402de0 ==== 
 * signature: undefined __thiscall FUN_00402de0(void * this, float param_1)
 * body: 00402de0-00402e1c
 */

void __thiscall FUN_00402de0(void *this,float param_1)

{
  *(float *)this = param_1;
  if (param_1 < -100.0) {
    *(undefined4 *)this = 0xc2c80000;
    return;
  }
  if (100.0 < param_1) {
    *(undefined4 *)this = 0x42c80000;
  }
  return;
}


