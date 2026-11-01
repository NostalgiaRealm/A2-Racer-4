
/* ==== FUN_00402f70 @ 00402f70 ==== 
 * signature: undefined __fastcall FUN_00402f70(void * param_1)
 * body: 00402f70-00402f9f
 */

void __fastcall FUN_00402f70(void *param_1)

{
  longlong lVar1;
  
  if ((float)*(int *)((int)param_1 + 0x2c) == 0.0) {
    lVar1 = __ftol();
    *(int *)((int)param_1 + 0x2c) = (int)lVar1;
    FUN_00402ea0(param_1,0.0);
  }
  return;
}


