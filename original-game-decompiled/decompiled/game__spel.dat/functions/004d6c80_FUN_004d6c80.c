
/* ==== FUN_004d6c80 @ 004d6c80 ==== 
 * signature: undefined __fastcall FUN_004d6c80(undefined4 param_1)
 * body: 004d6c80-004d6cb2
 */

void __fastcall FUN_004d6c80(undefined4 param_1)

{
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  DAT_0074b8b0 = local_1;
  DAT_0074b8b4 = operator_new(0x3c);
  *(void **)DAT_0074b8b4 = DAT_0074b8b4;
  *(void **)((int)DAT_0074b8b4 + 4) = DAT_0074b8b4;
  DAT_0074b8b8 = 0;
  FUN_005584e0(0x4d6cc0);
  return;
}


