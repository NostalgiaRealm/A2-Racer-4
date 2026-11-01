
/* ==== FUN_004803ac @ 004803ac ==== 
 * signature: undefined FUN_004803ac(void)
 * body: 004803ac-00480401
 */

void FUN_004803ac(int param_1)

{
  undefined4 uVar1;
  
  FUN_00403f28((int *)(param_1 + 0xbc),*(undefined4 **)(param_1 + 0xb8),(undefined4 *)&UNK_0048040c)
  ;
  uVar1 = FUN_004087a4(*(undefined **)(param_1 + 0xbc));
  if ((char)uVar1 == '\0') {
    FUN_00403c5c((int *)(param_1 + 0xbc));
    return;
  }
  FUN_00403f28((int *)(*(int *)PTR_DAT_004ab8ac + 0x40),*(undefined4 **)(param_1 + 0xbc),
               (undefined4 *)&UNK_00480420);
  return;
}


