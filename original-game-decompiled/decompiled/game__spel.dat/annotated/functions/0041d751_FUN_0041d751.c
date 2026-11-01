
/* ==== FUN_0041d751 @ 0041d751 ==== 
 * signature: undefined __stdcall FUN_0041d751(int param_1, int param_2)
 * body: 0041d751-0041d75f
 */

void FUN_0041d751(int param_1,int param_2)

{
  int iVar1;
  undefined4 auStack_20 [2];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  FUN_004166b0((undefined1 *)auStack_20);
  iVar1 = DAT_0073b0d0 +
          *(int *)((&DAT_005ce9e8)[param_2 * 0xa5] * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
  uStack_18 = *(undefined4 *)(iVar1 + 0x50);
  uStack_14 = *(undefined4 *)(iVar1 + 0x54);
  uStack_8 = *(undefined4 *)(param_1 + 0x24);
  uStack_10 = *(undefined4 *)(iVar1 + 0x58);
  uStack_4 = 0xbe99999a;
  FUN_0040dfc0(*(void **)(param_1 + 0x1c),*(undefined4 **)((int)*(void **)(param_1 + 0x1c) + 8),1,
               auStack_20);
  return;
}


