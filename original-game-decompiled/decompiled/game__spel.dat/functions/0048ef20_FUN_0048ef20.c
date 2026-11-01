
/* ==== FUN_0048ef20 @ 0048ef20 ==== 
 * signature: undefined __fastcall FUN_0048ef20(int param_1)
 * body: 0048ef20-0048ef75
 */

void __fastcall FUN_0048ef20(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 local_c [3];
  
  uVar1 = FUN_00489e70((uint *)(param_1 + 0x30));
  if ((char)uVar1 != '\0') {
    puVar2 = (undefined4 *)FUN_0049c9e0((void *)(param_1 + 0xb0),local_c);
    FUN_0047bc50(*(void **)(param_1 + 0x28),puVar2);
  }
  uVar1 = FUN_00489e70((uint *)(param_1 + 0x34));
  if ((char)uVar1 != '\0') {
    puVar2 = (undefined4 *)FUN_0049c9e0((void *)(param_1 + 0x38),local_c);
    FUN_0047bc50(*(void **)(param_1 + 0x2c),puVar2);
  }
  return;
}


