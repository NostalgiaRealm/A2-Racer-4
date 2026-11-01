
/* ==== FUN_00469f70 @ 00469f70 ==== 
 * signature: undefined __fastcall FUN_00469f70(int param_1)
 * body: 00469f70-00469f93
 */

void __fastcall FUN_00469f70(int param_1)

{
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  *(undefined1 *)(param_1 + 0x14) = local_1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  DAT_00712648 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}


