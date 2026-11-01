
/* ==== FUN_00402844 @ 00402844 ==== 
 * signature: undefined __fastcall FUN_00402844(byte param_1)
 * body: 00402844-00402858
 */

void __fastcall FUN_00402844(byte param_1)

{
  if ((param_1 & 1) == 0) {
    DAT_00750060 = param_1 | 1;
  }
  FUN_005584e0(0x4d1400);
  return;
}


