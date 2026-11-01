
/* ==== FUN_0041d760 @ 0041d760 ==== 
 * signature: undefined __stdcall FUN_0041d760(int param_1, int param_2)
 * body: 0041d760-0041d7e7
 */

void FUN_0041d760(int param_1,int param_2)

{
  int iVar1;
  undefined4 local_20 [2];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_004166b0((undefined1 *)local_20);
  iVar1 = DAT_0073b0d0 +
          *(int *)((&DAT_005ce9e8)[param_2 * 0xa5] * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
  local_18 = *(undefined4 *)(iVar1 + 0x50);
  local_14 = *(undefined4 *)(iVar1 + 0x54);
  local_8 = *(undefined4 *)(param_1 + 0x24);
  local_10 = *(undefined4 *)(iVar1 + 0x58);
  local_4 = 0xbe99999a;
  FUN_0040dfc0(*(void **)(param_1 + 0x1c),*(undefined4 **)((int)*(void **)(param_1 + 0x1c) + 8),1,
               local_20);
  return;
}


